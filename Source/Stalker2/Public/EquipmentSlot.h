#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Slate/WidgetTransform.h"
#include "InteractableItemSlotBaseWidget.h"
#include "EquipmentSlot.generated.h"

class UBorder;
class UImage;
class UScaleBox;
class UTexture2D;

UCLASS(EditInlineNew)
class STALKER2_API UEquipmentSlot : public UInteractableItemSlotBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Background;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UImage* EffectsHighlight;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UImage* bLocked;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DefaultImage;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Broken;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Attach;
    
    UPROPERTY(Instanced)
    UScaleBox* ItemImageScaleBox;
    
    UPROPERTY(Instanced)
    UBorder* HighlightBorder;
    
    UPROPERTY(EditAnywhere)
    FLinearColor DefaultImageColor;
    
    UPROPERTY(EditAnywhere)
    FWidgetTransform DefaultIconTransform;
    
    UPROPERTY(EditAnywhere)
    FLinearColor TransparentDefaultImageColor;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* DefaultIcon;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* BackgroundIcon;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* BlockedIcon;
    
    UPROPERTY(EditAnywhere)
    bool bArtifact;
    
    UPROPERTY(EditInstanceOnly)
    float DefaultImageScaleX;
    
    UPROPERTY(EditInstanceOnly)
    float DefaultImageScaleY;
    
    UPROPERTY(Instanced)
    UImage* InventoryHighlightImage;
    
    UPROPERTY(EditInstanceOnly)
    UTexture2D* InventoryHighlightTexture;
    
public:
    UEquipmentSlot();

};

