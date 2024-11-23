#pragma once
#include "CoreMinimal.h"
#include "EModioModManagementEventType.generated.h"

UENUM(BlueprintType)
enum class EModioModManagementEventType : uint8 {
    Installed,
    Uninstalled,
    Updated,
    Uploaded,
    BeginInstall,
    BeginUninstall,
    BeginUpdate,
    BeginUpload,
};

