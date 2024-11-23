#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RengeSettings.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FRengeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor WarningColor;
    
    FRengeSettings();
};

