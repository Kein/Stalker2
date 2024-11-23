#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HitReceiver.h"
#include "FaustInductor.generated.h"

UCLASS()
class STALKER2_API AFaustInductor : public AActor, public IHitReceiver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfInductorPhases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InductorCooldownTime;
    
public:
    AFaustInductor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnInvulnerableHit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInductorEnabled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInductorDisabled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInductorCooldown();
    

    // Fix for true pure virtual functions not being implemented
};

