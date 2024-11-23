#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "SpaceRestrictorsCheats.generated.h"

UCLASS()
class STALKER2_API USpaceRestrictorsCheats : public UCheatManagerExtension {
    GENERATED_BODY()
public:
    USpaceRestrictorsCheats();

private:
    UFUNCTION(Exec)
    void XRestrictorsShowResponse(const int32 UID);
    
    UFUNCTION(Exec)
    void XRestrictorsPrint();
    
};

