#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceBase.h"
#include "AnimInstanceCodelock.generated.h"

class UPlayerCodelockAnimCollection;

UCLASS(NonTransient)
class STALKER2_API UAnimInstanceCodelock : public UAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPlayerCodelockAnimCollection* CodelockAnimCollection;
    
public:
    UAnimInstanceCodelock();

};

