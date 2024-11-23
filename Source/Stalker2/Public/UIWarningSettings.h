#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UIWorningType.h"
#include "WarningSettings.h"
#include "UIWarningSettings.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FUIWarningSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsGlobalEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UIWorningType WorningType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PerfectTextSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldIgnoreTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RowSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PerfectRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWarningSettings DefoultRengeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FWarningSettings> RengeSettings;
    
    FUIWarningSettings();
};

