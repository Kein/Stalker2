#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ELocalizationLanguage.h"
#include "CutscenesLocalizationConfig.generated.h"

UCLASS(DefaultConfig, Config=BinkCutscenes)
class STALKER2_API UCutscenesLocalizationConfig : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TMap<ELocalizationLanguage, uint32> VoiceoverLanguageToTrackIndexMap;
    
    UPROPERTY(Config, EditAnywhere)
    FString LocalizedBinkPostfix;
    
    UCutscenesLocalizationConfig();

};

