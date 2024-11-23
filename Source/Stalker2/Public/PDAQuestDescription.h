#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChildViewBase.h"
#include "OnHoverDescriptionDelegate.h"
#include "PDAQuestDescription.generated.h"

class UScrollBox;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UPDAQuestDescription : public UChildViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UTextWidget* DescriptionText;
    
    UPROPERTY(Instanced)
    UScrollBox* DescriptionContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableHoverIllumination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScrollSpeed;
    
    UPROPERTY(BlueprintAssignable)
    FOnHoverDescription OnHoverDescription;
    
protected:
    UPROPERTY(EditAnywhere)
    FLinearColor HoverScrollColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor UnHoverScrollColor;
    
public:
    UPDAQuestDescription();

};

