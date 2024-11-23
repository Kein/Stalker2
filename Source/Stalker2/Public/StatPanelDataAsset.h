#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StatPanelDataAsset.generated.h"

UCLASS(BlueprintType)
class STALKER2_API UStatPanelDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HealthBarReduce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HealthBarUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HealthBarUpdateDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HealthBarCriticalLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HealthBarCriticalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HealthBarRestoreSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HealthBarFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HealthBarFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OnImmidiatlyDeathWhiteBarReduceDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StatPanelHideDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OngoingDamageWhiteBarReduceDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StaminaBarCriticalLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StaminaBarCriticalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RadBarGrowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RadBarRestoreSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RadBarProgressParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BleedingFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BleedingFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverloadFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverloadFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HungerFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HungerFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SleepinessFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SleepinessFadeIn;
    
    UStatPanelDataAsset();

};

