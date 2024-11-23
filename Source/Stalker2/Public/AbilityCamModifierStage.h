#pragma once
#include "CoreMinimal.h"
#include "PostProcessSimplifiedSettings.h"
#include "AbilityCamModifierStage.generated.h"

USTRUCT(BlueprintType)
struct FAbilityCamModifierStage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StageDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PostProcessBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPostProcessSimplifiedSettings PostProcessSettings;
    
    STALKER2_API FAbilityCamModifierStage();
};

