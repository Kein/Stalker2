#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ModioCommonAuthParamsSettings.h"
#include "ModioCommonCollectionParamsSettings.h"
#include "ModioCommonEmailAuthCodeParamsSettings.h"
#include "ModioCommonEmailAuthLoadingParamsSettings.h"
#include "ModioCommonEmailAuthParamsSettings.h"
#include "ModioCommonErrorWithRetryParamsSettings.h"
#include "ModioCommonFeaturedParamsSettings.h"
#include "ModioCommonFilteredModListParams.h"
#include "ModioCommonModBrowserParamsSettings.h"
#include "ModioCommonModDetailsParamsSettings.h"
#include "ModioCommonModEntryParamsSettings.h"
#include "ModioCommonModGalleryParamsSettings.h"
#include "ModioCommonModOperationTrackerParamsSettings.h"
#include "ModioCommonQuickAccessParamsSettings.h"
#include "ModioCommonReportEmailParamsSettings.h"
#include "ModioCommonReportMessageParamsSettings.h"
#include "ModioCommonReportParamsSettings.h"
#include "ModioCommonReportReasonParamsSettings.h"
#include "ModioCommonReportSummaryParamsSettings.h"
#include "ModioCommonSearchParamsSettings.h"
#include "ModioCommonStorageSpaceTrackerParamsSettings.h"
#include "ModioCommonTermsOfUseParamsSettings.h"
#include "ModioCommonUserProfileWidgetParamsSettings.h"
#include "ModioCommonUISettings.generated.h"

UCLASS(DefaultConfig, Config=ModioCommonUISettings)
class MODIOUI_API UModioCommonUISettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    bool bEnableCollectionModDisableUI;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonAuthParamsSettings AuthParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonEmailAuthCodeParamsSettings EmailAuthCodeParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonEmailAuthLoadingParamsSettings EmailAuthLoadingParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonEmailAuthParamsSettings EmailAuthParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonTermsOfUseParamsSettings TermsOfUseParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonFilteredModListParams FilteredModListParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonCollectionParamsSettings CollectionParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonFeaturedParamsSettings FeaturedParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonModBrowserParamsSettings ModBrowserParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonModDetailsParamsSettings ModDetailsParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonModEntryParamsSettings ModEntryParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonModGalleryParamsSettings ModGalleryParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonModOperationTrackerParamsSettings ModOperationTrackerParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonQuickAccessParamsSettings QuickAccessParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonReportParamsSettings ReportParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonReportReasonParamsSettings ReportReasonParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonReportEmailParamsSettings ReportEmailParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonReportMessageParamsSettings ReportMessageParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonReportSummaryParamsSettings ReportSummaryParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonSearchParamsSettings SearchParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonStorageSpaceTrackerParamsSettings StorageSpaceTrackerParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonUserProfileWidgetParamsSettings UserProfileParams;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FModioCommonErrorWithRetryParamsSettings ErrorWithRetryParams;
    
    UModioCommonUISettings();

};

