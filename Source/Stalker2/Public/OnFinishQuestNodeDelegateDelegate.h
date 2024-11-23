#pragma once
#include "CoreMinimal.h"
#include "OnFinishQuestNodeDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinishQuestNodeDelegate, UObject*, EnterPropertyName);

