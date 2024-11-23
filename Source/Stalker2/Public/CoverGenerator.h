#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoverGenerator.generated.h"

class USmartCoverRenderingComponent;

UCLASS()
class ACoverGenerator : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(DuplicateTransient, EditAnywhere, Instanced, Transient)
    USmartCoverRenderingComponent* DebugRenderingComp;
    
public:
    ACoverGenerator(const FObjectInitializer& ObjectInitializer);

};

