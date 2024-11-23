#pragma once
#include "CoreMinimal.h"
#include "MenuButtonActionBase.h"
#include "GotoViewAction.generated.h"

class UMenuSubViewBase;

UCLASS(EditInlineNew)
class UGotoViewAction : public UMenuButtonActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UMenuSubViewBase> DestinationWidget;
    
    UPROPERTY(EditDefaultsOnly)
    bool bChangeBehaviourOnPresentation;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CampaignIndex;
    
    UPROPERTY(EditDefaultsOnly)
    FString DifficultyPrototypeSID;
    
public:
    UGotoViewAction();

};

