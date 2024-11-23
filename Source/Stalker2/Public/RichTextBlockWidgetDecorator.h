#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "RichTextBlockWidgetDecorator.generated.h"

class UDataTable;
class UUserWidget;

UCLASS(Abstract)
class STALKER2_API URichTextBlockWidgetDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, Transient)
    TArray<UUserWidget*> ChachedWidgetsCreatedByDecorator;
    
protected:
    UPROPERTY(EditAnywhere)
    UDataTable* WidgetSet;
    
public:
    URichTextBlockWidgetDecorator();

};

