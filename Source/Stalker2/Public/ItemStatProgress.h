#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "ItemStatProgress.generated.h"

class UImage;
class UProgressBar;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UItemStatProgress : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IconImage;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* Name;
    
    UPROPERTY(Instanced)
    UProgressBar* ProgressBackground;
    
    UPROPERTY(Instanced)
    UProgressBar* ProgressForeground;
    
public:
    UPROPERTY(EditAnywhere)
    FLinearColor DefaultColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor BetterColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor WorseColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor BuffColor;
    
    UItemStatProgress();

};

