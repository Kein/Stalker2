#include "ModioSubmissionExtensionLibrary.h"

UModioSubmissionExtensionLibrary::UModioSubmissionExtensionLibrary() {
}

void UModioSubmissionExtensionLibrary::K2_SubmitNewModFromMemoryAsync(FModioModCreationHandle Handle, FModioCreateModParams Params, TArray<uint8> PngData, FOnSubmitNewModDelegate Callback) {
}

void UModioSubmissionExtensionLibrary::K2_SubmitNewModFileForModFromMemory(UModioSubsystem* Target, FModioModID Mod, FModioCreateModFileMemoryParams Params) {
}

void UModioSubmissionExtensionLibrary::K2_SubmitModChangesFromMemoryAsync(FModioModID Mod, FModioEditModParams Params, TArray<uint8> PngData, FOnGetModInfoDelegate Callback) {
}

bool UModioSubmissionExtensionLibrary::K2_LoadModFileToMemory(UModioSubsystem* Target, FModioModID ModId, TArray<uint8>& ModData) {
    return false;
}


