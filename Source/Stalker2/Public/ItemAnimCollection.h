#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AnimWeaponSwingContainer.h"
#include "CharacterWeaponAnimations.h"
#include "PlayerWeaponAnimCollectionInterface.h"
#include "PlayerWeaponAnimations.h"
#include "WeaponInertiaContainer.h"
#include "ItemAnimCollection.generated.h"

UCLASS()
class STALKER2_API UItemAnimCollection : public UObject, public IPlayerWeaponAnimCollectionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations UseItemAnimation;
    
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations UseItemFastAnimation;
    
    UPROPERTY(EditAnywhere)
    FAnimWeaponSwingContainer SwingConfigContainer;
    
    UPROPERTY(EditAnywhere)
    FWeaponInertiaContainer StopSwingInertia;
    
    UPROPERTY(EditAnywhere)
    FPlayerWeaponAnimations WeaponAnimations;
    
public:
    UItemAnimCollection();


    // Fix for true pure virtual functions not being implemented
};

