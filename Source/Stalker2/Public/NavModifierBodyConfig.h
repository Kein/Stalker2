#pragma once
#include "CoreMinimal.h"
#include "NavModifierBodyConfig.generated.h"

USTRUCT(BlueprintType)
struct FNavModifierBodyConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName PhysicalBodyName;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> ShapeIndexesToProcess;
    
    STALKER2_API FNavModifierBodyConfig();
};

