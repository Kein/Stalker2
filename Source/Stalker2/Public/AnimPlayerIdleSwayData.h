#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimPlayerIdleSwayData.generated.h"

class UCurveFloat;
class UCurveVector;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerIdleSwayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveVector* BaseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveVector* StaminaAmplitudeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* StaminaCycleTimeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InitialDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StandCycleTimeModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StandAmplitudeXModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StandAmplitudeYModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CrouchCycleTimeModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CrouchAmplitudeXModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CrouchAmplitudeYModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveCycleTimeModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveAmplitudeXModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveAmplitudeYModifier;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadOnly)
    float Alpha;
    
    UPROPERTY(BlueprintReadOnly)
    UCurveVector* ActiveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpSpeed;
    
    FAnimPlayerIdleSwayData();
};

