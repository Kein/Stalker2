#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStatSlotStates.h"
#include "WidgetBase.h"
#include "StatSlot.generated.h"

class UImage;
class UTexture2D;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UStatSlot : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImage* Icon;
    
    UPROPERTY(Instanced)
    UImage* Shadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldShowProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* IconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WeakStateOpacityPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlinkingAnimSpeed;
    
protected:
    UPROPERTY()
    EStatSlotStates CurrState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TextureID;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* ShowAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* HideAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* BlinkingAnim;
    
public:
    UStatSlot();

};

