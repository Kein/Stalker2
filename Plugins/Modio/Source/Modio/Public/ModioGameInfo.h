#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGameMonetizationFlags.h"
#include "EModioModfilePlatform.h"
#include "ModioGameID.h"
#include "ModioGamePlatform.h"
#include "ModioGameStats.h"
#include "ModioHeaderImage.h"
#include "ModioIcon.h"
#include "ModioLogo.h"
#include "ModioOtherUrl.h"
#include "ModioTheme.h"
#include "ModioGameInfo.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioGameInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FModioGameID GameId;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime DateAdded;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime DateUpdated;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime DateLive;
    
    UPROPERTY(BlueprintReadOnly)
    FString UgcName;
    
    UPROPERTY(BlueprintReadOnly)
    FModioIcon Icon;
    
    UPROPERTY(BlueprintReadOnly)
    FModioLogo Logo;
    
    UPROPERTY(BlueprintReadOnly)
    FModioHeaderImage HeaderImage;
    
    UPROPERTY(BlueprintReadOnly)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly)
    FString Summary;
    
    UPROPERTY(BlueprintReadOnly)
    FString Instructions;
    
    UPROPERTY(BlueprintReadOnly)
    FString InstructionsUrl;
    
    UPROPERTY(BlueprintReadOnly)
    FString ProfileUrl;
    
    UPROPERTY(BlueprintReadOnly)
    FModioTheme Theme;
    
    UPROPERTY(BlueprintReadOnly)
    FModioGameStats Stats;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FModioOtherUrl> OtherUrls;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<EModioModfilePlatform> Platforms;
    
    UPROPERTY(BlueprintReadOnly)
    EGameMonetizationFlags GameMonetizationOptions;
    
    UPROPERTY(BlueprintReadOnly)
    FString VirtualTokenName;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FModioGamePlatform> PlatformSupport;
    
    FModioGameInfo();
};

