#pragma once
#include "CoreMinimal.h"
#include "HumanExternalAnimations.h"
#include "HumanWeaponExternalAnimations.h"
#include "AnimHumanCollectionsData.generated.h"

class UHumanAnimCollection;
class UHumanDefaultAnimCollection;
class UHumanFirearmAnimCollection;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHumanCollectionsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UHumanDefaultAnimCollection* DefaultAnimCollection;
    
    UPROPERTY(BlueprintReadWrite)
    UHumanAnimCollection* AnimCollection;
    
    UPROPERTY(BlueprintReadWrite)
    UHumanFirearmAnimCollection* FirearmAnimCollection;
    
    UPROPERTY(BlueprintReadWrite)
    FHumanExternalAnimations ExternalAnimations;
    
    UPROPERTY(BlueprintReadWrite)
    FHumanWeaponExternalAnimations WeaponExternalAnimations;
    
    FAnimHumanCollectionsData();
};

