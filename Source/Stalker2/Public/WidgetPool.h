#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "WidgetPool.generated.h"

UCLASS(EditInlineNew)
class STALKER2_API UWidgetPool : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TSubclassOf<UUserWidget> WidgetInPoolClass;
    
public:
    UWidgetPool();

private:
    UFUNCTION()
    UUserWidget* CreateWidgetByPool();
    
};

