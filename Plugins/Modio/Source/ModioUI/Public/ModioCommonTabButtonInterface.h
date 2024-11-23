#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ModioCommonTabDescriptor.h"
#include "ModioCommonTabButtonInterface.generated.h"

UINTERFACE(Blueprintable)
class UModioCommonTabButtonInterface : public UInterface {
    GENERATED_BODY()
};

class IModioCommonTabButtonInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void SetTabLabelInfo(const FModioCommonTabDescriptor& InTabLabelInfo);
    
};

