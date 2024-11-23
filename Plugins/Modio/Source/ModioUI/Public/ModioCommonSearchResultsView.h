#pragma once
#include "CoreMinimal.h"
#include "ModioModCategoryParams.h"
#include "ModioCommonModListBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonSearchResultsView.generated.h"

class UModioCommonButtonBase;
class UModioCommonFilteredModListView;
class UModioCommonModTagList;
class UModioCommonSearchResultsViewStyle;
class UModioCommonTextBlock;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonSearchResultsView : public UModioCommonModListBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonSearchResultsViewStyle> ModioStyle;
    
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonFilteredModListView* FilteredModListView;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* KeywordsLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* KeywordsDetailsTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* CategoriesLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonModTagList* CategoriesList;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* EditSearchButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* FilterCounterTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FModioModCategoryParams AppliedFilterParams;
    
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasEverPopulated;
    
    UModioCommonSearchResultsView();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSearchView();
    
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonSearchResultsViewStyle> InStyle);
    
};

