#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "WorldMapScene.generated.h"

UCLASS()
class STALKER2_API AWorldMapScene : public AActor {
    GENERATED_BODY()
public:
    AWorldMapScene(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScale(float InScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOffset(FVector2D InOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNotSelectedAreaBrightness(float InBrightness);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMouseUV(FVector InUV);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCaptureEveryFrame(bool bIsEnabled);
    
};

