#pragma once
#include "CoreMinimal.h"
#include "ModSubsystemBase.h"
#include "GSCModIOSubsystem.generated.h"

class UModioSubsystem;
class UModioUISubsystem;
class UUserWidget;

UCLASS(DefaultConfig, MinimalAPI, Config=Game)
class UGSCModIOSubsystem : public UModSubsystemBase {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    TSoftClassPtr<UUserWidget> ModBrowserClass;
    
    UPROPERTY(Config)
    TSoftClassPtr<UUserWidget> ModBrowserLoadingClass;
    
    UPROPERTY(Transient)
    UModioSubsystem* ModioSubsystem;
    
    UPROPERTY(Transient)
    UModioUISubsystem* ModioUISubsystem;
    
    UPROPERTY(Instanced, Transient)
    UUserWidget* ModBrowserWidget;
    
    UPROPERTY(Instanced, Transient)
    UUserWidget* ModBrowserLoadingWidget;
    
    UGSCModIOSubsystem();

    UFUNCTION()
    void HandleModBrowserClosed();
    
};

