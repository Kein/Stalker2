#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ModioModDependency.h"
#include "ModioModDependencyList.h"
#include "ModioPagedResult.h"
#include "ModioModDependenciesLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioModDependenciesLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioModDependenciesLibrary();

private:
    UFUNCTION(BlueprintPure)
    static FModioPagedResult GetPagedResult(const FModioModDependencyList& ModTags);
    
    UFUNCTION(BlueprintPure)
    static TArray<FModioModDependency> GetDependencies(const FModioModDependencyList& ModTags);
    
};

