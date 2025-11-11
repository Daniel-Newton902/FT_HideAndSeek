// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FT_HideAndSeek : ModuleRules
{
	public FT_HideAndSeek(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
