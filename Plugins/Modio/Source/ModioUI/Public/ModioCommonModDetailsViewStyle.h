#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModDetailsViewStyle.generated.h"

class UModioCommonButtonStyle;
class UModioCommonModGalleryViewStyle;
class UModioCommonProgressBarStyle;
class UModioCommonTextStyle;

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonModDetailsViewStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonModGalleryViewStyle> ModGalleryViewStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonTextStyle> ModNameTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonButtonStyle> SubscribeButtonStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonButtonStyle> CancelButtonStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonButtonStyle> RateUpButtonStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonButtonStyle> RateDownButtonStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonButtonStyle> ReportButtonStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonTextStyle> ModSummaryTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonTextStyle> ModFullDescriptionLabelTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonTextStyle> ModFullDescriptionTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonTextStyle> DownloadProgressLabelTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonTextStyle> DownloadProgressTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonProgressBarStyle> DownloadProgressBarStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonTextStyle> StatsLabelTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonTextStyle> StatsTextStyle;
    
    UModioCommonModDetailsViewStyle();

};

