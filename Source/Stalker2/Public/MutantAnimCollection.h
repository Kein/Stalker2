#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAnomalyAnimInteraction.h"
#include "EAttackDirection.h"
#include "PoseSearchLocomotionAnimCollectionData.h"
#include "MutantAnimCollection.generated.h"

class UAnimMontage;
class UAnimSequenceBase;

UCLASS(BlueprintType)
class STALKER2_API UMutantAnimCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimMontage*> ClawAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimMontage*> JumpAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EAttackDirection, UAnimMontage*> RunAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* Sleep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* ReactionOnEmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EAnomalyAnimInteraction, UAnimMontage*> AnomalyInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseSearchLocomotionAnimCollectionData PoseSearchLocomotionAnimCollectionData;
    
public:
    UMutantAnimCollection();

};

