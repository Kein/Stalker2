#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RecoilKeys.h"
#include "GunRecoilTextureDataAsset.generated.h"

UCLASS()
class STALKER2_API UGunRecoilTextureDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FRecoilKeys> RecoilPatternAimKeys;
    
    UPROPERTY()
    TArray<FRecoilKeys> RecoilPatternHipKeys;
    
public:
    UGunRecoilTextureDataAsset();

};

