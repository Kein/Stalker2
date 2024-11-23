#pragma once
#include "CoreMinimal.h"
#include "ViewBaseExtended.h"
#include "PopupView.generated.h"

class UOverlay;
class UPopupBase;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UPopupView : public UViewBaseExtended {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UOverlay* PopupOverlay;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PopupViewZOrder;
    
private:
    UPROPERTY(Instanced, Transient)
    UPopupBase* ActivePopupWidget;
    
public:
    UPopupView();

    UFUNCTION()
    void Retry();
    
    UFUNCTION()
    void Discard();
    
    UFUNCTION()
    void Confirm();
    
    UFUNCTION()
    void Cancel();
    
};

