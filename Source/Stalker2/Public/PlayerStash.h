#pragma once
#include "CoreMinimal.h"
#include "InteractableObject.h"
#include "PlayerStash.generated.h"

class UAnimatedItemContainerInteractionComponent;
class USkeletalMeshComponent;

UCLASS()
class STALKER2_API APlayerStash : public AInteractableObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UAnimatedItemContainerInteractionComponent* InteractionComponent;
    
public:
    APlayerStash(const FObjectInitializer& ObjectInitializer);

};

