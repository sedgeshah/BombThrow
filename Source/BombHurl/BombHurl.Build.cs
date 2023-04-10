// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BombHurl : ModuleRules
{
	public BombHurl(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
