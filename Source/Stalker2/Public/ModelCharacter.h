#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ObjBase.h"
#include "ModelCharacter.generated.h"

UCLASS(Abstract)
class STALKER2_API AModelCharacter : public ACharacter, public IObjBase {
    GENERATED_BODY()
public:
    AModelCharacter(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

