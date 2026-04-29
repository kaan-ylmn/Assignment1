using UnrealBuildTool;

public class BirdOfPrey : ModuleRules
{
    public BirdOfPrey(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "AIModule" });

        PrivateDependencyModuleNames.AddRange(new string[] { });
    }
}