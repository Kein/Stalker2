#pragma once
#include "CoreMinimal.h"
#include "ModioCommonTermsOfUseParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonTermsOfUseParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FText TitleText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText ContentText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText SubmitButtonText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText CancelButtonText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText TermsButtonText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText PrivacyButtonText;
    
    FModioCommonTermsOfUseParamsSettings();
};

