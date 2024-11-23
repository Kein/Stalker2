#pragma once
#include "CoreMinimal.h"
#include "PDAButtonBase.h"
#include "TutorialFilterSettings.h"
#include "PDATutorialButton.generated.h"

class UImageWidget;
class UTexture2D;

UCLASS(EditInlineNew)
class STALKER2_API UPDATutorialButton : public UPDAButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImageWidget* ButtonIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTutorialFilterSettings FilterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShouldEnableStailManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Icon;
    
    UPDATutorialButton();

};

