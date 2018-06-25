// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponBase.h"
#include "PublicCharacter.h"

#include "Engine.h"
#include "Components/SphereComponent.h"

// Sets default values
AWeaponBase::AWeaponBase(const FObjectInitializer& ObjectInitilizer)
	: Super(ObjectInitilizer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WeaponMesh = ObjectInitilizer.CreateDefaultSubobject<USkeletalMeshComponent>(this, TEXT("WeaponMesh"));
	WeaponMesh->CastShadow = true;
	WeaponMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = WeaponMesh;

	WeaponCollision = CreateDefaultSubobject<USphereComponent>(TEXT("WeaponCollision"));
	WeaponCollision->InitSphereRadius(30.f);
	WeaponCollision->AttachTo(WeaponMesh, "Root");
}

void AWeaponBase::SetOwningPawn(APublicCharacter* NewOwner)
{
	if (MyPawn != NewOwner)
	{
		MyPawn = NewOwner;
	}
}

void AWeaponBase::AttachMeshToPawn()
{
	if (MyPawn)
	{
		USkeletalMeshComponent* PawnMesh = MyPawn->GetSpecificPawnMesh();
		FName AttachPoint = MyPawn->GetWeaponAttachPoint();
		WeaponMesh->AttachToComponent(PawnMesh, FAttachmentTransformRules::KeepRelativeTransform, AttachPoint);
	}
}

void AWeaponBase::OnEquip(const AWeaponBase* LastWeapon)
{
	AttachMeshToPawn();
	WeaponMesh->SetHiddenInGame(false);
}

void AWeaponBase::OnUnEquip()
{
	WeaponMesh->DetachFromComponent(FDetachmentTransformRules::KeepRelativeTransform);
	WeaponMesh->SetHiddenInGame(true);
}

void AWeaponBase::StartAttack()
{
	float AnimDuration = MyPawn->PlayAnimMontage(AttackAnim);
}

void AWeaponBase::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (OtherActor->IsA(AActor::StaticClass()))
	{
		UGameplayStatics::ApplyDamage(OtherActor, 50.f, nullptr, this, UDamageType::StaticClass());

		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Black, "ApplyDamage!!");
	}
}