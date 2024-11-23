#pragma once
#include "CoreMinimal.h"
#include "GridInfo.generated.h"

USTRUCT(BlueprintType)
struct FGridInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName GridName;
    
    UPROPERTY(EditAnywhere)
    double OverrideStreamingDistance;
    
    STALKER2_API FGridInfo();
};

inline uint32 GetTypeHash(const FGridInfo& InGridInfo) { return 1; }