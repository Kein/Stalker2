#pragma once
#include "CoreMinimal.h"
#include "GuidActorComponent.h"
#include "SaveableComponent.h"
#include "LightBulbComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API ULightBulbComponent : public UGuidActorComponent, public ISaveableComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bFlicker;
    
    UPROPERTY(EditAnywhere)
    bool bAutoLightOnNight;
    
public:
    ULightBulbComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFlicker(const bool bInFlicker);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoLightOnNight(const bool bInAutoLightOnNight);
    
    UFUNCTION(BlueprintPure)
    bool IsFlicker() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAutoLightOnNight() const;
    

    // Fix for true pure virtual functions not being implemented
};

