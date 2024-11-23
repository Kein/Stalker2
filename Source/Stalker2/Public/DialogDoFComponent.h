#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DialogDoFComponent.generated.h"

class AWeatherController;
class UWorld;

UCLASS(DefaultConfig, Config=DialogSystem)
class STALKER2_API UDialogDoFComponent : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TWeakObjectPtr<AWeatherController> WeatherController;
    
    UPROPERTY()
    TWeakObjectPtr<UWorld> CachedWorld;
    
public:
    UDialogDoFComponent();

};

