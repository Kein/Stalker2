#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerIM.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerIM : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerIM();

    UFUNCTION(Exec)
    void XHighlightDangerAreas(const FString& NavMeshAgentName) const;
    
    UFUNCTION(Exec)
    void XHighlightCovers(const FString& NavMeshAgentName) const;
    
};

