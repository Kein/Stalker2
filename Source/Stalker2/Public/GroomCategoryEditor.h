#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GroomCategoryEditor.generated.h"

class UGroomEditor;

UCLASS(BlueprintType)
class STALKER2_API UGroomCategoryEditor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UGroomEditor*> Variations;
    
public:
    UGroomCategoryEditor();

};

