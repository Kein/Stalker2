#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "EFireType.h"
#include "AmmoWidgetSettingsAsset.generated.h"

class UTexture;

UCLASS(BlueprintType)
class STALKER2_API UAmmoWidgetSettingsAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAmmoCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EFireType, UTexture*> FireIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor AmmoTypeDotsActiveColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor AmmoTypeDotsUnactiveColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimAmmoHideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimAmmoShowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor AnimAmmoColor;
    
    UAmmoWidgetSettingsAsset();

};

