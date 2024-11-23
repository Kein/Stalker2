#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "ActorInteractionDataInterface.h"
#include "GuidInterface.h"
#include "HitReceiver.h"
#include "RebuildData.h"
#include "UIDActor_Door.h"
#include "DoorView.generated.h"

class AActor;
class UAkAudioEvent;
class UAkComponent;
class UAkRtpc;
class UBoxComponent;
class UGSCNavModifierComponent;
class UHittableComponent;
class UHoldComponent;
class UItemUsageComponent;
class UPhysicsConstraintComponent;
class UPrimitiveComponent;
class USceneComponent;
class USignalReceiverComponent;
class USignalSenderComponent;
class USingleClickComponent;
class UStaticMeshComponent;

UCLASS()
class STALKER2_API ADoorView : public AUIDActor_Door, public IActorInteractionDataInterface, public IHitReceiver, public IGuidInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USingleClickComponent* OpenDoorSingleClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USingleClickComponent* CloseDoorSingleClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USingleClickComponent* LockedSingleClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UHoldComponent* PeekDoorHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UHoldComponent* ClosePeekDoorHold;
    
private:
    UPROPERTY(Instanced, Transient)
    TArray<UAkComponent*> DoorAkComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebuildData> ViewRebuildMap;
    
    UPROPERTY(EditInstanceOnly)
    FVector OverrideInteractHintLocation;
    
    UPROPERTY(EditAnywhere)
    bool bIsHubDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocked;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDoubleDoor;
    
    UPROPERTY(EditAnywhere)
    float OpenAngleThreshold;
    
    UPROPERTY(EditAnywhere)
    float OpenAngle;
    
    UPROPERTY(EditAnywhere)
    float DecreaseImpulseAfterOpenTime;
    
    UPROPERTY(EditAnywhere)
    float OpenAngularSpeed;
    
    UPROPERTY(EditAnywhere)
    float CloseAngularSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float AngularSpeedNormalizer;
    
    UPROPERTY(EditAnywhere)
    float DoorCloseTime;
    
    UPROPERTY(EditAnywhere)
    float SilentOpenAngle;
    
    UPROPERTY(EditAnywhere)
    float SilentOpenAngularSpeed;
    
    UPROPERTY(EditAnywhere)
    float FirstLeafAngleOnStart;
    
    UPROPERTY(EditAnywhere)
    float SecondLeafAngleOnStart;
    
    UPROPERTY(EditDefaultsOnly)
    float KnockOutAngularSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float AutomaticDoorCloseTimeout;
    
    UPROPERTY(EditDefaultsOnly)
    float CloseDoorSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float DoorConstraintSFXCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FrameMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FirstLeafMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SecondLeafMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* FirstLeafPhysicsConstraintComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* SecondLeafPhysicsConstraintComponent;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UHittableComponent* HittableComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UGSCNavModifierComponent* SpaceRestrictorComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UBoxComponent* BlockVolume;
    
    UPROPERTY(EditAnywhere, Instanced)
    USignalReceiverComponent* InvertDoorStateReceiver;
    
    UPROPERTY(EditAnywhere, Instanced)
    USignalReceiverComponent* InvertDoorLockReceiver;
    
    UPROPERTY(EditAnywhere, Instanced)
    USignalReceiverComponent* OpenDoorReceiver;
    
    UPROPERTY(EditAnywhere, Instanced)
    USignalReceiverComponent* CloseDoorReceiver;
    
    UPROPERTY(EditAnywhere, Instanced)
    USignalReceiverComponent* LockDoorReceiver;
    
    UPROPERTY(EditAnywhere, Instanced)
    USignalReceiverComponent* UnlockDoorReceiver;
    
    UPROPERTY(EditAnywhere, Instanced)
    USignalReceiverComponent* PeekDoorReceiver;
    
    UPROPERTY(EditAnywhere, Instanced)
    USignalReceiverComponent* ForceOpenDoorReceiver;
    
    UPROPERTY(EditAnywhere, Instanced)
    USignalReceiverComponent* ForceCloseDoorReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalSenderComponent* OpenDoorSender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalSenderComponent* CloseDoorSender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalSenderComponent* LockDoorSender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalSenderComponent* UnlockDoorSender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalSenderComponent* ForceOpenDoorSender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalSenderComponent* ForceCloseDoorSender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalSenderComponent* PeekDoorSender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemUsageComponent* ItemUsageComponent;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> DoorMovementSFX;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> DoorConstraintSFX;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> DoorOpenSFX;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> DoorCloseSFX;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> UnlockDoorSFX;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> LockedDoorSFX;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> SilentDoorOpenSFX;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> KnockDoorOpenSFX;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkRtpc> DoorMovementRTPC;
    
public:
    ADoorView(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UnlockDoor() const;
    
    UFUNCTION(BlueprintCallable)
    void RebuildDoorView();
    
private:
    UFUNCTION()
    void PlayLockedDoorSound();
    
public:
    UFUNCTION(BlueprintCallable)
    void PeekDoor();
    
    UFUNCTION(BlueprintCallable)
    void PeekCloseDoor();
    
    UFUNCTION(BlueprintCallable)
    void OpenDoor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDoorClosedCompletely();
    
private:
    UFUNCTION()
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void LockDoor();
    
    UFUNCTION(BlueprintCallable)
    void InvertDoorState();
    
    UFUNCTION(BlueprintCallable)
    void InvertDoorLock();
    
    UFUNCTION(BlueprintCallable)
    void ForceOpenDoor();
    
    UFUNCTION(BlueprintCallable)
    void ForceCloseDoor();
    
    UFUNCTION(BlueprintCallable)
    void CloseDoor(const bool bCloseFast);
    
    UFUNCTION(BlueprintCallable)
    void ActualizeNavigationProperties();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FGuid GetGUID() const override PURE_VIRTUAL(GetGUID, return FGuid{};);
    
};

