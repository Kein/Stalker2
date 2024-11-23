#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WidgetBase.h"
#include "PDATextBorder.generated.h"

class UImage;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UPDATextBorder : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImage* LeftBorder;
    
    UPROPERTY(Instanced)
    UImage* RightBorder;
    
    UPROPERTY(Instanced)
    UTextWidget* BorderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D SizeLine;
    
    UPDATextBorder();

};

