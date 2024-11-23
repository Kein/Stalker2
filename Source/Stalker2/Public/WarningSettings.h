#pragma once
#include "CoreMinimal.h"
#include "ELocalizationLanguage.h"
#include "RengeSettings.h"
#include "WarningSettings.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FWarningSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ELocalizationLanguage> Localization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRengeSettings> RengeSettings;
    
    FWarningSettings();
};

