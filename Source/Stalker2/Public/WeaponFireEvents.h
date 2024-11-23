#pragma once
#include "CoreMinimal.h"
#include "WeaponFireEvents.generated.h"

class UAkAudioEvent;

USTRUCT()
struct FWeaponFireEvents {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAkAudioEvent* FireEventOneShot;
    
    UPROPERTY()
    UAkAudioEvent* FireEventLoop;
    
    UPROPERTY()
    UAkAudioEvent* FireEventBreak;
    
    STALKER2_API FWeaponFireEvents();
};

