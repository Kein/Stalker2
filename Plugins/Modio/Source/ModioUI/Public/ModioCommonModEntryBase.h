#pragma once
#include "CoreMinimal.h"
#include "ModioExtendedModInfoUIDetails.h"
#include "ModioModInfoUIDetails.h"
#include "ModioUIAuthenticationChangedReceiver.h"
#include "ModioUIMediaDownloadCompletedReceiver.h"
#include "ModioUIModEnableWidget.h"
#include "ModioUIModManagementEventReceiver.h"
#include "ModioUISubscriptionsChangedReceiver.h"
#include "ModioUIUserChangedReceiver.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonModEntryBase.generated.h"

class UModioCommonModOperationTrackerUserWidget;
class UModioCommonModOperationTrackerWidget;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonModEntryBase : public UModioCommonActivatableWidget, public IUserObjectListEntry, public IModioUIUserChangedReceiver, public IModioUIMediaDownloadCompletedReceiver, public IModioUIAuthenticationChangedReceiver, public IModioUISubscriptionsChangedReceiver, public IModioUIModEnableWidget, public IModioUIModManagementEventReceiver, public IModioModInfoUIDetails, public IModioExtendedModInfoUIDetails {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonModOperationTrackerUserWidget* ModOperationTrackerUserWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonModOperationTrackerWidget* ModOperationTrackerWidget;
    
public:
    UModioCommonModEntryBase();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateStyling(bool bIsListItemSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateInputActions();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectModListItem();
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsUserAuthenticated() const;
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsModListItemValid() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsModListItemSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeselectModListItem();
    

    // Fix for true pure virtual functions not being implemented
};

