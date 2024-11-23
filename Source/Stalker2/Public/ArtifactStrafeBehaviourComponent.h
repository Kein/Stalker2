#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ArtifactStrafeBehaviourComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UArtifactStrafeBehaviourComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    bool bHasScheduledJump;
    
    UPROPERTY(VisibleAnywhere)
    float TimeTillJump;
    
    UPROPERTY(SaveGame)
    float OuterRadiusJumpChance;
    
    UPROPERTY(SaveGame)
    float AnotherAnomalyJumpChance;
    
public:
    UArtifactStrafeBehaviourComponent(const FObjectInitializer& ObjectInitializer);

};

