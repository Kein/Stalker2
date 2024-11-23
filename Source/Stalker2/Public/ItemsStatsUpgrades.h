#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "WidgetBase.h"
#include "ItemsStatsUpgrades.generated.h"

class UItemStatProgress;
class UItemStatValue;
class UOverlay;
class UProgressBar;
class UTextWidget;
class UTexture2D;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UItemsStatsUpgrades : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTextWidget* DurabilityPercentText;
    
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
    UOverlay* DurabilityOverlay;
    
    UPROPERTY(Instanced)
    UProgressBar* Durability;
    
    UPROPERTY(Transient)
    UWidgetAnimation* RadiationMark;
    
    UPROPERTY(Instanced)
    UVerticalBox* ItemStatValueBox;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UItemStatValue> ItemInfoWidgetClass;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ColorDurabilityZero;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ColorDurabilityLow;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ColorDurabilityMid;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ColorDurabilityFull;
    
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
    
public:
    UItemsStatsUpgrades();

};

