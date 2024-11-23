#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Framework/Views/ITypedTableView.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateTypes.h"
#include "ModioCommonListViewStyle.generated.h"

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonListViewStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTableViewStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FScrollBarStyle ScrollBarStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ESelectionMode::Type> SelectionMode;
    
    UModioCommonListViewStyle();

};

