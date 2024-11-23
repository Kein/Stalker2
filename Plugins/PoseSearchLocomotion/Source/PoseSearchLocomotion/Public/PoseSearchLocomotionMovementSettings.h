#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "PoseSearchLocomotionAlternativeTags.h"
#include "PoseSearchLocomotionMovementSettings.generated.h"

USTRUCT(BlueprintType)
struct FPoseSearchLocomotionMovementSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TMap<FGameplayTag, FPoseSearchLocomotionAlternativeTags> AlternativeTags;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FGameplayTag, FGameplayTagContainer> ComplimentaryTags;
    
    UPROPERTY(Config, EditAnywhere)
    float CorridorWidth;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, float> CorridorWidthByAgentType;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSimplifyFlipPortals;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSimplifyConvexPortals;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSimplifyConcavePortals;
    
    UPROPERTY(Config, EditAnywhere)
    float CorridorPathOffset;
    
    UPROPERTY(Config, EditAnywhere)
    float CorridorStartOffset;
    
    UPROPERTY(Config, EditAnywhere)
    float NarrowFromEndDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float IdleSteeringRotationRateDegreesPerSecond;
    
    UPROPERTY(Config, EditAnywhere)
    float WalkSteeringRotationRateDegreesPerSecond;
    
    UPROPERTY(Config, EditAnywhere)
    float RunSteeringRotationRateDegreesPerSecond;
    
    UPROPERTY(Config, EditAnywhere)
    float SprintSteeringRotationRateDegreesPerSecond;
    
    UPROPERTY(Config, EditAnywhere)
    float EvadeSteeringRotationRateDegreesPerSecond;
    
    UPROPERTY(Config, EditAnywhere)
    float SnappingToPathEndStartDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float SnappingToPathEndRatio;
    
    UPROPERTY(Config, EditAnywhere)
    float SnappingToPathEndMinVelocity;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTagContainer RunTags;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTagContainer SprintTags;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTagContainer MoveBehaviourTransitionTags;
    
    POSESEARCHLOCOMOTION_API FPoseSearchLocomotionMovementSettings();
};

