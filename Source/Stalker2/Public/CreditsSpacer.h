#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CreditsSpacer.generated.h"

class USpacer;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UCreditsSpacer : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USpacer* Spacer;
    
public:
    UCreditsSpacer();

};

