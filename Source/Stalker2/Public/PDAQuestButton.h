#pragma once
#include "CoreMinimal.h"
#include "PDAButtonBase.h"
#include "PDAQuestButton.generated.h"

class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UPDAQuestButton : public UPDAButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UTextWidget* ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableLocalization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ButtonLocalizationSID;
    
    UPDAQuestButton();

};

