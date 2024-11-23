#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EmptyObject.generated.h"

class UBoxComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class STALKER2_API AEmptyObject : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    USceneComponent* SceneComponent;
    
    UPROPERTY(EditAnywhere, Instanced)
    UBoxComponent* BoxCollision;
    
    UPROPERTY(EditAnywhere, Instanced)
    UStaticMeshComponent* StaticMesh;
    
    AEmptyObject(const FObjectInitializer& ObjectInitializer);

};

