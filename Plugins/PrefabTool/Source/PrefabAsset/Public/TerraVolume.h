#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "TerraVolume.generated.h"

class ALandscapeProxy;

UCLASS()
class PREFABASSET_API ATerraVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<uint16> CapturedHData;
    
    UPROPERTY()
    TMap<FIntPoint, uint16> AppliedAlignHMap;
    
    UPROPERTY()
    TMap<FIntPoint, uint16> AppliedCaptureDeltaHMap;
    
    UPROPERTY()
    FVector4 CurrentBounds;
    
    UPROPERTY()
    FIntPoint CapturedSize;
    
    UPROPERTY()
    FVector CapturedBoxExtend0;
    
    UPROPERTY()
    FVector CapturedBoxExtend1;
    
    UPROPERTY()
    FVector CapturedBoxExtend2;
    
    UPROPERTY()
    FVector CapturedBoxExtend3;
    
    UPROPERTY()
    bool bSkipRestoreOnDelete;
    
    UPROPERTY(Transient)
    ALandscapeProxy* CachedLandscape;
    
    UPROPERTY()
    bool bApplied;
    
    UPROPERTY(EditAnywhere)
    bool bKeepTerrainOnDestruction;
    
public:
    ATerraVolume(const FObjectInitializer& ObjectInitializer);

};

