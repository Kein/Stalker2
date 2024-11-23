#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EModioSortDirection.h"
#include "EModioSortFieldType.h"
#include "ModioFeaturedCategoryParams.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class MODIOUICORE_API UModioFeaturedCategoryParams : public UObject {
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
    
    UModioFeaturedCategoryParams();

};

