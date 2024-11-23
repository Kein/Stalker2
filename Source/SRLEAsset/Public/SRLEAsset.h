#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SRLEAsset.generated.h"

class UTexture2D;

UCLASS()
class SRLEASSET_API USRLEAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTexture2D* TextureIn;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> InputTexture;
    
    UPROPERTY(EditAnywhere)
    int32 CompressionBlockSize;
    
    UPROPERTY(EditAnywhere)
    bool bAutoBlockSize;
    
private:
    UPROPERTY(VisibleAnywhere)
    int32 DataSize;
    
    UPROPERTY(VisibleAnywhere)
    int32 SizeX;
    
    UPROPERTY(VisibleAnywhere)
    int32 SizeY;
    
    UPROPERTY(VisibleAnywhere)
    int32 BlockSize;
    
    UPROPERTY(VisibleAnywhere)
    int32 BlocksCount;
    
public:
    USRLEAsset();

};

