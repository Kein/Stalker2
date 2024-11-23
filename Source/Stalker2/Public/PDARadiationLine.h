#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "PDARadiationLine.generated.h"

class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UPDARadiationLine : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* MoveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShoudBlockAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveAnimSpeed;
    
    UPDARadiationLine();

};

