#pragma once
#include "CoreMinimal.h"
#include "AnimPlayerWeaponInertiaData.h"
#include "AnimPlayerWeaponSwingData.h"
#include "AnimHandItemData.generated.h"

class UInteractionComponent;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHandItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bHasItemInHands;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasEmptyHands;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USkeletalMeshComponent* ItemSkeletal;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UInteractionComponent* ItemInteractable;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsUsesLeftHand;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsUsesRightHand;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimPlayerWeaponSwingData SwingData;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimPlayerWeaponInertiaData InertiaData;
    
    FAnimHandItemData();
};

