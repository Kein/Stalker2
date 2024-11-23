#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "PrefabActor.generated.h"

class UPrefabAsset;
class UPrefabComponent;

UCLASS()
class PREFABASSET_API APrefabActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPrefabComponent* PrefabComponent;
    
public:
    APrefabActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPrefab(UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected);
    
    UFUNCTION(BlueprintCallable)
    void SetMobility(TEnumAsByte<EComponentMobility::Type> InMobility);
    
    UFUNCTION(BlueprintCallable)
    void SetLockSelection(bool bInLocked);
    
    UFUNCTION(BlueprintPure)
    UPrefabAsset* GetPrefab() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetLockSelection();
    
    UFUNCTION(BlueprintCallable)
    void DestroyPrefabActor(bool bDestroyAttachedChildren);
    
};

