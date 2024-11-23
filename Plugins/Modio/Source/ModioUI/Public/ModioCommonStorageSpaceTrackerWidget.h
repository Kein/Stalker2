#pragma once
#include "CoreMinimal.h"
#include "TickableModioCommonWidget.h"
#include "ModioCommonStorageSpaceTrackerWidget.generated.h"

UCLASS()
class MODIOUI_API UModioCommonStorageSpaceTrackerWidget : public UTickableModioCommonWidget {
    GENERATED_BODY()
public:
    // FIXME
    //UPROPERTY(BlueprintAssignable)
    //FOnStorageSpaceTrackerUpdated OnStorageSpaceTrackerUpdated;
    
    UModioCommonStorageSpaceTrackerWidget();

};

