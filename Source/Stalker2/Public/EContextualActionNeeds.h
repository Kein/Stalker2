#pragma once
#include "CoreMinimal.h"
#include "EContextualActionNeeds.generated.h"

UENUM()
enum class EContextualActionNeeds : uint32 {
    None = 1,
    Idle,
    Rest = 4,
    Sleep = 8,
    Smoke = 16,
    Drink = 32,
    Eat = 64,
    Guitar = 128,
    Work = 256,
    PDA = 512,
    Detector = 1024,
    Guard = 2048,
    WeaponCleaning = 4096,
    Patrolling = 8192,
    Fight = 16384,
    Quest = 32768,
    Emission = 65536,
    Monolog = 131072,
    Dialog = 262144,
    FallbackIdle = 524288,
    Anecdote = 1048576,
    Count = 21,
};

