#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MediaOutput.generated.h"

class UMediaCapture;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class MEDIAIOCORE_API UMediaOutput : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 NumberOfTextureBuffers;
    
    UMediaOutput();

    UFUNCTION(BlueprintPure)
    bool Validate(FString& OutFailureReason) const;
    
    UFUNCTION(BlueprintCallable)
    UMediaCapture* CreateMediaCapture();
    
};

