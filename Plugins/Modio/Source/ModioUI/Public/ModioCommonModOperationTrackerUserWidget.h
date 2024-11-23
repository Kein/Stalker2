#pragma once
#include "CoreMinimal.h"
#include "ModioModCollectionEntry.h"
#include "ModioModID.h"
#include "ModioUnsigned64.h"
#include "ModioExtendedModInfoUIDetails.h"
#include "ModioModInfoUIDetails.h"
#include "ModioUIModEnableWidget.h"
#include "ModioUIModManagementEventReceiver.h"
#include "ModioUISubscriptionsChangedReceiver.h"
#include "ModioUIUserChangedReceiver.h"
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModOperationTrackerUserWidget.generated.h"

class UModioCommonImage;
class UModioCommonModOperationTrackerUserWidgetStyle;
class UModioCommonModOperationTrackerWidget;
class UModioCommonProgressBar;
class UModioCommonTextBlock;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonModOperationTrackerUserWidget : public UModioCommonActivatableWidget, public IModioModInfoUIDetails, public IModioExtendedModInfoUIDetails, public IModioUIModEnableWidget, public IModioUIModManagementEventReceiver, public IModioUISubscriptionsChangedReceiver, public IModioUIUserChangedReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonModOperationTrackerUserWidgetStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonModOperationTrackerWidget* Tracker;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonImage* IconImage;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* ModTitleTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* OverallOperationPercentageLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* OverallOperationPercentageTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* QueuedOperationNumberLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* QueuedOperationNumberTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* SpeedLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* SpeedTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonProgressBar* ModOperationProgressBar;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinDecimalsProgress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxDecimalsProgress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinDecimalsSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxDecimalsSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bTrackAnyMods;
    
public:
    UModioCommonModOperationTrackerUserWidget();

protected:
    UFUNCTION(BlueprintNativeEvent)
    void UpdateQueuedOperationNumber();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTrackingModID(FModioModID ModId);
    
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonModOperationTrackerUserWidgetStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnModOperationTrackerSpeedUpdated(FModioUnsigned64 DeltaBytes, double DeltaTime);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnModOperationTrackerProgressUpdated(FModioUnsigned64 Current, FModioUnsigned64 Total);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetNumOfQueuedMods() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCurrentDownloadingMod(FModioModCollectionEntry& OutDownloadingMod);
    

    // Fix for true pure virtual functions not being implemented
};

