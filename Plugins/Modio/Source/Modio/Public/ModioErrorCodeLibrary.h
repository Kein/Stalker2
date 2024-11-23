#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ModioErrorCode.h"
#include "ModioErrorCodeLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioErrorCodeLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioErrorCodeLibrary();

    UFUNCTION(BlueprintPure)
    static bool IsError(const FModioErrorCode& Error);
    
    UFUNCTION(BlueprintPure)
    static int32 GetValue(const FModioErrorCode& Error);
    
    UFUNCTION(BlueprintPure)
    static FString GetMessage(const FModioErrorCode& Error);
    
};

