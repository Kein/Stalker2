#pragma once
#include "CoreMinimal.h"
#include "ESubtitlesSize.h"
#include "ViewBaseExtended.h"
#include "SubtitleView.generated.h"

class UBorder;
class UDebugTextWidgetBase;
class UHorizontalBox;
class USizeBox;
class UTextWidget;
class UTexture2D;

UCLASS(EditInlineNew)
class STALKER2_API USubtitleView : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UDebugTextWidgetBase* DebugLenSpeaker;
    
    UPROPERTY(Instanced)
    UDebugTextWidgetBase* DebugLenSubtitle;
    
    UPROPERTY(Instanced)
    UDebugTextWidgetBase* DebugRowSpeaker;
    
    UPROPERTY(Instanced)
    UDebugTextWidgetBase* DebugRowSubtitle;
    
    UPROPERTY(Instanced)
    UTextWidget* SpeakerDialogText;
    
    UPROPERTY(Instanced)
    UHorizontalBox* NameBox;
    
    UPROPERTY(Instanced)
    UBorder* SubtitileBorder;
    
    UPROPERTY(Instanced)
    USizeBox* SubtitileContainer;
    
    UPROPERTY(Instanced)
    UTextWidget* TextDialog;
    
    UPROPERTY(EditAnywhere)
    int32 CharToShow;
    
    UPROPERTY(EditAnywhere)
    float SpeedCharToShow;
    
    UPROPERTY(EditAnywhere)
    TMap<ESubtitlesSize, FName> SubtitleNames;
    
    UPROPERTY(EditAnywhere)
    float AnimationSpeed;
    
    UPROPERTY(EditAnywhere)
    float HideSkipHintLifeBond;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> BackgroundTexture;
    
    USubtitleView();

};

