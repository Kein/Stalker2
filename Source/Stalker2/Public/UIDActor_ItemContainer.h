#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjBase.h"
#include "UIDActor_ItemContainer.generated.h"

UCLASS(Abstract)
class AUIDActor_ItemContainer : public AActor, public IObjBase {
    GENERATED_BODY()
public:
    AUIDActor_ItemContainer(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

