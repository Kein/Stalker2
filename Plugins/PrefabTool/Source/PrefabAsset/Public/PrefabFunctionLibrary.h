#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "PrefabFunctionLibrary.generated.h"

class AActor;
class APrefabActor;
class UObject;
class UPrefabAsset;

UCLASS(BlueprintType)
class PREFABASSET_API UPrefabFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPrefabFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static APrefabActor* SpawnPrefab(const UObject* WorldContextObject, UPrefabAsset* PrefabAsset, const FTransform& SpawnTransform, TArray<AActor*>& OutSpawnPrefabInstances, bool bSpawnInstancesOnly, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner);
    
};

