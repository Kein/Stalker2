#pragma once
#include "CoreMinimal.h"
#include "EArtifactType.generated.h"

UENUM(BlueprintType)
enum class EArtifactType : uint8 {
    Fire,
    Electro,
    Gravity,
    Chemical,
    PSY,
    GetCount,
    Fake,
    None,
};

