#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ComplexAttachAnimations.h"
#include "WeaponAttachAnimCollection.generated.h"

UCLASS()
class STALKER2_API UWeaponAttachAnimCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FComplexAttachAnimations AttachAnimations;
    
public:
    UWeaponAttachAnimCollection();

};

