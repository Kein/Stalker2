#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "ActorInteractionDataInterface.h"
#include "HitReceiver.h"
#include "Physible.h"
#include "UIDActor_ItemContainer.h"
#include "WeaponAttachMeshesData.h"
#include "InteractableItemContainer.generated.h"

class AActor;
class UDataLayerPhysicsComponent;
class UHittableComponent;
class UItemContainerInteractionComponent;
class ULaserSightComponent;
class UPhysicsInteractionComponent;
class UPhysicsSoundsComponent;

UCLASS(NotPlaceable)
class STALKER2_API AInteractableItemContainer : public AUIDActor_ItemContainer, public IActorInteractionDataInterface, public IHitReceiver, public IPhysible {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    UPhysicsSoundsComponent* PhysicsSoundsComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPhysicsInteractionComponent* PhysicsInteractionComponent;
    
    UPROPERTY(Instanced, Transient)
    UHittableComponent* HittableComponent;
    
    UPROPERTY(Instanced, Transient)
    ULaserSightComponent* LaserSightComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UDataLayerPhysicsComponent* DataLayerPhysicsComponent;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UItemContainerInteractionComponent* InteractionComponent;
    
    UPROPERTY()
    FWeaponAttachMeshesData WeaponAttachesData;
    
public:
    AInteractableItemContainer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    

    // Fix for true pure virtual functions not being implemented
};

