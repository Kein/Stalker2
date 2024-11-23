#pragma once
#include "CoreMinimal.h"
#include "ModioErrorCode.h"
#include "ModioOptionalImage.h"
#include "OnGetMediaDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetMediaDelegate, FModioErrorCode, ErrorCode, FModioOptionalImage, Path);

