#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerDP.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerDP : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerDP();

    UFUNCTION(Exec)
    void XTestCrashStackOverflow(int32 Counter) const;
    
    UFUNCTION(Exec)
    void XTestCrashReturnIfFalse() const;
    
    UFUNCTION(Exec)
    void XTestCrashRandomAddress() const;
    
    UFUNCTION(Exec)
    void XTestCrashNullptrRT() const;
    
    UFUNCTION(Exec)
    void XTestCrashNullptr() const;
    
    UFUNCTION(Exec)
    void XTestCrashLambda() const;
    
    UFUNCTION(Exec)
    void XTestCrashCheckFalse() const;
    
    UFUNCTION(Exec)
    void XPrintLocalizedTextByKey(const FString& StringKey) const;
    
    UFUNCTION(Exec)
    void XInitializeLocalizationManager() const;
    
};

