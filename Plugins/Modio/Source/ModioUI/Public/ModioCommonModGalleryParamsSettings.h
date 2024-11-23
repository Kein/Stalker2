#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModioCommonModGalleryParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonModGalleryParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle PreviousImageInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle NextImageInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle SubscribeInputAction;
    
    FModioCommonModGalleryParamsSettings();
};

