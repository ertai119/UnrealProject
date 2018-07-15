// Fill out your copyright notice in the Description page of Project Settings.

#include "Npc.h"
#include "Components/SphereComponent.h"

ANpc::ANpc()
{
    CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    CollisionSphere->InitSphereRadius(10.f);
    CollisionSphere->AttachTo(GetMesh(), "WeaponPoint");
}



