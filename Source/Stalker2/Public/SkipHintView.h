#pragma once
#include "CoreMinimal.h"
#include "ViewBaseExtended.h"
#include "SkipHintView.generated.h"

class URichTextBlock;
class USizeBox;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API USkipHintView : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    USizeBox* ButtonHintSkip;
    
    UPROPERTY(Instanced)
    URichTextBlock* SkipTextHint;
    
    UPROPERTY(EditDefaultsOnly)
    FString HoldSkipLocSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString PressSkipLocSID;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* SkipFadeAnimation;
    
    UPROPERTY(EditAnywhere)
    float AnimationSpeed;
    
    UPROPERTY(EditAnywhere)
    float HideSkipHintLifeBond;
    
    USkipHintView();

};

