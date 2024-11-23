#pragma once
#include "CoreMinimal.h"
#include "ModioModTagInfo.h"
#include "ModioModCategoryParams.h"
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonFilteringView.generated.h"

class UModioCommonModTagGroupList;
class UPanelWidget;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonFilteringView : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* FilteringTagsContainer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonModTagGroupList> TagGroupListClass;
    
public:
    UModioCommonFilteringView();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SynchronizeFilterParams(const TArray<FString>& PreviouslySelectedTagGroupValues);
    
    UFUNCTION(BlueprintNativeEvent)
    bool SetSelectedTagGroupValues(const TArray<FString>& TagGroupValues, bool bSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetFiltering();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool GetSelectedTagGroupValues(UPARAM(Ref) TArray<FString>& OutSelectedTagGroupValues) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FModioModCategoryParams GetFilterParamsWrapper() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddModTagInfo(const FModioModTagInfo& ModTagInfo);
    
};

