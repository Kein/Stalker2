#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "AmmoWidget.generated.h"

class UAmmoWidgetSettingsAsset;
class UFireTypeWidget;
class UHorizontalBox;
class UImage;
class UImageWidget;
class UInventoryNew;
class UTextBlock;
class UTradeView;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UAmmoWidget : public UChildViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UTextBlock* AmmoCount;
    
    UPROPERTY(Instanced)
    UTextBlock* AmmoCountMax;
    
    UPROPERTY(Instanced)
    UTextBlock* Divider;
    
    UPROPERTY(Instanced)
    UTextBlock* CaliberText;
    
    UPROPERTY(Instanced)
    UImageWidget* AmmoIcon;
    
    UPROPERTY(Instanced)
    UHorizontalBox* AmmoCounter;
    
    UPROPERTY(Instanced)
    UHorizontalBox* FireTypeCounter;
    
    UPROPERTY(Instanced)
    UVerticalBox* AmmoTypeList;
    
    UPROPERTY(Instanced)
    UFireTypeWidget* GrenadeLauncherIcon;
    
    UPROPERTY(Instanced)
    UImage* GrenadeLauncherDivider;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* AnimAmmoHide;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* AnimAmmoShow;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAmmoWidgetSettingsAsset* AmmoWidgetSettings;
    
    UPROPERTY(Instanced, Transient)
    UInventoryNew* InventoryNew;
    
    UPROPERTY(Instanced, Transient)
    UTradeView* TradeView;
    
private:
    UPROPERTY(Instanced, Transient)
    TArray<UFireTypeWidget*> FireTypeWidgets;
    
public:
    UAmmoWidget();

};

