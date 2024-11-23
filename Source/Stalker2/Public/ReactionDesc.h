#pragma once
#include "CoreMinimal.h"
#include "ERelationLevel.h"
#include "ReactionDesc.generated.h"

USTRUCT()
struct FReactionDesc {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    ERelationLevel RelationToProvoker;
    
    UPROPERTY(VisibleAnywhere)
    ERelationLevel RelationToRequester;
    
    UPROPERTY(VisibleAnywhere)
    int32 ReactionValue;
    
    STALKER2_API FReactionDesc();
};

