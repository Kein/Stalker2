#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CreditsName.generated.h"

class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UCreditsName : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTextWidget* NameText;
    
public:
    UCreditsName();

};

