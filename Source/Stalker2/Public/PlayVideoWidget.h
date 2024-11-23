#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VideoWidget.h"
#include "PlayVideoWidget.generated.h"

class UBinkMediaPlayer;
class USkipHintView;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UPlayVideoWidget : public UUserWidget, public IVideoWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    USkipHintView* SkipHint;
    
    UPROPERTY(Instanced)
    UTextWidget* SubtitleTextWidget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBinkMediaPlayer* BinkMediaPlayer;
    
public:
    UPlayVideoWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SkipVideo();
    
public:
    UFUNCTION(BlueprintPure)
    float GetVideoDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void EndVideo();
    

    // Fix for true pure virtual functions not being implemented
};

