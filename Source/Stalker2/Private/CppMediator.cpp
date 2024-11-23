#include "CppMediator.h"

UCppMediator::UCppMediator() {
}

void UCppMediator::UnbindInteractPaintMaterial(AActor* AffectedActor) {
}

void UCppMediator::UIManagerOnQuestDeselected(const FString& PrototypeID) {
}

FString UCppMediator::UIManagerGenerateAndGetDefaultNameSave() {
    return TEXT("");
}

void UCppMediator::StartQuestNode(const FPrototypeSID& SID) {
}

UTriplanarDecalComponent* UCppMediator::SpawnTriplanarDecalAtLocation(const UObject* WorldContextObject, UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan) {
    return NULL;
}

void UCppMediator::SpawnSearchPoint(const AObj* Obj, const bool bShowOnMap, const bool bShowOnCompass) {
}

bool UCppMediator::ShouldUpdateSolarTime(float PrevSolarTime, float SolarTime, float UpdateSunDeltaTime) {
    return false;
}

void UCppMediator::SetupMaterialForInteractPaint(UMeshComponent* AffectedMesh, TSoftObjectPtr<UMaterialInterface> YellowPaintMaterial, TSoftObjectPtr<UMaterialInterface> DefaultMaterial, const bool bPaintEnabled, const int32 MaterialSlot) {
}

void UCppMediator::SettingsManagerRestoreCachedSettings() {
}

void UCppMediator::SettingsManagerCacheCurrentSettings() {
}

void UCppMediator::SettingsManagerApplySettings() {
}

void UCppMediator::SetSelectedTextLanguage(ELocalizationLanguage InSelectedLanguage) {
}

void UCppMediator::SetSelectedLanguage(ELocalizationLanguage InSelectedLanguage) {
}

void UCppMediator::SetSelectedAudioLanguage(ELocalizationLanguage InSelectedLanguage) {
}

void UCppMediator::SetMuteAllVolume(bool bInMuteAllVolume) {
}

void UCppMediator::SetMusicVolume(float InMusicVolume) {
}

void UCppMediator::SetMouseSensitivityCoef(float InMouseSensitivityCoef) {
}

void UCppMediator::SetMeshNaniteSettings(const UStaticMesh* Mesh, const bool bEnable) {
}

void UCppMediator::SetMainVolume(float InVolume) {
}

void UCppMediator::SetEffectsVolume(float InEffectsVolume) {
}

void UCppMediator::SetDialogueVolume(float InDialogueVolume) {
}

void UCppMediator::SetAudiologPlaybackPercent(const float PlaybackPercent) {
}

void UCppMediator::SetAimMouseSensitivityCoef(float InAimMouseSensitivityCoef) {
}

void UCppMediator::SerializeCoverOffsetsToConfig(const UHumanDefaultAnimCollection* HumanDefaultAnimCollection) {
}

void UCppMediator::SelectCurrentSettings(ESettingCategoryType SettingCategoryType) {
}

void UCppMediator::SaveCharacter(const FString& CharacterSID, const UMeshGeneratorEditor* MeshGenerator, const bool bSaveObj, const bool bSaveItemGenerator, const FString& SaveObjConfigPath, const FString& ParentItemGenerator, const FString& NewRank) {
}

UWorld* UCppMediator::RuntimeGetWorld() {
    return NULL;
}

void UCppMediator::ResetSelectedSettings() {
}

void UCppMediator::ResetInvulnerable(const AObj* Obj) {
}

void UCppMediator::ResetComponentVelocity(const USceneComponent* Component) {
}

void UCppMediator::RequestSaveSettings() {
}

void UCppMediator::ReloadConfigPrototypes() {
}

void UCppMediator::QuestInteractionComponentFinishAction(UInteractionComponent* InteractionComponent, const FString& LauncherName) {
}

void UCppMediator::OnToggleAudiolog(const bool bPlayAudiolog) {
}

float UCppMediator::ObjGetHP(const AObj* Obj) {
    return 0.0f;
}

FItemUID UCppMediator::MakeItemUID(int32 RawInt32) {
    return FItemUID{};
}

FItemContainerUID UCppMediator::MakeItemContainerUID(int32 RawInt32) {
    return FItemContainerUID{};
}

void UCppMediator::MakeInvulnerable(const AObj* Obj) {
}

int32 UCppMediator::MakeInvalidGUID() {
    return 0;
}

void UCppMediator::LogError(AActor* Sender, const FString& errorMessage) {
}

void UCppMediator::LerpPlayerToLocationAndRotation(const FVector Location, const FRotator Rotation) {
}

bool UCppMediator::IsWalking(const AObj* Actor) {
    return false;
}

bool UCppMediator::IsSoundInProximity(const FVector& Location, const UAkAudioEvent* AudioEvent) {
    return false;
}

bool UCppMediator::IsRunningWorldPartitionMigrationFromCommandlet() {
    return false;
}

bool UCppMediator::IsQuestSelected(const FJournalQuest& JournalQuest) {
    return false;
}

bool UCppMediator::IsPendingLoadQuickSave() {
    return false;
}

bool UCppMediator::IsObjAlive(const AObj* Obj) {
    return false;
}

bool UCppMediator::IsNaniteEnabledForMesh(const UStaticMesh* Mesh) {
    return false;
}

bool UCppMediator::IsMoving(const AObj* Actor) {
    return false;
}

bool UCppMediator::IsInteractionPaintEnabled() {
    return false;
}

bool UCppMediator::IsGamePlaying() {
    return false;
}

bool UCppMediator::IsFarAwayFromPlayer(FVector Location) {
    return false;
}

bool UCppMediator::IsEmissionActive() {
    return false;
}

bool UCppMediator::IsActorInGameWorld(AActor* ActorToCheck) {
    return false;
}

bool UCppMediator::HasValidGUID(const AObj* Actor) {
    return false;
}

bool UCppMediator::HasAnySignal(AActor* Actor) {
    return false;
}

float UCppMediator::GetSkyLightUpdateDeltaTime() {
    return 0.0f;
}

int32 UCppMediator::GetPrototypeID(const AObj* Actor) {
    return 0;
}

float UCppMediator::GetNotificationAudiologDelay() {
    return 0.0f;
}

TArray<FString> UCppMediator::GetNotePrototypeIDs() {
    return TArray<FString>();
}

TArray<UMeshGeneratorEditor*> UCppMediator::GetMeshGenerators() {
    return TArray<UMeshGeneratorEditor*>();
}

int32 UCppMediator::GetItemsCountInInventory(const AObj* Obj, const FString& ItemName) {
    return 0;
}

int32 UCppMediator::GetGUID(const AObj* Actor) {
    return 0;
}

AObj* UCppMediator::GetFocusedEnemy(const AObj* Obj) {
    return NULL;
}

TArray<FJournalQuest> UCppMediator::GetFinishedQuests() {
    return TArray<FJournalQuest>();
}

TArray<FJournalQuest> UCppMediator::GetFailedQuests() {
    return TArray<FJournalQuest>();
}

FVector UCppMediator::GetEmissionLocation() {
    return FVector{};
}

float UCppMediator::GetCurrentAudiologPlayedTime() {
    return 0.0f;
}

float UCppMediator::GetCurrentAudiologDuration() {
    return 0.0f;
}

float UCppMediator::GetAnomalyCullingRadius() {
    return 0.0f;
}

AActor* UCppMediator::GetActorByGuid(const FGuid& TargetGUID) {
    return NULL;
}

TArray<FJournalQuest> UCppMediator::GetActiveSecondaryQuests() {
    return TArray<FJournalQuest>();
}

TArray<FJournalQuest> UCppMediator::GetActiveMainQuests() {
    return TArray<FJournalQuest>();
}

void UCppMediator::DespawnSearchPoint(const AObj* Obj) {
}

void UCppMediator::CreateAIVoiceEvent(const AObj* SenderObj, const FVector& Location, const FVector& Direction) {
}

void UCppMediator::CreateAIEvent(const AObj* SenderObj, const FVector& Location, const ESoundEventType EventType) {
}

bool UCppMediator::CanPlayAudiolog() {
    return false;
}

void UCppMediator::BindInteractPaintMaterial(AActor* AffectedActor) {
}


