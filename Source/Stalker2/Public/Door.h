#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "DoorMovableData.h"
#include "EDoorState.h"
#include "HitReceiver.h"
#include "LockableComponent.h"
#include "Door.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UDoor : public ULockableComponent, public IHitReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FDoorMovableData> Doors;
    
    UPROPERTY(EditAnywhere)
    bool bShouldRestoreAngle;
    
    UPROPERTY(EditAnywhere)
    bool bTaskCanBeInterrupted;
    
    UPROPERTY(EditAnywhere)
    bool bDoorCanBePushed;
    
    UPROPERTY(EditAnywhere)
    float InitialPushImpulseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngleRestoreSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngleRestoreDelay;
    
    UPROPERTY(VisibleAnywhere)
    EDoorState CurrentState;
    
    UDoor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnDoorMeshHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    

    // Fix for true pure virtual functions not being implemented
};

