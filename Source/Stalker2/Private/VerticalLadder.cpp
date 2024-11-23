#include "VerticalLadder.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "ImpulseComponent.h"
#include "LadderComponent.h"
#include "SingleClickComponent.h"

AVerticalLadder::AVerticalLadder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LadderRoot"));
    this->ClimbZone = CreateDefaultSubobject<UBoxComponent>(TEXT("ClimbZone"));
    this->ClimbStart = CreateDefaultSubobject<UArrowComponent>(TEXT("ClimbStart"));
    this->FoldedLadderRoot = CreateDefaultSubobject<USceneComponent>(TEXT("FoldedLadderRoot"));
    this->FoldedLadderCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("FoldedLadderCollisionComponent"));
    this->SingleClickComponent = CreateDefaultSubobject<USingleClickComponent>(TEXT("SingleClickComponent"));
    this->LadderComponent = CreateDefaultSubobject<ULadderComponent>(TEXT("LadderComponent"));
    this->ImpulseComponent = CreateDefaultSubobject<UImpulseComponent>(TEXT("ImpulseComponent"));
    this->CollisionHeightUpperExtend = 20.00f;
    this->LadderAccessAngle = 90.00f;
    this->LadderHeight = 40;
    this->bAutoInteractTop = false;
    this->bAutoInteractBottom = true;
    this->bClimbingCollisionEnabled = true;
    this->bMeshVisible = true;
    this->LadderType = ELadderType::Blockout;
    this->bFoldedLadder = false;
    this->FoldedLadderHeight = 2;
    this->FoldedLadderZLocation = 0.00f;
    this->FoldedLadderHorizontalOffset = 0.00f;
    this->FoldedLadderPushImpulse = 10000.00f;
    this->ClimbZone->SetupAttachment(RootComponent);
    this->ClimbStart->SetupAttachment(RootComponent);
    this->FoldedLadderRoot->SetupAttachment(RootComponent);
    this->FoldedLadderCollisionComponent->SetupAttachment(FoldedLadderRoot);
}


void AVerticalLadder::OnUnfoldingStarted() {
}

void AVerticalLadder::OnUnfoldingEnded() {
}

void AVerticalLadder::OnLadderEnabled() {
}

void AVerticalLadder::OnHiddenStateChanged() {
}

void AVerticalLadder::OnClimbZoneEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex) {
}

void AVerticalLadder::OnClimbZoneBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult) {
}

float AVerticalLadder::GetClimbZoneHalfHeight() const {
    return 0.0f;
}


