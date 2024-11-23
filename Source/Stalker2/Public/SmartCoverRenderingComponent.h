#pragma once
#include "CoreMinimal.h"
#include "Debug/DebugDrawComponent.h"
#include "SmartCoverRenderingComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API USmartCoverRenderingComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    USmartCoverRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

