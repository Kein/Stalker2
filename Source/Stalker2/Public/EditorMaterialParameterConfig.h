#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EditorMaterialParameterConfig.generated.h"

UCLASS(BlueprintType)
class STALKER2_API UEditorMaterialParameterConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath TexturePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ParameterName;
    
    UEditorMaterialParameterConfig();

};

