// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CharacterMovementSprint.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMovementSprint() {}
// Cross Module References
	HATTRICK_API UClass* Z_Construct_UClass_UCharacterMovementSprint_NoRegister();
	HATTRICK_API UClass* Z_Construct_UClass_UCharacterMovementSprint();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_HatTrick();
// End Cross Module References
	void UCharacterMovementSprint::StaticRegisterNativesUCharacterMovementSprint()
	{
	}
	UClass* Z_Construct_UClass_UCharacterMovementSprint_NoRegister()
	{
		return UCharacterMovementSprint::StaticClass();
	}
	UClass* Z_Construct_UClass_UCharacterMovementSprint()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UCharacterMovementComponent();
			Z_Construct_UPackage__Script_HatTrick();
			OuterClass = UCharacterMovementSprint::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00084u;


				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UCharacterMovementSprint> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CharacterMovementSprint.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CharacterMovementSprint.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterMovementSprint, 2201679905);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterMovementSprint(Z_Construct_UClass_UCharacterMovementSprint, &UCharacterMovementSprint::StaticClass, TEXT("/Script/HatTrick"), TEXT("UCharacterMovementSprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterMovementSprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
