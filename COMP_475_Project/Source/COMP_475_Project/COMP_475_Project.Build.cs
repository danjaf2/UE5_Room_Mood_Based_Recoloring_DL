// Fill out your copyright notice in the Description page of Project Settings.
namespace UnrealBuildTool.Rules {
    public class COMP_475_Project : ModuleRules {
        public COMP_475_Project(ReadOnlyTargetRules Target) : base(Target) {
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

            PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "OpenCV", "OpenCVHelper", "InputCore" });

            PrivateDependencyModuleNames.AddRange(new string[] {
                "Core",
                "CoreUObject",
                "Engine",
                "Renderer",
                "RenderCore",
                "RHI",
                "RHICore",
                "D3D12RHI",
                "OpenCV",
                "OpenCVHelper"
            });

            // Uncomment if you are using Slate UI
            // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

            // Uncomment if you are using online features
            // PrivateDependencyModuleNames.Add("OnlineSubsystem");

            // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
        }
    }
}
