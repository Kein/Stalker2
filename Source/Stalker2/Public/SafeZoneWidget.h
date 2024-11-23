#pragma once
#include "CoreMinimal.h"
#include "MenuSubViewBase.h"
#include "SafeZoneWidget.generated.h"

class UImageWidget;

UCLASS(EditInlineNew)
class STALKER2_API USafeZoneWidget : public UMenuSubViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float MinScale;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxScale;
    
    UPROPERTY(EditDefaultsOnly)
    float MinValue;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxValue;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxX;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxY;
    
    UPROPERTY(EditDefaultsOnly)
    double DefaultScale;
    
    UPROPERTY(EditDefaultsOnly)
    float ValueX;
    
    UPROPERTY(Instanced)
    UImageWidget* LeftTopCorner;
    
    UPROPERTY(Instanced)
    UImageWidget* RightTopCorner;
    
    UPROPERTY(Instanced)
    UImageWidget* LeftDownCorner;
    
    UPROPERTY(Instanced)
    UImageWidget* RightDownCorner;
    
    UPROPERTY(Instanced)
    UImageWidget* Border;
    
public:
    USafeZoneWidget();

private:
    UFUNCTION(Exec)
    void HandleEditSafeZoneMoveBordersIncreaseWidth();
    
    UFUNCTION(Exec)
    void HandleEditSafeZoneMoveBordersIncreaseHeight();
    
    UFUNCTION(Exec)
    void HandleEditSafeZoneMoveBordersDecreaseWidth();
    
    UFUNCTION(Exec)
    void HandleEditSafeZoneMoveBordersDecreaseHeight();
    
};

