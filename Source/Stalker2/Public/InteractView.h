#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ViewBase.h"
#include "InteractView.generated.h"

class UCanvasPanel;
class UImage;
class UInteractHintInputController;
class UInteractionComponent;
class UOverlay;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UInteractView : public UViewBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UInteractHintInputController* MainHint;
    
    UPROPERTY(Instanced)
    UInteractHintInputController* OptionalHint;
    
    UPROPERTY(Instanced)
    UCanvasPanel* BothElementCanvas;
    
    UPROPERTY(Instanced)
    UCanvasPanel* InteractCanvas;
    
    UPROPERTY(Instanced)
    UTextWidget* NameText;
    
    UPROPERTY(Instanced)
    UTextWidget* ActionText;
    
    UPROPERTY(Instanced)
    UTextWidget* SecondActionText;
    
    UPROPERTY(Instanced)
    UOverlay* MainActionElement;
    
    UPROPERTY(Instanced)
    UOverlay* SecondActionElement;
    
    UPROPERTY(Instanced)
    UOverlay* NameElement;
    
    UPROPERTY(Instanced)
    UImage* UpgradeIcon;
    
    UPROPERTY(Instanced)
    UImage* DurabilityIcon;
    
    UPROPERTY(Instanced)
    UImage* OverweightIcon;
    
    UPROPERTY(Instanced)
    UImage* MainRightSoftTile;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D InteractItemOffset;
    
protected:
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UInteractionComponent>> InteractionComponents;
    
    UPROPERTY(Instanced)
    TArray<UInteractHintInputController*> HintWidgets;
    
    UPROPERTY(EditInstanceOnly)
    FString UpgradesBlueprintL10n;
    
public:
    UInteractView();

protected:
    UFUNCTION()
    void UpdateInteractHints();
    
    UFUNCTION()
    void UpdateHintState();
    
    UFUNCTION()
    void HideInteractHints();
    
};

