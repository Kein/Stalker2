#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ModioCreateModParams.h"
#include "ModioEditModParams.h"
#include "ModioModCreationHandle.h"
#include "ModioModID.h"
#include "OnGetModInfoDelegateDelegate.h"
#include "OnSubmitNewModDelegateDelegate.h"
#include "ModioCreateModFileMemoryParams.h"
#include "ModioSubmissionExtensionLibrary.generated.h"

class UModioSubsystem;

UCLASS(BlueprintType)
class UModioSubmissionExtensionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioSubmissionExtensionLibrary();

    UFUNCTION(BlueprintCallable)
    static void K2_SubmitNewModFromMemoryAsync(FModioModCreationHandle Handle, FModioCreateModParams Params, TArray<uint8> PngData, FOnSubmitNewModDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void K2_SubmitNewModFileForModFromMemory(UModioSubsystem* Target, FModioModID Mod, FModioCreateModFileMemoryParams Params);
    
    UFUNCTION(BlueprintCallable)
    void K2_SubmitModChangesFromMemoryAsync(FModioModID Mod, FModioEditModParams Params, TArray<uint8> PngData, FOnGetModInfoDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_LoadModFileToMemory(UModioSubsystem* Target, FModioModID ModId, TArray<uint8>& ModData);
    
};

