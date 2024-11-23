#pragma once
#include "CoreMinimal.h"
#include "ModioCommonModListViewInterface.h"
#include "ModioCommonTileView.h"
#include "ModioCommonModTileView.generated.h"

UCLASS()
class MODIOUI_API UModioCommonModTileView : public UModioCommonTileView, public IModioCommonModListViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFocusOnceListIsPopulatedRequested;
    
public:
    UModioCommonModTileView();


    // Fix for true pure virtual functions not being implemented
};

