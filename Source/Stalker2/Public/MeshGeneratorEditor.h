#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MeshGeneratorEditor.generated.h"

class UCustomDataVariationsEditor;
class UGroomCategoryEditor;
class UMeshGeneratorBodySlotEditor;
class UMeshGeneratorMaterialSlotEditor;

UCLASS(BlueprintType)
class STALKER2_API UMeshGeneratorEditor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ParentMeshGeneratorSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ParentItemGeneratorSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMeshGeneratorBodySlotEditor*> GeneratorBodySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMeshGeneratorMaterialSlotEditor*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UCustomDataVariationsEditor*> CustomData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UGroomCategoryEditor*> Grooms;
    
public:
    UMeshGeneratorEditor();

};

