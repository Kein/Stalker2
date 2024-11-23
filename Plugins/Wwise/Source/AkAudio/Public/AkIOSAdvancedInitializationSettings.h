#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkIOSAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkIOSAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 uNumSpatialAudioPointSources;
    
    UPROPERTY(EditAnywhere)
    bool bVerboseSystemOutput;
    
    AKAUDIO_API FAkIOSAdvancedInitializationSettings();
};
