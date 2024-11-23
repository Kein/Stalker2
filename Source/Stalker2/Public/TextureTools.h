#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TextureTools.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UTextureTools : public UActorComponent {
    GENERATED_BODY()
public:
    UTextureTools(const FObjectInitializer& ObjectInitializer);

};

