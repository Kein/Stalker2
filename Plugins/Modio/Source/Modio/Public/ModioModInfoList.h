#pragma once

#include "ModioModInfo.h"
#include "ModioPagedResult.h"
#include "ModioModInfoList.generated.h"

USTRUCT(NoExport, BlueprintType)
struct MODIO_API FModioModInfoList
{
	UPROPERTY()
	FModioPagedResult PagedResult;

	UPROPERTY()
	TArray<FModioModInfo> InternalList;
};

/*
USTRUCT(BlueprintType)
struct MODIO_API FModioOptionalModInfoList
{
	GENERATED_BODY()

	FModioOptionalModInfoList() = default;
	FModioOptionalModInfoList(TOptional<FModioModInfoList>&& ModInfoList);

	TOptional<FModioModInfoList> Internal;
};
*/