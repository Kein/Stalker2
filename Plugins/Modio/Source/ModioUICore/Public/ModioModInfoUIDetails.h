#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ModioModID.h"
#include "ModioModInfo.h"
#include "ModioModInfoUIDetails.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioModInfoUIDetails : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioModInfoUIDetails : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FModioModID GetModID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FModioModInfo GetFullModInfo();
    
};

