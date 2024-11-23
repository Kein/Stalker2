#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjBase.h"
#include "UIDActor_Bed.generated.h"

UCLASS(Abstract)
class STALKER2_API AUIDActor_Bed : public AActor, public IObjBase {
    GENERATED_BODY()
public:
    AUIDActor_Bed(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

