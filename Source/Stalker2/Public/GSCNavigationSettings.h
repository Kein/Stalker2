#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "DefaultRestrictions.h"
#include "GSCNavigationSettings.generated.h"

UCLASS(Config=Engine)
class UGSCNavigationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    TArray<FSoftClassPath> NavAreasPriorities;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FSoftClassPath, FDefaultRestrictions> DefaultRestrictions;
    
    UPROPERTY(Transient)
    TArray<UClass*> NavAreaClasses;
    
    UPROPERTY(Transient)
    TMap<UClass*, FDefaultRestrictions> NavAreaDefaultRestrictions;
    
public:
    UGSCNavigationSettings();

};

