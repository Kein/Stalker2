#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PlayerItemsSounds.generated.h"

class UAkAudioEvent;

UCLASS(BlueprintType)
class UPlayerItemsSounds : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* SFXPickUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* SFXPickUpCloth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* SFXDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* SFXUse;
    
    UPlayerItemsSounds();

};

