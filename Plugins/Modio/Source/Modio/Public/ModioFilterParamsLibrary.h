#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EModioSortDirection.h"
#include "EModioSortFieldType.h"
#include "ModioFilterParams.h"
#include "ModioModID.h"
#include "ModioFilterParamsLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioFilterParamsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioFilterParamsLibrary();

private:
    UFUNCTION(BlueprintPure)
    static FModioFilterParams WithTags(UPARAM(Ref) FModioFilterParams& Filter, const TArray<FString>& NewTags);
    
    UFUNCTION(BlueprintPure)
    static FModioFilterParams WithTag(UPARAM(Ref) FModioFilterParams& Filter, const FString& Tag);
    
    UFUNCTION(BlueprintPure)
    static FModioFilterParams WithoutTags(UPARAM(Ref) FModioFilterParams& Filter, const TArray<FString>& NewTags);
    
    UFUNCTION(BlueprintPure)
    static FModioFilterParams WithoutTag(UPARAM(Ref) FModioFilterParams& Filter, const FString& Tag);
    
    UFUNCTION(BlueprintPure)
    static FModioFilterParams SortBy(UPARAM(Ref) FModioFilterParams& Filter, EModioSortFieldType ByField, EModioSortDirection ByDirection);
    
    UFUNCTION(BlueprintPure)
    static FModioFilterParams PagedResults(UPARAM(Ref) FModioFilterParams& Filter, int64 PageNumber, int64 PageSize);
    
    UFUNCTION(BlueprintPure)
    static FModioFilterParams NameContainsStrings(UPARAM(Ref) FModioFilterParams& Filter, const TArray<FString>& SearchStrings);
    
    UFUNCTION(BlueprintPure)
    static FModioFilterParams NameContains(UPARAM(Ref) FModioFilterParams& Filter, const FString& SearchString);
    
    UFUNCTION(BlueprintPure)
    static FModioFilterParams MetadataLike(UPARAM(Ref) FModioFilterParams& Filter, const FString& SearchString);
    
    UFUNCTION(BlueprintPure)
    static FModioFilterParams MatchingIDs(UPARAM(Ref) FModioFilterParams& Filter, const TArray<FModioModID>& IDs);
    
    UFUNCTION(BlueprintPure)
    static FModioFilterParams MarkedLiveBefore(UPARAM(Ref) FModioFilterParams& Filter, FDateTime LiveBefore);
    
    UFUNCTION(BlueprintPure)
    static FModioFilterParams MarkedLiveAfter(UPARAM(Ref) FModioFilterParams& Filter, FDateTime LiveAfter);
    
    UFUNCTION(BlueprintPure)
    static FModioFilterParams IndexedResults(UPARAM(Ref) FModioFilterParams& Filter, int64 StartIndex, int64 ResultCount);
    
    UFUNCTION(BlueprintPure)
    static FModioFilterParams ExcludingIDs(UPARAM(Ref) FModioFilterParams& Filter, const TArray<FModioModID>& IDs);
    
};

