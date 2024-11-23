#pragma once
#include "CoreMinimal.h"
#include "WaterContactController.h"
#include "ObjWaterContactController.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UObjWaterContactController : public UWaterContactController {
    GENERATED_BODY()
public:
    UObjWaterContactController(const FObjectInitializer& ObjectInitializer);

};

