#pragma once
#include "CoreMinimal.h"
#include "EPrototypeClass.h"
#include "PrototypeSID.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FPrototypeSID {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Value;
    
private:
    UPROPERTY()
    EPrototypeClass PrototypeClass;
    
    UPROPERTY()
    FName Subtype;
    
public:
    FPrototypeSID();
};

