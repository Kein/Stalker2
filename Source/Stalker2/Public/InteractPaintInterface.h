#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractPaintInterface.generated.h"

UINTERFACE(Blueprintable)
class UInteractPaintInterface : public UInterface {
    GENERATED_BODY()
};

class IInteractPaintInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPaintSettingsChanged(const bool bInteractPaint);
    
};

