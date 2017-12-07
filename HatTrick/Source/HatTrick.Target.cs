// Just don't be a dick

using UnrealBuildTool;
using System.Collections.Generic;

public class HatTrickTarget : TargetRules
{
	public HatTrickTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "HatTrick" } );
	}
}
