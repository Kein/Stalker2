#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BaseDLCInstanceSubsystem.generated.h"

UCLASS(Abstract)
class STALKER2_API UBaseDLCInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UBaseDLCInstanceSubsystem();

};

