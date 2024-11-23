#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AnimNotifyBase.h"
#include "BodyPartRestriction.h"
#include "EApplyRestrictionType.h"
#include "EAttractionPointType.h"
#include "ELookAtAction.h"
#include "ELookAtOwnerState.h"
#include "ERotationPartType.h"
#include "AnimNotify_LookAt.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_LookAt : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ELookAtAction LookAtAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ELookAtOwnerState LookAtOwnerState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAttractionPointType AttractionPointType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLookAtPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName LookAtPlaceholderQuestGuid;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName LookAtActorFName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReactionTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Priority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EApplyRestrictionType ApplyRestrictionType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ERotationPartType, FBodyPartRestriction> HorizontalRestrictions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ERotationPartType, FBodyPartRestriction> VerticalRestrictions;
    
    UAnimNotify_LookAt();

};

