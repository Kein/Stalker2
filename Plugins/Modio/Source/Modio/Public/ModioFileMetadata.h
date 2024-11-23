#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EModioVirusScanStatus.h"
#include "EModioVirusStatus.h"
#include "ModioFileMetadataID.h"
#include "ModioModID.h"
#include "ModioFileMetadata.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioFileMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FModioFileMetadataID MetadataId;
    
    UPROPERTY(BlueprintReadOnly)
    FModioModID ModId;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FDateTime DateAdded;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    EModioVirusScanStatus CurrentVirusScanStatus;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    EModioVirusStatus CurrentVirusStatus;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    int64 Filesize;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FString Filename;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FString Version;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FString Changelog;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FString MetadataBlob;
    
    FModioFileMetadata();
};

