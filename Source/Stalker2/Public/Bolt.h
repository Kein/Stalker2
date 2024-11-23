#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "Bolt.generated.h"

class UHittableComponent;
class UPhysicsInteractionComponent;
class UPhysicsSoundsComponent;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS()
class STALKER2_API ABolt : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UHittableComponent* HittableComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPhysicsInteractionComponent* PhysicsInteractionComponent;
    
    UPROPERTY(Instanced, Transient)
    UPhysicsSoundsComponent* PhysicsSoundsComponent;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BoltComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrototypeID;
    
public:
    ABolt(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

