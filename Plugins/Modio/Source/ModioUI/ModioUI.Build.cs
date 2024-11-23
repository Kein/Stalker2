using UnrealBuildTool;

public class ModioUI : ModuleRules {
    public ModioUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonUI",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "Modio",
            "ModioUICore",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
