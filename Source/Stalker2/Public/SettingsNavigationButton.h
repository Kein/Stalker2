#pragma once
#include "CoreMinimal.h"
#include "ButtonBase.h"
#include "ESettingCategoryType.h"
#include "SettingsNavigationButton.generated.h"

class UImage;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API USettingsNavigationButton : public UButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImage* SelectLine;
    
    UPROPERTY(Instanced)
    UTextWidget* ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableLocalisation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ButtonLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableSelectAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SetStyleIdHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SetStyleIdUnHover;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool bShouldHideOnPresentation;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    ESettingCategoryType Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnablePopupOnSlotSwitch;
    
    USettingsNavigationButton();

};

