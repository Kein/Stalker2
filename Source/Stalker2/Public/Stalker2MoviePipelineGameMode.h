#pragma once
#include "CoreMinimal.h"
#include "Stalker2GameMode.h"
#include "Stalker2MoviePipelineGameMode.generated.h"

UCLASS(MinimalAPI, NonTransient)
class AStalker2MoviePipelineGameMode : public AStalker2GameMode {
    GENERATED_BODY()
public:
    AStalker2MoviePipelineGameMode(const FObjectInitializer& ObjectInitializer);

};

