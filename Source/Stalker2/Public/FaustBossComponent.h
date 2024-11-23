#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilityPrototypeSID.h"
#include "CustomDamageHandleComponent.h"
#include "FaustBossComponent.generated.h"

class UPhysicalMaterial;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UFaustBossComponent : public UActorComponent, public ICustomDamageHandleComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAbilityPrototypeSID WoundedPsyStrikeSID;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* InvulnerablePhysicalMaterial;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* OriginalPhysicalMaterial;
    
    UPROPERTY(EditAnywhere)
    FString WoundedDialogPrototypeSID;
    
    UPROPERTY(EditAnywhere)
    int32 NumberOfPhases;
    
public:
    UFaustBossComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void WoundedBark();
    

    // Fix for true pure virtual functions not being implemented
};

