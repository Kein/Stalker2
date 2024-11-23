#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManager.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManager : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<UBaseConsoleManager*> PersonalConsoleManagers;
    
    UCustomConsoleManager();

    UFUNCTION(Exec)
    void XRunEngineCommand(const FString& Command);
    
    UFUNCTION(Exec)
    void XExecuteAdditionalScript(const FString& ScriptKeyName);
    
    UFUNCTION()
    void ExecuteScripts(const TArray<FString>& ScriptArray);
    
};

