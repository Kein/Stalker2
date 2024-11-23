#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "EDamageType.h"
#include "CustomConsoleManagerMS.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerMS : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerMS();

    UFUNCTION(Exec)
    void XShowMaterial(int32 ObjUID, int32 MaterialID, int32 LODId) const;
    
    UFUNCTION(Exec)
    void XSetCameraShakeScale(float NewScale) const;
    
    UFUNCTION(Exec)
    void XSetAIStayGoal(const int32 ObjUID, const FString& AnimPath) const;
    
    UFUNCTION(Exec)
    void XLaunchCustomAnimation(int32 ObjUID, const FString& AnimPath, const FString& AnimSlotName) const;
    
    UFUNCTION(Exec)
    void XCommitSuicide(EDamageType DamageType) const;
    
};

