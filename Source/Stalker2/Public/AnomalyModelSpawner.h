#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrototypeSID.h"
#include "AnomalyModelSpawner.generated.h"

class USceneComponent;

UCLASS()
class AAnomalyModelSpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    USceneComponent* SceneComponent;
    
    UPROPERTY(EditAnywhere)
    FPrototypeSID PrototypeSID;
    
    UPROPERTY(EditAnywhere)
    bool bSpawnOnBeginPlay;
    
public:
    AAnomalyModelSpawner(const FObjectInitializer& ObjectInitializer);

};

