#pragma once
#include "CoreMinimal.h"
#include "DisplaySettings.generated.h"

USTRUCT(BlueprintType)
struct FDisplaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TitleBackgroundStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TitleBorderLineStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName InsideMarkerStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MarkerBackgroundStyleId;
    
    STALKER2_API FDisplaySettings();
};

