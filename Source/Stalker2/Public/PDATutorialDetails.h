#pragma once
#include "CoreMinimal.h"
#include "HoverIndicator.h"
#include "PDATutorialDetails.generated.h"

class UCommonVerticalBox;
class URichTextBlock;
class UScrollBox;
class UVerticalBox;

UCLASS(EditInlineNew)
class STALKER2_API UPDATutorialDetails : public UHoverIndicator {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UVerticalBox* TutorialBox;
    
    UPROPERTY(Instanced)
    URichTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    URichTextBlock* RichText;
    
    UPROPERTY(Instanced)
    UScrollBox* TextScroll;
    
    UPROPERTY(EditAnywhere)
    int32 NumWidgetsInLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScrollMoveSpeed;
    
protected:
    UPROPERTY(Instanced)
    UCommonVerticalBox* ParentVerticalBox;
    
public:
    UPDATutorialDetails();

};

