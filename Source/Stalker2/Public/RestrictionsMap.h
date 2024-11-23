#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RestrictionsMap.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FRestrictionsMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsFullBodyRotationBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UpperBodyHorizontalLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UpperBodyVerticalLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRotateFullBodyDespiteUpperBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteractLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOnlyHeadRotateOnUpperBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float bFullBodyRotateSatisfyAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator PoseRotationOffset;
    
    FRestrictionsMap();
};

