#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "TilingGridBack.generated.h"

class USizeBox;

UCLASS(EditInlineNew)
class STALKER2_API UTilingGridBack : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* FullSizeBox;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D VisibleSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BorderSize;
    
    UTilingGridBack();

};

