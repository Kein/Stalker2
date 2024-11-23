#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModioCommonAuthParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonAuthParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle BackInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle SubmitInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle CancelInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle TermsInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle PrivacyInputAction;
    
    FModioCommonAuthParamsSettings();
};

