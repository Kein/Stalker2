#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MeshGeneratorMaterialSlotEditor.generated.h"

class UCustomDataVariationsEditor;
class UMaterialGroupEditor;

UCLASS(BlueprintType)
class STALKER2_API UMeshGeneratorMaterialSlotEditor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MaterialGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMaterialGroupEditor*> MaterialGroupArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaterialSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UCustomDataVariationsEditor*> CustomData;
    
public:
    UMeshGeneratorMaterialSlotEditor();

};

