#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetSwitcher.h"
#include "ChangeWidgetSwitcher.generated.h"

UCLASS()
class STALKER2_API UChangeWidgetSwitcher : public UWidgetSwitcher {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SwitcherId;
    
    UChangeWidgetSwitcher();

    UFUNCTION(BlueprintCallable)
    void PreDestructUpdate();
    
    UFUNCTION(BlueprintCallable)
    void PreConstructUpdate();
    
};

