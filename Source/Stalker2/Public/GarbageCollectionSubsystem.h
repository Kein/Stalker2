#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GarbageCollectionSubsystem.generated.h"

UCLASS()
class STALKER2_API UGarbageCollectionSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UGarbageCollectionSubsystem();

};

