// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "FightMadangAIController.generated.h"

/**
 * 
 */
class UBehaviorTreeComponent;
class UBlackboardComponent;
UCLASS(config = Game)
class FIGHTMADANG_API AFightMadangAIController : public AAIController
{
	GENERATED_BODY()
	
public:
    AFightMadangAIController(const FObjectInitializer& ObjectInitializer);
    
private:
    UPROPERTY(transient)
    UBlackboardComponent* BlackboardComp;
    
    UPROPERTY(transient)
    UBehaviorTreeComponent* BehaviorComp;
	
	
};
