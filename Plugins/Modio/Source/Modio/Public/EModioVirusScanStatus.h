#pragma once
#include "CoreMinimal.h"
#include "EModioVirusScanStatus.generated.h"

UENUM(BlueprintType)
enum class EModioVirusScanStatus : uint8 {
    NotScanned,
    ScanComplete,
    InProgress,
    TooLargeToScan,
    FileNotFound,
    ErrorScanning,
};

