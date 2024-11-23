#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AnimInteractableData.h"
#include "InteractableAnimations.h"
#include "PlayerWeaponAnimCollectionInterface.h"
#include "PlayerWeaponAnimations.h"
#include "InteractableAnimCollection.generated.h"

UCLASS(BlueprintType)
class STALKER2_API UInteractableAnimCollection : public UObject, public IPlayerWeaponAnimCollectionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FInteractableAnimations InteractableAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnimInteractableData InteractableData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPlayerWeaponAnimations WeaponAnimations;
    
public:
    UInteractableAnimCollection();


    // Fix for true pure virtual functions not being implemented
};

