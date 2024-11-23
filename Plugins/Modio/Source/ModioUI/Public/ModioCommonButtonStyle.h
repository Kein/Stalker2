#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonButtonStyle.generated.h"

class UModioCommonImageStyle;

UCLASS(Abstract)
class MODIOUI_API UModioCommonButtonStyle : public UCommonButtonStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonImageStyle> NormalIconStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonImageStyle> FocusedIconStyle;
    
    UModioCommonButtonStyle();

};

