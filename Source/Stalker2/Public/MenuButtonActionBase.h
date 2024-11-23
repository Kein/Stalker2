#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EUISound.h"
#include "MenuButtonActionBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UMenuButtonActionBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bShouldPlaySound;
    
    UPROPERTY(EditDefaultsOnly)
    EUISound OnExecuteSound;
    
public:
    UMenuButtonActionBase();

    UFUNCTION()
    void ExecuteButtonAction();
    
};

