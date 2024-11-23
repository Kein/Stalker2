#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UID.h"
#include "ExplosionHitArgs.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct STALKER2_API FExplosionHitArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector ExplosionLocation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float ExplosionRadius;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AActor* ExplosiveActor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString ExplosiveActorPrototypeID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FUID ExplosionInstigatorUID;
    
    FExplosionHitArgs();
};

