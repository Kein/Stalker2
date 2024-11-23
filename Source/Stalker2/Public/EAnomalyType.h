#pragma once
#include "CoreMinimal.h"
#include "EAnomalyType.generated.h"

UENUM(BlueprintType)
enum class EAnomalyType : uint8 {
    None,
    CarouselAnomaly,
    ChemicalAnomaly,
    ClassicFireAnomaly,
    ClickerAnomaly,
    DiamondAnomaly,
    ElectroAnomaly,
    ExpulsionAnomaly,
    FlycatcherAnomaly,
    RazorAnomaly,
    LavaLampAnomaly,
    LightningBallAnomaly,
    PillowAnomaly,
    PSYAnomaly,
    PSYEmitterAnomaly,
    PSYControllerAnomaly,
    SoapBubbleAnomaly,
    ToxicCloudAnomaly,
    GetCount,
};

