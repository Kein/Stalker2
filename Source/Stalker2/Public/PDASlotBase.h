#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELocalizationLanguage.h"
#include "WidgetBase.h"
#include "PDASlotBase.generated.h"

class UCheckBoxWidget;
class UImage;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UPDASlotBase : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UTextWidget* NameText;
    
    UPROPERTY(Instanced)
    UCheckBoxWidget* SelectPoint;
    
    UPROPERTY(Instanced)
    UImage* HoverBeckground;
    
    UPROPERTY(Instanced)
    UImage* SelectBeckground;
    
    UPROPERTY(Instanced)
    UImage* NewPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldAutoCut;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<ELocalizationLanguage, int32> CultureCutPreference;
    
    UPDASlotBase();

    UFUNCTION()
    void SetSelectPointTint(FLinearColor InColor);
    
};

