#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WidgetBase.h"
#include "DialogueSpeaker.generated.h"

class UImage;
class URichTextWidget;
class UTexture2D;

UCLASS(EditInlineNew)
class STALKER2_API UDialogueSpeaker : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    URichTextWidget* SpeakerText;
    
    UPROPERTY(Instanced)
    UImage* Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldResetTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* BackgrounTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D MoveWidgetOffset;
    
    UDialogueSpeaker();

};

