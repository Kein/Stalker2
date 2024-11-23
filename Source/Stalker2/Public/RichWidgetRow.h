#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "RichWidgetRow.generated.h"

class UUserWidget;

USTRUCT()
struct STALKER2_API FRichWidgetRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> WidgetToDisplay;
    
    FRichWidgetRow();
};

