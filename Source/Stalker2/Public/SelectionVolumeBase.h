#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SelectionVolumeBase.generated.h"

class UShapeComponent;

UCLASS()
class STALKER2_API ASelectionVolumeBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UShapeComponent* CollisionComponent;
    
    ASelectionVolumeBase(const FObjectInitializer& ObjectInitializer);

};

