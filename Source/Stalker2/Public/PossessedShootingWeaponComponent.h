#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PossessedShootingWeaponComponent.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UFXSystemComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPossessedShootingWeaponComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UAkComponent* WeaponAkComponent;
    
    UPROPERTY()
    UAkAudioEvent* FireAudioEvent;
    
    UPROPERTY()
    UAkAudioEvent* FireEventLoop;
    
    UPROPERTY(Transient)
    UAkAudioEvent* CurrentFireEvent;
    
    UPROPERTY()
    UAkAudioEvent* BreakAudioEvent;
    
    UPROPERTY(Instanced)
    UFXSystemComponent* WeaponMuzzleComponent;
    
public:
    UPossessedShootingWeaponComponent(const FObjectInitializer& ObjectInitializer);

};

