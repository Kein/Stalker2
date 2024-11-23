#pragma once
#include "CoreMinimal.h"
#include "EAgentTypeMask.generated.h"

UENUM()
enum class EAgentTypeMask : uint32 {
    None,
    Human,
    MutantGeneric,
    Bloodsucker = 4,
    BlindDog = 8,
    Flesh = 16,
    Boar = 32,
    Controller = 64,
    Poltergeist = 128,
    Pseudogiant = 256,
    Snork = 512,
    Burer = 1024,
    Chimera = 2048,
    Cat = 4096,
    Tushkan = 8192,
    RatSwarm = 16384,
    PseudoDog = 32768,
    Deer = 65536,
    Mutants = 131070,
    CloseCombatAgent = 96574,
    DeffensiveCombatAgent = 1216,
    SmallNavAgent = 24576,
    DefaultNavAgent = 38607,
    LargeNavAgent = 67888,
    AgentsCrushingStaticDestructs = 106495,
    AgentsAvoidingStaticDestructs = Tushkan,
    Default = 4294967295,
};

