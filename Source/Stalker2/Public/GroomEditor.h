#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GroomEditor.generated.h"

class UCustomDataVariationsEditor;
class UGroomEditor;
class UMeshGeneratorMaterialSlotEditor;

UCLASS(BlueprintType)
class STALKER2_API UGroomEditor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UGroomEditor*> AdditionalGrooms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath MaterialPath;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath GroomPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath GroomBindingPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VariationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName GroomSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UCustomDataVariationsEditor*> CustomData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMeshGeneratorMaterialSlotEditor*> Materials;
    
public:
    UGroomEditor();

};

