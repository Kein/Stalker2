#include "PrefabObjectExporterT3D.h"
#include "UObject/Object.h"

UPrefabObjectExporterT3D::UPrefabObjectExporterT3D() {
    this->SupportedClass = UObject::StaticClass();
    this->FormatExtension.AddDefaulted(1);
    this->FormatDescription.AddDefaulted(1);
    this->bText = true;
}


