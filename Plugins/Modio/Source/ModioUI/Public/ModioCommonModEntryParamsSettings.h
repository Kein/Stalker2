#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModioCommonModEntryParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonModEntryParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FText SubscribeLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText UnsubscribeLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText CancelLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText EnableLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText DisableLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText ForceUninstallLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText OpenModDetailsLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText OpenReportLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText DownloadingLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText ExtractingLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText QueuedLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText SpeedLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText SizeLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText ErrorLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText InstalledByOthersLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float DeselectionDelay;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle SubscribeInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle CancelInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle SwitchEnabledInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle OpenModDetailsInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle ForceUninstallInputAction;
    
    FModioCommonModEntryParamsSettings();
};

