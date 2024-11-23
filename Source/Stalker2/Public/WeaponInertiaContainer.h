#pragma once
#include "CoreMinimal.h"
#include "WeaponInertiaContainer.generated.h"

class UCurveFloat;
class UCurveVector;

USTRUCT(BlueprintType)
struct FWeaponInertiaContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveVector* InertiaRotationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveVector* InertiaTranslationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* InertiaTimeScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* AmplitudeScaleCurve;
    
    STALKER2_API FWeaponInertiaContainer();
};

