// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PublicCharacter.h"
#include "Npc.generated.h"

/**
 * 
 */
UCLASS()
class FIGHTMADANG_API ANpc : public APublicCharacter
{
	GENERATED_BODY()
	
Public:
    ANpc();
    
    UPROPERTY(VisibleAnyWhere, Category = "Collision")
    USphereComponent* CollisionSphere; 
	
	
	
};
