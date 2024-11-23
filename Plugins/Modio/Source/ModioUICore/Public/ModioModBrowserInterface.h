#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EModioAuthenticationProvider.h"
#include "ModioModID.h"
#include "ModioModCategoryParams.h"
#include "ModioModBrowserInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioModBrowserInterface : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioModBrowserInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowUserAuth();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSearchResults(const FModioModCategoryParams& FilterParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowReportMod(UObject* DialogDataSource);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowModUnsubscribeDialog(UObject* DialogDataSource);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowDialog(UObject* DialogDataSource);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowDetailsForMod(FModioModID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestExternalAuthentication(EModioAuthenticationProvider Provider);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LogOut();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDownloadDrawerOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsCollectionModDisableUIEnabled();
    
};

