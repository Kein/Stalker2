#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VATAnimation.h"
#include "VATAnimationsConfig.generated.h"

UCLASS()
class UVATAnimationsConfig : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName MaterialNextAnimPropertyName;
    
    UPROPERTY(EditAnywhere)
    FName MaterialNextAnimLastFramePropertyName;
    
    UPROPERTY(EditAnywhere)
    FName MaterialPrevAnimPropertyName;
    
    UPROPERTY(EditAnywhere)
    FName MaterialAnimBlendingPropertyName;
    
    UPROPERTY(EditAnywhere)
    TArray<FVATAnimation> Animations;
    
    UVATAnimationsConfig();

};

