#pragma once
#include "CoreMinimal.h"
#include "ModioUIUserChangedReceiver.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonUserProfileBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonUserProfileBase : public UModioCommonActivatableWidget, public IModioUIUserChangedReceiver {
    GENERATED_BODY()
public:
    UModioCommonUserProfileBase();


    // Fix for true pure virtual functions not being implemented
};

