#pragma once
#include "CoreMinimal.h"
#include "ELocalizationLanguage.h"
#include "WidgetBase.h"
#include "LocalizedImage.generated.h"

class UImage;
class UTexture2D;

UCLASS(EditInlineNew)
class STALKER2_API ULocalizedImage : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UImage* Image;
    
    UPROPERTY(EditInstanceOnly)
    TMap<ELocalizationLanguage, TSoftObjectPtr<UTexture2D>> LocalizedImages;
    
    UPROPERTY(EditInstanceOnly)
    TSoftObjectPtr<UTexture2D> FallbackImage;
    
public:
    ULocalizedImage();

    UFUNCTION(BlueprintCallable)
    void ForceLoadImage(const TSoftObjectPtr<UTexture2D>& SoftImage);
    
};

