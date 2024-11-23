#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioCommonCodeInputTextBoxInputStyle.h"
#include "ModioCommonCodeInputTextBoxStyle.generated.h"

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonCodeInputTextBoxStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FModioCommonCodeInputTextBoxInputStyle Style;
    
    UModioCommonCodeInputTextBoxStyle();

};

