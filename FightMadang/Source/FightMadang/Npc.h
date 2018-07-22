// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PublicCharacter.h"
#include "Npc.generated.h"

/**
 * 
 */
class UAnimMotage;
class USphereComponent;

UCLASS()
class FIGHTMADANG_API ANpc : public APublicCharacter
{
	GENERATED_BODY()
	
public:
    ANpc();
    
    UPROPERTY(VisibleAnyWhere, Category = "Collision")
    USphereComponent* CollisionSphere; 
	
    virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
    virtual void FaceRotation(FRotator NewControlRotation, float DeltaTime = 0.f) override;
    
    void PlayMeleeAnim();
    void StopMeleeAnim();
    
protected:
    UPROPERTY(EditDefaultsOnly, Category = Pawn)
    UAnimMontage* MeleeAnim;
    
private:
    FTimerHandle TimerHandler_EnemyStopAttack;
    bool DuringAttack;
};
