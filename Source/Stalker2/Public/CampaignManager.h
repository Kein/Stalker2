#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "CampaignManager.generated.h"

class USaveLoadIO;

UCLASS()
class STALKER2_API UCampaignManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    USaveLoadIO* SaveLoadIO;
    
public:
    UCampaignManager();

};

