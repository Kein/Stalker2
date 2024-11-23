#pragma once
#include "CoreMinimal.h"
#include "EAttachItemType.generated.h"

UENUM(BlueprintType)
enum class EAttachItemType : uint8 {
    None,
    Required,
    Injector,
    Artifact,
    Mesh,
};

