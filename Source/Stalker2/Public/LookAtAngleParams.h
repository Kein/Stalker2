#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LookAtAngleParams.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FLookAtAngleParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowEyeRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator MaxAngleOfEyeRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowHeadRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator MaxAngleOfHeadRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowBodyRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator MaxAngleOfBodyRotate;
    
    FLookAtAngleParams();
};

