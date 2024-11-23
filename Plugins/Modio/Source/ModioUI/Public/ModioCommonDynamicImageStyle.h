#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "ModioCommonImageStyle.h"
#include "ModioCommonDynamicImageStyle.generated.h"

UCLASS(Abstract)
class MODIOUI_API UModioCommonDynamicImageStyle : public UModioCommonImageStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush ImageLoadingBrush;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush ImageUnavailableBrush;
    
    UModioCommonDynamicImageStyle();

};

