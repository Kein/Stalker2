#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InteractableObject.h"
#include "InteractableStunVolume.generated.h"

class UGSCNavModifierComponent;
class UObject;
class USignalReceiverComponent;
class USignalSenderComponent;
class UStaticMeshComponent;

UCLASS()
class AInteractableStunVolume : public AInteractableObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* RootMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticMeshComponent* CollisionMesh;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UGSCNavModifierComponent* SpaceRestrictorComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USignalSenderComponent* MonitorActivationSignalSender;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USignalSenderComponent* ObjectActivationSignalSender;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USignalSenderComponent* MonitorDeactivationSignalSender;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USignalSenderComponent* ObjectDeactivationSignalSender;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USignalSenderComponent* MonitorDestructionSignalSender;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USignalReceiverComponent* VolumeActivationSignalReceiver;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FVector> TargetPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CollisionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CollisionHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StunDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CooldownDuration;
    
public:
    AInteractableStunVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnVolumeForceDeactivated(UObject* InObject);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnVolumeDeactivated(UObject* InObject);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnVolumeActivated(UObject* InObject);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCooldownEnded(UObject* InObject);
    
    UFUNCTION()
    void ActivateVolume(UObject* InObject);
    
};

