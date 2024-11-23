#pragma once
#include "CoreMinimal.h"
#include "InputProcessingUnit.h"
#include "AttachSelectorSelectUnselectIPU.generated.h"

class UInputTrigger;

UCLASS()
class STALKER2_API UAttachSelectorSelectUnselectIPU : public UInputProcessingUnit {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UInputTrigger* TriggerWithBiggestTime;
    
public:
    UAttachSelectorSelectUnselectIPU();

};

