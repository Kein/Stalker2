#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjBase.h"
#include "UIDActor_InteractableObject.generated.h"

UCLASS(Abstract)
class AUIDActor_InteractableObject : public AActor, public IObjBase {
    GENERATED_BODY()
public:
    AUIDActor_InteractableObject(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

