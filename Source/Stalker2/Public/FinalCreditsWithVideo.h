#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EBorderType.h"
#include "VideoWidget.h"
#include "FinalCreditsWithVideo.generated.h"

class UBinkMediaPlayer;
class UCreditsWidget;
class UImage;
class UMediaSource;
class UTexture2D;

UCLASS(EditInlineNew)
class STALKER2_API UFinalCreditsWithVideo : public UUserWidget, public IVideoWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UCreditsWidget* CreditsWidget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBinkMediaPlayer* BinkMediaPlayer;
    
    UPROPERTY(Instanced)
    UImage* Border;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EBorderType, TSoftObjectPtr<UTexture2D>> BorderImages;
    
public:
    UFinalCreditsWithVideo();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void PlayVideo(UMediaSource* VideoToPlay);
    
public:
    UFUNCTION(BlueprintPure)
    float GetVideoDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void EndVideo();
    

    // Fix for true pure virtual functions not being implemented
};

