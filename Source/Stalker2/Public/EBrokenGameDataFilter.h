#pragma once
#include "CoreMinimal.h"
#include "EBrokenGameDataFilter.generated.h"

UENUM(BlueprintType)
enum class EBrokenGameDataFilter : uint8 {
    None,
    QuestPart,
    UnderDraftComment,
    IsInWhiteList,
    GetCount,
};

