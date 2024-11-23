#pragma once
#include "CoreMinimal.h"
#include "UpgradeSlotData.h"
#include "WidgetBase.h"
#include "UpgradeSlot.generated.h"

class UButton;
class UImage;
class UUpgradeSlot;
class UUpgradesSettings;

UCLASS(EditInlineNew)
class STALKER2_API UUpgradeSlot : public UWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpgradeClick, const FString&, UgradeId, UUpgradeSlot*, InCurrentSlot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemMouseLeave);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemMouseEnter, const FString&, UgradeId);
    
private:
    UPROPERTY(Instanced)
    UImage* UpgradeImage;
    
    UPROPERTY(Instanced)
    UImage* TopConnectionLine;
    
    UPROPERTY(Instanced)
    UImage* MiddleConnectionLine;
    
    UPROPERTY(Instanced)
    UImage* DownConnectionLine;
    
    UPROPERTY(Instanced)
    UImage* Locked;
    
    UPROPERTY(Instanced)
    UImage* Blueprint;
    
    UPROPERTY(Instanced)
    UImage* Highlighted;
    
    UPROPERTY(Instanced)
    UImage* Mod;
    
    UPROPERTY(Instanced)
    UImage* Border;
    
    UPROPERTY(Instanced)
    UImage* Discount;
    
    UPROPERTY(Instanced)
    UButton* UpgradeButton;
    
    UPROPERTY(EditDefaultsOnly)
    UUpgradesSettings* SettingsAsset;
    
    UPROPERTY(Transient)
    FUpgradeSlotData Data;
    
public:
    UUpgradeSlot();

    UFUNCTION()
    void Unhighlight();
    
    UFUNCTION()
    void OnUpgradeButtonClick();
    
    UFUNCTION()
    void Highlight();
    
};

