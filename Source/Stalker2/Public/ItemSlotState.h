#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "ItemSlotState.generated.h"

class UImage;

UCLASS(EditInlineNew)
class STALKER2_API UItemSlotState : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Highlight;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Background;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Quest;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D SizeReductionToFitEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D SizeReductionToFitGrid;
    
    UPROPERTY(EditAnywhere)
    FLinearColor DependencyColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor HoveredColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor DefaultColor;
    
    UItemSlotState();

};

