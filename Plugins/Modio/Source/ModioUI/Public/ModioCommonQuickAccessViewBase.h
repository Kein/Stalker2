#pragma once
#include "CoreMinimal.h"
#include "ModioUIUserChangedReceiver.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonQuickAccessViewBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonQuickAccessViewBase : public UModioCommonActivatableWidget, public IModioUIUserChangedReceiver {
    GENERATED_BODY()
public:
    UModioCommonQuickAccessViewBase();

    UFUNCTION(BlueprintPure)
    bool IsUserAuthenticated() const;
    

    // Fix for true pure virtual functions not being implemented
};

