#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSCAblityBlueprintFunctions.generated.h"

class AActor;

UCLASS(BlueprintType)
class STALKER2_API UGSCAblityBlueprintFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSCAblityBlueprintFunctions();

private:
    UFUNCTION(BlueprintCallable)
    static void ExecuteAbilityByActivationTagAttackPayload(AActor* Actor, FName ActivationTag);
    
};

