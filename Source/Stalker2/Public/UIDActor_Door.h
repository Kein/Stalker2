#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjBase.h"
#include "UIDActor_Door.generated.h"

UCLASS(Abstract)
class AUIDActor_Door : public AActor, public IObjBase {
    GENERATED_BODY()
public:
    AUIDActor_Door(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

