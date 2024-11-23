#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMediaCaptureCroppingType.h"
#include "EMediaCaptureOverrunAction.h"
#include "MediaCaptureOptions.generated.h"

USTRUCT(BlueprintType)
struct MEDIAIOCORE_API FMediaCaptureOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMediaCaptureOverrunAction OverrunAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMediaCaptureCroppingType Crop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntPoint CustomCapturePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bResizeSourceBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSkipFrameWhenRunningExpensiveTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bConvertToDesiredPixelFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceAlphaToOneOnConversion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyLinearToSRGBConversion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutostopOnCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfFramesToCapture;
    
    FMediaCaptureOptions();
};

