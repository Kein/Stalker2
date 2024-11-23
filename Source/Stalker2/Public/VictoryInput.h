#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EKeyCategory.h"
#include "VictoryInput.generated.h"

USTRUCT(BlueprintType)
struct FVictoryInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString KeyAsString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCmd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EKeyCategory Category;
    
    STALKER2_API FVictoryInput();
};

