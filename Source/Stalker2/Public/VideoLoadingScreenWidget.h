#pragma once
#include "CoreMinimal.h"
#include "TimedLoadingScreenWidget.h"
#include "VideoLoadingScreenWidget.generated.h"

class UBinkMediaPlayer;

UCLASS(EditInlineNew)
class STALKER2_API UVideoLoadingScreenWidget : public UTimedLoadingScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBinkMediaPlayer* BinkMediaPlayer;
    
public:
    UVideoLoadingScreenWidget();

    UFUNCTION()
    void EndVideo();
    
};

