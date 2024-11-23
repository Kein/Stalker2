#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjBase.h"
#include "UIDActor_PoppyFieldAnomaly.generated.h"

UCLASS(Abstract)
class STALKER2_API AUIDActor_PoppyFieldAnomaly : public AActor, public IObjBase {
    GENERATED_BODY()
public:
    AUIDActor_PoppyFieldAnomaly(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

