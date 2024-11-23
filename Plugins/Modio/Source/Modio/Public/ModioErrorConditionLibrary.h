#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EModioErrorCondition.h"
#include "ModioErrorCode.h"
#include "ModioErrorConditionLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioErrorConditionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioErrorConditionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool ErrorCodeMatches(FModioErrorCode ErrorCode, EModioErrorCondition Condition);
    
};

