#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Scene.h"
#include "PostProcessSimplifiedSettings.generated.h"

USTRUCT(BlueprintType)
struct FPostProcessSimplifiedSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorSaturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorGamma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorSaturation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorContrast: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorGamma: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FilmToe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_FilmToe: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWeightedBlendables WeightedBlendables;
    
    STALKER2_API FPostProcessSimplifiedSettings();
};

