#pragma once
#include "CoreMinimal.h"
#include "AnimPlayerLookAtPreset.h"
#include "AnimPlayerLookAtData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FAnimPlayerLookAtData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FAnimPlayerLookAtPreset> Presets;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimPlayerLookAtPreset ActivePreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* EnteringSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* CenteringSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* CursorFreemoveDistanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* CursorApproachDirectionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CenteringTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayerLookAtTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxFreemoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinStopSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DialogEnteringTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SwitchTargertFactor;
    
    STALKER2_API FAnimPlayerLookAtData();
};

