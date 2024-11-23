#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "DialogProtectionManager.generated.h"

class ADialogProtector;

UCLASS()
class STALKER2_API UDialogProtectionManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ADialogProtector* DialogProtector;
    
public:
    UDialogProtectionManager();

};

