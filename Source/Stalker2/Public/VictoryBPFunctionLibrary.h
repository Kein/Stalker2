#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "Input/Events.h"
#include "Templates/SubclassOf.h"
#include "VictoryInput.h"
#include "VictoryInputAxis.h"
#include "VictoryBPFunctionLibrary.generated.h"

class APlayerController;
class UObject;
class USoundClass;
class UUserWidget;
class UWidget;

UCLASS(BlueprintType)
class UVictoryBPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVictoryBPFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WidgetIsChildOf(UWidget* ChildWidget, UWidget* PossibleParent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UUserWidget* WidgetGetParentOfClass(UWidget* ChildWidget, TSubclassOf<UUserWidget> WidgetClass);
    
    UFUNCTION(BlueprintPure)
    static bool Viewport__GetCenterOfViewport(const APlayerController* ThePC, float& PosX, float& PosY);
    
    UFUNCTION(BlueprintCallable)
    static bool VictorySoundVolumeChange(USoundClass* SoundClassObject, float NewVolume);
    
    UFUNCTION(BlueprintCallable)
    static void VictoryRemoveAxisKeyBind(FVictoryInputAxis ToRemove);
    
    UFUNCTION(BlueprintCallable)
    static void VictoryRemoveActionKeyBind(FVictoryInput ToRemove);
    
    UFUNCTION(BlueprintCallable)
    static bool VictoryReBindAxisKey(FVictoryInputAxis Original, FVictoryInputAxis NewBinding);
    
    UFUNCTION(BlueprintCallable)
    static bool VictoryReBindActionKey(FVictoryInput Original, FVictoryInput NewBinding);
    
    UFUNCTION(BlueprintPure)
    static FString VictoryPaths__ScreenShotsDir();
    
    UFUNCTION(BlueprintPure)
    static FString VictoryPaths__SavedDir();
    
    UFUNCTION(BlueprintPure)
    static FVictoryInputAxis VictoryGetVictoryInputAxis(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintPure)
    static FVictoryInput VictoryGetVictoryInput(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintPure)
    static void VictoryGetAllAxisKeyBindings(TArray<FVictoryInputAxis>& Bindings);
    
    UFUNCTION(BlueprintPure)
    static void VictoryGetAllAxisAndActionMappingsForKey(FKey Key, TArray<FVictoryInput>& ActionBindings, TArray<FVictoryInputAxis>& AxisBindings);
    
    UFUNCTION(BlueprintPure)
    static void VictoryGetAllActionKeyBindings(TArray<FVictoryInput>& Bindings);
    
    UFUNCTION(BlueprintCallable)
    static bool ScreenShots_Rename_Move_Most_Recent(FString& OriginalFileName, const FString& NewName, const FString& NewAbsoluteFolderPath, bool HighResolution);
    
    UFUNCTION(BlueprintPure)
    static void SaveGameObject_GetAllSaveSlotFileNames(TArray<FString>& FileNames);
    
    UFUNCTION(BlueprintCallable)
    static void SaveConfigToFile(TArray<FVictoryInput> VictoryInputs, const FString& Filename);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveAllWidgetsOfClass(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass);
    
    UFUNCTION(BlueprintPure)
    static float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
    
    UFUNCTION(BlueprintCallable)
    static UObject* LoadObjectFromAssetPath(UClass* ObjectClass, FName Path, bool& IsValid);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWidgetOfClassInViewport(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass);
    
    UFUNCTION(BlueprintPure)
    static FName GetObjectPath(UObject* Obj);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UUserWidget* GetFirstWidgetOfClass(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass, bool TopLevelOnly);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllWidgetsOfClass(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass, TArray<UUserWidget*>& FoundWidgets, bool TopLevelOnly);
    
};

