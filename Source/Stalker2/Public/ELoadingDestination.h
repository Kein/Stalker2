#pragma once
#include "CoreMinimal.h"
#include "ELoadingDestination.generated.h"

UENUM(BlueprintType)
enum class ELoadingDestination : uint8 {
    None,
    MainMenu,
    NewGame,
    LoadGame,
    FastTravel,
    BridgeBetweenCutscenes,
    Teleport,
    QuestTeleport,
    IntroductionLogo,
    DefaultTeleport,
    WhiteBridgeBetweenCutscenes,
};

