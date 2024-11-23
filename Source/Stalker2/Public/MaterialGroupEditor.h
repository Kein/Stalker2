#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "MaterialGroupEditor.generated.h"

UCLASS(BlueprintType)
class STALKER2_API UMaterialGroupEditor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath MaterialPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VariationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockedInVisualizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
public:
    UMaterialGroupEditor();

};

