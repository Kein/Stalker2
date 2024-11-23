#pragma once
#include "CoreMinimal.h"
#include "Debug/DebugDrawComponent.h"
#include "WLCylinderShapeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UWLCylinderShapeComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    UWLCylinderShapeComponent(const FObjectInitializer& ObjectInitializer);

};

