#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "StreamingGatewayVolume.generated.h"

UCLASS()
class STALKER2_API AStreamingGatewayVolume : public AVolume {
    GENERATED_BODY()
public:
    AStreamingGatewayVolume(const FObjectInitializer& ObjectInitializer);

};

