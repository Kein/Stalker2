#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "EAIFeature.h"
#include "EMovementBehaviour.h"
#include "CustomConsoleManagerAM.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerAM : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerAM();

    UFUNCTION(Exec)
    void XToggleDebugTool();
    
private:
    UFUNCTION(Exec)
    void XResetAI(int32 UID);
    
public:
    UFUNCTION(Exec)
    void XMoveToPlayer(int32 NPC_UID, EMovementBehaviour Behaviour);
    
    UFUNCTION(Exec)
    void XDeactivateAIFeature(const EAIFeature Feature);
    
    UFUNCTION(Exec)
    void XCallQuickSave(float Angular);
    
    UFUNCTION(Exec)
    void XCallQuickLoad(float Angular);
    
private:
    UFUNCTION(Exec)
    void XAddMoveTo(int32 UID);
    
public:
    UFUNCTION(Exec)
    void XActivateAIFeature(const EAIFeature Feature);
    
    UFUNCTION(Exec)
    void StopFollowing();
    
    UFUNCTION(Exec)
    void StartFollowing(const int32 TargetUID, const bool bLockOrientation, const double ZOffset);
    
    UFUNCTION(Exec)
    void GetRelationBetween(const int32 LHS, const int32 RHS);
    
};

