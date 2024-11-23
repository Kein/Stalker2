#pragma once
#include "CoreMinimal.h"
#include "Debug/DebugDrawComponent.h"
#include "PathBuilderDrawComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPathBuilderDrawComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    UPathBuilderDrawComponent(const FObjectInitializer& ObjectInitializer);

};

