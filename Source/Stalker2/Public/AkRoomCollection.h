#pragma once
#include "CoreMinimal.h"
#include "BaseTickAggregationCollection.h"
#include "AkRoomCollection.generated.h"

class UAkRoomComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FAkRoomCollection : public FBaseTickAggregationCollection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    TArray<UAkRoomComponent*> RoomComponents;
    
public:
    FAkRoomCollection();
};

