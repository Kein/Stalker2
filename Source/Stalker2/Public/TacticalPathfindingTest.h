#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EAgentType.h"
#include "TacticalPathfindingTest.generated.h"

UCLASS()
class STALKER2_API ATacticalPathfindingTest : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    double CoversExploreDistance;
    
    UPROPERTY(EditAnywhere)
    double ExposedLengthBias;
    
    UPROPERTY(EditAnywhere)
    double ExposedLengthPower;
    
    UPROPERTY(EditAnywhere)
    double ConcealedLengthBias;
    
    UPROPERTY(EditAnywhere)
    double ConcealedLengthPower;
    
    UPROPERTY(EditAnywhere)
    bool bUseTacticalNavigation;
    
    UPROPERTY(EditAnywhere)
    EAgentType TestingAgentType;
    
    UPROPERTY(EditAnywhere)
    bool bUseSimplifiedCovers;
    
    ATacticalPathfindingTest(const FObjectInitializer& ObjectInitializer);

};

