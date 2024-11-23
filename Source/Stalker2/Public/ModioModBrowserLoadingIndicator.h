#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "ModioModBrowserLoadingIndicator.generated.h"

class UImage;
class USizeBox;
class UWidgetAnimation;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UModioModBrowserLoadingIndicator : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USizeBox* SpinnerImageSizeBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* SpinnerImage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* SpinnerAnim;
    
    UPROPERTY(EditAnywhere)
    float SpinnerAnimSpeed;
    
    UPROPERTY(EditAnywhere)
    FVector2D size;
    
public:
    UModioModBrowserLoadingIndicator();

};

