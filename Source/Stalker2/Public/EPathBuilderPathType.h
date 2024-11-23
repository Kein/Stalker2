#pragma once
#include "CoreMinimal.h"
#include "EPathBuilderPathType.generated.h"

UENUM()
enum class EPathBuilderPathType : int32 {
    FewCircles,
    Circle,
    ExpensiveActor,
    ShortPath,
    GameGraph,
};

