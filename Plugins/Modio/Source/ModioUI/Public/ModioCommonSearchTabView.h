#pragma once
#include "CoreMinimal.h"
#include "ModioFilterParams.h"
#include "ModioModCategoryParams.h"
#include "Types/SlateEnums.h"
#include "ModioCommonSearchViewBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonSearchTabView.generated.h"

class UModioCommonBorder;
class UModioCommonButtonBase;
class UModioCommonEditableTextBox;
class UModioCommonFilteringView;
class UModioCommonSearchTabViewStyle;
class UModioCommonTextBlock;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonSearchTabView : public UModioCommonSearchViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonSearchTabViewStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonBorder* InternalBackgroundBorder;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonBorder* OverlayBackgroundBorder;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* SearchTabTitleTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonFilteringView* FilteringView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonEditableTextBox* SearchTextBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* CloseButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* SearchButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* ResetButton;
    
public:
    UModioCommonSearchTabView();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSearchResults();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonSearchTabViewStyle> InStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Reset();
    
protected:
    UFUNCTION()
    void OnSearchTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FModioModCategoryParams GetFilterParamsWrapper() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FModioFilterParams GetFilterParams() const;
    
};

