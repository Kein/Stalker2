#pragma once
#include "CoreMinimal.h"
#include "LockableComponent.h"
#include "ItemContainerInteractionComponent.generated.h"

class AObj;
class UAkAudioEvent;
class UAkSwitchValue;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UItemContainerInteractionComponent : public ULockableComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 PresetItemContainerPrototypeID;
    
    UPROPERTY(Transient)
    UAkSwitchValue* StashTypeSwitch;
    
    UPROPERTY(Transient)
    UAkAudioEvent* OpenAudioEvent;
    
    UPROPERTY(Transient)
    UAkAudioEvent* CloseAudioEvent;
    
    UPROPERTY(Transient)
    AObj* InteractedActor;
    
public:
    UItemContainerInteractionComponent(const FObjectInitializer& ObjectInitializer);

};

