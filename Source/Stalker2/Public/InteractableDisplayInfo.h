#pragma once
#include "CoreMinimal.h"
#include "InteractionType.h"
#include "EDisplayPriority.h"
#include "InteractableDisplayInfo.generated.h"

USTRUCT(BlueprintType)
struct FInteractableDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText InteractActionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText InteractActionTextSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInteractionType InteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDisplayPriority DisplayPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverweight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowUpgrade;
    
    STALKER2_API FInteractableDisplayInfo();
};

