// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SST/Public/SSTCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSTCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SST_API UClass* Z_Construct_UClass_ASSTCharacter();
SST_API UClass* Z_Construct_UClass_ASSTCharacter_NoRegister();
SST_API UClass* Z_Construct_UClass_UFollowCameraComponent_NoRegister();
SST_API UClass* Z_Construct_UClass_USSTCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SST();
// End Cross Module References

// Begin Class ASSTCharacter Function CanDash
struct SSTCharacter_eventCanDash_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SSTCharacter_eventCanDash_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_ASSTCharacter_CanDash = FName(TEXT("CanDash"));
bool ASSTCharacter::CanDash() const
{
	UFunction* Func = FindFunctionChecked(NAME_ASSTCharacter_CanDash);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SSTCharacter_eventCanDash_Parms Parms;
		const_cast<ASSTCharacter*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<ASSTCharacter*>(this)->CanDash_Implementation();
	}
}
struct Z_Construct_UFunction_ASSTCharacter_CanDash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Can override in blueprint for custom dash checking on this character */" },
#endif
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can override in blueprint for custom dash checking on this character" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSTCharacter_eventCanDash_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSTCharacter_eventCanDash_Parms), &Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASSTCharacter, nullptr, "CanDash", nullptr, nullptr, Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::PropPointers), sizeof(SSTCharacter_eventCanDash_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::Function_MetaDataParams) };
static_assert(sizeof(SSTCharacter_eventCanDash_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASSTCharacter_CanDash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASSTCharacter_CanDash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASSTCharacter::execCanDash)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanDash_Implementation();
	P_NATIVE_END;
}
// End Class ASSTCharacter Function CanDash

// Begin Class ASSTCharacter Function CrouchDrop
static const FName NAME_ASSTCharacter_CrouchDrop = FName(TEXT("CrouchDrop"));
void ASSTCharacter::CrouchDrop()
{
	UFunction* Func = FindFunctionChecked(NAME_ASSTCharacter_CrouchDrop);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		CrouchDrop_Implementation();
	}
}
struct Z_Construct_UFunction_ASSTCharacter_CrouchDrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called for crouch/drop input */" },
#endif
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called for crouch/drop input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASSTCharacter_CrouchDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASSTCharacter, nullptr, "CrouchDrop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_CrouchDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASSTCharacter_CrouchDrop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASSTCharacter_CrouchDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASSTCharacter_CrouchDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASSTCharacter::execCrouchDrop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrouchDrop_Implementation();
	P_NATIVE_END;
}
// End Class ASSTCharacter Function CrouchDrop

// Begin Class ASSTCharacter Function Dash
static const FName NAME_ASSTCharacter_Dash = FName(TEXT("Dash"));
void ASSTCharacter::Dash()
{
	UFunction* Func = FindFunctionChecked(NAME_ASSTCharacter_Dash);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Dash_Implementation();
	}
}
struct Z_Construct_UFunction_ASSTCharacter_Dash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called for dash input */" },
#endif
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called for dash input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASSTCharacter_Dash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASSTCharacter, nullptr, "Dash", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_Dash_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASSTCharacter_Dash_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASSTCharacter_Dash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASSTCharacter_Dash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASSTCharacter::execDash)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Dash_Implementation();
	P_NATIVE_END;
}
// End Class ASSTCharacter Function Dash

// Begin Class ASSTCharacter Function GetSSTCharacterMovement
struct Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics
{
	struct SSTCharacter_eventGetSSTCharacterMovement_Parms
	{
		USSTCharacterMovementComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSTCharacter_eventGetSSTCharacterMovement_Parms, ReturnValue), Z_Construct_UClass_USSTCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASSTCharacter, nullptr, "GetSSTCharacterMovement", nullptr, nullptr, Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::SSTCharacter_eventGetSSTCharacterMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::SSTCharacter_eventGetSSTCharacterMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASSTCharacter::execGetSSTCharacterMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USSTCharacterMovementComponent**)Z_Param__Result=P_THIS->GetSSTCharacterMovement();
	P_NATIVE_END;
}
// End Class ASSTCharacter Function GetSSTCharacterMovement

// Begin Class ASSTCharacter Function JumpOrDrop
static const FName NAME_ASSTCharacter_JumpOrDrop = FName(TEXT("JumpOrDrop"));
void ASSTCharacter::JumpOrDrop()
{
	UFunction* Func = FindFunctionChecked(NAME_ASSTCharacter_JumpOrDrop);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		JumpOrDrop_Implementation();
	}
}
struct Z_Construct_UFunction_ASSTCharacter_JumpOrDrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when jump pressed, which could also be a drop-down command */" },
#endif
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when jump pressed, which could also be a drop-down command" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASSTCharacter_JumpOrDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASSTCharacter, nullptr, "JumpOrDrop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_JumpOrDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASSTCharacter_JumpOrDrop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASSTCharacter_JumpOrDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASSTCharacter_JumpOrDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASSTCharacter::execJumpOrDrop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JumpOrDrop_Implementation();
	P_NATIVE_END;
}
// End Class ASSTCharacter Function JumpOrDrop

// Begin Class ASSTCharacter Function ReleaseJump
static const FName NAME_ASSTCharacter_ReleaseJump = FName(TEXT("ReleaseJump"));
void ASSTCharacter::ReleaseJump()
{
	UFunction* Func = FindFunctionChecked(NAME_ASSTCharacter_ReleaseJump);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		ReleaseJump_Implementation();
	}
}
struct Z_Construct_UFunction_ASSTCharacter_ReleaseJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when releasing the jump button */" },
#endif
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when releasing the jump button" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASSTCharacter_ReleaseJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASSTCharacter, nullptr, "ReleaseJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_ReleaseJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASSTCharacter_ReleaseJump_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASSTCharacter_ReleaseJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASSTCharacter_ReleaseJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASSTCharacter::execReleaseJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseJump_Implementation();
	P_NATIVE_END;
}
// End Class ASSTCharacter Function ReleaseJump

// Begin Class ASSTCharacter Function StopCrouchDrop
static const FName NAME_ASSTCharacter_StopCrouchDrop = FName(TEXT("StopCrouchDrop"));
void ASSTCharacter::StopCrouchDrop()
{
	UFunction* Func = FindFunctionChecked(NAME_ASSTCharacter_StopCrouchDrop);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		StopCrouchDrop_Implementation();
	}
}
struct Z_Construct_UFunction_ASSTCharacter_StopCrouchDrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when releasing crouch/drop input */" },
#endif
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when releasing crouch/drop input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASSTCharacter_StopCrouchDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASSTCharacter, nullptr, "StopCrouchDrop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASSTCharacter_StopCrouchDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASSTCharacter_StopCrouchDrop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASSTCharacter_StopCrouchDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASSTCharacter_StopCrouchDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASSTCharacter::execStopCrouchDrop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopCrouchDrop_Implementation();
	P_NATIVE_END;
}
// End Class ASSTCharacter Function StopCrouchDrop

// Begin Class ASSTCharacter
void ASSTCharacter::StaticRegisterNativesASSTCharacter()
{
	UClass* Class = ASSTCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanDash", &ASSTCharacter::execCanDash },
		{ "CrouchDrop", &ASSTCharacter::execCrouchDrop },
		{ "Dash", &ASSTCharacter::execDash },
		{ "GetSSTCharacterMovement", &ASSTCharacter::execGetSSTCharacterMovement },
		{ "JumpOrDrop", &ASSTCharacter::execJumpOrDrop },
		{ "ReleaseJump", &ASSTCharacter::execReleaseJump },
		{ "StopCrouchDrop", &ASSTCharacter::execStopCrouchDrop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASSTCharacter);
UClass* Z_Construct_UClass_ASSTCharacter_NoRegister()
{
	return ASSTCharacter::StaticClass();
}
struct Z_Construct_UClass_ASSTCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Extends the default ACharacter to provide:\n * - A custom character movement component, supporting dash, wallslide, etc.\n * - A FollowCamera component, which follows the character and can be modified via CameraTrigger objects.\n * - Input bindings for left/right motion, Jump, Dash, Crouch, and platform-drop\n * \n * USSTCharacterMovementComponent should remain the sole authority on movement for this character. \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SSTCharacter.h" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extends the default ACharacter to provide:\n- A custom character movement component, supporting dash, wallslide, etc.\n- A FollowCamera component, which follows the character and can be modified via CameraTrigger objects.\n- Input bindings for left/right motion, Jump, Dash, Crouch, and platform-drop\n\nUSSTCharacterMovementComponent should remain the sole authority on movement for this character." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SSTCharacterMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom CharacterMovementComponent */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom CharacterMovementComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera Component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchDropAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Crouch/Drop Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crouch/Drop Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropThroughPlatformJumpLockout_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time in seconds after dropping through a platform before the button becomes usable for jump input */" },
#endif
		{ "ModuleRelativePath", "Public/SSTCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time in seconds after dropping through a platform before the button becomes usable for jump input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SSTCharacterMovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchDropAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DashAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DropThroughPlatformJumpLockout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASSTCharacter_CanDash, "CanDash" }, // 2027359070
		{ &Z_Construct_UFunction_ASSTCharacter_CrouchDrop, "CrouchDrop" }, // 3124606713
		{ &Z_Construct_UFunction_ASSTCharacter_Dash, "Dash" }, // 3153030590
		{ &Z_Construct_UFunction_ASSTCharacter_GetSSTCharacterMovement, "GetSSTCharacterMovement" }, // 1949219356
		{ &Z_Construct_UFunction_ASSTCharacter_JumpOrDrop, "JumpOrDrop" }, // 3537146489
		{ &Z_Construct_UFunction_ASSTCharacter_ReleaseJump, "ReleaseJump" }, // 3067935974
		{ &Z_Construct_UFunction_ASSTCharacter_StopCrouchDrop, "StopCrouchDrop" }, // 635478511
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASSTCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASSTCharacter_Statics::NewProp_SSTCharacterMovementComponent = { "SSTCharacterMovementComponent", nullptr, (EPropertyFlags)0x014400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASSTCharacter, SSTCharacterMovementComponent), Z_Construct_UClass_USSTCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SSTCharacterMovementComponent_MetaData), NewProp_SSTCharacterMovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASSTCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASSTCharacter, FollowCamera), Z_Construct_UClass_UFollowCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASSTCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASSTCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASSTCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASSTCharacter_Statics::NewProp_CrouchDropAction = { "CrouchDropAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASSTCharacter, CrouchDropAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchDropAction_MetaData), NewProp_CrouchDropAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASSTCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASSTCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DashAction = { "DashAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASSTCharacter, DashAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashAction_MetaData), NewProp_DashAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DropThroughPlatformJumpLockout = { "DropThroughPlatformJumpLockout", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASSTCharacter, DropThroughPlatformJumpLockout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropThroughPlatformJumpLockout_MetaData), NewProp_DropThroughPlatformJumpLockout_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASSTCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSTCharacter_Statics::NewProp_SSTCharacterMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSTCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSTCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSTCharacter_Statics::NewProp_CrouchDropAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSTCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DashAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSTCharacter_Statics::NewProp_DropThroughPlatformJumpLockout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASSTCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASSTCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASSTCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASSTCharacter_Statics::ClassParams = {
	&ASSTCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASSTCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASSTCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASSTCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASSTCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASSTCharacter()
{
	if (!Z_Registration_Info_UClass_ASSTCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASSTCharacter.OuterSingleton, Z_Construct_UClass_ASSTCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASSTCharacter.OuterSingleton;
}
template<> SST_API UClass* StaticClass<ASSTCharacter>()
{
	return ASSTCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASSTCharacter);
ASSTCharacter::~ASSTCharacter() {}
// End Class ASSTCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_EEoA_Plugins_SST_Source_SST_Public_SSTCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASSTCharacter, ASSTCharacter::StaticClass, TEXT("ASSTCharacter"), &Z_Registration_Info_UClass_ASSTCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASSTCharacter), 3566582102U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EEoA_Plugins_SST_Source_SST_Public_SSTCharacter_h_369476991(TEXT("/Script/SST"),
	Z_CompiledInDeferFile_FID_EEoA_Plugins_SST_Source_SST_Public_SSTCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EEoA_Plugins_SST_Source_SST_Public_SSTCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
