#pragma once
#include "CoreMinimal.h"
#include "ButtonBase.h"
#include "NavigationSlotInterface.h"
#include "PDAMenuButton.generated.h"

class UImage;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UPDAMenuButton : public UButtonBase, public INavigationSlotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImage* SelectLine;
    
    UPROPERTY(Instanced)
    UImage* Notify;
    
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
    FName SetStyleIdHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SetStyleIdUnHover;
    
    UPDAMenuButton();


    // Fix for true pure virtual functions not being implemented
};

