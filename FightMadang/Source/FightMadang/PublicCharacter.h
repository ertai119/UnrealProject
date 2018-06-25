// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PublicCharacter.generated.h"

class AWeaponBase;

UCLASS()
class FIGHTMADANG_API APublicCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APublicCharacter();

	USkeletalMeshComponent* GetSpecificPawnMesh() const;
	
	FName GetWeaponAttachPoint() const;

	void EquipWeapon(class AWeaponBase* Weapon);

	void OnChangeWeapon();

	void WeaponAttack();

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Health)
	float Health;

	virtual float TakeDamage(float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
protected:
	UPROPERTY(EditDefaultsOnly, Category = Inventory)
	FName WeaponAttachPoint;

	TArray<AWeaponBase*> Inventory;

	AWeaponBase* CurrentWeapon;

	void AddWeapon(AWeaponBase* Weapon);

	void SetCurrentWeapon(AWeaponBase* NewWeapon, AWeaponBase* LastWeapon);

	UPROPERTY(EditDefaultsOnly, Category = Inventory)
	TArray<TSubclassOf<AWeaponBase>> DefaultInventoryClasses;

	void SpawnDefaultInventory();
	
	UPROPERTY(EditDefaultsOnly, Category = Pawn)
	UAnimMontage* BeHitAnim;

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
	UAnimMontage* DeathAnim;

	virtual void OnHit(float DamageTaken, const FDamageEvent& DamageEvent, APawn* PawnInstigator, AActor* DamageCauser);
	virtual void Die(float KillingDamage, const FDamageEvent& DamageEvent, AController* Killer, AActor* DamageCauser);

	void OnDieAnimationEnd();
};
