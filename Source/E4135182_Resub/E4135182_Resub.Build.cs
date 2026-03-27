// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class E4135182_Resub : ModuleRules
{
	public E4135182_Resub(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
