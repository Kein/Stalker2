#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AITickComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UAITickComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAITickComponent(const FObjectInitializer& ObjectInitializer);

};

