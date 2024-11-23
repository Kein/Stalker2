#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "EDamageAffectorType.h"
#include "ESwarmInstanceStates.h"
#include "SwarmDamageHandleImpact.h"
#include "SwarmInstanceSimulationConfig.h"
#include "AISwarmComponent.generated.h"

class AActor;
class UInstancedStaticMeshComponent;
class UMaterialInterface;
class UStaticMesh;
class UVATAnimationsConfig;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UAISwarmComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    FVector SoundLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LocomotionSoundRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VoiceSoundRadius;
    
private:
    UPROPERTY(EditDefaultsOnly)
    int32 MaxInstancesInSwarm;
    
    UPROPERTY(EditAnywhere)
    float FlockRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float CellSize;
    
    UPROPERTY(EditDefaultsOnly)
    float WallPadding;
    
    UPROPERTY(EditDefaultsOnly)
    float SimulationGridPadding;
    
    UPROPERTY(EditDefaultsOnly)
    float MovementVariationRange;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SwarmBoundsCellCountClamp;
    
    UPROPERTY(EditAnywhere)
    int32 MaxAttackingInstances;
    
    UPROPERTY(EditAnywhere)
    float AttackTimeout;
    
    UPROPERTY(EditAnywhere)
    float InstanceCollisionRadius;
    
    UPROPERTY(EditAnywhere)
    float HeavyProjectileDamageThreashold;
    
    UPROPERTY(EditDefaultsOnly)
    FName MaterialVariantPropertyName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxTextureVariants;
    
    UPROPERTY(EditDefaultsOnly)
    int32 VisualsSeed;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D InstanceScaleRange;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* MeshMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    UStaticMesh* StaticMesh;
    
    UPROPERTY(Instanced)
    UInstancedStaticMeshComponent* SwarmInstancedMesh;
    
    UPROPERTY(EditDefaultsOnly)
    UVATAnimationsConfig* VATAnimationsConfig;
    
    UPROPERTY(EditAnywhere)
    TMap<EDamageAffectorType, FSwarmDamageHandleImpact> DamageImpactConfig;
    
    UPROPERTY(EditAnywhere)
    TMap<ESwarmInstanceStates, FSwarmInstanceSimulationConfig> SwarmConfigurations;
    
public:
    UAISwarmComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Simulate(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageTarget(const AActor* Target, const float OffsetToGroundLevel, const float EngageRadius);
    
    UFUNCTION(BlueprintCallable)
    void OnConstruction(const FTransform& Transform, const float SwarmHealth);
    
private:
    UFUNCTION()
    TArray<FName> GetVATAnimationNames() const;
    
};

