#include "SRLEAssetModule.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_GAME_MODULE(FSRLEAssetModule, SRLEAsset);

#define LOCTEXT_NAMESPACE "FSRLEAssetModule"

void FSRLEAssetModule::StartupModule()
{
	UE_LOG(LogTemp, Warning, TEXT("StartupModule() called"));
}

void FSRLEAssetModule::ShutdownModule()
{
	UE_LOG(LogTemp, Warning, TEXT("ShutdownModule() called"));
}

#undef LOCTEXT_NAMESPACE
