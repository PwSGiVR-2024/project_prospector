// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class project_prospector : ModuleRules
{
	public project_prospector(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
