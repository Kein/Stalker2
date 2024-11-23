#pragma once
#include "CoreMinimal.h"
#include "InputTriggers.h"
#include "HintStyleSettings.h"
#include "MenuHintSettings.h"
#include "ShortcutData.generated.h"

class UMenuButtonActionBase;

USTRUCT(BlueprintType)
struct FShortcutData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bShowLegend;
    
    UPROPERTY(EditDefaultsOnly)
    FHintStyleSettings LegendButtonStyle;
    
    UPROPERTY(EditDefaultsOnly)
    FMenuHintSettings MenuHintSettings;
    
    UPROPERTY(EditDefaultsOnly)
    FString InputAction;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UMenuButtonActionBase* ExecuteAction;
    
    UPROPERTY(EditDefaultsOnly)
    ETriggerEvent InputEventType;
    
    STALKER2_API FShortcutData();
};

