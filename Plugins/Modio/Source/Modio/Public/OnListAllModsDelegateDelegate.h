#pragma once
#include "CoreMinimal.h"
#include "ModioErrorCode.h"
#include "ModioOptionalModInfoList.h"
#include "OnListAllModsDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnListAllModsDelegate, FModioErrorCode, ErrorCode, FModioOptionalModInfoList, Result);

