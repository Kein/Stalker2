#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WorldPartition/DataLayer/DataLayerInstance.h"
#include "Engine/HitResult.h"
#include "HitReceiver.h"
#include "ObjectPhaseSettings.h"
#include "Physible.h"
#include "UIDActor_DestructibleObject.h"
#include "DestructibleObject.generated.h"

class AActor;
class UDataLayerInstance;
class UDataLayerPhysicsComponent;
class UExplosionComponent;
class UHittableComponent;
class UPhysicsInteractionComponent;
class UPhysicsSoundsComponent;
class UStaticMeshComponent;

UCLASS(NotPlaceable)
class STALKER2_API ADestructibleObject : public AUIDActor_DestructibleObject, public IHitReceiver, public IPhysible {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    UPhysicsInteractionComponent* PhysicsInteractionComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPhysicsSoundsComponent* PhysicsSoundsComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UExplosionComponent* ExplosionComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UHittableComponent* HittableComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UDataLayerPhysicsComponent* DataLayerPhysicsComponent;
    
public:
    UPROPERTY()
    TMap<FName, EDataLayerRuntimeState> NeededLayers;
    
    ADestructibleObject(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void TryAdjustPosition();
    
    UFUNCTION(BlueprintCallable)
    void StartDestructActions();
    
public:
    UFUNCTION()
    void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
private:
    UFUNCTION()
    void OnDataLayersUpdated(const UDataLayerInstance* DataLayer, EDataLayerRuntimeState State);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void GSCFramework_OnPreTransition(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void GSCFramework_OnPostTransition();
    
public:
    UFUNCTION(BlueprintPure)
    TArray<FObjectPhaseSettings> GSCFramework_GetObjectPhases() const;
    
    UFUNCTION(BlueprintPure)
    FObjectPhaseSettings GSCFramework_GetCurrentPhase() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentPhaseIndex() const;
    

    // Fix for true pure virtual functions not being implemented
};

