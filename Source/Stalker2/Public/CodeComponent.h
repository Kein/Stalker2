#pragma once
#include "CoreMinimal.h"
#include "GuidActorComponent.h"
#include "SaveableComponent.h"
#include "CodeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UCodeComponent : public UGuidActorComponent, public ISaveableComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FString CorrectCode;
    
    UPROPERTY(EditAnywhere)
    int32 MaximumCodeLength;
    
public:
    UCodeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetCode();
    

    // Fix for true pure virtual functions not being implemented
};

