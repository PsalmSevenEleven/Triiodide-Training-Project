// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Triiodide_Interview/CPP_SurvivalPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_SurvivalPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_SurvivalPlayerController();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_SurvivalPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Triiodide_Interview();
// End Cross Module References
	void ACPP_SurvivalPlayerController::StaticRegisterNativesACPP_SurvivalPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_SurvivalPlayerController);
	UClass* Z_Construct_UClass_ACPP_SurvivalPlayerController_NoRegister()
	{
		return ACPP_SurvivalPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseLookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UseAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Triiodide_Interview,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CPP_SurvivalPlayerController.h" },
		{ "ModuleRelativePath", "CPP_SurvivalPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_PawnMappingContext_MetaData[] = {
		{ "ModuleRelativePath", "CPP_SurvivalPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_PawnMappingContext = { "PawnMappingContext", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_SurvivalPlayerController, PawnMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_PawnMappingContext_MetaData), Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_PawnMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_MoveAction_MetaData[] = {
		{ "ModuleRelativePath", "CPP_SurvivalPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_SurvivalPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_MouseLookAction_MetaData[] = {
		{ "ModuleRelativePath", "CPP_SurvivalPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_MouseLookAction = { "MouseLookAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_SurvivalPlayerController, MouseLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_MouseLookAction_MetaData), Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_MouseLookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_InteractAction_MetaData[] = {
		{ "ModuleRelativePath", "CPP_SurvivalPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_SurvivalPlayerController, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_InteractAction_MetaData), Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_InteractAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_UseAction_MetaData[] = {
		{ "ModuleRelativePath", "CPP_SurvivalPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_UseAction = { "UseAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_SurvivalPlayerController, UseAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_UseAction_MetaData), Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_UseAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_PawnMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_MouseLookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_InteractAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::NewProp_UseAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_SurvivalPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::ClassParams = {
		&ACPP_SurvivalPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACPP_SurvivalPlayerController()
	{
		if (!Z_Registration_Info_UClass_ACPP_SurvivalPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_SurvivalPlayerController.OuterSingleton, Z_Construct_UClass_ACPP_SurvivalPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_SurvivalPlayerController.OuterSingleton;
	}
	template<> TRIIODIDE_INTERVIEW_API UClass* StaticClass<ACPP_SurvivalPlayerController>()
	{
		return ACPP_SurvivalPlayerController::StaticClass();
	}
	ACPP_SurvivalPlayerController::ACPP_SurvivalPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_SurvivalPlayerController);
	ACPP_SurvivalPlayerController::~ACPP_SurvivalPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_SurvivalPlayerController, ACPP_SurvivalPlayerController::StaticClass, TEXT("ACPP_SurvivalPlayerController"), &Z_Registration_Info_UClass_ACPP_SurvivalPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_SurvivalPlayerController), 2311559450U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalPlayerController_h_1649321138(TEXT("/Script/Triiodide_Interview"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
