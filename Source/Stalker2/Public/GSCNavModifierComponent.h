#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DynamicBaseNavmeshInclusionInterface -FallbackName=DynamicBaseNavmeshInclusionInterface
#include "NavModifierComponent.h"
#include "NavModifierBodyConfig.h"
#include "Templates/SubclassOf.h"
#include "GSCNavModifierComponent.generated.h"

class UNavArea;
class UPrimitiveComponent;

//FIXME custom module
UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGSCNavModifierComponent : public UNavModifierComponent { //, public IDynamicBaseNavmeshInclusionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<UPrimitiveComponent*> SelectedComponents;
    
    UPROPERTY(EditAnywhere)
    TArray<FNavModifierBodyConfig> PhysicalBodies;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> TargetAreaClass;
    
public:
    UGSCNavModifierComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RequestBoundsRecalculation();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSelectedComponent(UPrimitiveComponent* PrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void ClearSelectedComponents();
    
    UFUNCTION(BlueprintCallable)
    void AddSelectedComponent(UPrimitiveComponent* PrimitiveComponent);
    

    // Fix for true pure virtual functions not being implemented
};

