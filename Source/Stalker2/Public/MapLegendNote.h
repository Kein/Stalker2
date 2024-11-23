#pragma once
#include "CoreMinimal.h"
#include "EMarkerType.h"
#include "WidgetBase.h"
#include "MapLegendNote.generated.h"

class UImage;
class USizeBox;
class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UMapLegendNote : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UImage* MarkerIcon;
    
    UPROPERTY(Instanced)
    UTextWidget* MarkerName;
    
    UPROPERTY(Instanced)
    USizeBox* SizeBox;
    
    UPROPERTY(EditInstanceOnly)
    EMarkerType MarkerType;
    
    UPROPERTY(EditInstanceOnly)
    FString MarkerNameSID;
    
    UPROPERTY(EditDefaultsOnly)
    float Height;
    
public:
    UMapLegendNote();

};

