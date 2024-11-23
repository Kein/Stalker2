#pragma once
#include "CoreMinimal.h"
#include "OnExcludeQuestNodeDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExcludeQuestNodeDelegate, UObject*, EnterPropertyName);

