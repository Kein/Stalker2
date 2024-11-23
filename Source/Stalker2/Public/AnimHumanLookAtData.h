#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ELookAtOwnerState.h"
#include "RotationBodyPart.h"
#include "AnimHumanLookAtData.generated.h"

class ULookAtRestrictionsDataAsset;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHumanLookAtData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ULookAtRestrictionsDataAsset* RestrictionsConfigDA;
    
    UPROPERTY(BlueprintReadOnly, EditFixedSize)
    TArray<FRotationBodyPart> HorizontalBodyParts;
    
    UPROPERTY(BlueprintReadOnly, EditFixedSize)
    TArray<FRotationBodyPart> VerticalBodyParts;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D TargetRotation;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsRotating;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsRotatingFullBody;
    
    UPROPERTY(BlueprintReadOnly)
    ELookAtOwnerState CurrentOwnerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FullBodyRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FullBodyRotationTimeGap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableCombatLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxLookAtAlphaChangeSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    FVector LookAtLocation;
    
    UPROPERTY(BlueprintReadOnly)
    float LookAtAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    bool bOnlyHeadRotateOnUpperBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WeaponRotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WeaponRotationAngleOffset;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator TargetWeaponRotation;
    
    UPROPERTY(BlueprintReadOnly)
    float AdditionalWeaponTransformAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    FVector CloseToBodyWeaponShift;
    
    UPROPERTY()
    float MaxWeaponShiftOnReload;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsFullBodyRotatingBlockedOutside;
    
    FAnimHumanLookAtData();
};

