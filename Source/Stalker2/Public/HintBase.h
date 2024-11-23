#pragma once
#include "CoreMinimal.h"
#include "InteractionType.h"
#include "HoverAction.h"
#include "WidgetBase.h"
#include "HintBase.generated.h"

class UImage;

UCLASS(EditInlineNew)
class STALKER2_API UHintBase : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInteractionType InteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DefaultStylePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString StylePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName FirstPlanStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName BackgroundStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableStyleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCheckInputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGamepadKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString InputActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName InputMappingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString HintFontStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString HintActionStyle;
    
    UPROPERTY(Instanced)
    UImage* Background;
    
    UHintBase();

    UFUNCTION()
    void UpdateHintWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetText(const FText& InText);
    
    UFUNCTION()
    void SetStylePrefix(const FString& InStylePrefix);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PostShowHover(bool bInShow);
    
    UFUNCTION(BlueprintCallable)
    void HoverChangeHintTextColor(const bool bShow, const FString& InStylePrefix);
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<FHoverAction> GetHoverSettings() const;
    
};

