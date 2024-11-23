#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Styling/SlateBrush.h"
#include "ModioCommonImageStyle.generated.h"

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonImageStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush ImageFrameBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush ImageBrush;
    
    UModioCommonImageStyle();

};

