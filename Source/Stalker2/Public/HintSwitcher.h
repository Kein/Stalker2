#pragma once
#include "CoreMinimal.h"
#include "HintBase.h"
#include "HintSwitcher.generated.h"

class UButton;
class UHintKey;
class UPlatformSwitcher;

UCLASS(EditInlineNew)
class STALKER2_API UHintSwitcher : public UHintBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UPlatformSwitcher* HintSwitcher;
    
    UPROPERTY(Instanced)
    UHintKey* HintPC;
    
    UPROPERTY(Instanced)
    UHintKey* HintConsole;
    
    UPROPERTY(Instanced)
    UButton* HintButton;
    
protected:
    UPROPERTY(Instanced, Transient)
    TArray<UHintKey*> HintKeys;
    
public:
    UHintSwitcher();

};

