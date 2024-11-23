#pragma once
#include "CoreMinimal.h"
#include "ModioCommonButtonBase.h"
#include "ModioCategorySelectionBoxEntry.generated.h"

class UCheckBoxWidget;
class UTextWidget;
class UWidgetAnimation;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UModioCategorySelectionBoxEntry : public UModioCommonButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCheckBoxWidget* DummyCheckbox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextWidget* CheckboxNameText;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* HoverAnimation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* PressAnimation;
    
    UPROPERTY(EditInstanceOnly)
    FString CategoryTag;
    
    UPROPERTY(EditDefaultsOnly)
    float HoverAnimationSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float HideHoverAnimationSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float PressButtonAnimationSpeed;
    
    UPROPERTY(EditInstanceOnly)
    bool IsCheckedOnInit;
    
    UPROPERTY(EditInstanceOnly)
    bool EnableLocalization;
    
    UPROPERTY(EditInstanceOnly)
    FText CheckboxName;
    
    UPROPERTY(EditInstanceOnly)
    FString CheckboxNameLocalizationSID;
    
    UPROPERTY(EditAnywhere)
    FName CheckedStyleIdActive;
    
    UPROPERTY(EditAnywhere)
    FName CheckedStyleIdInactive;
    
    UPROPERTY(EditAnywhere)
    FName UncheckedStyleIdActive;
    
    UPROPERTY(EditAnywhere)
    FName UncheckedStyleIdInactive;
    
public:
    UModioCategorySelectionBoxEntry();

};

