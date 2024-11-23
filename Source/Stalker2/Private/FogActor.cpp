#include "FogActor.h"
#include "Components/StaticMeshComponent.h"

AFogActor::AFogActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FogMesh"));
    this->FogMesh = (UStaticMeshComponent*)RootComponent;
    this->FogPresets.AddDefaulted(9);
    this->DensityParamName = TEXT("DENSITY_GLOBAL");
    this->HeightMinParamName = TEXT("HeightMin");
    this->HeightMaxParamName = TEXT("HeightMax");
    this->DynamicMaterial = NULL;
}

FFogParams AFogActor::GetFogParamsForCurrentWeather() const {
    return FFogParams{};
}


