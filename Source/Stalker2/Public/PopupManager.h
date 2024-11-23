#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "PopupManager.generated.h"

class UPopupView;

UCLASS()
class STALKER2_API UPopupManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    UPopupView* PopupView;
    
public:
    UPopupManager();

};

