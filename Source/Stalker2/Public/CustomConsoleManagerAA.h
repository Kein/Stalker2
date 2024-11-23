#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerAA.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerAA : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerAA();

    UFUNCTION(Exec)
    void XTryReceiveSignal(const FString& Guid);
    
    UFUNCTION(Exec)
    void XToggleArtifactSpawnerDebugInfo() const;
    
    UFUNCTION(Exec)
    void XToggleAkVisualization(const FString& Types);
    
    UFUNCTION(Exec)
    void XTestJournalQuestRewardCategory(const FString& QuestSID) const;
    
    UFUNCTION(Exec)
    void XTeleportNPCToSpawn(const FString& NPCSID) const;
    
    UFUNCTION(Exec)
    void XTeleportNPCToPlayer(const FString& NPCSID) const;
    
    UFUNCTION(Exec)
    void XStartQuestNodeBySID(const FString& SID) const;
    
    UFUNCTION(Exec)
    void XStartQuestNode(const FString& ID) const;
    
    UFUNCTION(Exec)
    void XStartQuestBySID(const FString& SID) const;
    
    UFUNCTION(Exec)
    void XStartQuest(const FString& ID) const;
    
    UFUNCTION(Exec)
    void XSkipToQuestNode(const FString& SID) const;
    
    UFUNCTION(Exec)
    void XSkipInfotopicRefreshCooldown() const;
    
    UFUNCTION(Exec)
    void XSimulateWaitForProfileSettingUp(const float SetupDuration);
    
    UFUNCTION(Exec)
    void XShowSpawnDebugInfo(const bool Show) const;
    
    UFUNCTION(Exec)
    void XShowQuestTriggers(const bool bShow) const;
    
    UFUNCTION(Exec)
    void XShowHubOwner(const FString& HubSID) const;
    
    UFUNCTION(Exec)
    void XShowCurrentLocation() const;
    
    UFUNCTION(Exec)
    void XShowCurrentImportantChoices() const;
    
    UFUNCTION(Exec)
    void XSetWeatherTime(const int32 Hour, const int32 Minute, const int32 Second) const;
    
    UFUNCTION(Exec)
    void XSetTimeSpeed(float Speed) const;
    
    UFUNCTION(Exec)
    void XSetTextLanguage(const FString& LocaleString) const;
    
    UFUNCTION(Exec)
    void XSetSearchpointDebugState(bool bState) const;
    
    UFUNCTION(Exec)
    void XSetRelationsInRadius(float Radius, int32 RelationValue) const;
    
    UFUNCTION(Exec)
    void XSetRandomNodeDefinedPinBySID(const FString& SID, int32 PinNumber) const;
    
    UFUNCTION(Exec)
    void XSetRandomNodeDefinedPin(const FString& ID, int32 PinNumber) const;
    
    UFUNCTION(Exec)
    void XSetGameTime(const int32 Hour, const int32 Minute, const int32 Second) const;
    
    UFUNCTION(Exec)
    void XSetDifficultySID(const FString& DifficultySID) const;
    
    UFUNCTION(Exec)
    void XSetAudioLanguage(const FString& LocaleString) const;
    
    UFUNCTION(Exec)
    void XSetAkVisualizationRadius(float NewValue);
    
    UFUNCTION(Exec)
    void XRestartCurrentDialog() const;
    
    UFUNCTION(Exec)
    void XResetRandomNodeBySID(const FString& SID) const;
    
    UFUNCTION(Exec)
    void XResetRandomNode(const FString& ID) const;
    
    UFUNCTION(Exec)
    void XResetQuestBySID(const FString& SID) const;
    
    UFUNCTION(Exec)
    void XPrintGlobalVariable(const FString& SID) const;
    
    UFUNCTION(Exec)
    void XPlayDialogLine(const int32 SpeakerUID, const FString& DialogPrototypeSID) const;
    
    UFUNCTION(Exec)
    void XPlayDialogFromPool(const FString& DialogEventTypeName, int32 NPCUIDValue1, int32 NPCUIDValue2) const;
    
    UFUNCTION(Exec)
    void XPlayCommentFromPool(const FString& DialogEventTypeName, int32 NPCUIDValue) const;
    
    UFUNCTION(Exec)
    void XListMapMarkers(const FString& MarkerType) const;
    
    UFUNCTION(Exec)
    void XKillNPCInRadius(float Radius, const int32 MinimalReputationToKill, int32 MaxReputationToKill) const;
    
    UFUNCTION(Exec)
    void XFindNonEndingDialogs() const;
    
    UFUNCTION(Exec)
    void XExcludeQuestNodeBySID(const FString& SID) const;
    
    UFUNCTION(Exec)
    void XExcludeQuestNode(const FString& ID) const;
    
    UFUNCTION(Exec)
    void XExcludeQuestBySID(const FString& SID) const;
    
    UFUNCTION(Exec)
    void XExcludeQuest(const FString& ID) const;
    
    UFUNCTION(Exec)
    void XEndQuestNodeBySID(const FString& SID) const;
    
    UFUNCTION(Exec)
    void XEndQuestNode(const FString& ID) const;
    
    UFUNCTION(Exec)
    void XEndQuestBySID(const FString& SID) const;
    
    UFUNCTION(Exec)
    void XEndQuest(const FString& ID) const;
    
    UFUNCTION(Exec)
    void XDiscoverMarker(const FString& MarkerSID) const;
    
    UFUNCTION(Exec)
    void XDespawnNPCsAtRadius(float Radius) const;
    
    UFUNCTION(Exec)
    void XDespawnDeadNPCsAtRadius(float Radius) const;
    
    UFUNCTION(Exec)
    void XDespawnAliveNPCsAtRadius(float Radius) const;
    
    UFUNCTION(Exec)
    void XDebugAddHelloDialogsToQueue(const int32 TargetUID, const int32 DialogsCount) const;
    
    UFUNCTION(Exec)
    void XClearDialogQueue() const;
    
    UFUNCTION(Exec)
    void XCheckGamedata() const;
    
    UFUNCTION(Exec)
    void XAddMoneyToPlayer(int32 Value) const;
    
    UFUNCTION(Exec)
    void XAddAllNotes() const;
    
private:
    UFUNCTION()
    void OnWaitForProfileSimulationFinished() const;
    
};

