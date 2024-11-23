#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseLoadingScreenWidget.h"
#include "LoadingScreenWidget.generated.h"

class UImage;
class UTextBlock;
class UTexture2D;

UCLASS(EditInlineNew)
class STALKER2_API ULoadingScreenWidget : public UBaseLoadingScreenWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTextBlock* PressAnyButtonText;
    
    UPROPERTY(Instanced)
    UImage* LoadingScreenImage;
    
    UPROPERTY(Instanced)
    UImage* LoadingProgressBar;
    
    UPROPERTY(Instanced)
    UImage* LoadingProgressArrow;
    
    UPROPERTY(Instanced)
    UTextBlock* Title;
    
    UPROPERTY(Instanced)
    UTextBlock* Hint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> LoadingScreensSet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FVector2D ArrowMinMaxAngles;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float ArrowInterpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FString PressAnyButtonL10n;
    
public:
    ULoadingScreenWidget();

};

