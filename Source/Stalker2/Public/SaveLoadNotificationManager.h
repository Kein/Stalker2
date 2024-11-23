#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "SaveLoadNotificationManager.generated.h"

class USaveLoadNotificationView;

UCLASS()
class STALKER2_API USaveLoadNotificationManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    USaveLoadNotificationView* SaveLoadNotificationView;
    
public:
    USaveLoadNotificationManager();

};

