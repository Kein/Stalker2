#include "ArtifactStrafeBehaviourComponent.h"

UArtifactStrafeBehaviourComponent::UArtifactStrafeBehaviourComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasScheduledJump = false;
    this->TimeTillJump = 0.00f;
    this->OuterRadiusJumpChance = 0.00f;
    this->AnotherAnomalyJumpChance = 0.00f;
}


