#pragma once
#include "CoreMinimal.h"
#include "ShortcutData.h"
#include "MenuButtonData.generated.h"

class UMenuButtonActionBase;
class UMenuButtonBase;
class UMenuButtonStateDefiner;

USTRUCT(BlueprintType)
struct FMenuButtonData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UMenuButtonBase> ButtonStyleClass;
    
    UPROPERTY(EditDefaultsOnly)
    FString ButtonNameSID;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UMenuButtonActionBase* ButtonAction;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FShortcutData> ButtonShortcuts;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    TArray<UMenuButtonStateDefiner*> ButtonDefiners;
    
    STALKER2_API FMenuButtonData();
};

