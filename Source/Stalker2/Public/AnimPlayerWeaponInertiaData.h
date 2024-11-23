#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AnimPlayerWeaponInertiaData.generated.h"

class UCurveFloat;
class UCurveVector;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerWeaponInertiaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AlphaInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TranslationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InertiaStartThreshold;
    
    UPROPERTY()
    UCurveVector* RotationCurve;
    
    UPROPERTY()
    UCurveVector* TranslationCurve;
    
    UPROPERTY()
    UCurveFloat* TimeScaleCurve;
    
    UPROPERTY()
    UCurveFloat* AmplitudeScaleCurve;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator AdditionalInertiaRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector AdditionalInertiaTranslation;
    
    UPROPERTY(BlueprintReadOnly)
    float InertiaAlpha;
    
    FAnimPlayerWeaponInertiaData();
};

