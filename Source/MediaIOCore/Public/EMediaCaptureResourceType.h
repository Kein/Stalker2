#pragma once
#include "CoreMinimal.h"
#include "EMediaCaptureResourceType.generated.h"

UENUM(BlueprintType)
enum class EMediaCaptureResourceType : uint8 {
    Texture,
    Buffer,
};

