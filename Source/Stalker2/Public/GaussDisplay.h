#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponDisplayInterface.h"
#include "GaussDisplay.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;
class UPlayerOpticScopeComponent;

UCLASS()
class STALKER2_API AGaussDisplay : public AActor, public IWeaponDisplayInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float DischargeAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ChargeAnimationTime;
    
    UPROPERTY(EditDefaultsOnly)
    UNiagaraSystem* ReloadVFX;
    
    UPROPERTY(Instanced, Transient)
    UNiagaraComponent* ReloadVFXComponent;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UPlayerOpticScopeComponent> OpticScopeComponent;
    
public:
    AGaussDisplay(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

