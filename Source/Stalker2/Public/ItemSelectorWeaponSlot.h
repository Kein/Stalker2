#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ELayerSlotType.h"
#include "IconSettings.h"
#include "ItemSelectorSlotBase.h"
#include "Templates/SubclassOf.h"
#include "ItemSelectorWeaponSlot.generated.h"

class UImage;
class UImageWidget;
class UOverlay;
class USizeBox;
class UTextWidget;
class UTexture2D;
class UUserWidget;
class UWidget;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class STALKER2_API UItemSelectorWeaponSlot : public UItemSelectorSlotBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor SelectedColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor ActiveColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor DefaultColor;
    
    UPROPERTY(Instanced)
    USizeBox* SlotRadiusSizeBox;
    
    UPROPERTY(Instanced)
    UWidget* RotationBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UImage* BackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> BackgroundTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UImage* Particles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UTextWidget* GrenadeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UTextWidget* AmmoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UTextWidget* AmmoTextMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UTextWidget* UnderbarrelAmmoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UTextWidget* UnderbarrelAmmoTextMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UTextWidget* AmmoSlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UTextWidget* UnderbarrelAmmoSlash;
    
    UPROPERTY(Instanced)
    USizeBox* IconContainer;
    
    UPROPERTY(Instanced)
    UWidgetSwitcher* AmmoContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IndexSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText AlternativeDisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlotAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ContainerSizeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ContainerSizeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ParticlesTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor HoverTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor UnHoverTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSlotBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor UnBlockColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor BlockColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELayerSlotType LayerSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeVCoordinate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HorizontalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoftFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UTiling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VerticalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VTiling;
    
protected:
    UPROPERTY(Instanced)
    UOverlay* AttachesOverlay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UImageWidget> AttachImageWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIconSettings IconSettings;
    
public:
    UItemSelectorWeaponSlot();

    UFUNCTION(BlueprintPure)
    bool IsWeaponSlot();
    
    UFUNCTION(BlueprintPure)
    bool IsGrenadeSlot();
    
    UFUNCTION(BlueprintPure)
    bool IsAlternativeSlot();
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<UUserWidget*> GetHoveredWidgets();
    
    UFUNCTION(BlueprintCallable)
    void ConstructUpdateSlotScale();
    
};

