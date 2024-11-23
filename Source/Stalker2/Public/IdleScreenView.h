#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ViewBaseExtended.h"
#include "IdleScreenView.generated.h"

class UProgressBarWidget;
class UVerticalBox;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class STALKER2_API UIdleScreenView : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector2f LoadArrowRotation;
    
    UPROPERTY(EditDefaultsOnly)
    float IndicatorSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UWidgetSwitcher* TextSwitcher;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* TextTransitionAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* ShaderCompilingAnim;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UVerticalBox* ShadersCompilationBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UProgressBarWidget* ProgressBarShaderCompiling;
    
public:
    UIdleScreenView();

    UFUNCTION(BlueprintCallable)
    void OnAnyKeyIsPressed();
    
};

