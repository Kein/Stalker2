#pragma once
#include "CoreMinimal.h"
#include "ModioCommonEmailAuthCodeParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonEmailAuthCodeParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FText TitleText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText DescriptionText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText ValidationText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText BackButtonText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText SubmitButtonText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText CancelButtonText;
    
    FModioCommonEmailAuthCodeParamsSettings();
};

