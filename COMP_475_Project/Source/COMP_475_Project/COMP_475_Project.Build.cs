// Fill out your copyright notice in the Description page of Project Settings.
using UnrealBuildTool;
using System.IO;

namespace UnrealBuildTool.Rules {
    public class COMP_475_Project : ModuleRules {
        public COMP_475_Project(ReadOnlyTargetRules Target) : base(Target) {
            //added to supress warnings from opencv plugin
            bEnableUndefinedIdentifierWarnings = false;
            DefaultBuildSettings = BuildSettingsVersion.V2;

            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

            bEnableUndefinedIdentifierWarnings = false;

            PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "OpenCV", "OpenCVHelper", "InputCore" });
            // Include path for rendering dependencies
            PrivateIncludePaths.AddRange(new string[] { Path.Combine(EngineDirectory, "Source/Runtime/Renderer/Private") });

            PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            // Rendering dependencies
            "Renderer",
            "RenderCore",
            "RHI",
            "RHICore",
            "D3D12RHI",
            // OpenCV dependencies
            "OpenCV",
            "OpenCVHelper",
        });
        

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
    }
}
