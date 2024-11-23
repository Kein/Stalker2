#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EModioAvatarSize.h"
#include "EModioGallerySize.h"
#include "EModioImageState.h"
#include "EModioLogoSize.h"
#include "ModioImageWrapper.h"
#include "OnLoadImageDelegateDelegate.h"
#include "ModioImageLibrary.generated.h"

class UTexture;
class UTexture2DDynamic;

UCLASS(BlueprintType)
class MODIO_API UModioImageLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioImageLibrary();

    UFUNCTION(BlueprintCallable)
    static void LoadAsync(const FModioImageWrapper& Image, FOnLoadImageDelegate OnImageLoaded);
    
    UFUNCTION(BlueprintPure)
    static UTexture2DDynamic* GetTexture(const FModioImageWrapper& Image);
    
    UFUNCTION(BlueprintPure)
    static EModioImageState GetState(const FModioImageWrapper& Image);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetLogoSize(UTexture* Logo, EModioLogoSize LogoSize);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetGallerySize(UTexture* GalleryImage, EModioGallerySize GallerySize);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetAvatarSize(UTexture* avatar, EModioAvatarSize AvatarSize);
    
};

