#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "AudioScattererDataAsset.generated.h"

// FIXME part of Landscape module
// class UTileBitmapAdapter;

UCLASS(BlueprintType)
class STALKER2_API UAudioScattererDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    // UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    // UTileBitmapAdapter* TileBitmap;
    
    UPROPERTY(EditAnywhere)
    FVector WorldTopLeftCoords;
    
    UPROPERTY(EditAnywhere)
    float WorldWidth;
    
    UPROPERTY(EditAnywhere)
    float WorldHeight;
    
    UAudioScattererDataAsset();

};

