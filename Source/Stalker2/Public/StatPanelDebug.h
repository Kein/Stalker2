#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "StatPanelDebug.generated.h"

class UProgressBar;
class UTextBlock;

UCLASS(EditInlineNew)
class STALKER2_API UStatPanelDebug : public UChildViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UProgressBar* ProgressHP;
    
    UPROPERTY(Instanced)
    UProgressBar* ProgressRadiation;
    
    UPROPERTY(Instanced)
    UProgressBar* ProgressStamina;
    
    UPROPERTY(Instanced)
    UProgressBar* ProgressPsy;
    
    UPROPERTY(Instanced)
    UTextBlock* HPText;
    
    UPROPERTY(Instanced)
    UTextBlock* RadiationText;
    
    UPROPERTY(Instanced)
    UTextBlock* StaminaText;
    
    UPROPERTY(Instanced)
    UTextBlock* PsyText;
    
    UStatPanelDebug();

    UFUNCTION(BlueprintCallable)
    void UpdateAllStats();
    
};

