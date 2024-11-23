#include "Grenade.h"
#include "AkComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GrenadeExplosionComponent.h"
#include "HittableComponent.h"
#include "PhysicsInteractionComponent.h"
#include "PhysicsSoundsComponent.h"
#include "WaterContactController.h"

AGrenade::AGrenade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->ExplosionComponent = CreateDefaultSubobject<UGrenadeExplosionComponent>(TEXT("GrenadeExplosionComponent"));
    this->ExplosionAudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("ExplosionAudioComponent"));
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->HittableComponent = CreateDefaultSubobject<UHittableComponent>(TEXT("HittableComponent"));
    this->PhysicsInteractionComponent = CreateDefaultSubobject<UPhysicsInteractionComponent>(TEXT("PhysicsInteractionComponent"));
    this->PhysicsSoundsComponent = CreateDefaultSubobject<UPhysicsSoundsComponent>(TEXT("PhysicsSoundsComponent"));
    this->WaterContactController = CreateDefaultSubobject<UWaterContactController>(TEXT("WaterContactController"));
    this->TimeToExplosion = 2.00f;
    this->ExplosionDecalMaterial = NULL;
    this->ExplosionAudioComponent->SetupAttachment(RootComponent);
}

void AGrenade::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void AGrenade::Explode() const {
}


