#pragma once
#include "CoreMinimal.h"
#include "BodyMeshSIDSelector.generated.h"

USTRUCT()
struct STALKER2_API FBodyMeshSIDSelector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Value;
    
    FBodyMeshSIDSelector();
};

