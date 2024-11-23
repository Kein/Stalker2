#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceBase.h"
#include "AnimInstancePlayerDetector.generated.h"

class UPlayerDetectorAnimCollection;

UCLASS(NonTransient)
class STALKER2_API UAnimInstancePlayerDetector : public UAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPlayerDetectorAnimCollection* DetectorAnimCollection;
    
public:
    UAnimInstancePlayerDetector();

};

