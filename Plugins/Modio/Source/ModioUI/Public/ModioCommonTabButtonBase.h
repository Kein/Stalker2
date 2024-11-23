#pragma once
#include "CoreMinimal.h"
#include "ModioCommonButtonBase.h"
#include "ModioCommonTabButtonInterface.h"
#include "ModioCommonTabButtonBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonTabButtonBase : public UModioCommonButtonBase, public IModioCommonTabButtonInterface {
    GENERATED_BODY()
public:
    UModioCommonTabButtonBase();


    // Fix for true pure virtual functions not being implemented
};

