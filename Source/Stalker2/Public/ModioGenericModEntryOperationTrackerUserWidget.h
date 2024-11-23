#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ModioCommonModOperationTrackerUserWidget.h"
#include "ModioGenericModEntryOperationTrackerUserWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UModioGenericModEntryOperationTrackerUserWidget : public UModioCommonModOperationTrackerUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DefaultImageColorTint;
    
    UModioGenericModEntryOperationTrackerUserWidget();

};

