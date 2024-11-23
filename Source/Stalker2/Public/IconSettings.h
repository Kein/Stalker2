#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "StyleManagerActionType.h"
#include "IconSettings.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FIconSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    StyleManagerActionType StyleAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIconCheckPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableResize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D IconSize;
    
    FIconSettings();
};

