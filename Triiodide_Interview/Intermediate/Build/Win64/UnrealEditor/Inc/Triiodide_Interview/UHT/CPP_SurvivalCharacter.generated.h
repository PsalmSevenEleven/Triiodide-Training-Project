// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_SurvivalCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRIIODIDE_INTERVIEW_CPP_SurvivalCharacter_generated_h
#error "CPP_SurvivalCharacter.generated.h already included, missing '#pragma once' in CPP_SurvivalCharacter.h"
#endif
#define TRIIODIDE_INTERVIEW_CPP_SurvivalCharacter_generated_h

#define FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_SPARSE_DATA
#define FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerInteract_Implementation(); \
 \
	DECLARE_FUNCTION(execServerInteract);


#define FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_ACCESSORS
#define FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_CALLBACK_WRAPPERS
#define FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_SurvivalCharacter(); \
	friend struct Z_Construct_UClass_ACPP_SurvivalCharacter_Statics; \
public: \
	DECLARE_CLASS(ACPP_SurvivalCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Triiodide_Interview"), NO_API) \
	DECLARE_SERIALIZER(ACPP_SurvivalCharacter) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CameraBoom=NETFIELD_REP_START, \
		NETFIELD_REP_END=CameraBoom	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_SurvivalCharacter(ACPP_SurvivalCharacter&&); \
	NO_API ACPP_SurvivalCharacter(const ACPP_SurvivalCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_SurvivalCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_SurvivalCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_SurvivalCharacter) \
	NO_API virtual ~ACPP_SurvivalCharacter();


#define FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_10_PROLOG
#define FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_SPARSE_DATA \
	FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_ACCESSORS \
	FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_CALLBACK_WRAPPERS \
	FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIIODIDE_INTERVIEW_API UClass* StaticClass<class ACPP_SurvivalCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
