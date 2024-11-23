#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EModioAvatarSize.h"
#include "EModioLogoSize.h"
#include "ModioFilterParams.h"
#include "OnListAllModsDelegateDelegate.h"
#include "ModioExampleLibrary.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UModioExampleLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioExampleLibrary();

    UFUNCTION(BlueprintCallable)
    static void ListUserSubscriptionAsync(const FModioFilterParams& FilterParams, FOnListAllModsDelegate Callback);
    
    UFUNCTION(BlueprintPure)
    static EModioLogoSize GetLogoThumbnailSize();
    
    UFUNCTION(BlueprintPure)
    static EModioLogoSize GetLogoFullSize();
    
    UFUNCTION(BlueprintPure)
    static EModioAvatarSize GetAvatarThumbnailSize();
    
};

