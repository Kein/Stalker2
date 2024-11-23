#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "PrototypeSID.h"
#include "UIDActor_FireBreathAnomaly.h"
#include "FireBreathArchiAnomaly.generated.h"

class AActor;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS()
class STALKER2_API AFireBreathArchiAnomaly : public AUIDActor_FireBreathAnomaly {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced)
    UStaticMeshComponent* ScalableRoot;
    
    UPROPERTY(EditAnywhere, Instanced)
    UStaticMeshComponent* CollisionMesh;
    
    UPROPERTY(EditAnywhere)
    float MinRadius;
    
    UPROPERTY(EditAnywhere)
    float MaxRadius;
    
    UPROPERTY(EditAnywhere)
    float MinHeight;
    
    UPROPERTY(EditAnywhere)
    float MaxHeight;
    
    UPROPERTY(EditAnywhere)
    FPrototypeSID EffectPrototypeSID;
    
    UPROPERTY(VisibleAnywhere)
    FGuid Guid;
    
public:
    AFireBreathArchiAnomaly(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTimeAlpha(const float InTimeAlpha);
    
    UFUNCTION(BlueprintCallable)
    void SetScaleAlpha(const float InScaleAlpha);
    
private:
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintPure)
    float GetTimeAlpha() const;
    
    UFUNCTION(BlueprintPure)
    float GetScaleAlpha() const;
    
};

