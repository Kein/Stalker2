#pragma once
#include "CoreMinimal.h"
#include "AnimWeaponSwingContainer.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FAnimWeaponSwingContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* ItemRotationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* ItemHorizontalTranslationShiftCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* ItemSocketHorizontalTranslationShiftCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* ItemVerticalTranslationShiftCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* ItemExtraVerticalTranslationShiftCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HorizontalItemTranslationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VerticalItemTranslationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ItemRotationInterpSpeed;
    
    STALKER2_API FAnimWeaponSwingContainer();
};

