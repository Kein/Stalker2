#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ModioErrorCode.h"
#include "ModioModID.h"
#include "ModioOptionalModInfo.h"
#include "ModioOptionalModInfoList.h"
#include "ModioUIModInfoReceiver.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUIModInfoReceiver : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUIModInfoReceiver : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnModInfoRequestCompleted(FModioModID ModId, FModioErrorCode ec, FModioOptionalModInfo Info);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnListAllModsRequestCompleted(const FString& RequestIdentifier, FModioErrorCode ec, FModioOptionalModInfoList List);
    
};

