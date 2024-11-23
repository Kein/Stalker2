#pragma once
#include "CoreMinimal.h"
#include "Components/DecalComponent.h"
#include "TriplanarDecalComponent.generated.h"

class UTexture2D;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UTriplanarDecalComponent : public UDecalComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 NumberOfTraces;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* HeightMap;
    
public:
    UTriplanarDecalComponent(const FObjectInitializer& ObjectInitializer);

};

