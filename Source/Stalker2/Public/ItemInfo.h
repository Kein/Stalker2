#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateBrush.h"
#include "EEffectType.h"
#include "EItemType.h"
#include "Templates/SubclassOf.h"
#include "WidgetBase.h"
#include "ItemInfo.generated.h"

class UHorizontalBox;
class UImage;
class UItemStatProgress;
class UItemStatValue;
class UOverlay;
class UProgressBar;
class URichTextWidget;
class USizeBox;
class UTextWidget;
class UTexture2D;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UItemInfo : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UImage* FullBackCenter;
    
    UPROPERTY(Instanced)
    UTextWidget* HeaderText;
    
    UPROPERTY(Instanced)
    UTextWidget* DurabilityText;
    
    UPROPERTY(Instanced)
    UTextWidget* CaliberText;
    
    UPROPERTY(Instanced)
    UTextWidget* ModeText;
    
    UPROPERTY(Instanced)
    UTextWidget* MagazineText;
    
    UPROPERTY(Instanced)
    UTextWidget* Price;
    
    UPROPERTY(Instanced)
    UTextWidget* DurabilityPercentText;
    
    UPROPERTY(Instanced)
    URichTextWidget* FittingWeaponsRichText;
    
    UPROPERTY(Instanced)
    USizeBox* FittingWeaponsBox;
    
    UPROPERTY(Instanced)
    URichTextWidget* AmmoTypeRichText;
    
    UPROPERTY(Instanced)
    USizeBox* AmmoTypeBox;
    
    UPROPERTY(Instanced)
    UItemStatProgress* ItemStatProgress1;
    
    UPROPERTY(Instanced)
    UItemStatProgress* ItemStatProgress2;
    
    UPROPERTY(Instanced)
    UItemStatProgress* ItemStatProgress3;
    
    UPROPERTY(Instanced)
    UItemStatProgress* ItemStatProgress4;
    
    UPROPERTY(Instanced)
    UItemStatProgress* ItemStatProgress5;
    
    UPROPERTY(Instanced)
    UItemStatProgress* ItemStatProgress6;
    
    UPROPERTY(Instanced)
    UItemStatProgress* ItemStatProgress7;
    
    UPROPERTY(Instanced)
    UItemStatProgress* ItemStatProgress8;
    
    UPROPERTY(Instanced)
    UImage* FullBackTitle;
    
    UPROPERTY(Instanced)
    UImage* Single;
    
    UPROPERTY(Instanced)
    UImage* Dualshot;
    
    UPROPERTY(Instanced)
    UImage* Burst;
    
    UPROPERTY(Instanced)
    UImage* Auto;
    
    UPROPERTY(Instanced)
    UTextWidget* AmmoName;
    
    UPROPERTY(Instanced)
    UTextWidget* MagSize;
    
    UPROPERTY(Instanced)
    UTextWidget* Weight;
    
    UPROPERTY(Instanced)
    UTextWidget* ItemDescription;
    
    UPROPERTY(Instanced)
    UVerticalBox* ItemStatValueBox;
    
    UPROPERTY(Instanced)
    UHorizontalBox* ArmorValuesBox;
    
    UPROPERTY(Instanced)
    UHorizontalBox* ArtContainersBox;
    
    UPROPERTY(Instanced)
    UTextWidget* ArtCount;
    
    UPROPERTY(Instanced)
    UVerticalBox* FireTypesBox;
    
    UPROPERTY(Instanced)
    UImage* SplitterLeft;
    
    UPROPERTY(Instanced)
    UImage* SplitterRight;
    
    UPROPERTY(Instanced)
    UVerticalBox* AmmoBox;
    
    UPROPERTY(Instanced)
    UVerticalBox* MagBox;
    
    UPROPERTY(Instanced)
    UHorizontalBox* WeightBox;
    
    UPROPERTY(Instanced)
    UOverlay* DurabilityOverlay;
    
    UPROPERTY(Instanced)
    UProgressBar* Durability;
    
    UPROPERTY(Instanced)
    UImage* DurabilityBackground;
    
    UPROPERTY(Transient)
    UWidgetAnimation* RadiationMark;
    
    UPROPERTY(Instanced)
    UImage* ImageAttach;
    
    UPROPERTY(Instanced)
    UOverlay* EquipmentMarkOverlay;
    
    UPROPERTY(Instanced)
    UTextWidget* BlueprintIndicatorText;
    
    UPROPERTY(Instanced)
    USizeBox* ItemInfoBox;
    
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<EItemType, UTexture2D*> ItemTypeBackgroundMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* FallbackHeaderBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UItemStatValue> ItemInfoWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UItemStatValue> ArmorAdditionalEffectWidgetClass;
    
    UPROPERTY(Transient)
    FProgressBarStyle DurabilityStyle;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush BackgroundDurabilityImage;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush ZeroDurabilityFillImage;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush LowDurabilityFillImage;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush MidDurabilityFillImage;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush FullDurabilityFillImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* DamageIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* PenetrationIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* FireRateIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* DistanceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* AccuracyIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* RadiationArmorIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* PhysicalArmorIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* PsyArmorIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* ChemicalArmorIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* ElectoArmorIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* FireArmorIcon;
    
private:
    UPROPERTY(Instanced)
    TArray<UItemStatValue*> ItemStatValueArray;
    
    UPROPERTY(EditDefaultsOnly)
    FSoftObjectPath EffectDurationIcon;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<EEffectType> IncludeArmorAdditionalEffects;
    
public:
    UItemInfo();

};

