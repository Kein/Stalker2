#pragma once
#include "CoreMinimal.h"
#include "CrosshairWidgetBase.h"
#include "CrosshairWidgetCircle.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UOverlay;

UCLASS(EditInlineNew)
class STALKER2_API UCrosshairWidgetCircle : public UCrosshairWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UImage* Point;
    
    UPROPERTY(Instanced)
    UImage* circle;
    
    UPROPERTY(Instanced)
    UOverlay* Container;
    
    UPROPERTY()
    UMaterialInstanceDynamic* CircleMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableDespersionLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RadiuseParametr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RadiuseParametrMax;
    
public:
    UCrosshairWidgetCircle();

};

