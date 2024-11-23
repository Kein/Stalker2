#pragma once
#include "CoreMinimal.h"
#include "ENoteType.h"
#include "NoteFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct FNoteFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEnableFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ENoteType Filter;
    
    STALKER2_API FNoteFilterSettings();
};

