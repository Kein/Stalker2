#pragma once
#include "CoreMinimal.h"
#include "OnTutorialSlotClickDelegate.h"
#include "PDASlotBase.h"
#include "PDATutorialSlot.generated.h"

class UTextWidget;
class UTexture2D;

UCLASS(EditInlineNew)
class STALKER2_API UPDATutorialSlot : public UPDASlotBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* NavigationIcon;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* CombatIcon;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* SurvivalIcon;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* EarningsIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString NavigationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString CombatSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SurvivalSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString EarningsSID;
    
    UPROPERTY(BlueprintAssignable)
    FOnTutorialSlotClick OnTutorialSlotClick;
    
    UPROPERTY(Instanced)
    UTextWidget* CategoryText;
    
    UPDATutorialSlot();

};

