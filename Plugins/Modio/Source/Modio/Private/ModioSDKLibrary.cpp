#include "ModioSDKLibrary.h"

UModioSDKLibrary::UModioSDKLibrary() {
}

FText UModioSDKLibrary::RoundNumberString(FText inputText) {
    return FText::GetEmpty();
}

float UModioSDKLibrary::Pct_Int64Int64(int64 Dividend, int64 Divisor) {
    return 0.0f;
}

bool UModioSDKLibrary::IsValidSecurityCodeFormat(const FString& String) {
    return false;
}

bool UModioSDKLibrary::IsValidEmailAddressFormat(const FString& String) {
    return false;
}

FString UModioSDKLibrary::GetTimeSpanAsString(const FString& PastDateString) {
    return TEXT("");
}

FString UModioSDKLibrary::GetShortenedNumberAsString(int64 Number) {
    return TEXT("");
}

FModioInitializeOptions UModioSDKLibrary::GetProjectInitializeOptionsForSessionId(const FString& SessionId) {
    return FModioInitializeOptions{};
}

FModioInitializeOptions UModioSDKLibrary::GetProjectInitializeOptions() {
    return FModioInitializeOptions{};
}

FModioGameID UModioSDKLibrary::GetProjectGameId() {
    return FModioGameID{};
}

EModioEnvironment UModioSDKLibrary::GetProjectEnvironment() {
    return EModioEnvironment::Test;
}

FModioApiKey UModioSDKLibrary::GetProjectApiKey() {
    return FModioApiKey{};
}

TEnumAsByte<EFileSizeUnit> UModioSDKLibrary::GetDesiredFileSizeUnit(int64 Filesize) {
    return Largest;
}

FString UModioSDKLibrary::GetDefaultSessionIdWindows() {
    return TEXT("");
}

FText UModioSDKLibrary::Filesize_ToString(int64 Filesize, int32 MinDecimals, int32 MaxDecimals, TEnumAsByte<EFileSizeUnit> Unit, bool bIncludeUnitName) {
    return FText::GetEmpty();
}

FText UModioSDKLibrary::Conv_Int64ToText(int64 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits) {
    return FText::GetEmpty();
}

FString UModioSDKLibrary::Conv_Int64ToString(int64 inInt) {
    return TEXT("");
}


