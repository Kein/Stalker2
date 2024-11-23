#pragma once
#include "CoreMinimal.h"
#include "MenuButtonActionBase.h"
#include "ShowOverrideCampaignPopupGameStart.generated.h"

UCLASS(EditInlineNew)
class UShowOverrideCampaignPopupGameStart : public UMenuButtonActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FString DifficultyPrototypeSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString TitleSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString DescriptionSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString AcceptButtonNameSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString DeclineButtonNameSID;
    
public:
    UShowOverrideCampaignPopupGameStart();

};

