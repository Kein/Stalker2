#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceBase.h"
#include "AnimInstanceItem.generated.h"

class UItemAnimCollection;

UCLASS(NonTransient)
class STALKER2_API UAnimInstanceItem : public UAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UItemAnimCollection* ItemAnimCollection;
    
public:
    UAnimInstanceItem();

};

