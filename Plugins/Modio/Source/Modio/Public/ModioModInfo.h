#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EModioMaturityFlags.h"
#include "EModioModServerSideStatus.h"
#include "EModioObjectVisibilityFlags.h"
#include "ModioFileMetadata.h"
#include "ModioMetadata.h"
#include "ModioModID.h"
#include "ModioModStats.h"
#include "ModioModTag.h"
#include "ModioSketchfabURLList.h"
#include "ModioUser.h"
#include "ModioYoutubeURLList.h"
#include "ModioModInfo.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FModioModID ModId;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool Supported;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FString ProfileName;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FString ProfileSummary;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FString ProfileDescription;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FString ProfileDescriptionPlaintext;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FString ProfileUrl;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FModioUser ProfileSubmittedBy;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FDateTime ProfileDateAdded;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FDateTime ProfileDateUpdated;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FDateTime ProfileDateLive;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    EModioMaturityFlags ProfileMaturityOption;
    
    UPROPERTY()
    bool bVisible;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    EModioObjectVisibilityFlags Visibility;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FString MetadataBlob;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FModioFileMetadata FileInfo;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<FModioMetadata> MetadataKvp;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<FModioModTag> Tags;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    int32 NumGalleryImages;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FModioYoutubeURLList YoutubeURLs;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FModioSketchfabURLList SketchfabURLs;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FModioModStats Stats;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    EModioModServerSideStatus ModStatus;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    int32 Price;
    
    FModioModInfo();
};

