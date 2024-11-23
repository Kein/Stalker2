#pragma once
#include "CoreMinimal.h"
#include "ViewBase.h"
#include "InteractViewDots.generated.h"

class UCanvasPanel;
class UImageWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UInteractViewDots : public UViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UCanvasPanel* HintCanvas;
    
    UPROPERTY(Instanced)
    UImageWidget* HintDot;
    
protected:
    UPROPERTY(Instanced, Transient)
    TArray<UImageWidget*> HintDots;
    
public:
    UInteractViewDots();

};

