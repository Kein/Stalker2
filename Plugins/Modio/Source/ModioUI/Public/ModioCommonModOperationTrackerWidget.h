#pragma once
#include "CoreMinimal.h"
#include "ModioModID.h"
#include "ModioUnsigned64.h"
#include "ModioExtendedModInfoUIDetails.h"
#include "ModioModInfoUIDetails.h"
#include "ModioUIModEnableWidget.h"
#include "ModioUIModManagementEventReceiver.h"
#include "TickableModioCommonWidget.h"
#include "ModioCommonModOperationTrackerWidget.generated.h"

UCLASS()
class MODIOUI_API UModioCommonModOperationTrackerWidget : public UTickableModioCommonWidget, public IModioModInfoUIDetails, public IModioExtendedModInfoUIDetails, public IModioUIModManagementEventReceiver, public IModioUIModEnableWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCommonModOperationTrackerSpeed, FModioUnsigned64, DeltaBytes, double, DeltaTime);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCommonModOperationTrackerProgress, FModioUnsigned64, Current, FModioUnsigned64, Total);
    
    UPROPERTY(BlueprintAssignable)
    FOnCommonModOperationTrackerProgress OnProgress;
    
    UPROPERTY(BlueprintAssignable)
    FOnCommonModOperationTrackerSpeed OnSpeed;
    
    UModioCommonModOperationTrackerWidget();

    UFUNCTION(BlueprintCallable)
    void SetTrackingModID(FModioModID ModId);
    
    UFUNCTION(BlueprintCallable)
    void SetTrackAnyMods(bool bInTrackAnyMods);
    
    UFUNCTION(BlueprintPure)
    int64 GetPreviewTotal() const;
    
    UFUNCTION(BlueprintPure)
    int64 GetPreviewCurrent() const;
    

    // Fix for true pure virtual functions not being implemented
};

