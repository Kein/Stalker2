#pragma once
#include "CoreMinimal.h"
#include "FloatParameter.h"
#include "LinearColorParameter.h"
#include "VolumetricCloudState.generated.h"

USTRUCT()
struct FVolumetricCloudState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatParameter CloudMapBias;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter CloudMapDensity;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter NoiseFlowMapAMultiplier;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter NoiseFlowMapABias;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter NoiseFlowMapADetail;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter NoiseFlowMapABottomNoise;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter NoiseFlowMapBBias;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter NoiseFlowMapBDetail;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter NoiseFlowMapBScale;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter BillowyStormyCloudsHeight;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter DensityVariationScale;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter DensityVariationPower;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter DensityVariationOutFirst;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter DensityVariationOutSecond;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter DensityVariationDarkMinDensity;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter CloudBaseCapMaskRadius;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter CloudBaseSpeedMultiplier;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter CloudBaseECX;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter CloudBasePreExponentialDensity;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter CloudBaseAlbedo;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter CloudBaseSecondAlbedo;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter EmissionParamPositionIntensity;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter EmissionParamColor;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter PhaseBlend;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter PhaseG;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter PhaseGSecond;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter MultiScatteringContribution;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter MultiScatteringOcclusion;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter MultiScatteringOcclusionPower;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter MultiScatteringEccentricity;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter LayerHeight;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter LayerBottomAltitude;
    
    STALKER2_API FVolumetricCloudState();
};

