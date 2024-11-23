#pragma once
#include "CoreMinimal.h"
#include "OverridableProperty.h"
#include "StringOverridableProperty.generated.h"

USTRUCT()
struct FStringOverridableProperty : public FOverridableProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString DefaultValue;
    
    UPROPERTY(EditAnywhere)
    FString CurrentValue;
    
    STALKER2_API FStringOverridableProperty();
};

