#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeleportPoint.generated.h"

class UArrowComponent;
class UBillboardComponent;

UCLASS(MinimalAPI)
class ATeleportPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
private:
    UPROPERTY(Instanced)
    UBillboardComponent* SpriteComponent;
    
    UPROPERTY(Instanced)
    UArrowComponent* ArrowComponent;
    
public:
    ATeleportPoint(const FObjectInitializer& ObjectInitializer);

};

