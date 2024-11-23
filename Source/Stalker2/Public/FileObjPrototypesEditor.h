#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FileObjPrototypesEditor.generated.h"

class UObjPrototypeEditor;

UCLASS(BlueprintType)
class STALKER2_API UFileObjPrototypesEditor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UObjPrototypeEditor*> ObjPrototypes;
    
public:
    UFileObjPrototypesEditor();

};

