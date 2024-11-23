using UnrealBuildTool;

public class Stalker2Target : TargetRules {
	public Stalker2Target(TargetInfo Target) : base(Target) {

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
