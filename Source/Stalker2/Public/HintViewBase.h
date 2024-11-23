#pragma once
#include "CoreMinimal.h"
#include "EHintProgressType.h"
#include "HintViewSettings.h"
#include "ProgressMaterialData.h"
#include "WidgetBase.h"
#include "HintViewBase.generated.h"

class UHintImageBase;
class UImage;
class USizeBox;
class UWidgetAnimation;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UHintViewBase : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    bool bInitializeAutomatically;
    
    UPROPERTY(EditInstanceOnly)
    FHintViewSettings HintViewSettings;
    
protected:
    UPROPERTY(Instanced)
    UHintImageBase* HintIconImage;
    
    UPROPERTY(Instanced)
    UHintImageBase* HintIconImageDisabled;
    
    UPROPERTY(Instanced)
    UImage* ProgressMaterial;
    
    UPROPERTY(Instanced)
    USizeBox* ViewSizeBox;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* PressAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    float PressAnimationSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EHintProgressType, FProgressMaterialData> ProgressMaterialMap;
    
public:
    UHintViewBase();

};

