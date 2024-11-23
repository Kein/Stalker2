#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerMY.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerMY : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerMY();

    UFUNCTION(Exec)
    void XSimulatePhysicsOnBoneForObj(int32 ObjUID, const FString& BoneName) const;
    
    UFUNCTION(Exec)
    void XSetXRayMode(bool bEnabled) const;
    
    UFUNCTION(Exec)
    void XSetDebugMode();
    
    UFUNCTION(Exec)
    void XPossessToCharacterByUID(int32 UID) const;
    
    UFUNCTION(Exec)
    void XEnsureAllRelevantCollisionStreamed();
    
};

