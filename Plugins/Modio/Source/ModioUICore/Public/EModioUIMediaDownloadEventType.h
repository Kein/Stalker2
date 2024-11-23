#pragma once
#include "CoreMinimal.h"
#include "EModioUIMediaDownloadEventType.generated.h"

UENUM(BlueprintType)
enum class EModioUIMediaDownloadEventType : uint8 {
    ModGalleryImages,
    ModCreatorAvatarImage,
    ModLogo,
};

