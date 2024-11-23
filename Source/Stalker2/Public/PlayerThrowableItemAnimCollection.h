#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CharacterWeaponAnimations.h"
#include "PlayerThrowableItemInternalAnimations.h"
#include "PlayerWeaponAnimCollectionInterface.h"
#include "PlayerWeaponAnimations.h"
#include "PlayerThrowableItemAnimCollection.generated.h"

UCLASS()
class STALKER2_API UPlayerThrowableItemAnimCollection : public UObject, public IPlayerWeaponAnimCollectionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FPlayerThrowableItemInternalAnimations InternalAnimations;
    
    UPROPERTY(EditAnywhere)
    FPlayerWeaponAnimations WeaponAnimations;
    
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations ToggleFlashlight;
    
public:
    UPlayerThrowableItemAnimCollection();


    // Fix for true pure virtual functions not being implemented
};

