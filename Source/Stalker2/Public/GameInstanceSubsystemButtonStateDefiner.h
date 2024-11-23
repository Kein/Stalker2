#pragma once
#include "CoreMinimal.h"
#include "MenuButtonStateDefiner.h"
#include "Templates/SubclassOf.h"
#include "GameInstanceSubsystemButtonStateDefiner.generated.h"

class UGameInstanceSubsystem;

UCLASS(EditInlineNew)
class UGameInstanceSubsystemButtonStateDefiner : public UMenuButtonStateDefiner {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UGameInstanceSubsystem>> ExcludeSubsystems;
    
    UGameInstanceSubsystemButtonStateDefiner();

};

