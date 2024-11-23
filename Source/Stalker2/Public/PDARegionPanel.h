#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChildViewBase.h"
#include "PDARegionPanel.generated.h"

class UProgressBar;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UPDARegionPanel : public UChildViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UProgressBar* Progress;
    
    UPROPERTY(Instanced)
    UTextWidget* RegionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ActiveColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor DisactiveColor;
    
    UPDARegionPanel();

};

