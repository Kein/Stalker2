#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "SaveLoadManager.generated.h"

class USaveLoadIO;

UCLASS(DefaultConfig, Config=Game)
class STALKER2_API USaveLoadManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    USaveLoadIO* SaveLoadIO;
    
    UPROPERTY(Config)
    TMap<FName, FString> DLCUserFriendlyNames;
    
public:
    USaveLoadManager();

};

