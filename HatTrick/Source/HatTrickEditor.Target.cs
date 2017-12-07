// Just don't be a dick

using UnrealBuildTool;
using System.Collections.Generic;

public class HatTrickEditorTarget : TargetRules
{
	public HatTrickEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "HatTrick" } );
	}
}
