#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EModioAuthenticationProvider.h"
#include "EModioPlatformName.h"
#include "EModioPortal.h"
#include "ModioPlatformHelpersLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioPlatformHelpersLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioPlatformHelpersLibrary();

    UFUNCTION(BlueprintPure)
    static EModioPortal GetDefaultPortalForCurrentPlatform();
    
    UFUNCTION(BlueprintPure)
    static EModioAuthenticationProvider GetDefaultAuthProviderForCurrentPlatform();
    
    UFUNCTION(BlueprintPure)
    static EModioPlatformName GetCurrentPlatform();
    
};

