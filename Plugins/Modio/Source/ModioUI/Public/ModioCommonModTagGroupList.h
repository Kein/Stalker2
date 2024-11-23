#pragma once
#include "CoreMinimal.h"
#include "ModioModTagInfo.h"
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModTagGroupList.generated.h"

class UModioCommonModTagEntry;
class UModioCommonTextBlock;
class UPanelWidget;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonModTagGroupList : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UModioCommonModTagEntry> TagEntryClass;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* TagGroupNameTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* TagsContainer;
    
public:
    UModioCommonModTagGroupList();

protected:
    UFUNCTION(BlueprintNativeEvent)
    void UpdateSelection(UModioCommonModTagEntry* ModTagEntry, bool bIsSelected);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void SetTagsGroup(const FModioModTagInfo& TagInfo);
    
    UFUNCTION(BlueprintNativeEvent)
    bool SetSelectedTagGroupValues(const TArray<FString>& TagGroupValues, bool bSelect);
    
    UFUNCTION(BlueprintNativeEvent)
    void ResetTagsSelection();
    
    UFUNCTION(BlueprintNativeEvent)
    bool GetSelectedTagGroupValues(UPARAM(Ref) TArray<FString>& OutSelectedTagGroupValues) const;
    
};

