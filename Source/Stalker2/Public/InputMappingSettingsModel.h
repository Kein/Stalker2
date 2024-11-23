#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputMappingSettingsElementModels.h"
#include "InputMappingSettingsModel.generated.h"

UCLASS()
class UInputMappingSettingsModel : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FInputMappingSettingsElementModels> ElementsModels;
    
public:
    UInputMappingSettingsModel();

};

