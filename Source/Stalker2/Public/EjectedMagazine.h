#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "EjectedMagazine.generated.h"

class UHittableComponent;
class UPhysicsSoundsComponent;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS()
class STALKER2_API AEjectedMagazine : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(Instanced, Transient)
    UPhysicsSoundsComponent* PhysicsSoundsComponent;
    
    UPROPERTY(Instanced, Transient)
    UHittableComponent* HittableComponent;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> OwnerActor;
    
public:
    AEjectedMagazine(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

