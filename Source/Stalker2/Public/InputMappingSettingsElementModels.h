#pragma once
#include "CoreMinimal.h"
#include "EMappingContext.h"
#include "InputMappingSettingsElementModels.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FInputMappingSettingsElementModels {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AnchorLocalization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SaveAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UInputAction* Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMappingContext MappingContext;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsMappable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PlayerMappableOption;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AlternativePlayerMappableOption;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHaveBindedActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName BindedPlayerMappableOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName BindedAltPlayerMappableOption;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DisplayCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString NameLocSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DescriptionLocSID;
    
    STALKER2_API FInputMappingSettingsElementModels();
};

