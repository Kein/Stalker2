#pragma once
#include "CoreMinimal.h"
#include "ModioErrorCode.h"
#include "ModioOptionalTerms.h"
#include "OnGetTermsOfUseDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetTermsOfUseDelegate, FModioErrorCode, ErrorCode, FModioOptionalTerms, Terms);

