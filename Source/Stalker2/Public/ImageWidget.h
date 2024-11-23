#pragma once
#include "CoreMinimal.h"
#include "IconSettings.h"
#include "WidgetBase.h"
#include "ImageWidget.generated.h"

class UImage;
class UTexture2D;

UCLASS(EditInlineNew)
class STALKER2_API UImageWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableStyleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSetDefaultIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIconSettings IconSettings;
    
    UPROPERTY(Instanced)
    UImage* ImageObj;
    
    UImageWidget();

    UFUNCTION(BlueprintCallable)
    void SetBrushTextureInIconSettings(UTexture2D* Texture);
    
};

