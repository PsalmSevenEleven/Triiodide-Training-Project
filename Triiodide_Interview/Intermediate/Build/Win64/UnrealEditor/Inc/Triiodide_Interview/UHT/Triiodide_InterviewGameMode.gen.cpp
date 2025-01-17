// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Triiodide_Interview/Triiodide_InterviewGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriiodide_InterviewGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ATriiodide_InterviewGameMode();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ATriiodide_InterviewGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Triiodide_Interview();
// End Cross Module References
	void ATriiodide_InterviewGameMode::StaticRegisterNativesATriiodide_InterviewGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATriiodide_InterviewGameMode);
	UClass* Z_Construct_UClass_ATriiodide_InterviewGameMode_NoRegister()
	{
		return ATriiodide_InterviewGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumKeys_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Triiodide_Interview,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Triiodide_InterviewGameMode.h" },
		{ "ModuleRelativePath", "Triiodide_InterviewGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::NewProp_NumKeys_MetaData[] = {
		{ "Category", "Triiodide_InterviewGameMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The number of keys required to complete the level objective\n" },
#endif
		{ "ModuleRelativePath", "Triiodide_InterviewGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of keys required to complete the level objective" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::NewProp_NumKeys = { "NumKeys", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriiodide_InterviewGameMode, NumKeys), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::NewProp_NumKeys_MetaData), Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::NewProp_NumKeys_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::NewProp_NumKeys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriiodide_InterviewGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::ClassParams = {
		&ATriiodide_InterviewGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATriiodide_InterviewGameMode()
	{
		if (!Z_Registration_Info_UClass_ATriiodide_InterviewGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriiodide_InterviewGameMode.OuterSingleton, Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATriiodide_InterviewGameMode.OuterSingleton;
	}
	template<> TRIIODIDE_INTERVIEW_API UClass* StaticClass<ATriiodide_InterviewGameMode>()
	{
		return ATriiodide_InterviewGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriiodide_InterviewGameMode);
	ATriiodide_InterviewGameMode::~ATriiodide_InterviewGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_Triiodide_InterviewGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_Triiodide_InterviewGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATriiodide_InterviewGameMode, ATriiodide_InterviewGameMode::StaticClass, TEXT("ATriiodide_InterviewGameMode"), &Z_Registration_Info_UClass_ATriiodide_InterviewGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriiodide_InterviewGameMode), 2153670329U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_Triiodide_InterviewGameMode_h_637014510(TEXT("/Script/Triiodide_Interview"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_Triiodide_InterviewGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_Triiodide_InterviewGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
