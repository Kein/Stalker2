#pragma once
#include "CoreMinimal.h"
#include "EWidgetNameEx.generated.h"

UENUM()
enum class EWidgetNameEx : int32 {
    None = -1,
    MainMenu = 0,
    Inventory,
    Interact,
    InteractDots,
    DebugHUD,
    ItemSelector,
    AttachSelector,
    FastDialog,
    ImportantDialogue,
    Dialog,
    Subtitle,
    PDA,
    FadeView,
    GamePauseMenu,
    SleepView,
    Trade,
    Upgrade,
    DeathScreen,
    HUD,
    AutonomicTutorial,
    ReferenceTutorial,
    ReferenceTutorialLeft,
    SplashTutorial,
    IdleScreen,
    FirstTimeSettings,
    EULA,
    InspectArtifactView,
    NewDLCPopup,
    GuitarPlayView,
    SkipHint,
    Count,
};

