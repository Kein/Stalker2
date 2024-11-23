#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "SettingsPage.h"
#include "Templates/SubclassOf.h"
#include "InputMappingSettingsPage.generated.h"

class UInputMappingSettingsModel;
class USettingElementBindedInput;
class USettingElementInput;
class USettingsCategory;

UCLASS(EditInlineNew)
class STALKER2_API UInputMappingSettingsPage : public USettingsPage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<USettingsCategory> AnchorClass;
    
    UPROPERTY(EditAnywhere)
    FMargin AnchorPadding;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<USettingElementInput> InputElementClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<USettingElementBindedInput> BindedInputElementClass;
    
    UPROPERTY(EditDefaultsOnly)
    FMargin SettingElementPadding;
    
    UPROPERTY(EditDefaultsOnly)
    FMargin ToggleElementPadding;
    
    UPROPERTY(Instanced, Transient)
    TArray<USettingsCategory*> Anchors;
    
    UPROPERTY(EditDefaultsOnly)
    UInputMappingSettingsModel* InputMappingSettingsModel;
    
public:
    UInputMappingSettingsPage();

};

