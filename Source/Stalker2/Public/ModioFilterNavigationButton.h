#pragma once
#include "CoreMinimal.h"
#include "ModioCommonButtonBase.h"
#include "Styling/SlateColor.h"
#include "ModioFilterNavigationButton.generated.h"

class UImage;
class UTextWidget;
class UTexture2D;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UModioFilterNavigationButton : public UModioCommonButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImage* SelectLine;
    
    UPROPERTY(Instanced)
    UImage* IconImage;
    
    UPROPERTY(Instanced)
    UTextWidget* TextWidget;
    
    UPROPERTY(EditAnywhere)
    bool bEnableLocalisation;
    
    UPROPERTY(EditAnywhere)
    FString ButtonLocalizationSID;
    
    UPROPERTY(EditAnywhere)
    FText DisplayText;
    
    UPROPERTY(EditAnywhere)
    bool bEnableSelectAnimation;
    
    UPROPERTY(EditAnywhere)
    bool bEnableByDefault;
    
    UPROPERTY(EditAnywhere)
    int32 ButtonIndex;
    
    UPROPERTY(EditAnywhere)
    FName SetStyleIdHover;
    
    UPROPERTY(EditAnywhere)
    FName SetStyleIdUnHover;
    
    UPROPERTY(EditAnywhere)
    FSlateColor SetStyleIconTintHover;
    
    UPROPERTY(EditAnywhere)
    FSlateColor SetStyleIconTintUnhover;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* SetStyleIconImageTexture;
    
    UModioFilterNavigationButton();

};

