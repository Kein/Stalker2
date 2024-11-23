#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ESpawnSource.h"
#include "EncounterSpawnPointData.h"
#include "EncounterNPCSpawner.generated.h"

class USignalSenderComponent;

UCLASS()
class STALKER2_API AEncounterNPCSpawner : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USignalSenderComponent* AllNPCKilledSender;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FEncounterSpawnPointData> SpawnPoints;
    
    UPROPERTY(EditAnywhere)
    float PlayerFieldOfViewAngle;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval SpawnDelay;
    
    UPROPERTY(EditAnywhere)
    int32 NPCTotalCount;
    
    UPROPERTY(EditAnywhere)
    int32 NPCMaxCount;
    
    UPROPERTY(EditAnywhere)
    int32 NPCMinCount;
    
    UPROPERTY(EditAnywhere)
    ESpawnSource SpawnSource;
    
public:
    AEncounterNPCSpawner(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAllNPCKilled();
    
    UFUNCTION(BlueprintCallable)
    void Enable();
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
    UFUNCTION(BlueprintCallable)
    void Despawn();
    
};

