#pragma once
#include "CoreMinimal.h"
#include "EHintProgressType.h"
#include "EMappingContext.h"
#include "HintViewSettings.generated.h"

USTRUCT(BlueprintType)
struct FHintViewSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName InputAction;
    
    UPROPERTY(EditAnywhere)
    EMappingContext MappingContext;
    
    UPROPERTY(EditAnywhere)
    int32 InputMappingIndex;
    
    UPROPERTY(EditAnywhere)
    EHintProgressType ProgressType;
    
    UPROPERTY(EditAnywhere)
    float HintHeight;
    
    UPROPERTY(EditAnywhere)
    FName CustomInputAction;
    
    STALKER2_API FHintViewSettings();
};

