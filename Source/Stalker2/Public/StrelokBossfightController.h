#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EAnomalyElementType.h"
#include "StrelokBossfightController.generated.h"

class UBoxComponent;
class UNiagaraSystem;
class USignalReceiverComponent;

UCLASS()
class STALKER2_API AStrelokBossfightController : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBoxComponent* ControllerVolume;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    USignalReceiverComponent* SignalReceiverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 AnomalySpawnNum;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float AnomalySpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TMap<EAnomalyElementType, UNiagaraSystem*> AnomalyElementVFXMap;
    
    UPROPERTY(EditAnywhere)
    TArray<TLazyObjectPtr<AActor>> AnomalySpawners;
    
    UPROPERTY()
    TSet<FString> AnomalyFieldsSIDs;
    
public:
    AStrelokBossfightController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnAnomalyField();
    
};

