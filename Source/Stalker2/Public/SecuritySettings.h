#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SecuritySettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class STALKER2_API USecuritySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString Watermark;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bDisplayWatermark;
    
public:
    USecuritySettings();

};

