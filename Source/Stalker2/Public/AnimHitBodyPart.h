#pragma once
#include "CoreMinimal.h"
#include "AnimationSingleHit.h"
#include "EAnimHitBodyPartType.h"
#include "AnimHitBodyPart.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHitBodyPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FAnimationSingleHit FirstHit;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimationSingleHit SecondHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinimalAngleBetweenHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName NextHitAvailableCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> AvailiableParentBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> ExcludedParentBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAnimHitBodyPartType BodyType;
    
    FAnimHitBodyPart();
};

