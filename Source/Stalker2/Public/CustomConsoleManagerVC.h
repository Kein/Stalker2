#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerVC.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerVC : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerVC();

    UFUNCTION(Exec)
    void XTestSysNotificationRemoveMoney();
    
    UFUNCTION(Exec)
    void XTestSysNotificationRemoveItem();
    
    UFUNCTION(Exec)
    void XTestSysNotificationInspectArtifact();
    
    UFUNCTION(Exec)
    void XTestSysNotificationDiscoverRegion();
    
    UFUNCTION(Exec)
    void XTestSysNotificationAddStash();
    
    UFUNCTION(Exec)
    void XTestSysNotificationAddMoney();
    
    UFUNCTION(Exec)
    void XTestSysNotificationAddItem();
    
    UFUNCTION(Exec)
    void XTestSysNotificationAddAudilog();
    
    UFUNCTION(Exec)
    void XTestSysNotification();
    
    UFUNCTION(Exec)
    void XTestPDA();
    
    UFUNCTION(Exec)
    void XTestJournalFinishQuest();
    
    UFUNCTION(Exec)
    void XTestJournal();
    
    UFUNCTION(Exec)
    void XShowUIDebugInput(bool bEnabled);
    
    UFUNCTION(Exec)
    void XShowStatProgres(bool bEnabled);
    
    UFUNCTION(Exec)
    void XShowPopupSaveSettinsRestart();
    
    UFUNCTION(Exec)
    void XShowPopupSaveSettings();
    
    UFUNCTION(Exec)
    void XShowPopupSaveIcon();
    
    UFUNCTION(Exec)
    void XShowPopupOverwriteSavedGame();
    
    UFUNCTION(Exec)
    void XShowPopupOverwriteCampaignSlot();
    
    UFUNCTION(Exec)
    void XShowPopupNotEnoughSpace();
    
    UFUNCTION(Exec)
    void XShowPopupNoIcon();
    
    UFUNCTION(Exec)
    void XShowPopupGameCannotBeSaveNow();
    
    UFUNCTION(Exec)
    void XShowPopupExitGame();
    
    UFUNCTION(Exec)
    void XShowPopupDiscardChanges();
    
    UFUNCTION(Exec)
    void XShowPopupDeleteSave();
    
    UFUNCTION(Exec)
    void XShowPopupCurruptedSaveData();
    
    UFUNCTION(Exec)
    void XShowPopupBrokenIcon();
    
    UFUNCTION(Exec)
    void XShowPopupAttentionIcon();
    
    UFUNCTION(Exec)
    void XShowHUD(bool bIsShow);
    
    UFUNCTION(Exec)
    void XShowGameDataAndTime();
    
    UFUNCTION(Exec)
    void XShowCompassAngle(bool bEnabled);
    
    UFUNCTION(Exec)
    void XHideGameDataAndTime();
    
    UFUNCTION(Exec)
    void XEnterRegion(const FString& RegionSID);
    
    UFUNCTION(Exec)
    void XDialogFontSizeSubtitle(int32 InTextSize);
    
    UFUNCTION(Exec)
    void XDialogFontSizeAnswer(int32 InTextSize);
    
    UFUNCTION(Exec)
    void XChangeLanguageRU();
    
    UFUNCTION(Exec)
    void XChangeLanguageEN();
    
    UFUNCTION(Exec)
    void XChangeLanguage(int32 LanguageIndex);
    
    UFUNCTION(Exec)
    void XAddPDATutorialsBySID(const FString& InPDATutorialPrototypeSID);
    
    UFUNCTION(Exec)
    void XAddNotesById(const FString& InNotePrototypeID);
    
    UFUNCTION(Exec)
    void XAddItemDragToQuickSlot(int32 IndexSlot);
    
    UFUNCTION(Exec)
    void DebugUIShowTextSize(bool bEnabled);
    
};

