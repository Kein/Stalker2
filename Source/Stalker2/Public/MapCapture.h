#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/SceneCapture2D.h"
#include "CaptureConfig.h"
#include "MapCapture.generated.h"

class UTextureRenderTarget2D;

UCLASS()
class STALKER2_API AMapCapture : public ASceneCapture2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIntVector2 StartCaptureLocation;
    
    UPROPERTY(EditAnywhere)
    FIntVector2 EyeAdaptationTile;
    
    UPROPERTY(EditAnywhere)
    FIntVector2 DebugCaptureLocation;
    
    UPROPERTY(EditAnywhere)
    FCaptureConfig CaptureConfig;
    
private:
    UPROPERTY(EditAnywhere, Transient)
    UTextureRenderTarget2D* RenderTarget;
    
public:
    AMapCapture(const FObjectInitializer& ObjectInitializer);

};

