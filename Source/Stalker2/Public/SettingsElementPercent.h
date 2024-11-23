#pragma once
#include "CoreMinimal.h"
#include "FloatValueLocalisationPair.h"
#include "SettingElement.h"
#include "SettingsElementPercent.generated.h"

UCLASS(EditInlineNew)
class STALKER2_API USettingsElementPercent : public USettingElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Step;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool bShowPercentSign;
    
private:
    UPROPERTY(EditInstanceOnly)
    FFloatValueLocalisationPair ReplacedValue;
    
public:
    USettingsElementPercent();

    UFUNCTION(BlueprintCallable)
    void SetValue(const float InValue, const bool bForce);
    
};

