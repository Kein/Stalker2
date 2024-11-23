#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "PlayerPictureWidget.generated.h"

class UImage;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UPlayerPictureWidget : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UImage* PlayerPicture;
    
public:
    UPlayerPictureWidget();

};

