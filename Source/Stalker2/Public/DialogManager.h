#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "DialogManager.generated.h"

UCLASS()
class STALKER2_API UDialogManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
    UDialogManager();

    UFUNCTION()
    void OnToggleAudiolog(const bool bPlayAudiolog);
    
};

