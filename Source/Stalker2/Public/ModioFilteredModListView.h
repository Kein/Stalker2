#pragma once
#include "CoreMinimal.h"
#include "ModioCommonFilteredModListView.h"
#include "ModioFilteredModListView.generated.h"

class UModioModListPageInfo;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UModioFilteredModListView : public UModioCommonFilteredModListView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioModListPageInfo* PageInfo;
    
public:
    UModioFilteredModListView();

};

