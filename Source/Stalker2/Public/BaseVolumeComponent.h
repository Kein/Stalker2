#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "ECollisionFormType.h"
#include "BaseVolumeComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UBaseVolumeComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    ECollisionFormType MeshType;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBlockNegativeScale;
    
    UPROPERTY(EditDefaultsOnly)
    bool bForceRoundCylinderBase;
    
    UPROPERTY(EditDefaultsOnly)
    bool bForceUniformSphereScale;
    
public:
    UBaseVolumeComponent(const FObjectInitializer& ObjectInitializer);

};

