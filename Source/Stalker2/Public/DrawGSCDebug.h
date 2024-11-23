#pragma once
#include "CoreMinimal.h"
#include "Debug/DebugDrawComponent.h"
#include "DrawGSCDebug.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDrawGSCDebug : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    UDrawGSCDebug(const FObjectInitializer& ObjectInitializer);

};

