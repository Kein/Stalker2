#pragma once
#include "CoreMinimal.h"
#include "ReactionDesc.h"
#include "RelationRequestDesc.generated.h"

USTRUCT()
struct FRelationRequestDesc {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FReactionDesc> Reactions;
    
    STALKER2_API FRelationRequestDesc();
};

