#pragma once
#include "CoreMinimal.h"
#include "ModioFilterParams.h"
#include "ModioUIModManagementEventReceiver.h"
#include "ModioUISubscriptionsChangedReceiver.h"
#include "ModioUIUserChangedReceiver.h"
#include "ModioCommonModListBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonFeaturedView.generated.h"

class UModioCommonFeaturedViewStyle;
class UModioCommonSearchResultsView;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonFeaturedView : public UModioCommonModListBase, public IModioUIUserChangedReceiver, public IModioUISubscriptionsChangedReceiver, public IModioUIModManagementEventReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonFeaturedViewStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonSearchResultsView* SearchResultsView;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FModioFilterParams PreviouslyAppliedFilter;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int64 OverriddenModsCount;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bWasFilterAppliedAtLeastOnce;
    
public:
    UModioCommonFeaturedView();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonFeaturedViewStyle> InStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshListByFilter(const FModioFilterParams& Filter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshListByCategoryName(FName InCategoryName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshList();
    

    // Fix for true pure virtual functions not being implemented
};

