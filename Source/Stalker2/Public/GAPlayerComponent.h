#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GAPlayerComponent.generated.h"

class UGAPlayerProcessorInterface;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGAPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UGAPlayerProcessorInterface*> Processors;
    
public:
    UGAPlayerComponent(const FObjectInitializer& ObjectInitializer);

};

