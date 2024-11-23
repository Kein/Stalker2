#pragma once
#include "CoreMinimal.h"
#include "ModioValidationError.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioValidationError {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FString FieldName;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FString ValidationFailureDescription;
    
    FModioValidationError();
};

