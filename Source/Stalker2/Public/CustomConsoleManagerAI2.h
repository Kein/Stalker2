#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerAI2.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerAI2 : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerAI2();

    UFUNCTION(Exec)
    void XSetVisionParamsOverride(const int32 ModelUID, const FString& PrototypeSID) const;
    
    UFUNCTION(Exec)
    void XSetRelation(const int32 FirstUID, const int32 SecondUID, const int32 Relation) const;
    
    UFUNCTION(Exec)
    void XSetHearingParamsOverride(const int32 ModelUID, const FString& PrototypeSID) const;
    
};

