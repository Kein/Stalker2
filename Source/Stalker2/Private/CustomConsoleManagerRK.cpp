#include "CustomConsoleManagerRK.h"

UCustomConsoleManagerRK::UCustomConsoleManagerRK() {
}

void UCustomConsoleManagerRK::XUnlockDoor(int32 DoorUID) const {
}

void UCustomConsoleManagerRK::XTogglePsyPhantomDebugMode() {
}

void UCustomConsoleManagerRK::XTogglePlayerRadiationSphereVisibility() {
}

void UCustomConsoleManagerRK::XToggleNPCFlashlight(int32 UID) {
}

void UCustomConsoleManagerRK::XToggleHUDElements(EHUDElements ElementsToHide) {
}

void UCustomConsoleManagerRK::XToggleFreeCamera() {
}

void UCustomConsoleManagerRK::XToggleDrawPlayerStats(float ValueFontXSizeCoef, float ValueFontYSizeCoef) {
}

void UCustomConsoleManagerRK::XToggleDrawInteractNPCStats(const float ValueFontXSizeCoef, const float ValueFontYSizeCoef) {
}

void UCustomConsoleManagerRK::XToggleDrawCurrentDiscounts() {
}

void UCustomConsoleManagerRK::XToggleDetailedVitalsStat(EVitalType VitalType) {
}

void UCustomConsoleManagerRK::XTeleportToObjUID(int32 ObjUID) {
}

void UCustomConsoleManagerRK::XTeleportTo(float XCoord, float YCoord, float ZCoord) const {
}

void UCustomConsoleManagerRK::XStopBenchmark() {
}

void UCustomConsoleManagerRK::XStartGSCBackgroundProfiler(float MsecThreshold, float RamMBThreshold, uint32 InFramesToCaptureOnSpike, uint32 InFrameCountToComputeAverage) {
}

void UCustomConsoleManagerRK::XStartBenchmark(float CameraHeight, float CircleRadius, float InitialPitch, float InitialYaw, int32 BenchRuns, bool bProfileCsv) {
}

void UCustomConsoleManagerRK::XSpawnPsyNPC(const bool bIsPsyPhantom, const FString& ObjPrototypeSID, const ERank Rank, const int32 Count) {
}

void UCustomConsoleManagerRK::XSpawnObjBySID(const FString& PrototypeSID, ERank Rank, bool bDestroyOnOffline, float Px, float Py, float Pz, float Pitch, float Yaw, float Roll) const {
}

int32 UCustomConsoleManagerRK::XSpawnItemContainer(const FString& PrototypeID, float Px, float Py, float Pz, int32 Gold, float Pitch, float Yaw, float Roll) const {
    return 0;
}

void UCustomConsoleManagerRK::XSetWeatherLocked(const bool bNowLocked) {
}

void UCustomConsoleManagerRK::XSetPsyNPCFilterParams(const bool bIsPsyPhantom, const EAgentType AgentType1, const EAgentType AgentType2, const FString& ObjPrototypeFilter1, const FString& ObjPrototypeFilter2, const FString& ObjPrototypeFilter3) {
}

void UCustomConsoleManagerRK::XSetGodModeForInteractObj(bool bGodMode) const {
}

void UCustomConsoleManagerRK::XSetGodMode(bool bGodMode) const {
}

void UCustomConsoleManagerRK::XSetGlobalObjectPath(const FString& SID, const FString& InValue) {
}

void UCustomConsoleManagerRK::XSetGlobalBool(const FString& SID, bool InValue) {
}

void UCustomConsoleManagerRK::XRevertUpgradeBySID(const FString& ItemPrototypeSID, const FString& UpgradePrototypeSID) const {
}

void UCustomConsoleManagerRK::XOpenDoor(int32 DoorUID) const {
}

void UCustomConsoleManagerRK::XObjRecalcAllEquipment(int32 ObjUID) const {
}

void UCustomConsoleManagerRK::XObjRecalcAllCachedStats(int32 ObjUID) const {
}

void UCustomConsoleManagerRK::XModifyStamina(int32 TargetUID, float FPSpent) const {
}

void UCustomConsoleManagerRK::XModifyBleeding(int32 TargetUID, int32 AddBleeding) const {
}

void UCustomConsoleManagerRK::XIncreaseEnsuresLimit(int32 IncreaseLimit) {
}

void UCustomConsoleManagerRK::XForceActorInteract(int32 ActorUID, int32 InteractableUID) const {
}

void UCustomConsoleManagerRK::XFileExists(const FString& FilePath) const {
}

void UCustomConsoleManagerRK::XDrawPsyFieldVolumes(bool bInDrawPsyField) {
}

void UCustomConsoleManagerRK::XDisassemblyCurrentWeapon() const {
}

void UCustomConsoleManagerRK::XDisableFrictionForPlayerInBulb(bool bInDrawBulbDebug) {
}

void UCustomConsoleManagerRK::XDealDurabilityDamage(int32 ItemUID, float DurabilityDamage) const {
}

void UCustomConsoleManagerRK::XDealDamage(int32 TargetUID, float Damage, float ArmorDamage, float ArmorPiercing, float Bleeding, float BleedingChanceIncrement, EDamageType Type, const FString& BoneHit) const {
}

void UCustomConsoleManagerRK::XCreateItemInInventoryByID(const FString& PrototypeID, int32 ObjUID, int32 Count, float Durability) const {
}

void UCustomConsoleManagerRK::XApplyUpgradeBySID(const FString& ItemPrototypeSID, const FString& UpgradePrototypeSID) const {
}

void UCustomConsoleManagerRK::XApplyEffectOnPlayer(const FString& EffectPrototypeSID) {
}

void UCustomConsoleManagerRK::XApplyEffectOnNPCByUID(const FString& EffectPrototypeSID, const int32 UID) {
}

void UCustomConsoleManagerRK::XApplyEffectOnInteractNPC(const FString& EffectPrototypeSID) {
}

void UCustomConsoleManagerRK::TransformUID(int32 UID) {
}


