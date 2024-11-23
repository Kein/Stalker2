#include "UIStyleManager.h"

UUIStyleManager::UUIStyleManager() {
    this->PathToPlatformIconDT = TEXT("/Game/GameLite/FPS_Game/UIRemaster/StyleManager/PlatformIconsDataTable.PlatformIconsDataTable");
    this->PathToIconDT = TEXT("/Game/GameLite/FPS_Game/UIRemaster/StyleManager/UIIconsDataTable.UIIconsDataTable");
    this->PathToCommonFontDT = TEXT("/Game/GameLite/FPS_Game/UIRemaster/StyleManager/FontDataTable.FontDataTable");
    this->PathToCommonStailDT = TEXT("/Game/GameLite/FPS_Game/UIRemaster/StyleManager/ColourStailDataTable.ColourStailDataTable");
    this->PathToProgresBarStailDT = TEXT("/Game/GameLite/FPS_Game/UIRemaster/StyleManager/ProgressStyleDataTable.ProgressStyleDataTable");
    this->PathToNPCRelationColorsDT = TEXT("/Game/GameLite/FPS_Game/UIRemaster/StyleManager/RelationColorsDataTable.RelationColorsDataTable");
    this->PathToNPCRelationColorsMarkerDT = TEXT("/Game/GameLite/FPS_Game/UIRemaster/StyleManager/RelationColorsDataTableMarker.RelationColorsDataTableMarker");
    this->PathToFactionIconsDT = TEXT("/Game/GameLite/FPS_Game/UIRemaster/StyleManager/FactionIconsDataTable.FactionIconsDataTable");
    this->PathToPCDefaultInputIconsDT = TEXT("/Game/GameLite/FPS_Game/UIRemaster/StyleManager/PCDefaultInputIconsDataTable.PCDefaultInputIconsDataTable");
    this->PathToPCDisabledInputIconsDT = TEXT("/Game/GameLite/FPS_Game/UIRemaster/StyleManager/PCDisabledInputIconsDataTable.PCDisabledInputIconsDataTable");
    this->bShoudLoadTabe = true;
    this->bLoadDataTableInConfig = true;
}


