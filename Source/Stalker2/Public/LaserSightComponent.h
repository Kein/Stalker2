#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LaserSightComponent.generated.h"

class UMeshComponent;
class UNiagaraComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API ULaserSightComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    UMeshComponent* ParentMesh;
    
private:
    UPROPERTY(Instanced, Transient)
    UNiagaraComponent* LaserSightVFX;
    
public:
    ULaserSightComponent(const FObjectInitializer& ObjectInitializer);

};

