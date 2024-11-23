#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "HumanFirearmInternalAnimations.h"
#include "HumanWeaponAnimations.h"
#include "HumanWeaponExternalAnimations.h"
#include "HumanFirearmAnimCollection.generated.h"

UCLASS(BlueprintType)
class STALKER2_API UHumanFirearmAnimCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FHumanFirearmInternalAnimations InternalAnimations;
    
    UPROPERTY(EditAnywhere)
    FHumanWeaponExternalAnimations ExternalAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FVector> SocketLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOneHanded;
    
    UPROPERTY(EditAnywhere)
    FHumanWeaponAnimations WeaponAnimations;
    
public:
    UHumanFirearmAnimCollection();

};

