#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELocalizationLanguage.h"
#include "ESettingCategoryType.h"
#include "ESoundEventType.h"
#include "ItemContainerUID.h"
#include "ItemUID.h"
#include "JournalQuest.h"
#include "PrototypeSID.h"
#include "CppMediator.generated.h"

class AActor;
class AObj;
class UAkAudioEvent;
class UHumanDefaultAnimCollection;
class UInteractionComponent;
class UMaterialInterface;
class UMeshComponent;
class UMeshGeneratorEditor;
class UObject;
class USceneComponent;
class UStaticMesh;
class UTriplanarDecalComponent;
class UWorld;

UCLASS(BlueprintType)
class STALKER2_API UCppMediator : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCppMediator();

    UFUNCTION(BlueprintCallable)
    static void UnbindInteractPaintMaterial(AActor* AffectedActor);
    
    UFUNCTION(BlueprintCallable)
    static void UIManagerOnQuestDeselected(const FString& PrototypeID);
    
    UFUNCTION(BlueprintCallable)
    static FString UIManagerGenerateAndGetDefaultNameSave();
    
    UFUNCTION(BlueprintCallable)
    static void StartQuestNode(const FPrototypeSID& SID);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UTriplanarDecalComponent* SpawnTriplanarDecalAtLocation(const UObject* WorldContextObject, UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnSearchPoint(const AObj* Obj, const bool bShowOnMap, const bool bShowOnCompass);
    
    UFUNCTION(BlueprintCallable)
    static bool ShouldUpdateSolarTime(float PrevSolarTime, float SolarTime, float UpdateSunDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetupMaterialForInteractPaint(UMeshComponent* AffectedMesh, TSoftObjectPtr<UMaterialInterface> YellowPaintMaterial, TSoftObjectPtr<UMaterialInterface> DefaultMaterial, const bool bPaintEnabled, const int32 MaterialSlot);
    
    UFUNCTION(BlueprintCallable)
    static void SettingsManagerRestoreCachedSettings();
    
    UFUNCTION(BlueprintCallable)
    static void SettingsManagerCacheCurrentSettings();
    
    UFUNCTION(BlueprintCallable)
    static void SettingsManagerApplySettings();
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedTextLanguage(ELocalizationLanguage InSelectedLanguage);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedLanguage(ELocalizationLanguage InSelectedLanguage);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedAudioLanguage(ELocalizationLanguage InSelectedLanguage);
    
    UFUNCTION(BlueprintCallable)
    static void SetMuteAllVolume(bool bInMuteAllVolume);
    
    UFUNCTION(BlueprintCallable)
    static void SetMusicVolume(float InMusicVolume);
    
    UFUNCTION(BlueprintCallable)
    static void SetMouseSensitivityCoef(float InMouseSensitivityCoef);
    
    UFUNCTION(BlueprintCallable)
    static void SetMeshNaniteSettings(const UStaticMesh* Mesh, const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetMainVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    static void SetEffectsVolume(float InEffectsVolume);
    
    UFUNCTION(BlueprintCallable)
    static void SetDialogueVolume(float InDialogueVolume);
    
    UFUNCTION(BlueprintCallable)
    static void SetAudiologPlaybackPercent(const float PlaybackPercent);
    
    UFUNCTION(BlueprintCallable)
    static void SetAimMouseSensitivityCoef(float InAimMouseSensitivityCoef);
    
    UFUNCTION(BlueprintCallable)
    static void SerializeCoverOffsetsToConfig(const UHumanDefaultAnimCollection* HumanDefaultAnimCollection);
    
    UFUNCTION(BlueprintCallable)
    static void SelectCurrentSettings(ESettingCategoryType SettingCategoryType);
    
    UFUNCTION(BlueprintCallable)
    static void SaveCharacter(const FString& CharacterSID, const UMeshGeneratorEditor* MeshGenerator, const bool bSaveObj, const bool bSaveItemGenerator, const FString& SaveObjConfigPath, const FString& ParentItemGenerator, const FString& NewRank);
    
    UFUNCTION(BlueprintPure)
    static UWorld* RuntimeGetWorld();
    
    UFUNCTION(BlueprintCallable)
    static void ResetSelectedSettings();
    
    UFUNCTION(BlueprintCallable)
    static void ResetInvulnerable(const AObj* Obj);
    
    UFUNCTION(BlueprintCallable)
    static void ResetComponentVelocity(const USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void RequestSaveSettings();
    
    UFUNCTION(BlueprintCallable)
    static void ReloadConfigPrototypes();
    
    UFUNCTION(BlueprintCallable)
    static void QuestInteractionComponentFinishAction(UInteractionComponent* InteractionComponent, const FString& LauncherName);
    
    UFUNCTION(BlueprintCallable)
    static void OnToggleAudiolog(const bool bPlayAudiolog);
    
    UFUNCTION(BlueprintPure)
    static float ObjGetHP(const AObj* Obj);
    
    UFUNCTION(BlueprintPure)
    static FItemUID MakeItemUID(int32 RawInt32);
    
    UFUNCTION(BlueprintPure)
    static FItemContainerUID MakeItemContainerUID(int32 RawInt32);
    
    UFUNCTION(BlueprintCallable)
    static void MakeInvulnerable(const AObj* Obj);
    
    UFUNCTION(BlueprintPure)
    static int32 MakeInvalidGUID();
    
    UFUNCTION(BlueprintCallable)
    static void LogError(AActor* Sender, const FString& errorMessage);
    
    UFUNCTION(BlueprintCallable)
    static void LerpPlayerToLocationAndRotation(const FVector Location, const FRotator Rotation);
    
    UFUNCTION(BlueprintPure)
    static bool IsWalking(const AObj* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool IsSoundInProximity(const FVector& Location, const UAkAudioEvent* AudioEvent);
    
    UFUNCTION(BlueprintPure)
    static bool IsRunningWorldPartitionMigrationFromCommandlet();
    
    UFUNCTION(BlueprintPure)
    static bool IsQuestSelected(const FJournalQuest& JournalQuest);
    
    UFUNCTION(BlueprintPure)
    static bool IsPendingLoadQuickSave();
    
    UFUNCTION(BlueprintPure)
    static bool IsObjAlive(const AObj* Obj);
    
    UFUNCTION(BlueprintCallable)
    static bool IsNaniteEnabledForMesh(const UStaticMesh* Mesh);
    
    UFUNCTION(BlueprintPure)
    static bool IsMoving(const AObj* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool IsInteractionPaintEnabled();
    
    UFUNCTION(BlueprintPure)
    static bool IsGamePlaying();
    
    UFUNCTION(BlueprintPure)
    static bool IsFarAwayFromPlayer(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEmissionActive();
    
    UFUNCTION(BlueprintCallable)
    static bool IsActorInGameWorld(AActor* ActorToCheck);
    
    UFUNCTION(BlueprintPure)
    static bool HasValidGUID(const AObj* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool HasAnySignal(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static float GetSkyLightUpdateDeltaTime();
    
    UFUNCTION(BlueprintPure)
    static int32 GetPrototypeID(const AObj* Actor);
    
    UFUNCTION(BlueprintCallable)
    static float GetNotificationAudiologDelay();
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetNotePrototypeIDs();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMeshGeneratorEditor*> GetMeshGenerators();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetItemsCountInInventory(const AObj* Obj, const FString& ItemName);
    
    UFUNCTION(BlueprintPure)
    static int32 GetGUID(const AObj* Actor);
    
    UFUNCTION(BlueprintPure)
    static AObj* GetFocusedEnemy(const AObj* Obj);
    
    UFUNCTION(BlueprintPure)
    static TArray<FJournalQuest> GetFinishedQuests();
    
    UFUNCTION(BlueprintPure)
    static TArray<FJournalQuest> GetFailedQuests();
    
    UFUNCTION(BlueprintCallable)
    static FVector GetEmissionLocation();
    
    UFUNCTION(BlueprintCallable)
    static float GetCurrentAudiologPlayedTime();
    
    UFUNCTION(BlueprintCallable)
    static float GetCurrentAudiologDuration();
    
    UFUNCTION(BlueprintPure)
    static float GetAnomalyCullingRadius();
    
    UFUNCTION(BlueprintPure)
    static AActor* GetActorByGuid(const FGuid& TargetGUID);
    
    UFUNCTION(BlueprintPure)
    static TArray<FJournalQuest> GetActiveSecondaryQuests();
    
    UFUNCTION(BlueprintPure)
    static TArray<FJournalQuest> GetActiveMainQuests();
    
    UFUNCTION(BlueprintCallable)
    static void DespawnSearchPoint(const AObj* Obj);
    
    UFUNCTION(BlueprintCallable)
    static void CreateAIVoiceEvent(const AObj* SenderObj, const FVector& Location, const FVector& Direction);
    
    UFUNCTION(BlueprintCallable)
    static void CreateAIEvent(const AObj* SenderObj, const FVector& Location, const ESoundEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    static bool CanPlayAudiolog();
    
    UFUNCTION(BlueprintCallable)
    static void BindInteractPaintMaterial(AActor* AffectedActor);
    
};

