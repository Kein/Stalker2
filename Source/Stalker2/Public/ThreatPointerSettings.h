#pragma once
#include "CoreMinimal.h"
#include "ThreatPointerSettings.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FThreatPointerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ThreatIndicatorMoveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float OpacityChangingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ThreatLevelChangingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ThreatIndicatorLevelMin;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ThreatIndicatorLevelMax;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ThreatThreatPointerRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float AlertAnimationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 AlertAnimationNumberLoops;
    
    FThreatPointerSettings();
};

