#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MeshGeneratorBodySlotEditor.generated.h"

class UMeshGeneratorBodyMeshEditor;

UCLASS(BlueprintType)
class STALKER2_API UMeshGeneratorBodySlotEditor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SelectedIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMeshGeneratorBodyMeshEditor*> MeshArray;
    
public:
    UMeshGeneratorBodySlotEditor();

};

