using UnrealBuildTool;

public class Stalker2GameTarget : TargetRules {
	public Stalker2GameTarget(TargetInfo Target) : base(Target) {

		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		ExtraModuleNames.AddRange(new string[]
		{
			"MediaIOCore",
			"SRLEAsset",
			"Stalker2",
		});
	}
}
