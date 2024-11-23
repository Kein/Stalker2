#pragma once
#include "CoreMinimal.h"
#include "ESettingCategoryType.generated.h"

UENUM(BlueprintType)
enum class ESettingCategoryType : uint8 {
    None,
    Gameplay,
    Input,
    InputMappings,
    UI,
    Audio,
    Graphics,
    Display,
    Accessibility,
    FirstTime,
    Debug,
    All,
    GetCount,
};

