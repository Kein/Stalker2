#pragma once
#include "CoreMinimal.h"
#include "EModioEnvironment.h"
#include "EModioPortal.h"
#include "ModioApiKey.h"
#include "ModioGameID.h"
#include "ModioInitializeOptions.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioInitializeOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FModioGameID GameId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FModioApiKey ApiKey;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EModioEnvironment GameEnvironment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EModioPortal PortalInUse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FString, FString> ExtendedInitializationParameters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseBackgroundThread;
    
    FModioInitializeOptions();
};

