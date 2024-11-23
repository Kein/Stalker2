#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WetnessComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UWetnessComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UWetnessComponent(const FObjectInitializer& ObjectInitializer);

};

