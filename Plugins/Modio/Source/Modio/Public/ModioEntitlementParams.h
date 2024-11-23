#pragma once
#include "CoreMinimal.h"
#include "ModioEntitlementParams.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioEntitlementParams {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TMap<FString, FString> ExtendedParameters;
    
public:
    FModioEntitlementParams();
};

