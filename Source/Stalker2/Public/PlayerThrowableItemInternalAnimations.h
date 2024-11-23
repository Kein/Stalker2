#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponAnimations.h"
#include "EAnimationThrowingType.h"
#include "PlayerThrowableItemInternalAnimations.generated.h"

class UCurveFloat;
class UCurveVector;

USTRUCT(BlueprintType)
struct FPlayerThrowableItemInternalAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<EAnimationThrowingType, FCharacterWeaponAnimations> Throw;
    
    UPROPERTY(EditAnywhere)
    TMap<EAnimationThrowingType, FCharacterWeaponAnimations> CancelThrow;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* StrongThrowForceCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* LightThrowForceCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveVector* StrongThrowDirectionOffsetCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveVector* LightThrowDirectionOffsetCurve;
    
    STALKER2_API FPlayerThrowableItemInternalAnimations();
};

