// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Triiodide_Interview/Triiodide_InterviewCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriiodide_InterviewCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ATriiodide_InterviewCharacter();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ATriiodide_InterviewCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Triiodide_Interview();
// End Cross Module References
	void ATriiodide_InterviewCharacter::StaticRegisterNativesATriiodide_InterviewCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATriiodide_InterviewCharacter);
	UClass* Z_Construct_UClass_ATriiodide_InterviewCharacter_NoRegister()
	{
		return ATriiodide_InterviewCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Triiodide_Interview,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Triiodide_InterviewCharacter.h" },
		{ "ModuleRelativePath", "Triiodide_InterviewCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Triiodide_InterviewCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriiodide_InterviewCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Triiodide_InterviewCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriiodide_InterviewCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
#endif
		{ "ModuleRelativePath", "Triiodide_InterviewCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriiodide_InterviewCharacter, TurnRateGamepad), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::NewProp_TurnRateGamepad_MetaData), Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::NewProp_TurnRateGamepad_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::NewProp_TurnRateGamepad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriiodide_InterviewCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::ClassParams = {
		&ATriiodide_InterviewCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATriiodide_InterviewCharacter()
	{
		if (!Z_Registration_Info_UClass_ATriiodide_InterviewCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriiodide_InterviewCharacter.OuterSingleton, Z_Construct_UClass_ATriiodide_InterviewCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATriiodide_InterviewCharacter.OuterSingleton;
	}
	template<> TRIIODIDE_INTERVIEW_API UClass* StaticClass<ATriiodide_InterviewCharacter>()
	{
		return ATriiodide_InterviewCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriiodide_InterviewCharacter);
	ATriiodide_InterviewCharacter::~ATriiodide_InterviewCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_Triiodide_InterviewCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_Triiodide_InterviewCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATriiodide_InterviewCharacter, ATriiodide_InterviewCharacter::StaticClass, TEXT("ATriiodide_InterviewCharacter"), &Z_Registration_Info_UClass_ATriiodide_InterviewCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriiodide_InterviewCharacter), 3913022870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_Triiodide_InterviewCharacter_h_57724886(TEXT("/Script/Triiodide_Interview"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_Triiodide_InterviewCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_Triiodide_InterviewCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
