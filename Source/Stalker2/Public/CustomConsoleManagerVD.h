#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerVD.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerVD : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerVD();

private:
    UFUNCTION(Exec)
    void XSpawnDeadNpc() const;
    
    UFUNCTION(Exec)
    void XShowUnitAndSquadUIDs(float Radius) const;
    
    UFUNCTION(Exec)
    void XProtectSquad(const FString& SquadUID, bool bProtect) const;
    
    UFUNCTION(Exec)
    void XProtectItemContainer(const FString& ContainerUID, bool bProtect) const;
    
};

