#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HintBase.h"
#include "HintKey.generated.h"

class UButton;
class UHintRichTextWidget;
class UImage;
class UProgressBar;
class UTexture2D;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class STALKER2_API UHintKey : public UHintBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UHintRichTextWidget* HintRichTextWidget;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* MultiClickAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* RunActionAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* MultiClickIdle;
    
    UPROPERTY(Instanced)
    UWidgetSwitcher* ActionSwitcher;
    
    UPROPERTY(Instanced)
    UProgressBar* HoldProgress;
    
    UPROPERTY(Instanced)
    UImage* ProgressImage;
    
    UPROPERTY(Instanced)
    UImage* ProgressImageBack;
    
    UPROPERTY(Instanced)
    UButton* HintButton;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, UTexture2D*> BackgroundStyleToBackgroundTexture;
    
    UPROPERTY(Instanced)
    UImage* HoldProgressImage;
    
    UPROPERTY(Instanced)
    UImage* HoldProgressImageBack;
    
    UPROPERTY(Instanced)
    UImage* MultiClickProgressImage;
    
    UPROPERTY(Instanced)
    UImage* MultiClickProgressImageBack;
    
    UPROPERTY(Instanced)
    UImage* HoldProgressTutorials;
    
    UPROPERTY(Transient)
    UWidgetAnimation* SingleClickAnim;
    
    UPROPERTY(Instanced)
    UImage* HintDynamicBackground;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector2D> HintBackgroundOffsets;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseKeyFromTopMappingContext;
    
    UPROPERTY(EditDefaultsOnly)
    int32 HintDesignIteration;
    
    UPROPERTY(Instanced)
    UImage* IconKey;
    
    UPROPERTY(Instanced)
    UImage* IconLock;
    
    UPROPERTY(Instanced)
    UImage* IconLowHealth;
    
    UPROPERTY(EditDefaultsOnly)
    FColor EnabledIconsColor;
    
    UPROPERTY(EditDefaultsOnly)
    FColor DisabledIconsColor;
    
    UHintKey();

    UFUNCTION(BlueprintCallable)
    void SetLowHealthState(const bool ShowIcon);
    
    UFUNCTION(BlueprintCallable)
    void SetHintState(const bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void SetHintKeyLockState(const bool ShowIcon, const bool IsKeyAvailable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayHintAnimation(bool bSingleClick);
    
};

