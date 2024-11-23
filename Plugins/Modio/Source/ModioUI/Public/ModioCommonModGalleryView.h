#pragma once
#include "CoreMinimal.h"
#include "EModioGallerySize.h"
#include "EModioLogoSize.h"
#include "ModioUIAsyncOperationWidget.h"
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModGalleryView.generated.h"

class UModioCommonButtonBase;
class UModioCommonDynamicImage;
class UModioCommonErrorWithRetryWidget;
class UModioCommonListView;
class UModioCommonModGalleryViewStyle;
class UWidget;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonModGalleryView : public UModioCommonActivatableWidget, public IModioUIAsyncOperationWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonModGalleryViewStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EModioGallerySize GallerySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EModioLogoSize LogoSize;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonListView* ImageNavButtons;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonDynamicImage* SelectedGalleryImage;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* PreviousButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* NextButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidget* ModGalleryLoader;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonErrorWithRetryWidget* ErrorWithRetryWidget;
    
public:
    UModioCommonModGalleryView();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonModGalleryViewStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPreviousButtonVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextButtonVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshGallery();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GoToPreviousImage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GoToNextImage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetSelectedImageGalleryIndex();
    
    UFUNCTION(BlueprintNativeEvent)
    int32 GetNumGalleryImages();
    
    UFUNCTION(BlueprintNativeEvent)
    void AddGalleryImage(int32 ImageGalleryIndex);
    
    UFUNCTION(BlueprintNativeEvent)
    void AddDefaultGalleryImage();
    

    // Fix for true pure virtual functions not being implemented
};

