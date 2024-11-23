#pragma once
#include "CoreMinimal.h"
#include "EModioInstalledFilterType.generated.h"

UENUM(BlueprintType)
enum class EModioInstalledFilterType : uint8 {
    None,
    CurrentUser,
    AnotherUser,
};

