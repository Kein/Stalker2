#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AnimDialogContextualArray.h"
#include "AnimDialogContextualWeightedArray.h"
#include "DragDeadBodyAnimations.h"
#include "EDialogAnimationType.h"
#include "EEmotionalDialogState.h"
#include "EquipUnequipAnimations.h"
#include "HumanDeathAnimations.h"
#include "PDAUsageAnimations.h"
#include "SmartCoverAnimCollectionData.h"
#include "HumanDefaultAnimCollection.generated.h"

class UHumanAnimCollection;

UCLASS()
class STALKER2_API UHumanDefaultAnimCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UHumanAnimCollection* HumanAnimCollection;
    
    UPROPERTY(EditAnywhere)
    UClass* HumanAnimBlueprint;
    
    UPROPERTY(EditAnywhere)
    FEquipUnequipAnimations EquipUnequip;
    
    UPROPERTY(EditAnywhere)
    FPDAUsageAnimations PDAUsage;
    
    UPROPERTY(EditAnywhere)
    FDragDeadBodyAnimations DragDeadBodyAnimations;
    
    UPROPERTY(EditAnywhere)
    FSmartCoverAnimCollectionData SmartCoverAnimCollectionData;
    
    UPROPERTY(EditAnywhere)
    FHumanDeathAnimations DeathAnimations;
    
    UPROPERTY(EditAnywhere)
    TMap<EEmotionalDialogState, FAnimDialogContextualWeightedArray> DialogIdleAnimations;
    
    UPROPERTY(EditAnywhere)
    TMap<EDialogAnimationType, FAnimDialogContextualArray> DialogAnimations;
    
public:
    UHumanDefaultAnimCollection();

};

