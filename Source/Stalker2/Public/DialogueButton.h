#pragma once
#include "CoreMinimal.h"
#include "ButtonBase.h"
#include "DialogueButton.generated.h"

class URichTextWidget;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UDialogueButton : public UButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UTextWidget* Text;
    
    UPROPERTY(Instanced)
    URichTextWidget* RichTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableStyleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString StylePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName HoverStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName NormalStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ActionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText ButtonText;
    
    UDialogueButton();

};

