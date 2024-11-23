#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "TutorialBase.h"
#include "TutorialAutonomic.generated.h"

class UBorder;

UCLASS(EditInlineNew)
class STALKER2_API UTutorialAutonomic : public UTutorialBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UBorder* TextBackgroundBorder;
    
    UPROPERTY(EditDefaultsOnly)
    FMargin PaddingWithHint;
    
    UPROPERTY(EditDefaultsOnly)
    FMargin PaddingWithoutHint;
    
public:
    UTutorialAutonomic();

};

