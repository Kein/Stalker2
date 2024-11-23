#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseInteractableAction.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class STALKER2_API UBaseInteractableAction : public UObject {
    GENERATED_BODY()
public:
    UBaseInteractableAction();

    UFUNCTION(BlueprintNativeEvent)
    void RunAlternativeAction();
    
    UFUNCTION(BlueprintNativeEvent)
    void RunAction();
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanInteract();
    
};

