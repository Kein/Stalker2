#pragma once
#include "CoreMinimal.h"
#include "EFireType.h"
#include "EShutterState.h"
#include "EWeaponCustomAdditionalIdle.h"
#include "EWeaponIdleType.h"
#include "AnimPlayerFirearmData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerFirearmData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EWeaponIdleType IdleType;
    
    UPROPERTY(BlueprintReadOnly)
    EShutterState ShutterState;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsJammed;
    
    UPROPERTY(BlueprintReadOnly)
    int32 JamIdleIndex;
    
    UPROPERTY(BlueprintReadOnly)
    bool bTwinMagazineShifted;
    
    UPROPERTY(BlueprintReadOnly)
    EWeaponCustomAdditionalIdle AdditionalIdle;
    
    UPROPERTY(BlueprintReadOnly)
    EFireType FireTypes;
    
    UPROPERTY(BlueprintReadOnly)
    float LeftHandCurveValueInverse;
    
    UPROPERTY(BlueprintReadOnly)
    float WeaponLeftHandCurveValueInverse;
    
    UPROPERTY(BlueprintReadOnly)
    float LeftHandMovementAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsLeftHandIdleUnlocked;
    
    FAnimPlayerFirearmData();
};

