#pragma once
#include "CoreMinimal.h"
#include "ESortGroup.h"
#include "WidgetBase.h"
#include "QuickSlot.generated.h"

class UImage;
class UImageWidget;
class USizeBox;
class UTextWidget;
class UTexture2D;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UQuickSlot : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImageWidget* Icon;
    
    UPROPERTY(Instanced)
    UImage* Background;
    
    UPROPERTY(Instanced)
    UImage* DefaultImage;
    
    UPROPERTY(Instanced)
    UImage* UseFrame;
    
    UPROPERTY(Instanced)
    UImage* ShouldUseFrame;
    
    UPROPERTY(Instanced)
    UImage* HighlightImage;
    
    UPROPERTY(Instanced)
    UTextWidget* ItemCountText;
    
    UPROPERTY(Instanced)
    USizeBox* IconSizeBox;
    
    UPROPERTY(Instanced)
    UImage* InventoryHighlightImage;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* ClickAnimation;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* ShouldUseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SlotIndex;
    
protected:
    UPROPERTY(EditInstanceOnly)
    UTexture2D* BackgroundTexture;
    
    UPROPERTY(EditInstanceOnly)
    UTexture2D* UseFrameTexture;
    
    UPROPERTY(EditInstanceOnly)
    UTexture2D* ShouldUseFrameTexture;
    
    UPROPERTY(EditInstanceOnly)
    UTexture2D* DefaultIconTexture;
    
    UPROPERTY(EditInstanceOnly)
    UTexture2D* InventoryHighlightTexture;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float QuickSlotSize;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float IconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableCountText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableTransparency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableClickAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableShouldUseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName IconOnTextureParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LowTransparency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HighTransparency;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float ClickAnimationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float ShouldUseAnimationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    int32 ShouldUseAnimationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    int32 ShouldUseAnimationCooldown;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<ESortGroup, TSoftObjectPtr<UTexture2D>> SortGroupToIconMap;
    
    UPROPERTY(Instanced)
    UImage* SlotTypeIcon;
    
public:
    UQuickSlot();

    UFUNCTION()
    void StopCooldown();
    
};

