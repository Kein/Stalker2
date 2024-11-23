#pragma once
#include "CoreMinimal.h"
#include "PopupBase.h"
#include "GreetingsPopup.generated.h"

class UImageWidget;
class UModifiableRichText;
class UVerticalBox;

UCLASS(EditInlineNew)
class STALKER2_API UGreetingsPopup : public UPopupBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UModifiableRichText* DescriptionRich;
    
    UPROPERTY(Instanced)
    UVerticalBox* DescriptionContainer;
    
    UPROPERTY(Instanced)
    UImageWidget* BackgroundImage;
    
public:
    UGreetingsPopup();

};

