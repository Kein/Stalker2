#pragma once
#include "CoreMinimal.h"
#include "InteractionDelegateDelegate.generated.h"

class AObj;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionDelegate, AObj*, Object);

