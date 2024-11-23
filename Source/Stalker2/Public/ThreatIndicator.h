#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "Templates/SubclassOf.h"
#include "ThreatPointerSettings.h"
#include "ThreatIndicator.generated.h"

class UOverlay;
class UThreatPointer;

UCLASS(EditInlineNew)
class STALKER2_API UThreatIndicator : public UChildViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, Instanced)
    UOverlay* ThreatsOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ThreatIndicatorShowDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 ThreatPointerCap;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FThreatPointerSettings ThreatPointerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ThreatsUpdateInterval;
    
private:
    UPROPERTY()
    TSubclassOf<UThreatPointer> ThreatPointerWidgetClass;
    
    UPROPERTY(Instanced)
    TArray<UThreatPointer*> ActiveThreatPointers;
    
public:
    UThreatIndicator();

};

