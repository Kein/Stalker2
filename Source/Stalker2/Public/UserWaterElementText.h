#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "UserWaterElementText.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UUserWaterElementText : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UTextBlock* WaterMarkText;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* WaterElementMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimationSpeed;
    
    UUserWaterElementText();

};

