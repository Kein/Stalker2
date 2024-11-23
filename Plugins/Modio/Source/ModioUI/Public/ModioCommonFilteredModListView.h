#pragma once
#include "CoreMinimal.h"
#include "ModioUIAsyncOperationWidget.h"
#include "ModioUIModInfoReceiver.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonModListViewInterface.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonFilteredModListView.generated.h"

class UListView;
class UModioCommonButtonBase;
class UModioCommonErrorWithRetryWidget;
class UModioCommonFilteredModListViewStyle;
class UModioCommonTextBlock;
class UPanelWidget;
class UWidget;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonFilteredModListView : public UModioCommonActivatableWidget, public IModioCommonModListViewInterface, public IModioUIModInfoReceiver, public IModioUIAsyncOperationWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSetModsFromModInfoListDynamicStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSetModsFromModInfoListDynamicFinished);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonFilteredModListViewStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* ModList;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* InitialScreenContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* NoResultsContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* PageNavigationContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* PreviousPageButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* NextPageButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* CurrentPageTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* TotalPagesTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* TotalModsTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidget* ModListLoader;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonErrorWithRetryWidget* ErrorWithRetryWidget;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnSetModsFromModInfoListDynamicStarted OnSetModsFromModInfoListDynamicStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnSetModsFromModInfoListDynamicFinished OnSetModsFromModInfoListDynamicFinished;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bHasSearchedBefore;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int64 CurrentPageIndex;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int64 TotalMods;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int64 PageSize;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int64 TotalPages;
    
public:
    UModioCommonFilteredModListView();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateInputActions();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonFilteredModListViewStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPageNavigationVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNoResultsVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInitialScreenVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePreviousPageClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleNextPageClicked();
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 GetNumItemsSelected() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 GetNumItems() const;
    

    // Fix for true pure virtual functions not being implemented
};

