#include "AISwarmComponent.h"

UAISwarmComponent::UAISwarmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LocomotionSoundRadius = 2000.00f;
    this->VoiceSoundRadius = 2000.00f;
    this->MaxInstancesInSwarm = 256;
    this->FlockRadius = 300.00f;
    this->CellSize = 40.00f;
    this->WallPadding = 20.00f;
    this->SimulationGridPadding = 5.00f;
    this->MovementVariationRange = 0.50f;
    this->SwarmBoundsCellCountClamp = 25;
    this->MaxAttackingInstances = 20;
    this->AttackTimeout = 0.05f;
    this->InstanceCollisionRadius = 5.00f;
    this->HeavyProjectileDamageThreashold = 15.00f;
    this->MaxTextureVariants = 256;
    this->VisualsSeed = 0;
    this->MeshMaterial = NULL;
    this->StaticMesh = NULL;
    this->SwarmInstancedMesh = NULL;
    this->VATAnimationsConfig = NULL;
}

void UAISwarmComponent::Simulate(const float DeltaTime) {
}

void UAISwarmComponent::SetDamageTarget(const AActor* Target, const float OffsetToGroundLevel, const float EngageRadius) {
}

void UAISwarmComponent::OnConstruction(const FTransform& Transform, const float SwarmHealth) {
}

TArray<FName> UAISwarmComponent::GetVATAnimationNames() const {
    return TArray<FName>();
}


