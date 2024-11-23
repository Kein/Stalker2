#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "PDAQuestRewardSlot.generated.h"

class UImage;

UCLASS(EditInlineNew)
class STALKER2_API UPDAQuestRewardSlot : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImage* RewardIcon;
    
    UPDAQuestRewardSlot();

};

