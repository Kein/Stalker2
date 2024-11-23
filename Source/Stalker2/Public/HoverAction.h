#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "EHintHoverActionType.h"
#include "HoverAction.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct STALKER2_API FHoverAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHintHoverActionType HoverAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUserWidget* ActionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor HoverColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor UnHoverColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESlateVisibility HoverVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESlateVisibility UnHoverVisibility;
    
    FHoverAction();
};

