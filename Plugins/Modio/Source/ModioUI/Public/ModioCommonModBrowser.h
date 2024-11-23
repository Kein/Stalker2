#pragma once
#include "CoreMinimal.h"
#include "ModioModInfo.h"
#include "ModioModCategoryParams.h"
#include "EModioCommonSearchViewType.h"
#include "ModioCommonModBrowserBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModBrowser.generated.h"

class UModioCommonActionBar;
class UModioCommonActivatableWidget;
class UModioCommonActivatableWidgetStack;
class UModioCommonTabListWidgetBase;
class UModioCommonUserProfileBase;
class UWidget;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonModBrowser : public UModioCommonModBrowserBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidget* NotificationController;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonUserProfileBase* UserProfile;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTabListWidgetBase* TabList;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonActivatableWidgetStack* ContentStack;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonActivatableWidgetStack* AuthStack;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonActivatableWidgetStack* ReportStack;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonActivatableWidgetStack* RightTabStack;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonActivatableWidgetStack* DialogStack;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonActionBar* ActionBar;
    
public:
    UModioCommonModBrowser();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShowSearchView(EModioCommonSearchViewType SearchType, const FModioModCategoryParams& CurrentFilterParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShowQuickAccessView();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShowModDetailsView(const FModioModInfo& ModInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShowFeaturedView();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShowCollectionView();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveTab(FName TabNameID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HideSearchView();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HideReportMod();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HideQuickAccessView();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HideModDetailsView();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HideFeaturedView();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HideCollectionView();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleViewChanged();
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool GetViewFromTabNameID(FName TabNameID, TSubclassOf<UModioCommonActivatableWidget>& OutView) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearTabs();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddTab(FName TabNameID, const FText& TabText, TSubclassOf<UModioCommonActivatableWidget> ContentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddEmptyTab(FName TabNameID, const FText& TabText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddContentForTab(FName TabNameID, TSubclassOf<UModioCommonActivatableWidget> ContentClass, UModioCommonActivatableWidget*& OutContent);
    
};

