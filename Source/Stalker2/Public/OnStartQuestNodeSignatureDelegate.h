#pragma once
#include "CoreMinimal.h"
#include "OnStartQuestNodeSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartQuestNodeSignature, UObject*, EnterPropertyName);

