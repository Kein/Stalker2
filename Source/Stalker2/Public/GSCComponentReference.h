#pragma once
#include "CoreMinimal.h"
#include "GSCComponentReference.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct STALKER2_API FGSCComponentReference {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AActor> OtherActor;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName ComponentProperty;
    
    UPROPERTY(EditDefaultsOnly)
    FString PathToComponent;
    
    FGSCComponentReference();
};

