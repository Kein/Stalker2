#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CreditsSectionTitle.generated.h"

class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UCreditsSectionTitle : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTextWidget* RoleText;
    
public:
    UCreditsSectionTitle();

};

