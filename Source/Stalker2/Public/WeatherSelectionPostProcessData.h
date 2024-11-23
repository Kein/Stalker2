#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/Scene.h"
#include "WeatherSelectionPostProcessData.generated.h"

UCLASS(BlueprintType)
class STALKER2_API UWeatherSelectionPostProcessData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BlendRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FPostProcessSettings Settings;
    
    UWeatherSelectionPostProcessData();

};

