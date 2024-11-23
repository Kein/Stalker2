#pragma once
#include "CoreMinimal.h"
#include "InteractableObject.h"
#include "InteractableMonitorSection.generated.h"

class UNiagaraSystem;
class UObject;
class USignalReceiverComponent;
class UStaticMeshComponent;

UCLASS()
class AInteractableMonitorSection : public AInteractableObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UStaticMeshComponent* MonitorMesh;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USignalReceiverComponent* ActivationSignalReceiver;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USignalReceiverComponent* DeactivationSignalReceiver;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USignalReceiverComponent* DestructionSignalReceiver;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    UNiagaraSystem* DestructionVFX;
    
public:
    AInteractableMonitorSection(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDestructionSignalReceived(UObject* InObject);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeactivationSignalReceived(UObject* InObject);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivationSignalReceived(UObject* InObject);
    
};

