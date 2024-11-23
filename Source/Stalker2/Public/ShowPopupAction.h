#pragma once
#include "CoreMinimal.h"
#include "MenuButtonActionBase.h"
#include "ShowPopupAction.generated.h"

UCLASS(EditInlineNew)
class UShowPopupAction : public UMenuButtonActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FString TitleSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString DescriptionSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString AcceptButtonNameSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString DeclineButtonNameSID;
    
public:
    UShowPopupAction();

};

