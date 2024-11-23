#pragma once
#include "CoreMinimal.h"
#include "ButtonBase.h"
#include "PDAArrowButton.generated.h"

class UImage;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UPDAArrowButton : public UButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImage* ArrowIcon;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* ClickAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClickAnimSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShoudBlockClickAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShoudHoverOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UnHoverOpacity;
    
    UPDAArrowButton();

};

