#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EModioMaturityFlags.h"
#include "EModioObjectVisibilityFlags.h"
#include "ModioEditModParams.h"
#include "ModioEditModLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioEditModLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioEditModLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void SetVisibility_DEPRECATED(UPARAM(Ref) FModioEditModParams& In, bool Visibility);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibility(UPARAM(Ref) FModioEditModParams& In, EModioObjectVisibilityFlags Visibility);
    
    UFUNCTION(BlueprintCallable)
    static void SetTags(UPARAM(Ref) FModioEditModParams& In, UPARAM(Ref) TArray<FString>& Tags);
    
    UFUNCTION(BlueprintCallable)
    static void SetSummary(UPARAM(Ref) FModioEditModParams& In, const FString& Summary);
    
    UFUNCTION(BlueprintCallable)
    static void SetNamePath(UPARAM(Ref) FModioEditModParams& In, const FString& NamePath);
    
    UFUNCTION(BlueprintCallable)
    static void SetName(UPARAM(Ref) FModioEditModParams& In, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static void SetMetadataBlob(UPARAM(Ref) FModioEditModParams& In, const FString& MetadataBlob);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaturityFlags(UPARAM(Ref) FModioEditModParams& In, EModioMaturityFlags MaturityFlags);
    
    UFUNCTION(BlueprintCallable)
    static void SetLogoPath(UPARAM(Ref) FModioEditModParams& In, const FString& LogoPath);
    
    UFUNCTION(BlueprintCallable)
    static void SetHomepageURL(UPARAM(Ref) FModioEditModParams& In, const FString& HomepageURL);
    
    UFUNCTION(BlueprintCallable)
    static void SetDescription(UPARAM(Ref) FModioEditModParams& In, const FString& Description);
    
};

