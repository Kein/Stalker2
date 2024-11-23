#pragma once
#include "CoreMinimal.h"
#include "MenuButtonStateDefiner.h"
#include "StoreButtonStateDefiner.generated.h"

UCLASS(EditInlineNew)
class UStoreButtonStateDefiner : public UMenuButtonStateDefiner {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> ExcludeSubsystems;
    
    UStoreButtonStateDefiner();

protected:
    UFUNCTION()
    TArray<FName> GetSubsystemOptions() const;
    
};

