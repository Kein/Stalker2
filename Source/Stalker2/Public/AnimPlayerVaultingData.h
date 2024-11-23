#pragma once
#include "CoreMinimal.h"
#include "EMainHandEquipmentType.h"
#include "EVaultState.h"
#include "AnimPlayerVaultingData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerVaultingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EVaultState State;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsVaulting;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsAnimInProgress;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsVaultingOver;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsVaultingOnTop;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* Sequence;
    
    UPROPERTY(BlueprintReadOnly)
    float VaultAlpha;
    
    UPROPERTY(EditAnywhere)
    TMap<EMainHandEquipmentType, UAnimSequence*> VaultingSequences;
    
    UPROPERTY(EditAnywhere)
    TMap<EMainHandEquipmentType, UAnimSequence*> VaultOverSequences;
    
    FAnimPlayerVaultingData();
};

