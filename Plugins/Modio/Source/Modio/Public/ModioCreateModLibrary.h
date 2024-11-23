#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EModioModfilePlatform.h"
#include "EModioObjectVisibilityFlags.h"
#include "ModioCreateModFileParams.h"
#include "ModioCreateModParams.h"
#include "ModioCreateModLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioCreateModLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioCreateModLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetVersionString(UPARAM(Ref) FModioCreateModFileParams& In, const FString& Version);
    
    UFUNCTION(BlueprintCallable)
    static void SetTags(UPARAM(Ref) FModioCreateModParams& In, UPARAM(Ref) TArray<FString>& Tags);
    
    UFUNCTION(BlueprintCallable)
    static void SetModfilePlatforms(UPARAM(Ref) FModioCreateModFileParams& In, UPARAM(Ref) TArray<EModioModfilePlatform>& Platforms);
    
    UFUNCTION(BlueprintCallable)
    static void SetModFileMetadataBlob(UPARAM(Ref) FModioCreateModFileParams& In, const FString& MetadataBlob);
    
    UFUNCTION(BlueprintCallable)
    static void SetMetadataBlob(UPARAM(Ref) FModioCreateModParams& In, const FString& MetadataBlob);
    
    UFUNCTION(BlueprintCallable)
    static void SetMarkAsActiveRelease(UPARAM(Ref) FModioCreateModFileParams& In, bool bMarkAsActiveRelease);
    
    UFUNCTION(BlueprintCallable)
    static void SetInitialVisibility_DEPRECATED(UPARAM(Ref) FModioCreateModParams& In, bool InitialVisibility);
    
    UFUNCTION(BlueprintCallable)
    static void SetInitialVisibility(UPARAM(Ref) FModioCreateModParams& In, EModioObjectVisibilityFlags InitialVisibility);
    
    UFUNCTION(BlueprintCallable)
    static void SetHomepageURL(UPARAM(Ref) FModioCreateModParams& In, const FString& HomepageURL);
    
    UFUNCTION(BlueprintCallable)
    static void SetDescription(UPARAM(Ref) FModioCreateModParams& In, const FString& Description);
    
    UFUNCTION(BlueprintCallable)
    static void SetChangelogString(UPARAM(Ref) FModioCreateModFileParams& In, const FString& Changelog);
    
};

