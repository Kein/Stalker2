#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "CameraManager.generated.h"

class APlayerCameraManager;
class UCameraComponent;
class UCameraModifier_LookAt;
class UMaterialParameterCollectionInstance;

UCLASS()
class STALKER2_API UCameraManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UCameraComponent* CameraComponent;
    
    UPROPERTY()
    APlayerCameraManager* PlayerCameraManager;
    
    UPROPERTY()
    UCameraModifier_LookAt* CachedCameraLookAtMod;
    
    UPROPERTY(Transient)
    UMaterialParameterCollectionInstance* FovMPC;
    
    UPROPERTY(Transient)
    UMaterialParameterCollectionInstance* EnvironmentMPC;
    
public:
    UCameraManager();

};

