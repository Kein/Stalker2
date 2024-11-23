#pragma once
#include "CoreMinimal.h"
#include "CinematicSectionParams.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "BaseManager.h"
#include "CinematicManager.generated.h"

class UMaterialParameterCollectionInstance;

UCLASS()
class STALKER2_API UCinematicManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FCinematicSectionParams CinematicSectionParams;
    
public:
    UPROPERTY(EditDefaultsOnly)
    UMaterialParameterCollectionInstance* PlayerParametersMPC;
    
    UCinematicManager();

    UFUNCTION()
    void OnSubtitleSectionStart(const FString& NPCSID, const FString& DialogSID);
    
    UFUNCTION()
    void OnSubtitleSectionEnd();
    
    UFUNCTION()
    void OnKeyFrameSectionStart(const FCinematicSectionParams& InCinematicSectionParams);
    
    UFUNCTION()
    void OnKeyFrameSectionEnd(FName SectionName);
    
    UFUNCTION()
    void OnHapticFeedbackStart(FGameplayTag ForceFeeedbackEffectTag) const;
    
    UFUNCTION()
    void OnHapticFeedbackEnd(FGameplayTag ForceFeeedbackEffectTag) const;
    
private:
    UFUNCTION()
    void OnFadeScreenEnd(bool bFadeOut, FLinearColor FadeTargetColor, float FadeAmount, float FadeTime);
    
public:
    UFUNCTION()
    void OnCinematicStopped();
    
    UFUNCTION()
    void OnCinematicStarted();
    
};

