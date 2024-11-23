#include "CombinationLock.h"

UCombinationLock::UCombinationLock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAvailableToPlayer = true;
    this->Code = 156676;
    this->Opened = false;
}


