#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseLoadingScreenWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UBaseLoadingScreenWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBaseLoadingScreenWidget();

};

