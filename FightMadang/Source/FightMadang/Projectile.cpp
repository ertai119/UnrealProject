// Fill out your copyright notice in the Description page of Project Settings.

#include "Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "PublicCharacter.h"
#include "EngineMinimal.h"

// Sets default values
AProjectile::AProjectile()
{
	ProjectileCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Comp"));
	ProjectileCollision->InitSphereRadius(20.f);
	ProjectileCollision->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileCollision->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::OnOverlapBegin);
	RootComponent = ProjectileCollision;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjetileComp"));
	ProjectileMovement->UpdatedComponent = ProjectileCollision;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = false;

	InitialLifeSpan = 3.f;
}

void AProjectile::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor
	, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
	if (OtherActor && (OtherActor != this) && OverlappedComponent)
	{
		GetWorld()->DestroyActor(this);

		if (OtherActor->IsA(APublicCharacter::StaticClass()))
		{
			UGameplayStatics::ApplyPointDamage(SweepResult.Actor.Get()
				, 100, SweepResult.ImpactNormal, SweepResult, nullptr, this, UDamageType::StaticClass());
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Black, "Collision Projectile!!");
		}
	}
}
