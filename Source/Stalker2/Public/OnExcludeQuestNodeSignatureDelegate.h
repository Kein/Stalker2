#pragma once
#include "CoreMinimal.h"
#include "OnExcludeQuestNodeSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExcludeQuestNodeSignature, UObject*, EnterPropertyName);

