#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HitReceiver.h"
#include "TouchComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTouchComponent : public UActorComponent, public IHitReceiver {
    GENERATED_BODY()
public:
    UTouchComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

