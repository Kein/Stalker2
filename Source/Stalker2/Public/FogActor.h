#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FogParams.h"
#include "FogActor.generated.h"

class UMaterialInstanceDynamic;
class UStaticMeshComponent;

UCLASS(Abstract)
class STALKER2_API AFogActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* FogMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<FFogParams> FogPresets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName DensityParamName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName HeightMinParamName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName HeightMaxParamName;
    
private:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* DynamicMaterial;
    
public:
    AFogActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintPure)
    FFogParams GetFogParamsForCurrentWeather() const;
    
};

