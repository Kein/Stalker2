#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimSequenceWeighted.h"
#include "AnimHumanDialogData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHumanDialogData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAnimSequenceWeighted> DialogIdleAnims;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LastIdleAnimsCount;
    
    UPROPERTY(BlueprintReadOnly)
    bool bDialogIdleChanged;
    
    UPROPERTY(BlueprintReadOnly)
    bool bInDialog;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatRange DialogIdleAnimCooldownRange;
    
    FAnimHumanDialogData();
};

