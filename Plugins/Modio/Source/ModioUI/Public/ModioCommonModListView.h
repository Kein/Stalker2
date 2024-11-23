#pragma once
#include "CoreMinimal.h"
#include "ModioCommonListView.h"
#include "ModioCommonModListViewInterface.h"
#include "ModioCommonModListView.generated.h"

UCLASS()
class MODIOUI_API UModioCommonModListView : public UModioCommonListView, public IModioCommonModListViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFocusOnceListIsPopulatedRequested;
    
public:
    UModioCommonModListView();


    // Fix for true pure virtual functions not being implemented
};

