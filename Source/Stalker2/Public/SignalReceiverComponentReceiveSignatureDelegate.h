#pragma once
#include "CoreMinimal.h"
#include "SignalReceiverComponentReceiveSignatureDelegate.generated.h"

class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSignalReceiverComponentReceiveSignature, UObject*, EnterPropertyName, UObject*, DataObject);

