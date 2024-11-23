#pragma once
#include "CoreMinimal.h"
#include "BuckRecoilKeys.h"
#include "GunRecoilTextureDataAsset.h"
#include "ShotgunRecoilTextureDataAsset.generated.h"

UCLASS()
class STALKER2_API UShotgunRecoilTextureDataAsset : public UGunRecoilTextureDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FBuckRecoilKeys> RecoilPatternBuckKeys;
    
public:
    UShotgunRecoilTextureDataAsset();

};

