#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EModioModState.h"
#include "ModioModCollectionEntry.h"
#include "ModioModID.h"
#include "ModioModInfo.h"
#include "ModioModCollectionLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioModCollectionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioModCollectionLibrary();

    UFUNCTION(BlueprintPure)
    static FString GetPath(const FModioModCollectionEntry& Entry);
    
    UFUNCTION(BlueprintPure)
    static EModioModState GetModState(const FModioModCollectionEntry& Entry);
    
    UFUNCTION(BlueprintPure)
    static FModioModInfo GetModProfile(const FModioModCollectionEntry& Entry);
    
    UFUNCTION(BlueprintPure)
    static FModioModID GetId(const FModioModCollectionEntry& Entry);
    
};

