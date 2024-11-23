#pragma once
#include "CoreMinimal.h"
#include "MenuButtonActionBase.h"
#include "QuitToMainMenuAction.generated.h"

UCLASS(EditInlineNew)
class UQuitToMainMenuAction : public UMenuButtonActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bForceQuit;
    
public:
    UQuitToMainMenuAction();

};

