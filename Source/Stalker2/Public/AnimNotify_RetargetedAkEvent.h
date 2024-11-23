#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_RetargetedAkEvent.generated.h"

class UAkComponent;
class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(CollapseCategories)
class STALKER2_API UAnimNotify_RetargetedAkEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UAnimNotify_RetargetedAkEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UAkComponent* GetAkComponentForSocket(USkeletalMeshComponent* Mesh, const FName& Socket, const UAnimSequenceBase* AnimSequenceBase) const;
    
};

