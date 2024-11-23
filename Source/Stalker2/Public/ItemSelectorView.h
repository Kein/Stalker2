#pragma once
#include "CoreMinimal.h"
#include "EFireType.h"
#include "EMainHandEquipmentType.h"
#include "FireTypeDisplayInfo.h"
#include "ViewBaseExtended.h"
#include "ItemSelectorView.generated.h"

class UHintSwitcher;
class UImage;
class UImageWidget;
class UItemSelectorEquipSlot;
class UItemSelectorWeaponSlot;
class UTextWidget;
class UWidget;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class STALKER2_API UItemSelectorView : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bIsActive;
    
    UPROPERTY(Instanced)
    UImageWidget* AmmoIcon;
    
    UPROPERTY(Instanced)
    UImage* AmmoIconSwipe;
    
    UPROPERTY(Instanced)
    UImage* FireTypeIcon;
    
    UPROPERTY(Instanced)
    UImage* GrenadeIcon;
    
    UPROPERTY(Instanced)
    UImage* GrenadeIconSwipe;
    
    UPROPERTY(Instanced)
    UImage* NavigateArrowLeftGrenade;
    
    UPROPERTY(Instanced)
    UImage* NavigateArrowRightGrenade;
    
    UPROPERTY(Instanced)
    UImage* NavigateArrowLeftAmmo;
    
    UPROPERTY(Instanced)
    UImage* NavigateArrowRightAmmo;
    
    UPROPERTY(Instanced)
    UTextWidget* TextAmmoType;
    
    UPROPERTY(Instanced)
    UWidgetSwitcher* MidleSwitcher;
    
    UPROPERTY(Instanced)
    UTextWidget* TextShutType;
    
    UPROPERTY(Instanced)
    UHintSwitcher* ModeHintSwitcher;
    
    UPROPERTY(Instanced)
    UHintSwitcher* AmmoHintSwitcher;
    
    UPROPERTY(Instanced)
    UHintSwitcher* GrenadeHintSwitcher;
    
    UPROPERTY(Instanced)
    UWidget* HintUseGuitar;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* ItemSelectorChangeGrenade;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* ItemSelectorChangeAmmo;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* ItemSelectorChangeFireMode;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* ItemSelectorRestoreState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FastChangeSlotTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FastChangeUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InputDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ItemSelectorChangeAmmoSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ItemSelectorChangeFireModeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ItemSelectorChangeGrenadeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMainHandEquipmentType DefoultSelectSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldIgnoreEmptySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EFireType, FFireTypeDisplayInfo> FireTypesInfo;
    
protected:
    UPROPERTY(Instanced)
    UItemSelectorEquipSlot* SideSlotDetector;
    
    UPROPERTY(Instanced)
    UItemSelectorEquipSlot* SideSlotFlashlight;
    
    UPROPERTY(Instanced)
    UItemSelectorEquipSlot* SideSlotUnarmed;
    
    UPROPERTY(Instanced)
    UItemSelectorEquipSlot* SideSlotLauncher;
    
    UPROPERTY(Instanced, Transient)
    UItemSelectorWeaponSlot* SelectedSlot;
    
    UPROPERTY(Instanced, Transient)
    UItemSelectorWeaponSlot* HoveredSlot;
    
    UPROPERTY(Instanced, Transient)
    UItemSelectorEquipSlot* SelectedEquipSlot;
    
public:
    UItemSelectorView();

    UFUNCTION()
    void UIItemSelectorUnarm();
    
    UFUNCTION()
    void UIItemSelectorGrenadeLauncher();
    
    UFUNCTION()
    void UIItemSelectorFlashlight();
    
    UFUNCTION()
    void UIItemSelectorDetector();
    
    UFUNCTION()
    void ToggleAttachMode();
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<UItemSelectorWeaponSlot*> GetSlotsBP();
    
    UFUNCTION()
    void ChangeFireType();
    
    UFUNCTION()
    void ChangeAmmoType();
    
};

