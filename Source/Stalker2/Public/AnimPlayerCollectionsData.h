#pragma once
#include "CoreMinimal.h"
#include "ESubgraphBlendTypes.h"
#include "PlayerExternalAnimations.h"
#include "AnimPlayerCollectionsData.generated.h"

class UInteractableAnimCollection;
class UItemAnimCollection;
class UPlayerAnimCollection;
class UPlayerDefaultAnimCollection;
class UPlayerDetectorAnimCollection;
class UPlayerFirearmAnimCollection;
class UPlayerKnifeAnimCollection;
class UPlayerThrowableItemAnimCollection;
class UWeaponAttachAnimCollection;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerCollectionsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPlayerDefaultAnimCollection* DefaultAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPlayerDefaultAnimCollection* DragDeadBodyAnimCollection;
    
    UPROPERTY(BlueprintReadWrite)
    UPlayerAnimCollection* AnimCollection;
    
    UPROPERTY(BlueprintReadWrite)
    UPlayerFirearmAnimCollection* FirearmAnimCollection;
    
    UPROPERTY(BlueprintReadWrite)
    UPlayerThrowableItemAnimCollection* ThrowableAnimCollection;
    
    UPROPERTY(BlueprintReadWrite)
    UPlayerKnifeAnimCollection* KnifeAnimCollection;
    
    UPROPERTY(BlueprintReadWrite)
    UItemAnimCollection* ItemAnimCollection;
    
    UPROPERTY(BlueprintReadWrite)
    UInteractableAnimCollection* ItemInteractableAnimCollection;
    
    UPROPERTY(BlueprintReadWrite)
    UWeaponAttachAnimCollection* AttachAnimCollection;
    
    UPROPERTY(BlueprintReadWrite)
    UPlayerDetectorAnimCollection* DetectorAnimCollection;
    
    UPROPERTY(BlueprintReadWrite)
    FPlayerExternalAnimations ExternalAnimations;
    
    UPROPERTY(BlueprintReadWrite)
    bool bWeaponSubgraphToggle;
    
    UPROPERTY(BlueprintReadOnly)
    float WeaponSubgraphBlend;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAdditionalSubgraphToggle;
    
    UPROPERTY(BlueprintReadOnly)
    float AdditionalSubgraphBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ESubgraphBlendTypes, float> SubgraphDefaultBlendTime;
    
    FAnimPlayerCollectionsData();
};

