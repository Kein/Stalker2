#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UIStyleManager.generated.h"

UCLASS(BlueprintType, Config=Game)
class STALKER2_API UUIStyleManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    FString PathToPlatformIconDT;
    
    UPROPERTY(Config)
    FString PathToIconDT;
    
    UPROPERTY(Config)
    FString PathToCommonFontDT;
    
    UPROPERTY(Config)
    FString PathToCommonStailDT;
    
    UPROPERTY(Config)
    FString PathToProgresBarStailDT;
    
    UPROPERTY(Config)
    FString PathToNPCRelationColorsDT;
    
    UPROPERTY(Config)
    FString PathToNPCRelationColorsMarkerDT;
    
    UPROPERTY(Config)
    FString PathToFactionIconsDT;
    
    UPROPERTY(Config)
    FString PathToPCDefaultInputIconsDT;
    
    UPROPERTY(Config)
    FString PathToPCDisabledInputIconsDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShoudLoadTabe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLoadDataTableInConfig;
    
    UUIStyleManager();

};

