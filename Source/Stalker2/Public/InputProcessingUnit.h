#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputBufferIPUStruct.h"
#include "InputProcessingUnit.generated.h"

UCLASS()
class STALKER2_API UInputProcessingUnit : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FInputBufferIPUStruct> InputBuffer;
    
public:
    UInputProcessingUnit();

};

