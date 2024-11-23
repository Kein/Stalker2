#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ChildViewBase.h"
#include "EMarkerType.h"
#include "UserMarkerSelector.generated.h"

class UImage;
class UOverlay;
class USizeBox;
class UUserMarkerCounter;
class UUserMarkerSelectorButton;
class UWidgetAnimation;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UUserMarkerSelector : public UChildViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UOverlay* ButtonOverlay;
    
    UPROPERTY(Instanced)
    UImage* Background;
    
    UPROPERTY(Instanced)
    UUserMarkerCounter* MarkerCounter;
    
    UPROPERTY(Instanced)
    UUserMarkerSelectorButton* TopButton;
    
    UPROPERTY(Instanced)
    UUserMarkerSelectorButton* RightButton;
    
    UPROPERTY(Instanced)
    UUserMarkerSelectorButton* LeftButton;
    
    UPROPERTY(Instanced)
    UUserMarkerSelectorButton* BottomButton;
    
    UPROPERTY(Instanced)
    USizeBox* SizeBox;
    
    UPROPERTY(Transient)
    UWidgetAnimation* ShowAnimation;
    
    UPROPERTY(Transient)
    UWidgetAnimation* ToGamepadCursor;
    
    UPROPERTY(EditInstanceOnly)
    bool bIsCursor;
    
    UPROPERTY(EditDefaultsOnly)
    float ShowAnimationSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float HideAnimationSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float CursorSelectorTransitionSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D size;
    
private:
    UPROPERTY(Instanced, Transient)
    UUserMarkerSelectorButton* HoveredButton;
    
public:
    UUserMarkerSelector();

    UFUNCTION()
    void PressedButton(const EMarkerType MarkType, const FVector& Coordinates);
    
    UFUNCTION()
    void HoverButton(UUserMarkerSelectorButton* InHoveredButton);
    
};

