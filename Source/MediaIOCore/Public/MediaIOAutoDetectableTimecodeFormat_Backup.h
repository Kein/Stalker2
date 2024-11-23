#pragma once
#include "CoreMinimal.h"
#include "EMediaIOTimecodeFormat.h"
#include "MediaIOAutoDetectableTimecodeFormat_Backup.generated.h"

USTRUCT()
struct MEDIAIOCORE_API FMediaIOAutoDetectableTimecodeFormat_Backup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMediaIOTimecodeFormat TimecodeFormat;
    
    UPROPERTY(EditAnywhere)
    bool bAutoDetect;
    
    FMediaIOAutoDetectableTimecodeFormat_Backup();
};

