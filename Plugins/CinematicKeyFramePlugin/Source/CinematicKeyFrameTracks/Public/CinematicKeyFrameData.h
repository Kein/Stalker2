#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CinematicKeyFrameData.generated.h"

USTRUCT(BlueprintType)
struct CINEMATICKEYFRAMETRACKS_API FCinematicKeyFrameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName KeyFrameName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSkippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SkipTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor FadeTargetColor;
    
    FCinematicKeyFrameData();
};

