#pragma once
#include "CoreMinimal.h"
#include "ModioCommonEmailAuthLoadingParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonEmailAuthLoadingParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FText TitleText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText DescriptionText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText CancelButtonText;
    
    FModioCommonEmailAuthLoadingParamsSettings();
};

