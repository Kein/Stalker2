#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceBase.h"
#include "InjectorAnimations.h"
#include "AnimInstancePlayerInjector.generated.h"

UCLASS(NonTransient)
class STALKER2_API UAnimInstancePlayerInjector : public UAnimInstanceBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FInjectorAnimations InjectorAnimations;
    
public:
    UAnimInstancePlayerInjector();

};

