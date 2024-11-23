#pragma once
#include "CoreMinimal.h"
#include "TargetMeleeSectorComponent.h"
#include "S2TargetMeleeSectorComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class US2TargetMeleeSectorComponent : public UTargetMeleeSectorComponent {
    GENERATED_BODY()
public:
    US2TargetMeleeSectorComponent(const FObjectInitializer& ObjectInitializer);

};

