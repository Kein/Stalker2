#pragma once
#include "CoreMinimal.h"
#include "ETopazScannerState.h"
#include "InteractableObject.h"
#include "PrototypeSID.h"
#include "TopazScannerVFX.h"
#include "TopazScanner.generated.h"

class UPrimitiveComponent;
class USkeletalMeshComponent;
class UTopazScannerComponent;
class UTopazSingleClickComponent;

UCLASS()
class STALKER2_API ATopazScanner : public AInteractableObject {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPrimitiveComponent* InvisibleScannerCollision;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UTopazSingleClickComponent* SingleClickComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UTopazScannerComponent* ScannerComponent;
    
private:
    UPROPERTY(EditAnywhere)
    FPrototypeSID RewardItemSID;
    
    UPROPERTY(EditAnywhere)
    bool bStationary;
    
    UPROPERTY(EditAnywhere)
    FTopazScannerVFX InactiveVFX;
    
    UPROPERTY(EditAnywhere)
    FTopazScannerVFX ActiveVFX;
    
    UPROPERTY(EditAnywhere)
    float SievertsCenterValue;
    
    UPROPERTY(EditAnywhere)
    float SievertsDeviation;
    
    UPROPERTY(EditAnywhere)
    float SievertsChangeFrequency;
    
    UPROPERTY(EditAnywhere)
    bool bSuccessfulScanner;
    
public:
    ATopazScanner(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnStateChanged(const ETopazScannerState NewState);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsStationary() const;
    
};

