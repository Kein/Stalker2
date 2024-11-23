#pragma once
#include "CoreMinimal.h"
#include "PlatformSwitcherBase.h"
#include "PlatformSwitcher.generated.h"

UCLASS()
class STALKER2_API UPlatformSwitcher : public UPlatformSwitcherBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bChildrenView;
    
    UPlatformSwitcher();

};

