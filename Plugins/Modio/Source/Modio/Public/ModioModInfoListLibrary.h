#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ModioModInfo.h"
#include "ModioModInfoList.h"
#include "ModioPagedResult.h"
#include "ModioModInfoListLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioModInfoListLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioModInfoListLibrary();

private:
    UFUNCTION(BlueprintPure)
    static FModioPagedResult GetPagedResult(const FModioModInfoList& ModInfoList);
    
    UFUNCTION(BlueprintPure)
    static TArray<FModioModInfo> GetMods(const FModioModInfoList& ModInfoList);
    
};

