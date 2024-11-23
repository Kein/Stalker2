#pragma once
#include "CoreMinimal.h"
#include "DebugTextWidgetBase.h"
#include "DebugTextLenWidget.generated.h"

UCLASS(EditInlineNew)
class STALKER2_API UDebugTextLenWidget : public UDebugTextWidgetBase {
    GENERATED_BODY()
public:
    UDebugTextLenWidget();

protected:
    UFUNCTION()
    int32 GetWarningIndex(const FString& Text, const int32 TextLen);
    
};

