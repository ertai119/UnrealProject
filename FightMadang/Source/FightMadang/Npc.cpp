// Fill out your copyright notice in the Description page of Project Settings.

#include "Npc.h"
#include "Components/SphereComponent.h"
#include "FightMadangCharacter.h"
#include "GameFramework/DamageType.h"
#include "Kismet/GameplayStatics.h"

ANpc::ANpc()
{
    CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    CollisionSphere->InitSphereRadius(10.f);
    CollisionSphere->AttachTo(GetMesh(), "WeaponPoint");
    
    bUseControllerRotationYaw = true;
    DuringAttack = false;
}

void ANpc::NotifyActorBeginOverlap(AActor* OtherActor)
{
    Super::NotifyActorBeginOverlap(OtherActor);
    
    if (OtherActor->IsA(AFightMadangCharacter::StaticClass()) && DuringAttack == true)
    {
        UGameplayStatics::ApplyDamage(OtherActor, 10.f, nullptr, this, UDamageType::StaticClass());
    }
}

void ANpc::FaceRotation(FRotator NewControlRotation, float DeltaTime)
{
    FRotator CurrentRotation = FMath::RInterpTo(GetActorRotation(), NewControlRotation, DeltaTime, 0.f);
    
    Super::FaceRotation(NewControlRotation, DeltaTime);
}

void ANpc::PlayMeleeAnim()
{
    if (DuringAttack == false)
    {
        DuringAttack = true;
        float AnimDuration = PlayAnimMontage(MeleeAnim);
    }
    
    GetWorldTimerManager().SetTimer(TimerHandler_EnemyStopAttack, this, &ANpc::StopMeleeAnim, 1, false);
}

void ANpc::StopMeleeAnim()
{
    if (DuringAttack)
    {
        DuringAttack = false;
        StopAnimMontage(MeleeAnim);
    }
}

