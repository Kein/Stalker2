#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CreditsImage.generated.h"

class UImage;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UCreditsImage : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UImage* Image;
    
public:
    UCreditsImage();

};

