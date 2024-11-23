#include "DestructibleObject.h"
#include "Components/StaticMeshComponent.h"
#include "HittableComponent.h"
#include "PhysicsInteractionComponent.h"
#include "PhysicsSoundsComponent.h"

ADestructibleObject::ADestructibleObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->PhysicsInteractionComponent = CreateDefaultSubobject<UPhysicsInteractionComponent>(TEXT("PhysicsInteractionComponent"));
    this->PhysicsSoundsComponent = CreateDefaultSubobject<UPhysicsSoundsComponent>(TEXT("PhysicsSoundsComponent"));
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->ExplosionComponent = NULL;
    this->HittableComponent = CreateDefaultSubobject<UHittableComponent>(TEXT("HittableComponent"));
    this->DataLayerPhysicsComponent = NULL;
}

void ADestructibleObject::TryAdjustPosition() {
}

void ADestructibleObject::StartDestructActions() {
}

void ADestructibleObject::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void ADestructibleObject::OnDataLayersUpdated(const UDataLayerInstance* DataLayer, EDataLayerRuntimeState State) {
}



TArray<FObjectPhaseSettings> ADestructibleObject::GSCFramework_GetObjectPhases() const {
    return TArray<FObjectPhaseSettings>();
}

FObjectPhaseSettings ADestructibleObject::GSCFramework_GetCurrentPhase() const {
    return FObjectPhaseSettings{};
}

int32 ADestructibleObject::GetCurrentPhaseIndex() const {
    return 0;
}


