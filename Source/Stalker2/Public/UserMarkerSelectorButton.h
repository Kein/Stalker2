#pragma once
#include "CoreMinimal.h"
#include "EMarkerPosition.h"
#include "EMarkerType.h"
#include "WidgetBase.h"
#include "UserMarkerSelectorButton.generated.h"

class UButton;
class UImage;
class UOverlay;
class UWidgetAnimation;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UUserMarkerSelectorButton : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    EMarkerType MarkerType;
    
    UPROPERTY(EditInstanceOnly)
    EMarkerPosition MarkerPosition;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FName HoverColorStyleID;
    
    UPROPERTY(EditDefaultsOnly)
    FName DisableHoverColorStyleID;
    
    UPROPERTY(EditDefaultsOnly)
    FName NotHoverColorStyleID;
    
    UPROPERTY(Instanced)
    UButton* ButtonElement;
    
    UPROPERTY(Instanced)
    UImage* MarkerImage;
    
    UPROPERTY(Instanced)
    UImage* Background;
    
    UPROPERTY(Instanced)
    UOverlay* RotationOverlay;
    
    UPROPERTY(Transient)
    UWidgetAnimation* HoverOptionAnimation;
    
    UPROPERTY(Transient)
    UWidgetAnimation* SelectAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    float SelectAnimationSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float HoverAnimationSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float HideHoverAnimationSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    FName HighlightDirectionParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    FName BackgroundImageParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    FName StartColorParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    FName FinishColorParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    FName HoverColorParameterName;
    
public:
    UUserMarkerSelectorButton();

    UFUNCTION()
    void OnPressedButtonElement();
    
    UFUNCTION()
    void OnHoveredButtonElement();
    
};

