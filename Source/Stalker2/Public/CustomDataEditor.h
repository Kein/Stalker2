#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomDataEditor.generated.h"

class UEditorMaterialParameterConfig;

UCLASS(BlueprintType)
class STALKER2_API UCustomDataEditor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ParameterValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VariationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockedInVisualizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UEditorMaterialParameterConfig*> MaterialParameterConfigs;
    
public:
    UCustomDataEditor();

};

