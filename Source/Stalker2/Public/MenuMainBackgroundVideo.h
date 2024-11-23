#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EBorderType.h"
#include "MenuMainBackgroundVideo.generated.h"

class UBinkMediaPlayer;
class UImage;
class UMediaSource;
class UTexture2D;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UMenuMainBackgroundVideo : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UMediaSource> BackgroundVideo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UMediaSource> BackgroundVideoSecond;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBinkMediaPlayer* BinkMediaPlayer;
    
private:
    UPROPERTY(Instanced)
    UImage* BlackoutImage;
    
    UPROPERTY(Instanced)
    UImage* Border;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EBorderType, TSoftObjectPtr<UTexture2D>> BorderImages;
    
public:
    UMenuMainBackgroundVideo();

    UFUNCTION(BlueprintImplementableEvent)
    void PlayVideo(UMediaSource* VideoToPlay);
    
};

