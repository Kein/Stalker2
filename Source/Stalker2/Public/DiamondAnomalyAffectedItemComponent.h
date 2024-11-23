#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DiamondAnomalyAffectedItemComponent.generated.h"

class UAkAuxBus;
class UAkLateReverbComponent;
class UBoxComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class UPhysicalMaterial;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UDiamondAnomalyAffectedItemComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UNiagaraSystem* DiamondParticle;
    
    UPROPERTY(Transient)
    UPhysicalMaterial* OverridePhysicalMaterial;
    
    UPROPERTY(Instanced, Transient)
    TArray<UNiagaraComponent*> DiamondParticles;
    
    UPROPERTY(Transient)
    UAkAuxBus* DiamondAuxFilter;
    
    UPROPERTY(Instanced, Transient)
    UAkLateReverbComponent* DiamondAuxComponent;
    
    UPROPERTY(Instanced, Transient)
    UBoxComponent* DiamondFilterBounds;
    
public:
    UDiamondAnomalyAffectedItemComponent(const FObjectInitializer& ObjectInitializer);

};

