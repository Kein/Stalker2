#pragma once
#include "CoreMinimal.h"
#include "HoverIndicator.h"
#include "OnTrackingStageDelegate.h"
#include "OnUpdateStageHoverDelegate.h"
#include "Templates/SubclassOf.h"
#include "PDAQuestTaskContainer.generated.h"

class UPDAQuestTaskSlot;
class UScrollBox;

UCLASS(EditInlineNew)
class STALKER2_API UPDAQuestTaskContainer : public UHoverIndicator {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UScrollBox* TaskScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UPDAQuestTaskSlot> TaskListClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TaskListSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FontStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString InputAction;
    
    UPROPERTY(BlueprintAssignable)
    FOnTrackingStage OnTrackingStage;
    
    UPROPERTY(BlueprintAssignable)
    FOnUpdateStageHover OnUpdateStageHover;
    
    UPDAQuestTaskContainer();

protected:
    UFUNCTION()
    void StageClick(UPDAQuestTaskSlot* InSlot);
    
    UFUNCTION()
    void MouseHoverStage(const bool bHovered, const int32 IndexOnParent);
    
};

