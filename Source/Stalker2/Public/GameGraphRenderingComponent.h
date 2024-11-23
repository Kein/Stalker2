#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Debug/DebugDrawComponent.h"
#include "GameGraphSceneProxyDrawParams.h"
#include "GameGraphRenderingComponent.generated.h"

class UMaterialInstance;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGameGraphRenderingComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    uint32 ShowComponentId;
    
    UPROPERTY(EditAnywhere, Transient)
    FGameGraphSceneProxyDrawParams DrawParams;
    
    UPROPERTY(EditAnywhere)
    UMaterialInstance* GameGraphMaterial;
    
    UPROPERTY(VisibleAnywhere)
    FBoxSphereBounds GameGraphBoundsBox;
    
public:
    UGameGraphRenderingComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ShowAllComponents();
    
};

