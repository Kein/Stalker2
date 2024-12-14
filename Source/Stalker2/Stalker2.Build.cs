using UnrealBuildTool;

public class Stalker2 : ModuleRules {
    public Stalker2(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnimGraphRuntime",
            "AnimationBudgetAllocator",
            "BinkMediaPlayer",
            "CinematicKeyFrameTracks",
            "CommonUI",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "EnhancedInput",
            "GameplayTags",
            "GeometryCache",
            "InputCore",
            "Landscape",
            "LevelSequence",
            "MediaAssets",
            "Modio",
            "ModioUI",
            "ModioUICore",
            "MotionWarping",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "Niagara",
            "NiagaraCore",
            "NiagaraAnimNotifies",
            "PhysicsControl",
            "PhysicsCore",
            "PoseSearch",
            "PoseSearchLocomotion",
            "PrefabAsset",
            "SRLEAsset",
            "SectorSelector",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
