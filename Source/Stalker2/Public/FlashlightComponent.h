#pragma once
#include "CoreMinimal.h"
#include "ElectricComponent.h"
#include "FlashlightComponent.generated.h"

class UCurveFloat;
class UMaterialInstanceDynamic;
class UMeshComponent;
class USceneComponent;
class USpotLightComponent;
class UStaticMeshComponent;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UFlashlightComponent : public UElectricComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UMeshComponent* MainMeshComponent;
    
    UPROPERTY(EditAnywhere, Instanced)
    UStaticMeshComponent* FakeLightBeamComponent;
    
    UPROPERTY(EditAnywhere, Instanced)
    USpotLightComponent* SpotLightComponent;
    
    UPROPERTY(EditAnywhere, Instanced)
    USpotLightComponent* ExtraSpotLightComponent;
    
    UPROPERTY(EditAnywhere, Instanced)
    USceneComponent* TopAttachmentComponent;
    
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    UMeshComponent* ParentMeshComponent;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* InnerRadiusCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* OuterRadiusCurve;
    
    UPROPERTY(Transient)
    TArray<UMaterialInstanceDynamic*> DynamicMaterials;
    
    UPROPERTY(Instanced, Transient)
    TArray<UMeshComponent*> CreatedMeshes;
    
public:
    UFlashlightComponent(const FObjectInitializer& ObjectInitializer);

};

