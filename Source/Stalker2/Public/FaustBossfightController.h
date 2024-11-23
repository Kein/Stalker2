#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ObjPrototypeSID.h"
#include "FaustBossfightController.generated.h"

class UNiagaraSystem;
class USignalSenderComponent;
class USphereComponent;

UCLASS()
class STALKER2_API AFaustBossfightController : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    USphereComponent* ControllerVolume;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* CloneSpawnEffect;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USignalSenderComponent* CloneKilledSender;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FTransform> CloneSpawnPoints;
    
    UPROPERTY(EditAnywhere)
    TArray<FObjPrototypeSID> ClonePrototypes;
    
    UPROPERTY(EditAnywhere)
    FObjPrototypeSID BossPrototype;
    
    UPROPERTY(EditAnywhere)
    float PlayerFieldOfViewAngle;
    
    UPROPERTY(EditAnywhere)
    float MinSpawnDistance;
    
public:
    AFaustBossfightController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TryTeleportBossToHiddenLocation();
    
    UFUNCTION(BlueprintCallable)
    void SetCloneSpawnEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCloneSwitch(const AActor* CloneActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCloneSpawned(const AActor* CloneActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCloneKilled(const AActor* CloneActor);
    
};

