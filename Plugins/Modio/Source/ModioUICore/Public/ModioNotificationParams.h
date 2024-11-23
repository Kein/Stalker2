#pragma once
#include "CoreMinimal.h"
#include "ModioErrorCode.h"
#include "ModioNotificationParams.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct MODIOUICORE_API FModioNotificationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FModioErrorCode ErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* NotificationContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    FModioNotificationParams();
};

