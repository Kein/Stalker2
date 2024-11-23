#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Global.generated.h"

class UMapSettingsAsset;

UCLASS(NonTransient)
class STALKER2_API UGlobal : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMapSettingsAsset* PA_MapSettings;
    
    UGlobal();

    UFUNCTION(Exec)
    void GoToMap(const FName MapName) const;
    
};

