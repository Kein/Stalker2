#pragma once
#include "CoreMinimal.h"
#include "ViewBaseExtended.h"
#include "PauseGameView.generated.h"

class UGameMenuElement;
class UImage;
class UOverlay;
class UVerticalBox;

UCLASS(EditInlineNew)
class STALKER2_API UPauseGameView : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UGameMenuElement* Continue;
    
    UPROPERTY(Instanced)
    UGameMenuElement* Play;
    
    UPROPERTY(Instanced)
    UGameMenuElement* Save;
    
    UPROPERTY(Instanced)
    UGameMenuElement* Load;
    
    UPROPERTY(Instanced)
    UGameMenuElement* Online;
    
    UPROPERTY(Instanced)
    UGameMenuElement* Options;
    
    UPROPERTY(Instanced)
    UGameMenuElement* Back;
    
    UPROPERTY(Instanced)
    UGameMenuElement* Exit;
    
    UPROPERTY(Instanced)
    UGameMenuElement* DebugMaps;
    
    UPROPERTY(Instanced)
    UGameMenuElement* BackToMainMenu;
    
    UPROPERTY(Instanced)
    UGameMenuElement* DebugBenchmark;
    
    UPROPERTY(Instanced)
    UVerticalBox* ButtonContainer;
    
    UPROPERTY(Instanced)
    UImage* Background;
    
    UPROPERTY(Instanced)
    UOverlay* MenuOverlay;
    
    UPROPERTY(Instanced)
    UOverlay* OptionsOverlay;
    
    UPauseGameView();

private:
    UFUNCTION()
    void UpdateShowDebugMenu();
    
public:
    UFUNCTION()
    void UIOptionsBack();
    
    UFUNCTION()
    void UIMenuMoveUp();
    
    UFUNCTION()
    void UIMenuMoveDown();
    
    UFUNCTION()
    void UIMenuConfirm();
    
    UFUNCTION()
    void UIMenuBack();
    
private:
    UFUNCTION()
    void OnItemHovered();
    
    UFUNCTION()
    void OnClickSave();
    
    UFUNCTION()
    void OnClickPlay();
    
    UFUNCTION()
    void OnClickOptions();
    
    UFUNCTION()
    void OnClickOnline();
    
    UFUNCTION()
    void OnClickLoad();
    
    UFUNCTION()
    void OnClickExit();
    
    UFUNCTION()
    void OnClickDebugMaps();
    
    UFUNCTION()
    void OnClickContinue();
    
    UFUNCTION()
    void OnClickBackToMainMenu();
    
    UFUNCTION()
    void OnClickBack();
    
};

