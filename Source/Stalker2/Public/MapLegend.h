#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MapLegend.generated.h"

class UScrollBox;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UMapLegend : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UWidgetAnimation* FadeInAnimation;
    
    UPROPERTY(Instanced)
    UVerticalBox* NoteList;
    
    UPROPERTY(Instanced)
    UScrollBox* LegendScroll;
    
    UPROPERTY(EditDefaultsOnly)
    float GamepadScrollSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float FadeInAnimationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float FadeOutAnimationSpeed;
    
public:
    UMapLegend();

};

