#pragma once
#include "CoreMinimal.h"
#include "EDialogAction.generated.h"

UENUM()
enum class EDialogAction {
    None,
    TerminateDialog,
    TimedAnswer,
    FastTravel = 4,
    OpenTradeMenu = 8,
    OpenUpgradeMenu = 16,
    Heal = 32,
    Bribe = 64,
    GetMoney = 128,
    ShowMoney = 256,
    Attack = 512,
    Hit = 1024,
    GiveMedkit = 2048,
    Bye = 4096,
    ShowItem = 8192,
    RankCheck = 16384,
    FactionRelationshipCheck = 32768,
    GiveItem = 65536,
    GetItem = 131072,
    Guide = 262144,
    GuideUI = 524288,
    GuideSelection = 1048576,
    Threat = 2097152,
    Eat = 4194304,
    Drink = 8388608,
    SideQuest = 16777216,
    Reward = 33554432,
    SetGlobalVariable = 67108864,
    Laugh = 134217728,
    VisibleAsUILabel = 66844668,
    LastPhraseAction = 147062784,
};

