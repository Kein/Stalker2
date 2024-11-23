#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AlphaBlend.h"
#include "EAnimPushbackState.h"
#include "AnimPlayerWeaponPushbackData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerWeaponPushbackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PushbackInteprolateTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PushbackInteprolateSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    EAnimPushbackState State;
    
    UPROPERTY(BlueprintReadOnly)
    float Alpha;
    
    UPROPERTY(BlueprintReadOnly)
    FVector WeaponTranslation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator WeaponRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FAlphaBlend Blend;
    
    FAnimPlayerWeaponPushbackData();
};

