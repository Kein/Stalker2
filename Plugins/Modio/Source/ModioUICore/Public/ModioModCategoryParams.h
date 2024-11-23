#pragma once
#include "CoreMinimal.h"
#include "EModioSortDirection.h"
#include "EModioSortFieldType.h"
#include "EModioEnabledFilterType.h"
#include "EModioInstalledFilterType.h"
#include "EModioManualSortType.h"
#include "ModioModCategoryParams.generated.h"

USTRUCT(BlueprintType)
struct MODIOUICORE_API FModioModCategoryParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> ExcludedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EModioSortDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EModioSortFieldType SortField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int64 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SearchKeywords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EModioInstalledFilterType InstalledField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EModioEnabledFilterType EnabledFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EModioManualSortType ManualSortField;
    
    FModioModCategoryParams();
};

