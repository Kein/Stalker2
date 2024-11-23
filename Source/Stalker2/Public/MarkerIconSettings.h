#pragma once
#include "CoreMinimal.h"
#include "MarkerIconSettings.generated.h"

class UTexture2D;

USTRUCT()
struct FMarkerIconSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* Texture;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* TextureTracked;
    
    UPROPERTY(EditDefaultsOnly)
    double RelativeScale;
    
    UPROPERTY(EditDefaultsOnly)
    FName ColorSID;
    
    STALKER2_API FMarkerIconSettings();
};

