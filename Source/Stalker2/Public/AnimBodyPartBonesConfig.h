#pragma once
#include "CoreMinimal.h"
#include "EAnimHitBodyPart.h"
#include "AnimBodyPartBonesConfig.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimBodyPartBonesConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAnimHitBodyPart HitBodyPart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSet<FName> Bones;
    
    FAnimBodyPartBonesConfig();
};

