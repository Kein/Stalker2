#pragma once
#include "CoreMinimal.h"
#include "ModioErrorCode.h"
#include "ModioOptionalModInfo.h"
#include "OnGetModInfoDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetModInfoDelegate, FModioErrorCode, ErrorCode, FModioOptionalModInfo, ModInfo);

