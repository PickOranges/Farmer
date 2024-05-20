// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Farmer : ModuleRules
{
	public Farmer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
