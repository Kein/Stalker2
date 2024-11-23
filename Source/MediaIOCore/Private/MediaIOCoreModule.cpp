#include "MediaIOCoreModule.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_GAME_MODULE(FMediaIOCoreModule, MediaIOCore);

#define LOCTEXT_NAMESPACE "FMediaIOCoreModule"

void FMediaIOCoreModule::StartupModule()
{
	UE_LOG(LogTemp, Warning, TEXT("StartupModule() called"));
}

void FMediaIOCoreModule::ShutdownModule()
{
	UE_LOG(LogTemp, Warning, TEXT("ShutdownModule() called"));
}

#undef LOCTEXT_NAMESPACE
