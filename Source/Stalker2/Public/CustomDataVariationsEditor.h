#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECustomDataDistribution.h"
#include "CustomDataVariationsEditor.generated.h"

class UCustomDataEditor;

UCLASS(BlueprintType)
class STALKER2_API UCustomDataVariationsEditor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ParameterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MaterialGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VariationStartingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VariationCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldBeAppliedOnMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECustomDataDistribution Distribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UCustomDataEditor*> Variations;
    
public:
    UCustomDataVariationsEditor();

};

