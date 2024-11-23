#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "EGSCInputDeviceType.h"
#include "HintsData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FHintsData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EGSCInputDeviceType, FSlateBrush> PlatformIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor BackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideBackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin BackgroundPadding;
    
    FHintsData();
};

