#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "SoundManager.generated.h"

class ALandscape;
class UAkRtpc;
class UAudioScattererDataAsset;
class UOnAKEventFinished_Proxy;

UCLASS()
class STALKER2_API USoundManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UAudioScattererDataAsset* AudioScatterer;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ALandscape> Landscape;
    
    UPROPERTY(Transient)
    UAkRtpc* InteriorFlagRTPC;
    
    UPROPERTY()
    UOnAKEventFinished_Proxy* OnAKEventFinished_Proxy;
    
public:
    USoundManager();

};

