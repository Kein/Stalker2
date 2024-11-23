#pragma once
#include "CoreMinimal.h"
#include "ActorInteractionData.h"
#include "ItemContainerData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FItemContainerData : public FActorInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowUpgrade;
    
    FItemContainerData();
};

