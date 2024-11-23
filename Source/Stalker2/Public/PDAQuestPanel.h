#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PDASlotPanelBase.h"
#include "PDAQuestPanel.generated.h"

class UPDATextBorder;
class UScenarioManager;
class USizeBox;

UCLASS(EditInlineNew)
class STALKER2_API UPDAQuestPanel : public UPDASlotPanelBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UPDATextBorder* MainQuestBorder;
    
    UPROPERTY(Instanced)
    UPDATextBorder* CancelledQuestBorder;
    
    UPROPERTY(Instanced)
    UPDATextBorder* SecondaryQuestBorder;
    
    UPROPERTY(Instanced)
    USizeBox* EmptySizeBorder;
    
    UPROPERTY(Instanced)
    USizeBox* SecondEmptySizeBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SelectInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString InputActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor MainQuestTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor DefaultQuestTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MainQuestLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SecondaryQuestLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FinishQuestLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FailedQuestLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString CanceledQuestLocalizationSID;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UScenarioManager* ScenarioManager;
    
public:
    UPDAQuestPanel();

protected:
    UFUNCTION()
    void ChangeSelectedQuestSlot(const int32 JournalQuestIndex);
    
};

