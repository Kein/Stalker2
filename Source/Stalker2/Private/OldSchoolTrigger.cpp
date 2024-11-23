#include "OldSchoolTrigger.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AOldSchoolTrigger::AOldSchoolTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerComponent"));
    this->DistanceToHinge = 55.00f;
    this->HalfAngleToHinge = 15.00f;
    this->Door = NULL;
    this->Trigger->SetupAttachment(RootComponent);
}

void AOldSchoolTrigger::OnTriggerEndOverlap(const UPrimitiveComponent* OverlappedComponent, const AActor* OtherActor, const UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex) {
}

void AOldSchoolTrigger::OnTriggerBeginOverlap(const UPrimitiveComponent* Comp, const AActor* OtherActor, const UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult) {
}


