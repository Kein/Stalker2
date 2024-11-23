#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "HudHintsPanel.generated.h"

class UHintInputController;
class UVerticalBox;

UCLASS(EditInlineNew)
class STALKER2_API UHudHintsPanel : public UChildViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float HintHudRestoreHideTime;
    
    UPROPERTY(EditDefaultsOnly)
    float HintRestoreHUDNonActiveOpacity;
    
    UPROPERTY(Instanced)
    UHintInputController* HintRestoreHUD;
    
    UPROPERTY(Instanced)
    UVerticalBox* CommonHintBox;
    
    UPROPERTY(Instanced)
    UHintInputController* ChangeAmmoType;
    
    UPROPERTY(Instanced)
    UHintInputController* ItemSelector;
    
    UPROPERTY(Instanced)
    UHintInputController* OpenInventory;
    
    UPROPERTY(Instanced)
    UHintInputController* OpenMap;
    
    UPROPERTY(Instanced)
    UHintInputController* OpenPDA;
    
    UPROPERTY(EditDefaultsOnly)
    float CommonHintsOpacitySpeedChange;
    
    UPROPERTY(EditDefaultsOnly)
    float RestoreOpacitySpeedChange;
    
public:
    UHudHintsPanel();

protected:
    UFUNCTION()
    void UpdateInputDependent();
    
};

