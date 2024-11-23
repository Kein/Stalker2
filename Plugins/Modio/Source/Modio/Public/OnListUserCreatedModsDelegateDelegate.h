#pragma once
#include "CoreMinimal.h"
#include "ModioErrorCode.h"
#include "ModioOptionalModInfoList.h"
#include "OnListUserCreatedModsDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnListUserCreatedModsDelegate, FModioErrorCode, ErrorCode, FModioOptionalModInfoList, Result);

