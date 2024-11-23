#pragma once
#include "CoreMinimal.h"
#include "EMediaIOQuadLinkTransportType.h"
#include "EMediaIOTransportType.h"
#include "MediaIODevice.h"
#include "MediaIOConnection.generated.h"

USTRUCT()
struct MEDIAIOCORE_API FMediaIOConnection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMediaIODevice Device;
    
    UPROPERTY(EditAnywhere)
    FName protocol;
    
    UPROPERTY(EditAnywhere)
    EMediaIOTransportType TransportType;
    
    UPROPERTY(EditAnywhere)
    EMediaIOQuadLinkTransportType QuadTransportType;
    
    UPROPERTY(EditAnywhere)
    int32 PortIdentifier;
    
    FMediaIOConnection();
};

