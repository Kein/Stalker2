#pragma once
#include "CoreMinimal.h"
#include "OnStartQuestNodeDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartQuestNodeDelegate, UObject*, EnterPropertyName);

