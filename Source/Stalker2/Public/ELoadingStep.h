#pragma once
#include "CoreMinimal.h"
#include "ELoadingStep.generated.h"

UENUM(BlueprintType)
enum class ELoadingStep : uint8 {
    InitializingManagers,
    InitializingNewGame,
    StartingScripts,
    SpawningPlaceholders,
    InitializingWeather,
    LoadingNecessaryModels,
    LoadingNecessaryActors,
    LoadingStart,
    LoadingModelsData,
    LoadingManagersData,
    FinishingUp,
    Complete,
    GetCount,
};

