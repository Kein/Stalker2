#pragma once
#include "CoreMinimal.h"
#include "ModioErrorCode.h"
#include "ModioModCollectionEntry.h"
#include "ModioModID.h"
#include "ModioUIModManagementEventReceiver.h"
#include "ModioUISubscriptionsChangedReceiver.h"
#include "ModioUIUserChangedReceiver.h"
#include "ModioCommonModListBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonCollectionView.generated.h"

class UListView;
class UModioCommonButtonBase;
class UModioCommonCollectionViewStyle;
class UModioCommonTextBlock;
class UPanelWidget;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonCollectionView : public UModioCommonModListBase, public IModioUIModManagementEventReceiver, public IModioUISubscriptionsChangedReceiver, public IModioUIUserChangedReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonCollectionViewStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* NoResultsContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* NumOfDownloadingModsTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* InstalledModsLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* InstalledModsDescriptionTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* NumOfInstalledModsTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* ErrorsTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* NumOfErrorsTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* ModList;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* FetchUpdateButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* FilterButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* FilterCounterTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSet<FModioModID> ModIDsWithErrors;
    
public:
    UModioCommonCollectionView();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMods();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateInputBindings();
    
    UFUNCTION(BlueprintCallable)
    void SortZToA(TArray<FModioModCollectionEntry>& ModListEntries);
    
    UFUNCTION(BlueprintCallable)
    void SortSizeOnDisk(TArray<FModioModCollectionEntry>& ModListEntries);
    
    UFUNCTION(BlueprintCallable)
    void SortRecentlyUpdated(TArray<FModioModCollectionEntry>& ModListEntries);
    
    UFUNCTION(BlueprintCallable)
    void SortAToZ(TArray<FModioModCollectionEntry>& ModListEntries);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSearchView();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonCollectionViewStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNoResultsVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDefaultCategoryFilterParams(bool bUserAuthenticated);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFetchUpdatesClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFetchExternalCompleted(FModioErrorCode ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void ApplySortingAndFiltering(TArray<FModioModCollectionEntry>& ModListEntries);
    

    // Fix for true pure virtual functions not being implemented
};

