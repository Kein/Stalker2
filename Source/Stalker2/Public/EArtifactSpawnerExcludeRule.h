#pragma once
#include "CoreMinimal.h"
#include "EArtifactSpawnerExcludeRule.generated.h"

UENUM(BlueprintType)
enum class EArtifactSpawnerExcludeRule : uint8 {
    None,
    ExcludeQuestArtifacts,
    ExcludeArchiArtifacts,
    All,
};

