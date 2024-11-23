#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FlowerParticleComponent.generated.h"

class UNiagaraComponent;
class UShapeComponent;
class USplineComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFlowerParticleComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced, SaveGame)
    USplineComponent* Spline;
    
    UPROPERTY(EditAnywhere, Instanced, SaveGame)
    UShapeComponent* Collision;
    
    UPROPERTY(EditAnywhere, Instanced, SaveGame)
    UNiagaraComponent* Particle;
    
    UPROPERTY(EditAnywhere, SaveGame)
    float Speed;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    float Distance;
    
public:
    UFlowerParticleComponent(const FObjectInitializer& ObjectInitializer);

};

