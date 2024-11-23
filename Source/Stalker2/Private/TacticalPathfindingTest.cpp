#include "TacticalPathfindingTest.h"
#include "Components/SphereComponent.h"

ATacticalPathfindingTest::ATacticalPathfindingTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->CoversExploreDistance = 10000.00f;
    this->ExposedLengthBias = 1.00f;
    this->ExposedLengthPower = 1.00f;
    this->ConcealedLengthBias = 1.00f;
    this->ConcealedLengthPower = 1.00f;
    this->bUseTacticalNavigation = false;
    this->TestingAgentType = EAgentType::Human;
    this->bUseSimplifiedCovers = false;
}


