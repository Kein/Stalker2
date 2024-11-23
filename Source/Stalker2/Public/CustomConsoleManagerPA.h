#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "EGrenadeDebugFlag.h"
#include "CustomConsoleManagerPA.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerPA : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerPA();

    UFUNCTION(Exec)
    void XTogglePhysicalMaterialDebug(float Distance);
    
    UFUNCTION(Exec)
    void XToggleHoldBreathDebug();
    
    UFUNCTION(Exec)
    void XToggleGrenadeDebug(EGrenadeDebugFlag FlagValue) const;
    
    UFUNCTION(Exec)
    void XChangePlayerMovementFXPrototype(const FString& PrototypeSID) const;
    
};

