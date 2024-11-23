#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModioCommonModDetailsParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonModDetailsParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FText SubscribeLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText UnsubscribeLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText CancelLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText RateUpLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText RateDownLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText ReportLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText FileSizeLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText LastUpdatedLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText ReleaseDateLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText SubscribersLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText CreatedByLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText TagsLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText ModDescriptionLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText SimilarModsLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText DownloadingLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText ExtractingLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle SubscribeInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle CancelInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle RateUpInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle RateDownInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle OpenReportInputAction;
    
    FModioCommonModDetailsParamsSettings();
};

