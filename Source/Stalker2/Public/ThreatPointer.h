#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "ThreatPointer.generated.h"

class UImage;
class USizeBox;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UThreatPointer : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* AlertAnimation;
    
    UPROPERTY(Instanced)
    UImage* ThreatLevelVisualizer;
    
    UPROPERTY(Instanced)
    USizeBox* CircleSize;
    
public:
    UThreatPointer();

};

