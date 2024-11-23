#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "GuitarChordView.generated.h"

UCLASS(EditInlineNew)
class STALKER2_API UGuitarChordView : public UWidgetBase {
    GENERATED_BODY()
public:
    UGuitarChordView();

    UFUNCTION(BlueprintImplementableEvent)
    void OnUnselected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMinorScale();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMajorScale();
    
};

