#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StaticMeshBatcher.generated.h"

class UInstancedStaticMeshComponent;

UCLASS()
class STALKER2_API AStaticMeshBatcher : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<UInstancedStaticMeshComponent*> BatchedISM;
    
public:
    AStaticMeshBatcher(const FObjectInitializer& ObjectInitializer);

};

