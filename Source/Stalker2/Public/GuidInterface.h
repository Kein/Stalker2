#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "GuidInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UGuidInterface : public UInterface {
    GENERATED_BODY()
};

class IGuidInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FGuid GetGUID() const PURE_VIRTUAL(GetGUID, return FGuid{};);
    
};

