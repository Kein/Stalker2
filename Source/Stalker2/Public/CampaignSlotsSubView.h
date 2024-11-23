#pragma once
#include "CoreMinimal.h"
#include "MenuSubViewBase.h"
#include "ShortcutData.h"
#include "Templates/SubclassOf.h"
#include "CampaignSlotsSubView.generated.h"

class UCampaignSlotButton;
class UMenuButtonActionBase;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UCampaignSlotsSubView : public UMenuSubViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCampaignSlotButton> CampaignSlotButtonClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCampaignSlotButton> EmptyCampaignSlotButtonClass;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UMenuButtonActionBase* EmptyCampaignSlotButtonAction;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UMenuButtonActionBase* CampaignSlotButtonAction;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FShortcutData> CampaignSlotButtonShortcuts;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FShortcutData> EmptyCampaignSlotButtonShortcuts;
    
public:
    UCampaignSlotsSubView();

};

