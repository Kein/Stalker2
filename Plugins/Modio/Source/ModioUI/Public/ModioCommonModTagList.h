#pragma once
#include "CoreMinimal.h"
#include "ModioModTag.h"
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModTagList.generated.h"

class UModioCommonModTagEntry;
class UPanelWidget;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonModTagList : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TSubclassOf<UModioCommonModTagEntry> TagEntryClass;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UPanelWidget* TagsContainer;
    
public:
    UModioCommonModTagList();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTagsString(const TArray<FString>& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTags(const TArray<FModioModTag>& ModTags);
    
};

