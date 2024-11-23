#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "CustomButton.generated.h"

UCLASS()
class STALKER2_API UCustomButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Tag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CustomIntParam1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CustomIntParam2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CustomFloatParam3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CustomFloatParam4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString StringTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FloatTag;
    
    UCustomButton();

    UFUNCTION()
    void OnPress();
    
    UFUNCTION()
    void OnClick();
    
};

