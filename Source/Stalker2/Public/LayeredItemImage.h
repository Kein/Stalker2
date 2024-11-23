#pragma once
#include "CoreMinimal.h"
#include "IconSettings.h"
#include "Templates/SubclassOf.h"
#include "WidgetBase.h"
#include "LayeredItemImage.generated.h"

class UImageWidget;
class UOverlay;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API ULayeredItemImage : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    FString PathSuffix;
    
private:
    UPROPERTY(Instanced)
    UImageWidget* MainImage;
    
    UPROPERTY(Instanced)
    UOverlay* ImagesOverlay;
    
    UPROPERTY(Instanced)
    UOverlay* LowPrioOverlay;
    
    UPROPERTY(Instanced)
    UOverlay* HighPrioOverlay;
    
    UPROPERTY(Transient)
    int32 IconsAsyncRequestCounter;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UImageWidget> ImageWidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    FIconSettings IconSettings;
    
    UPROPERTY(Instanced, Transient)
    TArray<UImageWidget*> ImageWidgets;
    
public:
    ULayeredItemImage();

};

