#include "ModioReportLibrary.h"

UModioReportLibrary::UModioReportLibrary() {
}

FModioReportParams UModioReportLibrary::MakeReportForUser(FModioUserID User, EModioReportType Type, const FString& ReportDescription, const FString& ReporterName, const FString& ReporterContact) {
    return FModioReportParams{};
}

FModioReportParams UModioReportLibrary::MakeReportForMod(FModioModID Mod, EModioReportType Type, const FString& ReportDescription, const FString& ReporterName, const FString& ReporterContact) {
    return FModioReportParams{};
}

FModioReportParams UModioReportLibrary::MakeReportForGame(FModioGameID Game, EModioReportType Type, const FString& ReportDescription, const FString& ReporterName, const FString& ReporterContact) {
    return FModioReportParams{};
}


