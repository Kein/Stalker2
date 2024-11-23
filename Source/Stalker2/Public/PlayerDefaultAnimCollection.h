#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DragDeadBodyAnimations.h"
#include "EDodgeSide.h"
#include "EquipUnequipAnimations.h"
#include "InspectArtifactAnimations.h"
#include "PlayerDeathAnimations.h"
#include "PlayerDialogAnimations.h"
#include "PlayerGuitarAnimations.h"
#include "PlayerDefaultAnimCollection.generated.h"

class UAnimMontage;
class UPlayerAnimCollection;

UCLASS()
class STALKER2_API UPlayerDefaultAnimCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UPlayerAnimCollection* PlayerAnimCollection;
    
    UPROPERTY(EditAnywhere)
    UClass* PlayerAnimBlueprint;
    
    UPROPERTY(EditAnywhere)
    FEquipUnequipAnimations EquipUnequip;
    
    UPROPERTY(EditAnywhere)
    FInspectArtifactAnimations InspectArtifactAnimations;
    
    UPROPERTY(EditAnywhere)
    FDragDeadBodyAnimations DragDeadBodyAnimations;
    
    UPROPERTY(EditAnywhere)
    FPlayerDeathAnimations DeathAnimations;
    
    UPROPERTY(EditAnywhere)
    FPlayerDialogAnimations Dialog;
    
    UPROPERTY(EditAnywhere)
    FPlayerGuitarAnimations GuitarAnimations;
    
    UPROPERTY(EditAnywhere)
    TMap<EDodgeSide, UAnimMontage*> DodgeAnimations;
    
public:
    UPlayerDefaultAnimCollection();

};

