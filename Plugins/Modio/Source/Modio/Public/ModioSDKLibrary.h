#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFileSizeUnit.h"
#include "EModioEnvironment.h"
#include "ModioApiKey.h"
#include "ModioGameID.h"
#include "ModioInitializeOptions.h"
#include "ModioSDKLibrary.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UModioSDKLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioSDKLibrary();

    UFUNCTION(BlueprintPure)
    static FText RoundNumberString(FText inputText);
    
    UFUNCTION(BlueprintPure)
    static float Pct_Int64Int64(int64 Dividend, int64 Divisor);
    
    UFUNCTION(BlueprintPure)
    static bool IsValidSecurityCodeFormat(const FString& String);
    
    UFUNCTION(BlueprintPure)
    static bool IsValidEmailAddressFormat(const FString& String);
    
    UFUNCTION(BlueprintPure)
    static FString GetTimeSpanAsString(const FString& PastDateString);
    
    UFUNCTION(BlueprintPure)
    static FString GetShortenedNumberAsString(int64 Number);
    
    UFUNCTION(BlueprintPure)
    static FModioInitializeOptions GetProjectInitializeOptionsForSessionId(const FString& SessionId);
    
    UFUNCTION(BlueprintPure)
    static FModioInitializeOptions GetProjectInitializeOptions();
    
    UFUNCTION(BlueprintPure)
    static FModioGameID GetProjectGameId();
    
    UFUNCTION(BlueprintPure)
    static EModioEnvironment GetProjectEnvironment();
    
    UFUNCTION(BlueprintPure)
    static FModioApiKey GetProjectApiKey();
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<EFileSizeUnit> GetDesiredFileSizeUnit(int64 Filesize);
    
    UFUNCTION(BlueprintPure)
    static FString GetDefaultSessionIdWindows();
    
    UFUNCTION(BlueprintPure)
    static FText Filesize_ToString(int64 Filesize, int32 MinDecimals, int32 MaxDecimals, TEnumAsByte<EFileSizeUnit> Unit, bool bIncludeUnitName);
    
    UFUNCTION(BlueprintPure)
    static FText Conv_Int64ToText(int64 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_Int64ToString(int64 inInt);
    
};

