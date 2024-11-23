#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ViewBaseExtended.h"
#include "MenuMainViewBase.generated.h"

class UEnhancedInputComponent;
class UMenuLegendSubView;
class UMenuMainBackgroundVideo;
class UMenuSubViewBase;
class UOverlay;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UMenuMainViewBase : public UViewBaseExtended {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UOverlay* SubMenuViewOverlay;
    
    UPROPERTY(Instanced)
    UMenuLegendSubView* LegendSubView;
    
    UPROPERTY(Instanced)
    UMenuMainBackgroundVideo* MainMenuBackgroundVideo;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UMenuSubViewBase> RootSubViewClass;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* FadeOutAnimation;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* FadeInAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    float FadeInSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float FadeOutSpeedMultiplier;
    
private:
    UPROPERTY(Instanced, Transient)
    UEnhancedInputComponent* EnhancedInputComponent;
    
public:
    UMenuMainViewBase();

    UFUNCTION()
    void FadeOutStartedFunction();
    
    UFUNCTION()
    void FadeOutFinishedFunction();
    
    UFUNCTION()
    void FadeInStartedFunction();
    
    UFUNCTION()
    void FadeInFinishedFunction();
    
};

