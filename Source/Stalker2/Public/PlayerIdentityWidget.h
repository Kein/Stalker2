#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "PlayerIdentityWidget.generated.h"

class UHorizontalBox;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UPlayerIdentityWidget : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UHorizontalBox* IdentityContainer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<UWidgetBase>> IdentityList;
    
public:
    UPlayerIdentityWidget();

};

