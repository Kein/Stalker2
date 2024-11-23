#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjBase.h"
#include "UIDActor_DestructibleObject.generated.h"

UCLASS(Abstract)
class STALKER2_API AUIDActor_DestructibleObject : public AActor, public IObjBase {
    GENERATED_BODY()
public:
    AUIDActor_DestructibleObject(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

