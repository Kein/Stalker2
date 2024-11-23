#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ModioErrorCode.h"
#include "ModioOptionalImage.h"
#include "ModioUIUserAvatarDownloadCompletedReceiver.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUIUserAvatarDownloadCompletedReceiver : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUIUserAvatarDownloadCompletedReceiver : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUserAvatarDownloadCompleted(FModioErrorCode ec, FModioOptionalImage Image);
    
};

