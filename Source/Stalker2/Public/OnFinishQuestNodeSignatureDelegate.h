#pragma once
#include "CoreMinimal.h"
#include "OnFinishQuestNodeSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinishQuestNodeSignature, UObject*, EnterPropertyName);
