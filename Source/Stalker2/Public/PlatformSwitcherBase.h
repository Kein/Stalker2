#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetSwitcher.h"
#include "EGSCInputDeviceType.h"
#include "PlatformSwitcherBase.generated.h"

UCLASS()
class STALKER2_API UPlatformSwitcherBase : public UWidgetSwitcher {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnablePlatformAutoSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EGSCInputDeviceType, int32> PlatformSettings;
    
    UPlatformSwitcherBase();

    UFUNCTION()
    void UpdateWidget();
    
    UFUNCTION(BlueprintCallable)
    void InitWidget();
    
};

