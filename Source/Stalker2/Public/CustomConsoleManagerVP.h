#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "ELookAtOwnerState.h"
#include "ERotationPartType.h"
#include "CustomConsoleManagerVP.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerVP : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerVP();

    UFUNCTION(Exec)
    void XWoundNpcByUID(const int32 NpcUID);
    
    UFUNCTION(Exec)
    void XShootAttach() const;
    
    UFUNCTION(Exec)
    void XResurrectNPCAsZombie(const int32 NpcUID);
    
    UFUNCTION(Exec)
    void XReloadAttachTactical() const;
    
    UFUNCTION(Exec)
    void XReloadAttach() const;
    
    UFUNCTION(Exec)
    void XNpcSetLookAtOwnerState(const int32 NpcUID, ELookAtOwnerState LookAtOwnerState) const;
    
    UFUNCTION(Exec)
    void XNpcLookAtNPC(const int32 NpcUID, const int32 TargetNpcUID) const;
    
    UFUNCTION(Exec)
    void XNpcLookAt(const int32 NpcUID, const float X, const float Y, const float Z) const;
    
    UFUNCTION(Exec)
    void XLimitNpcBodyPartRotation(const int32 NpcUID, const float LimitAngle, ERotationPartType RotationPartType) const;
    
    UFUNCTION(Exec)
    void XLaunchFacialAnimation(const int32 ObjUID, const FString& AnimPath) const;
    
    UFUNCTION(Exec)
    void XKnockDownNpcByAnotherNpc(const int32 NpcUID, const int32 AttackerNpcUID) const;
    
    UFUNCTION(Exec)
    void XKnockDownNpc(const int32 NpcUID) const;
    
};

