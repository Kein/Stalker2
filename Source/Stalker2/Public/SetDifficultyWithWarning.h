#pragma once
#include "CoreMinimal.h"
#include "SetDifficulty.h"
#include "SetDifficultyWithWarning.generated.h"

UCLASS(EditInlineNew)
class USetDifficultyWithWarning : public USetDifficulty {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FString WarningSID;
    
public:
    USetDifficultyWithWarning();

};

