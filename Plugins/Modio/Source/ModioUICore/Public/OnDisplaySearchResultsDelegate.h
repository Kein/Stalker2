#pragma once
#include "CoreMinimal.h"
#include "ModioFilterParams.h"
#include "OnDisplaySearchResultsDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FOnDisplaySearchResults, FModioFilterParams, Params);

