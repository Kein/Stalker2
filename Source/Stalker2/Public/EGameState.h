#pragma once
#include "CoreMinimal.h"
#include "EGameState.generated.h"

UENUM(BlueprintType)
enum class EGameState : uint8 {
    Init,
    LoadingInEditor,
    Loading,
    Idle,
    EULA,
    FirstTimeSettings,
    MainMenu,
    IntroTrailer,
    GameplayCutScene,
    Game,
};

