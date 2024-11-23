#include "PrefabLevelExporter.h"
#include "Engine/World.h"

UPrefabLevelExporter::UPrefabLevelExporter() {
    this->SupportedClass = UWorld::StaticClass();
    this->FormatExtension.AddDefaulted(1);
    this->FormatDescription.AddDefaulted(1);
    this->bText = true;
}


