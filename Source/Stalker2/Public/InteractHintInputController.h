#pragma once
#include "CoreMinimal.h"
#include "EInteractionTypeIcon.h"
#include "HintControllerBase.h"
#include "InteractHintInputController.generated.h"

class UImage;
class UTexture2D;

UCLASS(EditInlineNew)
class STALKER2_API UInteractHintInputController : public UHintControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UImage* IconImage;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EInteractionTypeIcon, TSoftObjectPtr<UTexture2D>> InteractionTypeIcons;
    
public:
    UInteractHintInputController();

};

