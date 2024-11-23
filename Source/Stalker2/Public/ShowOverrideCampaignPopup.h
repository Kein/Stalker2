#pragma once
#include "CoreMinimal.h"
#include "MenuButtonActionBase.h"
#include "ShowOverrideCampaignPopup.generated.h"

class UMenuSubViewBase;

UCLASS(EditInlineNew)
class UShowOverrideCampaignPopup : public UMenuButtonActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UMenuSubViewBase> DestinationAfterConfirm;
    
    UPROPERTY(EditDefaultsOnly)
    FString TitleSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString DescriptionSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString AcceptButtonNameSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString DeclineButtonNameSID;
    
public:
    UShowOverrideCampaignPopup();

};

