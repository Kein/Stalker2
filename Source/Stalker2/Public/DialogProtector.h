#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DialogProtector.generated.h"

class UBoxComponent;
class UGSCNavModifierComponent;

UCLASS()
class STALKER2_API ADialogProtector : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UGSCNavModifierComponent* SpaceRestrictor;
    
    UPROPERTY(Instanced)
    UBoxComponent* SpaceRestrictorShape;
    
public:
    ADialogProtector(const FObjectInitializer& ObjectInitializer);

};

