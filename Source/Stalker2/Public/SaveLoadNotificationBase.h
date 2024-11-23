#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "SaveLoadNotificationBase.generated.h"

class UImage;
class USizeBox;
class UTextWidget;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API USaveLoadNotificationBase : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* FadeInAnimation;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* FadeOutAnimation;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* BlinkingAnimation;
    
protected:
    UPROPERTY(Instanced)
    UTextWidget* Title;
    
    UPROPERTY(Instanced)
    UTextWidget* Description;
    
    UPROPERTY(Instanced)
    USizeBox* SizeBox;
    
    UPROPERTY(Instanced)
    UImage* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float SingleLineDescWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float TwoLineDescWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float ThreeLineDescWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float TimerRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    UTexture2D* FloppyDisk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    UTexture2D* BrokenFloppyDisk;
    
public:
    USaveLoadNotificationBase();

};

