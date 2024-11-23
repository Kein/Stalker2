#pragma once
#include "CoreMinimal.h"
#include "ViewBaseExtended.h"
#include "InspectArtifactView.generated.h"

class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UInspectArtifactView : public UViewBaseExtended {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* HintFadeAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HintFadeInPlaybackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HintFadeOutPlaybackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HintShowTime;
    
public:
    UInspectArtifactView();

};

