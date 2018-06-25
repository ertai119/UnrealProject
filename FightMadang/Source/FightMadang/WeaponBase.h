// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponBase.generated.h"

class APublicCharacter;
class USphereComponent;

UCLASS()
class FIGHTMADANG_API AWeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponBase(const FObjectInitializer& ObjectInitilizer);

	void SetOwningPawn(APublicCharacter* NewOwner);

	void AttachMeshToPawn();

	void OnEquip(const AWeaponBase* LastWeapon);

	void OnUnEquip();

	void StartAttack();

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

private:
	UPROPERTY(VisibleDefaultsOnly, Category = Weapon)
	USkeletalMeshComponent* WeaponMesh;
	
	UPROPERTY(VisibleAnyWhere, Category = "Collision")
	USphereComponent* WeaponCollision;

protected:
	APublicCharacter* MyPawn;

	UPROPERTY(EditDefaultsOnly, Category = Animation)
	UAnimMontage* AttackAnim;
};
