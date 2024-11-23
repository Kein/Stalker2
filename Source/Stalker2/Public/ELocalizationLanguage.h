#pragma once
#include "CoreMinimal.h"
#include "ELocalizationLanguage.generated.h"

UENUM(BlueprintType)
enum class ELocalizationLanguage : uint8 {
    Ukrainian,
    English,
    German,
    French,
    SpanishEuropean,
    Italian,
    Polish,
    Czech,
    Turkish,
    Serbian,
    PortugalBrazilian,
    SpanishLatinoAmerican,
    Arabic,
    ChineseSimplified,
    ChineseTraditional,
    Japanese,
    Korean,
    Russian,
    GetCount,
    GetAudioCount = German,
};

