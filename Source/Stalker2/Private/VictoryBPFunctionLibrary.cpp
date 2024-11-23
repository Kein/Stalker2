#include "VictoryBPFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UVictoryBPFunctionLibrary::UVictoryBPFunctionLibrary() {
}

bool UVictoryBPFunctionLibrary::WidgetIsChildOf(UWidget* ChildWidget, UWidget* PossibleParent) {
    return false;
}

UUserWidget* UVictoryBPFunctionLibrary::WidgetGetParentOfClass(UWidget* ChildWidget, TSubclassOf<UUserWidget> WidgetClass) {
    return NULL;
}

bool UVictoryBPFunctionLibrary::Viewport__GetCenterOfViewport(const APlayerController* ThePC, float& PosX, float& PosY) {
    return false;
}

bool UVictoryBPFunctionLibrary::VictorySoundVolumeChange(USoundClass* SoundClassObject, float NewVolume) {
    return false;
}

void UVictoryBPFunctionLibrary::VictoryRemoveAxisKeyBind(FVictoryInputAxis ToRemove) {
}

void UVictoryBPFunctionLibrary::VictoryRemoveActionKeyBind(FVictoryInput ToRemove) {
}

bool UVictoryBPFunctionLibrary::VictoryReBindAxisKey(FVictoryInputAxis Original, FVictoryInputAxis NewBinding) {
    return false;
}

bool UVictoryBPFunctionLibrary::VictoryReBindActionKey(FVictoryInput Original, FVictoryInput NewBinding) {
    return false;
}

FString UVictoryBPFunctionLibrary::VictoryPaths__ScreenShotsDir() {
    return TEXT("");
}

FString UVictoryBPFunctionLibrary::VictoryPaths__SavedDir() {
    return TEXT("");
}

FVictoryInputAxis UVictoryBPFunctionLibrary::VictoryGetVictoryInputAxis(const FKeyEvent& KeyEvent) {
    return FVictoryInputAxis{};
}

FVictoryInput UVictoryBPFunctionLibrary::VictoryGetVictoryInput(const FKeyEvent& KeyEvent) {
    return FVictoryInput{};
}

void UVictoryBPFunctionLibrary::VictoryGetAllAxisKeyBindings(TArray<FVictoryInputAxis>& Bindings) {
}

void UVictoryBPFunctionLibrary::VictoryGetAllAxisAndActionMappingsForKey(FKey Key, TArray<FVictoryInput>& ActionBindings, TArray<FVictoryInputAxis>& AxisBindings) {
}

void UVictoryBPFunctionLibrary::VictoryGetAllActionKeyBindings(TArray<FVictoryInput>& Bindings) {
}

bool UVictoryBPFunctionLibrary::ScreenShots_Rename_Move_Most_Recent(FString& OriginalFileName, const FString& NewName, const FString& NewAbsoluteFolderPath, bool HighResolution) {
    return false;
}

void UVictoryBPFunctionLibrary::SaveGameObject_GetAllSaveSlotFileNames(TArray<FString>& FileNames) {
}

void UVictoryBPFunctionLibrary::SaveConfigToFile(TArray<FVictoryInput> VictoryInputs, const FString& Filename) {
}

void UVictoryBPFunctionLibrary::RemoveAllWidgetsOfClass(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass) {
}

float UVictoryBPFunctionLibrary::MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB) {
    return 0.0f;
}

UObject* UVictoryBPFunctionLibrary::LoadObjectFromAssetPath(UClass* ObjectClass, FName Path, bool& IsValid) {
    return NULL;
}

bool UVictoryBPFunctionLibrary::IsWidgetOfClassInViewport(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass) {
    return false;
}

FName UVictoryBPFunctionLibrary::GetObjectPath(UObject* Obj) {
    return NAME_None;
}

UUserWidget* UVictoryBPFunctionLibrary::GetFirstWidgetOfClass(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass, bool TopLevelOnly) {
    return NULL;
}

void UVictoryBPFunctionLibrary::GetAllWidgetsOfClass(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass, TArray<UUserWidget*>& FoundWidgets, bool TopLevelOnly) {
}


