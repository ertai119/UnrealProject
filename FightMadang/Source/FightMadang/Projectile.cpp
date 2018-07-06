// Fill out your copyright notice in the Description page of Project Settings.

#include "Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
AProjectile::AProjectile()
{
	ProjectileCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Comp"));
	ProjectileCollision->InitSphereRadius(20.f);
	ProjectileCollision->BodyInstance.SetCollisionProfileName("Projectile");
	RootComponent = ProjectileCollision;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjetileComp"));
	ProjectileMovement->UpdatedComponent = ProjectileCollision;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowVelocity = false;

	InitialLifeSpan = 3.f;

}

