#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "EWidgetNameEx.h"
#include "UIBaseManager.generated.h"

class UAkAudioEvent;
class UViewBase;
class UWaterElement;

UCLASS()
class STALKER2_API UUIBaseManager : public UBaseManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    TMap<EWidgetNameEx, TWeakObjectPtr<UViewBase>> AllWidgets;
    
    UPROPERTY(Instanced, Transient)
    TArray<UViewBase*> OpenViews;
    
    UPROPERTY(Instanced, Transient)
    TArray<UViewBase*> OpenViewsBuffer;
    
    UPROPERTY(Instanced)
    UWaterElement* WaterElementWidget;
    
    UPROPERTY(Transient)
    UAkAudioEvent* LastAudioEvent;
    
public:
    UUIBaseManager();

};

