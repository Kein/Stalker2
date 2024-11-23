#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "GSCLocalPlayer.generated.h"

UCLASS(DefaultConfig, NonTransient, Config=Game)
class UGSCLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    TMap<FName, uint32> DLCNameToBitFlag;
    
public:
    UGSCLocalPlayer();

private:
    UFUNCTION(Exec)
    void XImportSaves();
    
    UFUNCTION(Exec)
    void XFinishLoginProcess(const bool bSuccess);
    
    UFUNCTION(Exec)
    void XFileToClipboard();
    
    UFUNCTION(Exec)
    void XExportSaves();
    
    UFUNCTION(Exec)
    void XClipboardToFile();
    
};

