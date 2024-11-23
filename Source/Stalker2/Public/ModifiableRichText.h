#pragma once
#include "CoreMinimal.h"
#include "DoubleLineSettings.h"
#include "WidgetBase.h"
#include "ModifiableRichText.generated.h"

class URichTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UModifiableRichText : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LineHeightPercentage;
    
    UPROPERTY(Instanced)
    URichTextWidget* RichText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ClosureTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ListPointTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ListItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ListItemClosureTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ListNumericTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> ClouseTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> OpenTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString BodyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PointTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDoubleLineSettings> DoubleLineTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShoudUseDefaultStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DefaultStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableDefaultText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DefaultText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WrappingTextAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TagSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WrappingTextAtEULA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShoudLoadLocalization;
    
    UModifiableRichText();

    UFUNCTION(BlueprintImplementableEvent)
    FText GetNextLine();
    
};

