#include "AchievementTrigger.h"
#include "Components/BoxComponent.h"

AAchievementTrigger::AAchievementTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TriggerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerArea"));
}

void AAchievementTrigger::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


