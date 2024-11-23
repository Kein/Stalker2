#include "Codelock.h"
#include "CodeComponent.h"
#include "CodelockSingleClickComponent.h"

ACodelock::ACodelock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mesh = NULL;
    this->InteractComponent = CreateDefaultSubobject<UCodelockSingleClickComponent>(TEXT("Interact"));
    this->CodeComponent = CreateDefaultSubobject<UCodeComponent>(TEXT("CodeComponent"));
    this->CodeLockDistance = 100.00f;
    this->CodeLockZoomInTime = 2.00f;
    this->CodeLockZoomOutTime = 2.00f;
    this->CodeLockForceZoomOutTime = 1.00f;
    this->FailDisplayTimerRate = 2.00f;
    this->bOverrideKeyMap = false;
}





