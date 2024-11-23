#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "PlayerAutoCoverAnimations.h"
#include "PlayerFirearmInternalAnimations.h"
#include "PlayerWeaponAnimCollectionInterface.h"
#include "PlayerWeaponAnimations.h"
#include "PlayerFirearmAnimCollection.generated.h"

class UCurveVector;

UCLASS(BlueprintType)
class STALKER2_API UPlayerFirearmAnimCollection : public UObject, public IPlayerWeaponAnimCollectionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FPlayerFirearmInternalAnimations InternalAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FVector> SocketLocations;
    
    UPROPERTY(EditAnywhere)
    UCurveVector* IdleSwayCurve;
    
    UPROPERTY(EditAnywhere)
    FPlayerWeaponAnimations WeaponAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPlayerAutoCoverAnimations AutoCoverAnimations;
    
public:
    UPlayerFirearmAnimCollection();


    // Fix for true pure virtual functions not being implemented
};

