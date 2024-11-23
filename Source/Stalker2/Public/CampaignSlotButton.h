#pragma once
#include "CoreMinimal.h"
#include "MenuButtonBase.h"
#include "CampaignSlotButton.generated.h"

class UImage;
class UTextWidget;
class UTexture2D;

UCLASS(EditInlineNew)
class STALKER2_API UCampaignSlotButton : public UMenuButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UTextWidget* SlotIndex;
    
    UPROPERTY(Instanced)
    UTextWidget* LastSaveName;
    
    UPROPERTY(Instanced)
    UTextWidget* LastSaveDateTime;
    
    UPROPERTY(Instanced)
    UTextWidget* LastSaveLocationName;
    
    UPROPERTY(Instanced)
    UTextWidget* LastSaveDifficulty;
    
    UPROPERTY(Instanced)
    UImage* LastSaveThumbnail;
    
    UPROPERTY(Instanced)
    UImage* Background;
    
    UPROPERTY(Instanced)
    UTextWidget* DifficultyPrefix;
    
    UPROPERTY(Instanced)
    UTextWidget* DifficultyDots;
    
    UPROPERTY(Instanced)
    UTextWidget* RegionPrefix;
    
    UPROPERTY(Instanced)
    UTextWidget* RegionDots;
    
    UPROPERTY(EditDefaultsOnly)
    FString DateTimeFormat;
    
    UPROPERTY(EditDefaultsOnly)
    FString EmptySlotNameSID;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftObjectPtr<UTexture2D>> SaveIcons;
    
public:
    UCampaignSlotButton();

};

