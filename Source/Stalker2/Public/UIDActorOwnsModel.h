#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjBase.h"
#include "UIDActorOwnsModel.generated.h"

UCLASS(Abstract)
class STALKER2_API AUIDActorOwnsModel : public AActor, public IObjBase {
    GENERATED_BODY()
public:
    AUIDActorOwnsModel(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

