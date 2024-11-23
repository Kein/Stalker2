#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModioCommonErrorWithRetryParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonErrorWithRetryParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FText RetryButtonTextLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle RetryInputAction;
    
    FModioCommonErrorWithRetryParamsSettings();
};

