#pragma once
#include "CoreMinimal.h"
#include "EAnimGuitarState.generated.h"

UENUM(BlueprintType)
enum class EAnimGuitarState : uint8 {
    Enter,
    Exit,
    Chord1,
    Chord1m,
    Chord2,
    Chord2m,
    Chord3,
    Chord3m,
    Chord4,
    Chord4m,
    Chord5,
    Chord5m,
    Chord6,
    Chord6m,
    WithoutGuitar,
};

