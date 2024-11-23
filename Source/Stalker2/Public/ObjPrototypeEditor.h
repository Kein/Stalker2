#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ObjPrototypeEditor.generated.h"

UCLASS(BlueprintType)
class STALKER2_API UObjPrototypeEditor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ItemGeneratorSID;
    
public:
    UObjPrototypeEditor();

};

