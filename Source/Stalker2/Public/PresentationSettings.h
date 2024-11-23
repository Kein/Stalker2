#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "PresentationSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class STALKER2_API UPresentationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bEnablePresentationSubsystem;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString DemoPopupTitleSID;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString DemoPopupDescriptionSID;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString QuestNodeToStopPresentation;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString DemoPopupContinuePlaySID;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString DemoPopupToMainMenuSID;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 PresentationTimer;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShowEndPopup;
    
public:
    UPresentationSettings();

};

