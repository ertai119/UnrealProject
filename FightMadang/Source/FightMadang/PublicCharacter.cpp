// Fill out your copyright notice in the Description page of Project Settings.

#include "PublicCharacter.h"
#include "WeaponBase.h"
#include "TimerManager.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Projectile.h"

// Sets default values
APublicCharacter::APublicCharacter()
	: Health(100.f)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

USkeletalMeshComponent * APublicCharacter::GetSpecificPawnMesh() const
{
	return GetMesh();
}

FName APublicCharacter::GetWeaponAttachPoint() const
{
	return WeaponAttachPoint;
}

void APublicCharacter::AddWeapon(AWeaponBase* Weapon)
{
	if (Weapon)
	{
		Inventory.AddUnique(Weapon);
	}
}

void APublicCharacter::SetCurrentWeapon(class AWeaponBase* NewWeapon, class AWeaponBase* LastWeapon)
{
	AWeaponBase* LocalLastWeapon = NULL;

	if (LastWeapon != NULL)
	{
		LocalLastWeapon = LastWeapon;
	}
	else if (NewWeapon != CurrentWeapon)
	{
		LocalLastWeapon = CurrentWeapon;
	}

	if (LocalLastWeapon)
	{
		LocalLastWeapon->OnUnEquip();
	}

	CurrentWeapon = NewWeapon;

	if (NewWeapon)
	{
		NewWeapon->SetOwningPawn(this);
		NewWeapon->OnEquip(LastWeapon);
	}
}

void APublicCharacter::EquipWeapon(AWeaponBase* Weapon)
{
	if (Weapon)
	{
		SetCurrentWeapon(Weapon, CurrentWeapon);
	}
}

void APublicCharacter::SpawnDefaultInventory()
{
	int32 NumWeaponClasses = DefaultInventoryClasses.Num();

	for (int32 i = 0; i < NumWeaponClasses; i++)
	{
		if (DefaultInventoryClasses[i])
		{
			FActorSpawnParameters SpawnInfo;

			AWeaponBase* NewWeapon = GetWorld()->SpawnActor<AWeaponBase>(DefaultInventoryClasses[i], SpawnInfo);
			AddWeapon(NewWeapon);
		}
	}

	if (Inventory.Num() > 0)
	{
		EquipWeapon(Inventory[0]);
	}
}

void APublicCharacter::OnChangeWeapon()
{
	const int32 CurrentWeaponIndex = Inventory.IndexOfByKey(CurrentWeapon);

	AWeaponBase* NextWeapon = Inventory[(CurrentWeaponIndex + 1) % Inventory.Num()];

	EquipWeapon(NextWeapon);
}

void APublicCharacter::WeaponAttack()
{
	if (CurrentWeapon) 
	{
		CurrentWeapon->StartAttack();
	}

	if (CurrentWeapon == Inventory[1])
	{
		OnFire();
	}
}

void APublicCharacter::OnHit(float DamageTaken, const FDamageEvent& DamageEvent, APawn* PawnInstigator, AActor* DamageCauser)
{
	float BehitAnimDuration = PlayAnimMontage(BeHitAnim);

	if (DamageTaken > 0.f)
	{
		ApplyDamageMomentum(DamageTaken, DamageEvent, PawnInstigator, DamageCauser);
	}
}

void APublicCharacter::Die(float KillingDamage, const FDamageEvent& DamageEvent, AController* Killer, AActor* DamageCauser)
{
	Health = FMath::Min(0.f, Health);

	const UDamageType* DamageType = DamageEvent.DamageTypeClass 
		? Cast<const UDamageType>(DamageEvent.DamageTypeClass->GetDefaultObject())
		: GetDefault<UDamageType>();

	Killer = GetDamageInstigator(Killer, *DamageType);
	GetWorldTimerManager().ClearAllTimersForObject(this);

	if (GetCapsuleComponent())
	{
		GetCapsuleComponent()->BodyInstance.SetCollisionEnabled(ECollisionEnabled::NoCollision);
		GetCapsuleComponent()->BodyInstance.SetResponseToChannel(ECC_Pawn, ECR_Ignore);
		GetCapsuleComponent()->BodyInstance.SetResponseToChannel(ECC_PhysicsBody, ECR_Ignore);
	}

	if (GetCharacterMovement())
	{
		GetCharacterMovement()->StopMovementImmediately();
		GetCharacterMovement()->DisableMovement();
	}

	if (Controller != nullptr)
	{
		Controller->UnPossess();
	}

	float DeathAnimDuration = PlayAnimMontage(DeathAnim);

	FTimerHandle TimerHandler;
	GetWorldTimerManager().SetTimer(
		TimerHandler, this, &APublicCharacter::OnDieAnimationEnd, DeathAnimDuration, false);


}

void APublicCharacter::OnDieAnimationEnd()
{
	SetActorHiddenInGame(true);
	SetLifeSpan(0.1f);
}

float APublicCharacter::TakeDamage(float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	if (Health <= 0.f)
	{
		return 0.f;
	}

	const float ActualDamage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);
	if (ActualDamage > 0.f)
	{
		Health -= ActualDamage;
	}

	if (Health <= 0.f)
	{
		Die(ActualDamage, DamageEvent, EventInstigator, DamageCauser);
	}
	else
	{
		OnHit(ActualDamage, DamageEvent, EventInstigator ? EventInstigator->GetPawn() : nullptr, DamageCauser);
	}

	return ActualDamage;
}

void APublicCharacter::OnFire()
{
	if (ProjectileClass != nullptr)
	{
		const FRotator SpawnRot = GetActorRotation();
		const FVector SpawnPos = GetActorLocation() + SpawnRot.RotateVector(FVector(100.f, 30.f, 10.f));

		UWorld* World = GetWorld();
		if (World != nullptr)
		{
			World->SpawnActor<AProjectile>(ProjectileClass, SpawnPos, SpawnRot);
		}
	}
}