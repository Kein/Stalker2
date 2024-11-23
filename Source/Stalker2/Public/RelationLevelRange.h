#pragma once
#include "CoreMinimal.h"
#include "RelationLevelRange.generated.h"

USTRUCT()
struct FRelationLevelRange {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 Start;
    
    UPROPERTY(VisibleAnywhere)
    int32 End;
    
    STALKER2_API FRelationLevelRange();
};

