#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Components/LODSyncComponent.h"
#include "EBodyMeshType.h"
#include "MeshGeneratorBodyMeshEditor.generated.h"

class UGroomCategoryEditor;
class UMeshGeneratorBodyMeshEditor;
class UMeshGeneratorMaterialSlotEditor;

UCLASS(BlueprintType)
class STALKER2_API UMeshGeneratorBodyMeshEditor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<FName> BlockingGroomSIDs;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString BodyMeshSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath MeshPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath AnimPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsSkeletal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> BlockingSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> BlockingAttaches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<FName> BlockingGroom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ItemPrototypeSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBodyMeshType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMeshGeneratorBodyMeshEditor*> AdditionalMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MeshGeneratorSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCustomLODSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESyncOption LODSyncOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> LODSyncMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName HumanReadableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMeshGeneratorMaterialSlotEditor*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UGroomCategoryEditor*> Grooms;
    
public:
    UMeshGeneratorBodyMeshEditor();

};

