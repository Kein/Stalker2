#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSCBPFunctionLibrary.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType)
class UGSCBPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSCBPFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void SetAffectNavigationForComponent(UPrimitiveComponent* PrimitiveComponent, bool bCanAffect);
    
};

