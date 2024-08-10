// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SST/Public/SSTCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSTCharacterMovementComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
SST_API UClass* Z_Construct_UClass_ASSTCharacter_NoRegister();
SST_API UClass* Z_Construct_UClass_USSTCharacterMovementComponent();
SST_API UClass* Z_Construct_UClass_USSTCharacterMovementComponent_NoRegister();
SST_API UEnum* Z_Construct_UEnum_SST_ESSTCharacterMovementMode();
SST_API UFunction* Z_Construct_UDelegateFunction_SST_EndDashDelegate__DelegateSignature();
SST_API UFunction* Z_Construct_UDelegateFunction_SST_PerformDashDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SST();
// End Cross Module References

// Begin Delegate FPerformDashDelegate
struct Z_Construct_UDelegateFunction_SST_PerformDashDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Overrides the default CharacterMovementComponent to provide custom movement:\n *   - Wallsliding\n *   - Walljumping\n *   - Dashing\n *\x09 - Drop down through a OneWayPlatform\n *\n * Also enables 180-degree only left/right smooth rotation with configurable rate.\n *\n * These features are designed for replication to support network play.\n */// Exact dashing behavior can be designed in blueprints via delegate\n" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Overrides the default CharacterMovementComponent to provide custom movement:\n  - Wallsliding\n  - Walljumping\n  - Dashing\n     - Drop down through a OneWayPlatform\n\nAlso enables 180-degree only left/right smooth rotation with configurable rate.\n\nThese features are designed for replication to support network play.\n // Exact dashing behavior can be designed in blueprints via delegate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SST_PerformDashDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SST, nullptr, "PerformDashDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SST_PerformDashDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SST_PerformDashDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SST_PerformDashDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SST_PerformDashDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPerformDashDelegate_DelegateWrapper(const FMulticastScriptDelegate& PerformDashDelegate)
{
	PerformDashDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FPerformDashDelegate

// Begin Delegate FEndDashDelegate
struct Z_Construct_UDelegateFunction_SST_EndDashDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SST_EndDashDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SST, nullptr, "EndDashDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SST_EndDashDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SST_EndDashDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SST_EndDashDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SST_EndDashDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEndDashDelegate_DelegateWrapper(const FMulticastScriptDelegate& EndDashDelegate)
{
	EndDashDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FEndDashDelegate

// Begin Enum ESSTCharacterMovementMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESSTCharacterMovementMode;
static UEnum* ESSTCharacterMovementMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESSTCharacterMovementMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESSTCharacterMovementMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SST_ESSTCharacterMovementMode, (UObject*)Z_Construct_UPackage__Script_SST(), TEXT("ESSTCharacterMovementMode"));
	}
	return Z_Registration_Info_UEnum_ESSTCharacterMovementMode.OuterSingleton;
}
template<> SST_API UEnum* StaticEnum<ESSTCharacterMovementMode>()
{
	return ESSTCharacterMovementMode_StaticEnum();
}
struct Z_Construct_UEnum_SST_ESSTCharacterMovementMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Custom character movement modes\n" },
		{ "FSSTMOVE_DASHING.DisplayName", "Dashing" },
		{ "FSSTMOVE_DASHING.Name", "FSSTMOVE_DASHING" },
		{ "FSSTMOVE_MAX.Hidden", "" },
		{ "FSSTMOVE_MAX.Name", "FSSTMOVE_MAX" },
		{ "FSSTMOVE_NONE.Hidden", "" },
		{ "FSSTMOVE_NONE.Name", "FSSTMOVE_NONE" },
		{ "FSSTMOVE_WALLSLIDING.DisplayName", "Wallsliding" },
		{ "FSSTMOVE_WALLSLIDING.Name", "FSSTMOVE_WALLSLIDING" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Custom character movement modes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "FSSTMOVE_NONE", (int64)FSSTMOVE_NONE },
		{ "FSSTMOVE_WALLSLIDING", (int64)FSSTMOVE_WALLSLIDING },
		{ "FSSTMOVE_DASHING", (int64)FSSTMOVE_DASHING },
		{ "FSSTMOVE_MAX", (int64)FSSTMOVE_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SST_ESSTCharacterMovementMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SST,
	nullptr,
	"ESSTCharacterMovementMode",
	"ESSTCharacterMovementMode",
	Z_Construct_UEnum_SST_ESSTCharacterMovementMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SST_ESSTCharacterMovementMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SST_ESSTCharacterMovementMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SST_ESSTCharacterMovementMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SST_ESSTCharacterMovementMode()
{
	if (!Z_Registration_Info_UEnum_ESSTCharacterMovementMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESSTCharacterMovementMode.InnerSingleton, Z_Construct_UEnum_SST_ESSTCharacterMovementMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESSTCharacterMovementMode.InnerSingleton;
}
// End Enum ESSTCharacterMovementMode

// Begin Class USSTCharacterMovementComponent Function CanDash
struct Z_Construct_UFunction_USSTCharacterMovementComponent_CanDash_Statics
{
	struct SSTCharacterMovementComponent_eventCanDash_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Returns true if the character is currently able to dash */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Returns true if the character is currently able to dash" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USSTCharacterMovementComponent_CanDash_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSTCharacterMovementComponent_eventCanDash_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSTCharacterMovementComponent_CanDash_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSTCharacterMovementComponent_eventCanDash_Parms), &Z_Construct_UFunction_USSTCharacterMovementComponent_CanDash_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSTCharacterMovementComponent_CanDash_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSTCharacterMovementComponent_CanDash_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_CanDash_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSTCharacterMovementComponent_CanDash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSTCharacterMovementComponent, nullptr, "CanDash", nullptr, nullptr, Z_Construct_UFunction_USSTCharacterMovementComponent_CanDash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_CanDash_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSTCharacterMovementComponent_CanDash_Statics::SSTCharacterMovementComponent_eventCanDash_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_CanDash_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSTCharacterMovementComponent_CanDash_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USSTCharacterMovementComponent_CanDash_Statics::SSTCharacterMovementComponent_eventCanDash_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSTCharacterMovementComponent_CanDash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSTCharacterMovementComponent_CanDash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSTCharacterMovementComponent::execCanDash)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanDash();
	P_NATIVE_END;
}
// End Class USSTCharacterMovementComponent Function CanDash

// Begin Class USSTCharacterMovementComponent Function CanWalljump
struct Z_Construct_UFunction_USSTCharacterMovementComponent_CanWalljump_Statics
{
	struct SSTCharacterMovementComponent_eventCanWalljump_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Whether the character is wallsliding, or has just left a wall, and can walljump */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Whether the character is wallsliding, or has just left a wall, and can walljump" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USSTCharacterMovementComponent_CanWalljump_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSTCharacterMovementComponent_eventCanWalljump_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSTCharacterMovementComponent_CanWalljump_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSTCharacterMovementComponent_eventCanWalljump_Parms), &Z_Construct_UFunction_USSTCharacterMovementComponent_CanWalljump_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSTCharacterMovementComponent_CanWalljump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSTCharacterMovementComponent_CanWalljump_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_CanWalljump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSTCharacterMovementComponent_CanWalljump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSTCharacterMovementComponent, nullptr, "CanWalljump", nullptr, nullptr, Z_Construct_UFunction_USSTCharacterMovementComponent_CanWalljump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_CanWalljump_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSTCharacterMovementComponent_CanWalljump_Statics::SSTCharacterMovementComponent_eventCanWalljump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_CanWalljump_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSTCharacterMovementComponent_CanWalljump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USSTCharacterMovementComponent_CanWalljump_Statics::SSTCharacterMovementComponent_eventCanWalljump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSTCharacterMovementComponent_CanWalljump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSTCharacterMovementComponent_CanWalljump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSTCharacterMovementComponent::execCanWalljump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanWalljump();
	P_NATIVE_END;
}
// End Class USSTCharacterMovementComponent Function CanWalljump

// Begin Class USSTCharacterMovementComponent Function IsCustomMovementMode
struct Z_Construct_UFunction_USSTCharacterMovementComponent_IsCustomMovementMode_Statics
{
	struct SSTCharacterMovementComponent_eventIsCustomMovementMode_Parms
	{
		TEnumAsByte<ESSTCharacterMovementMode> Mode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Checks whether the character is currently in the specified custom movement mode */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Checks whether the character is currently in the specified custom movement mode" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USSTCharacterMovementComponent_IsCustomMovementMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSTCharacterMovementComponent_eventIsCustomMovementMode_Parms, Mode), Z_Construct_UEnum_SST_ESSTCharacterMovementMode, METADATA_PARAMS(0, nullptr) }; // 314325196
void Z_Construct_UFunction_USSTCharacterMovementComponent_IsCustomMovementMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSTCharacterMovementComponent_eventIsCustomMovementMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSTCharacterMovementComponent_IsCustomMovementMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSTCharacterMovementComponent_eventIsCustomMovementMode_Parms), &Z_Construct_UFunction_USSTCharacterMovementComponent_IsCustomMovementMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSTCharacterMovementComponent_IsCustomMovementMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSTCharacterMovementComponent_IsCustomMovementMode_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSTCharacterMovementComponent_IsCustomMovementMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_IsCustomMovementMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSTCharacterMovementComponent_IsCustomMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSTCharacterMovementComponent, nullptr, "IsCustomMovementMode", nullptr, nullptr, Z_Construct_UFunction_USSTCharacterMovementComponent_IsCustomMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_IsCustomMovementMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSTCharacterMovementComponent_IsCustomMovementMode_Statics::SSTCharacterMovementComponent_eventIsCustomMovementMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_IsCustomMovementMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSTCharacterMovementComponent_IsCustomMovementMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USSTCharacterMovementComponent_IsCustomMovementMode_Statics::SSTCharacterMovementComponent_eventIsCustomMovementMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSTCharacterMovementComponent_IsCustomMovementMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSTCharacterMovementComponent_IsCustomMovementMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSTCharacterMovementComponent::execIsCustomMovementMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCustomMovementMode(ESSTCharacterMovementMode(Z_Param_Mode));
	P_NATIVE_END;
}
// End Class USSTCharacterMovementComponent Function IsCustomMovementMode

// Begin Class USSTCharacterMovementComponent Function IsFacingRight
struct Z_Construct_UFunction_USSTCharacterMovementComponent_IsFacingRight_Statics
{
	struct SSTCharacterMovementComponent_eventIsFacingRight_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Whether the character is currently facing right (or has started turning towards it) */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Whether the character is currently facing right (or has started turning towards it)" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USSTCharacterMovementComponent_IsFacingRight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSTCharacterMovementComponent_eventIsFacingRight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSTCharacterMovementComponent_IsFacingRight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSTCharacterMovementComponent_eventIsFacingRight_Parms), &Z_Construct_UFunction_USSTCharacterMovementComponent_IsFacingRight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSTCharacterMovementComponent_IsFacingRight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSTCharacterMovementComponent_IsFacingRight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_IsFacingRight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSTCharacterMovementComponent_IsFacingRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSTCharacterMovementComponent, nullptr, "IsFacingRight", nullptr, nullptr, Z_Construct_UFunction_USSTCharacterMovementComponent_IsFacingRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_IsFacingRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSTCharacterMovementComponent_IsFacingRight_Statics::SSTCharacterMovementComponent_eventIsFacingRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_IsFacingRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSTCharacterMovementComponent_IsFacingRight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USSTCharacterMovementComponent_IsFacingRight_Statics::SSTCharacterMovementComponent_eventIsFacingRight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSTCharacterMovementComponent_IsFacingRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSTCharacterMovementComponent_IsFacingRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSTCharacterMovementComponent::execIsFacingRight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFacingRight();
	P_NATIVE_END;
}
// End Class USSTCharacterMovementComponent Function IsFacingRight

// Begin Class USSTCharacterMovementComponent Function OnBeginDash
static FName NAME_USSTCharacterMovementComponent_OnBeginDash = FName(TEXT("OnBeginDash"));
void USSTCharacterMovementComponent::OnBeginDash()
{
	ProcessEvent(FindFunctionChecked(NAME_USSTCharacterMovementComponent_OnBeginDash),NULL);
}
struct Z_Construct_UFunction_USSTCharacterMovementComponent_OnBeginDash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Called when beginning a dash. Can be extended via blueprint */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Called when beginning a dash. Can be extended via blueprint" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSTCharacterMovementComponent_OnBeginDash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSTCharacterMovementComponent, nullptr, "OnBeginDash", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_OnBeginDash_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSTCharacterMovementComponent_OnBeginDash_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USSTCharacterMovementComponent_OnBeginDash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSTCharacterMovementComponent_OnBeginDash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSTCharacterMovementComponent::execOnBeginDash)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginDash_Implementation();
	P_NATIVE_END;
}
// End Class USSTCharacterMovementComponent Function OnBeginDash

// Begin Class USSTCharacterMovementComponent Function OnBeginWallslide
static FName NAME_USSTCharacterMovementComponent_OnBeginWallslide = FName(TEXT("OnBeginWallslide"));
void USSTCharacterMovementComponent::OnBeginWallslide()
{
	ProcessEvent(FindFunctionChecked(NAME_USSTCharacterMovementComponent_OnBeginWallslide),NULL);
}
struct Z_Construct_UFunction_USSTCharacterMovementComponent_OnBeginWallslide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Called when beginning a wallslide. Can be extended via blueprint */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Called when beginning a wallslide. Can be extended via blueprint" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSTCharacterMovementComponent_OnBeginWallslide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSTCharacterMovementComponent, nullptr, "OnBeginWallslide", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_OnBeginWallslide_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSTCharacterMovementComponent_OnBeginWallslide_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USSTCharacterMovementComponent_OnBeginWallslide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSTCharacterMovementComponent_OnBeginWallslide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSTCharacterMovementComponent::execOnBeginWallslide)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginWallslide_Implementation();
	P_NATIVE_END;
}
// End Class USSTCharacterMovementComponent Function OnBeginWallslide

// Begin Class USSTCharacterMovementComponent Function OnEndDash
static FName NAME_USSTCharacterMovementComponent_OnEndDash = FName(TEXT("OnEndDash"));
void USSTCharacterMovementComponent::OnEndDash()
{
	ProcessEvent(FindFunctionChecked(NAME_USSTCharacterMovementComponent_OnEndDash),NULL);
}
struct Z_Construct_UFunction_USSTCharacterMovementComponent_OnEndDash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Called when finishing a dash. Can be extended via blueprint */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Called when finishing a dash. Can be extended via blueprint" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSTCharacterMovementComponent_OnEndDash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSTCharacterMovementComponent, nullptr, "OnEndDash", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_OnEndDash_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSTCharacterMovementComponent_OnEndDash_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USSTCharacterMovementComponent_OnEndDash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSTCharacterMovementComponent_OnEndDash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSTCharacterMovementComponent::execOnEndDash)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndDash_Implementation();
	P_NATIVE_END;
}
// End Class USSTCharacterMovementComponent Function OnEndDash

// Begin Class USSTCharacterMovementComponent Function OnEndWallslide
static FName NAME_USSTCharacterMovementComponent_OnEndWallslide = FName(TEXT("OnEndWallslide"));
void USSTCharacterMovementComponent::OnEndWallslide()
{
	ProcessEvent(FindFunctionChecked(NAME_USSTCharacterMovementComponent_OnEndWallslide),NULL);
}
struct Z_Construct_UFunction_USSTCharacterMovementComponent_OnEndWallslide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Called when finishing a wallslide. Can be extended via blueprint */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Called when finishing a wallslide. Can be extended via blueprint" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSTCharacterMovementComponent_OnEndWallslide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSTCharacterMovementComponent, nullptr, "OnEndWallslide", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_OnEndWallslide_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSTCharacterMovementComponent_OnEndWallslide_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USSTCharacterMovementComponent_OnEndWallslide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSTCharacterMovementComponent_OnEndWallslide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSTCharacterMovementComponent::execOnEndWallslide)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndWallslide_Implementation();
	P_NATIVE_END;
}
// End Class USSTCharacterMovementComponent Function OnEndWallslide

// Begin Class USSTCharacterMovementComponent Function OnRep_IsDashing
struct Z_Construct_UFunction_USSTCharacterMovementComponent_OnRep_IsDashing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Handle Dashing replicated from server */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Handle Dashing replicated from server" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSTCharacterMovementComponent_OnRep_IsDashing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSTCharacterMovementComponent, nullptr, "OnRep_IsDashing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_OnRep_IsDashing_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSTCharacterMovementComponent_OnRep_IsDashing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USSTCharacterMovementComponent_OnRep_IsDashing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSTCharacterMovementComponent_OnRep_IsDashing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSTCharacterMovementComponent::execOnRep_IsDashing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsDashing();
	P_NATIVE_END;
}
// End Class USSTCharacterMovementComponent Function OnRep_IsDashing

// Begin Class USSTCharacterMovementComponent Function OnRep_IsWallsliding
struct Z_Construct_UFunction_USSTCharacterMovementComponent_OnRep_IsWallsliding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Handle Wallsliding replicated from server */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Handle Wallsliding replicated from server" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSTCharacterMovementComponent_OnRep_IsWallsliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSTCharacterMovementComponent, nullptr, "OnRep_IsWallsliding", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_OnRep_IsWallsliding_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSTCharacterMovementComponent_OnRep_IsWallsliding_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USSTCharacterMovementComponent_OnRep_IsWallsliding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSTCharacterMovementComponent_OnRep_IsWallsliding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSTCharacterMovementComponent::execOnRep_IsWallsliding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsWallsliding();
	P_NATIVE_END;
}
// End Class USSTCharacterMovementComponent Function OnRep_IsWallsliding

// Begin Class USSTCharacterMovementComponent Function RequestTurnAround
struct Z_Construct_UFunction_USSTCharacterMovementComponent_RequestTurnAround_Statics
{
	struct SSTCharacterMovementComponent_eventRequestTurnAround_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Begins a 180-degree turn. Returns false if the character is already in a turn */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Begins a 180-degree turn. Returns false if the character is already in a turn" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USSTCharacterMovementComponent_RequestTurnAround_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSTCharacterMovementComponent_eventRequestTurnAround_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSTCharacterMovementComponent_RequestTurnAround_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSTCharacterMovementComponent_eventRequestTurnAround_Parms), &Z_Construct_UFunction_USSTCharacterMovementComponent_RequestTurnAround_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSTCharacterMovementComponent_RequestTurnAround_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSTCharacterMovementComponent_RequestTurnAround_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_RequestTurnAround_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSTCharacterMovementComponent_RequestTurnAround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSTCharacterMovementComponent, nullptr, "RequestTurnAround", nullptr, nullptr, Z_Construct_UFunction_USSTCharacterMovementComponent_RequestTurnAround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_RequestTurnAround_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSTCharacterMovementComponent_RequestTurnAround_Statics::SSTCharacterMovementComponent_eventRequestTurnAround_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSTCharacterMovementComponent_RequestTurnAround_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSTCharacterMovementComponent_RequestTurnAround_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USSTCharacterMovementComponent_RequestTurnAround_Statics::SSTCharacterMovementComponent_eventRequestTurnAround_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSTCharacterMovementComponent_RequestTurnAround()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSTCharacterMovementComponent_RequestTurnAround_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSTCharacterMovementComponent::execRequestTurnAround)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RequestTurnAround();
	P_NATIVE_END;
}
// End Class USSTCharacterMovementComponent Function RequestTurnAround

// Begin Class USSTCharacterMovementComponent
void USSTCharacterMovementComponent::StaticRegisterNativesUSSTCharacterMovementComponent()
{
	UClass* Class = USSTCharacterMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanDash", &USSTCharacterMovementComponent::execCanDash },
		{ "CanWalljump", &USSTCharacterMovementComponent::execCanWalljump },
		{ "IsCustomMovementMode", &USSTCharacterMovementComponent::execIsCustomMovementMode },
		{ "IsFacingRight", &USSTCharacterMovementComponent::execIsFacingRight },
		{ "OnBeginDash", &USSTCharacterMovementComponent::execOnBeginDash },
		{ "OnBeginWallslide", &USSTCharacterMovementComponent::execOnBeginWallslide },
		{ "OnEndDash", &USSTCharacterMovementComponent::execOnEndDash },
		{ "OnEndWallslide", &USSTCharacterMovementComponent::execOnEndWallslide },
		{ "OnRep_IsDashing", &USSTCharacterMovementComponent::execOnRep_IsDashing },
		{ "OnRep_IsWallsliding", &USSTCharacterMovementComponent::execOnRep_IsWallsliding },
		{ "RequestTurnAround", &USSTCharacterMovementComponent::execRequestTurnAround },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USSTCharacterMovementComponent);
UClass* Z_Construct_UClass_USSTCharacterMovementComponent_NoRegister()
{
	return USSTCharacterMovementComponent::StaticClass();
}
struct Z_Construct_UClass_USSTCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SSTCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SSTCharacterOwner_MetaData[] = {
		{ "Comment", "/** Owning character for this component */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Owning character for this component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnAroundSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Time it takes to fully turn around, in seconds */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Time it takes to fully turn around, in seconds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanWallSlide_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** Determines whether the character is capable of wallsliding. */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Determines whether the character is capable of wallsliding." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallslideSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** Speed at which the character slides down a wall */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Speed at which the character slides down a wall" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallslideInputAngleStrictness_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** (0-1) Controls how strictly along the x-axis the player must hold an analog input to continue wallsliding */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "(0-1) Controls how strictly along the x-axis the player must hold an analog input to continue wallsliding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallslideAllowableWallAngleStrictness_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** (0-1) Lower values allow a wall greater deviations from pure vertical before it is no longer eligible for wallslide */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "(0-1) Lower values allow a wall greater deviations from pure vertical before it is no longer eligible for wallslide" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallslideDistanceFromWall_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** In units, the distance from the wall at which the character slides */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "In units, the distance from the wall at which the character slides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallslideMinFloorHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** In units, the distance above the floor before landing and ending the wallslide */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "In units, the distance above the floor before landing and ending the wallslide" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallslideJumpOffForce_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** The force with which the character jumps out of a wallslide. Set to 0 to disable walljump. */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "The force with which the character jumps out of a wallslide. Set to 0 to disable walljump." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallslideJumpAngle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** The angle with which the character jumps out of a wallslide. */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "The angle with which the character jumps out of a wallslide." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallslideJumpInputDisableSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** Time after performing a walljump before the jump button can be used to double-jump. */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Time after performing a walljump before the jump button can be used to double-jump." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallslideReleaseWalljumpBufferSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** Buffer after releasing a wallslide and beginning falling during which a jump will still count as a walljump. */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Buffer after releasing a wallslide and beginning falling during which a jump will still count as a walljump." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalljumpCooldownSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** Minimum amount of time between walljumps. Should be larger than WallslideReleaseWalljumpBufferSeconds. */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Minimum amount of time between walljumps. Should be larger than WallslideReleaseWalljumpBufferSeconds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** If false, dashing is disabled. */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "If false, dashing is disabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDashesBeforeLanding_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** Number of dashes a character can perform in midair before landing. No limit if negative. */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Number of dashes a character can perform in midair before landing. No limit if negative." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** In units, length of a dash. */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "In units, length of a dash." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashDurationSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** In seconds, duration of a dash. */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "In seconds, duration of a dash." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashCooldownSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** Cooldown between dashes. */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Cooldown between dashes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashFriction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** Friction applied during dashes. Can be modified via blueprint e.g. if in water.  */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Friction applied during dashes. Can be modified via blueprint e.g. if in water." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanTurnWhileDashing_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** If true, the player can turn around while in the middle of a dash (changing direction of dash) */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "If true, the player can turn around while in the middle of a dash (changing direction of dash)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanJumpCancelDash_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** If true, the player can jump while in the middle of a dash, immediately ending it */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "If true, the player can jump while in the middle of a dash, immediately ending it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashFollowsDownwardSlopes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** When dashing on a slope facing downwards, the character will go down the slope if true, or horizontally outward if false.  */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "When dashing on a slope facing downwards, the character will go down the slope if true, or horizontally outward if false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WantsToDash_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** If true, attempt to dash on next update. */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "If true, attempt to dash on next update." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsDashing_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Set by character movement to specify that this Character is currently dashing. */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Set by character movement to specify that this Character is currently dashing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerformDashDelegate_MetaData[] = {
		{ "Comment", "/** Blueprint-assignable dash implementation */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Blueprint-assignable dash implementation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndDashDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsWallsliding_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Set by character movement to specify that this Character is currently wallsliding. */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "Set by character movement to specify that this Character is currently wallsliding." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WantsToPlatformDrop_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** If true, attempt to drop through platform on next update. */" },
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
		{ "ToolTip", "If true, attempt to drop through platform on next update." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FacingRight_MetaData[] = {
		{ "ModuleRelativePath", "Public/SSTCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SSTCharacterOwner;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnAroundSeconds;
	static void NewProp_CanWallSlide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanWallSlide;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallslideSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallslideInputAngleStrictness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallslideAllowableWallAngleStrictness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallslideDistanceFromWall;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallslideMinFloorHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallslideJumpOffForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallslideJumpAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallslideJumpInputDisableSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallslideReleaseWalljumpBufferSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalljumpCooldownSeconds;
	static void NewProp_DashEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DashEnabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDashesBeforeLanding;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashDurationSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashCooldownSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashFriction;
	static void NewProp_CanTurnWhileDashing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanTurnWhileDashing;
	static void NewProp_CanJumpCancelDash_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanJumpCancelDash;
	static void NewProp_DashFollowsDownwardSlopes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DashFollowsDownwardSlopes;
	static void NewProp_WantsToDash_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WantsToDash;
	static void NewProp_IsDashing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDashing;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PerformDashDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EndDashDelegate;
	static void NewProp_IsWallsliding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsWallsliding;
	static void NewProp_WantsToPlatformDrop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WantsToPlatformDrop;
	static void NewProp_FacingRight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FacingRight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USSTCharacterMovementComponent_CanDash, "CanDash" }, // 44920748
		{ &Z_Construct_UFunction_USSTCharacterMovementComponent_CanWalljump, "CanWalljump" }, // 2792988479
		{ &Z_Construct_UFunction_USSTCharacterMovementComponent_IsCustomMovementMode, "IsCustomMovementMode" }, // 2542304987
		{ &Z_Construct_UFunction_USSTCharacterMovementComponent_IsFacingRight, "IsFacingRight" }, // 1678320404
		{ &Z_Construct_UFunction_USSTCharacterMovementComponent_OnBeginDash, "OnBeginDash" }, // 2736498332
		{ &Z_Construct_UFunction_USSTCharacterMovementComponent_OnBeginWallslide, "OnBeginWallslide" }, // 2782206756
		{ &Z_Construct_UFunction_USSTCharacterMovementComponent_OnEndDash, "OnEndDash" }, // 3277625653
		{ &Z_Construct_UFunction_USSTCharacterMovementComponent_OnEndWallslide, "OnEndWallslide" }, // 2941080293
		{ &Z_Construct_UFunction_USSTCharacterMovementComponent_OnRep_IsDashing, "OnRep_IsDashing" }, // 490858556
		{ &Z_Construct_UFunction_USSTCharacterMovementComponent_OnRep_IsWallsliding, "OnRep_IsWallsliding" }, // 500234640
		{ &Z_Construct_UFunction_USSTCharacterMovementComponent_RequestTurnAround, "RequestTurnAround" }, // 2532735598
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USSTCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_SSTCharacterOwner = { "SSTCharacterOwner", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USSTCharacterMovementComponent, SSTCharacterOwner), Z_Construct_UClass_ASSTCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SSTCharacterOwner_MetaData), NewProp_SSTCharacterOwner_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_TurnAroundSeconds = { "TurnAroundSeconds", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USSTCharacterMovementComponent, TurnAroundSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnAroundSeconds_MetaData), NewProp_TurnAroundSeconds_MetaData) };
void Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_CanWallSlide_SetBit(void* Obj)
{
	((USSTCharacterMovementComponent*)Obj)->CanWallSlide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_CanWallSlide = { "CanWallSlide", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USSTCharacterMovementComponent), &Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_CanWallSlide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanWallSlide_MetaData), NewProp_CanWallSlide_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WallslideSpeed = { "WallslideSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USSTCharacterMovementComponent, WallslideSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallslideSpeed_MetaData), NewProp_WallslideSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WallslideInputAngleStrictness = { "WallslideInputAngleStrictness", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USSTCharacterMovementComponent, WallslideInputAngleStrictness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallslideInputAngleStrictness_MetaData), NewProp_WallslideInputAngleStrictness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WallslideAllowableWallAngleStrictness = { "WallslideAllowableWallAngleStrictness", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USSTCharacterMovementComponent, WallslideAllowableWallAngleStrictness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallslideAllowableWallAngleStrictness_MetaData), NewProp_WallslideAllowableWallAngleStrictness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WallslideDistanceFromWall = { "WallslideDistanceFromWall", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USSTCharacterMovementComponent, WallslideDistanceFromWall), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallslideDistanceFromWall_MetaData), NewProp_WallslideDistanceFromWall_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WallslideMinFloorHeight = { "WallslideMinFloorHeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USSTCharacterMovementComponent, WallslideMinFloorHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallslideMinFloorHeight_MetaData), NewProp_WallslideMinFloorHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WallslideJumpOffForce = { "WallslideJumpOffForce", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USSTCharacterMovementComponent, WallslideJumpOffForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallslideJumpOffForce_MetaData), NewProp_WallslideJumpOffForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WallslideJumpAngle = { "WallslideJumpAngle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USSTCharacterMovementComponent, WallslideJumpAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallslideJumpAngle_MetaData), NewProp_WallslideJumpAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WallslideJumpInputDisableSeconds = { "WallslideJumpInputDisableSeconds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USSTCharacterMovementComponent, WallslideJumpInputDisableSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallslideJumpInputDisableSeconds_MetaData), NewProp_WallslideJumpInputDisableSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WallslideReleaseWalljumpBufferSeconds = { "WallslideReleaseWalljumpBufferSeconds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USSTCharacterMovementComponent, WallslideReleaseWalljumpBufferSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallslideReleaseWalljumpBufferSeconds_MetaData), NewProp_WallslideReleaseWalljumpBufferSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WalljumpCooldownSeconds = { "WalljumpCooldownSeconds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USSTCharacterMovementComponent, WalljumpCooldownSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalljumpCooldownSeconds_MetaData), NewProp_WalljumpCooldownSeconds_MetaData) };
void Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_DashEnabled_SetBit(void* Obj)
{
	((USSTCharacterMovementComponent*)Obj)->DashEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_DashEnabled = { "DashEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USSTCharacterMovementComponent), &Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_DashEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashEnabled_MetaData), NewProp_DashEnabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_MaxDashesBeforeLanding = { "MaxDashesBeforeLanding", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USSTCharacterMovementComponent, MaxDashesBeforeLanding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDashesBeforeLanding_MetaData), NewProp_MaxDashesBeforeLanding_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_DashDistance = { "DashDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USSTCharacterMovementComponent, DashDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashDistance_MetaData), NewProp_DashDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_DashDurationSeconds = { "DashDurationSeconds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USSTCharacterMovementComponent, DashDurationSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashDurationSeconds_MetaData), NewProp_DashDurationSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_DashCooldownSeconds = { "DashCooldownSeconds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USSTCharacterMovementComponent, DashCooldownSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashCooldownSeconds_MetaData), NewProp_DashCooldownSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_DashFriction = { "DashFriction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USSTCharacterMovementComponent, DashFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashFriction_MetaData), NewProp_DashFriction_MetaData) };
void Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_CanTurnWhileDashing_SetBit(void* Obj)
{
	((USSTCharacterMovementComponent*)Obj)->CanTurnWhileDashing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_CanTurnWhileDashing = { "CanTurnWhileDashing", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USSTCharacterMovementComponent), &Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_CanTurnWhileDashing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanTurnWhileDashing_MetaData), NewProp_CanTurnWhileDashing_MetaData) };
void Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_CanJumpCancelDash_SetBit(void* Obj)
{
	((USSTCharacterMovementComponent*)Obj)->CanJumpCancelDash = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_CanJumpCancelDash = { "CanJumpCancelDash", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USSTCharacterMovementComponent), &Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_CanJumpCancelDash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanJumpCancelDash_MetaData), NewProp_CanJumpCancelDash_MetaData) };
void Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_DashFollowsDownwardSlopes_SetBit(void* Obj)
{
	((USSTCharacterMovementComponent*)Obj)->DashFollowsDownwardSlopes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_DashFollowsDownwardSlopes = { "DashFollowsDownwardSlopes", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USSTCharacterMovementComponent), &Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_DashFollowsDownwardSlopes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashFollowsDownwardSlopes_MetaData), NewProp_DashFollowsDownwardSlopes_MetaData) };
void Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WantsToDash_SetBit(void* Obj)
{
	((USSTCharacterMovementComponent*)Obj)->WantsToDash = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WantsToDash = { "WantsToDash", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USSTCharacterMovementComponent), &Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WantsToDash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WantsToDash_MetaData), NewProp_WantsToDash_MetaData) };
void Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_IsDashing_SetBit(void* Obj)
{
	((USSTCharacterMovementComponent*)Obj)->IsDashing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_IsDashing = { "IsDashing", "OnRep_IsDashing", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USSTCharacterMovementComponent), &Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_IsDashing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsDashing_MetaData), NewProp_IsDashing_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_PerformDashDelegate = { "PerformDashDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USSTCharacterMovementComponent, PerformDashDelegate), Z_Construct_UDelegateFunction_SST_PerformDashDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerformDashDelegate_MetaData), NewProp_PerformDashDelegate_MetaData) }; // 3218078415
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_EndDashDelegate = { "EndDashDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USSTCharacterMovementComponent, EndDashDelegate), Z_Construct_UDelegateFunction_SST_EndDashDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndDashDelegate_MetaData), NewProp_EndDashDelegate_MetaData) }; // 3264882727
void Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_IsWallsliding_SetBit(void* Obj)
{
	((USSTCharacterMovementComponent*)Obj)->IsWallsliding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_IsWallsliding = { "IsWallsliding", "OnRep_IsWallsliding", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USSTCharacterMovementComponent), &Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_IsWallsliding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsWallsliding_MetaData), NewProp_IsWallsliding_MetaData) };
void Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WantsToPlatformDrop_SetBit(void* Obj)
{
	((USSTCharacterMovementComponent*)Obj)->WantsToPlatformDrop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WantsToPlatformDrop = { "WantsToPlatformDrop", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USSTCharacterMovementComponent), &Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WantsToPlatformDrop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WantsToPlatformDrop_MetaData), NewProp_WantsToPlatformDrop_MetaData) };
void Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_FacingRight_SetBit(void* Obj)
{
	((USSTCharacterMovementComponent*)Obj)->FacingRight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_FacingRight = { "FacingRight", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USSTCharacterMovementComponent), &Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_FacingRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FacingRight_MetaData), NewProp_FacingRight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USSTCharacterMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_SSTCharacterOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_TurnAroundSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_CanWallSlide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WallslideSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WallslideInputAngleStrictness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WallslideAllowableWallAngleStrictness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WallslideDistanceFromWall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WallslideMinFloorHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WallslideJumpOffForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WallslideJumpAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WallslideJumpInputDisableSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WallslideReleaseWalljumpBufferSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WalljumpCooldownSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_DashEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_MaxDashesBeforeLanding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_DashDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_DashDurationSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_DashCooldownSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_DashFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_CanTurnWhileDashing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_CanJumpCancelDash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_DashFollowsDownwardSlopes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WantsToDash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_IsDashing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_PerformDashDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_EndDashDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_IsWallsliding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_WantsToPlatformDrop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSTCharacterMovementComponent_Statics::NewProp_FacingRight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USSTCharacterMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USSTCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USSTCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USSTCharacterMovementComponent_Statics::ClassParams = {
	&USSTCharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USSTCharacterMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USSTCharacterMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USSTCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USSTCharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USSTCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_USSTCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USSTCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_USSTCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USSTCharacterMovementComponent.OuterSingleton;
}
template<> SST_API UClass* StaticClass<USSTCharacterMovementComponent>()
{
	return USSTCharacterMovementComponent::StaticClass();
}
void USSTCharacterMovementComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_IsDashing(TEXT("IsDashing"));
	static const FName Name_IsWallsliding(TEXT("IsWallsliding"));
	static const FName Name_FacingRight(TEXT("FacingRight"));
	const bool bIsValid = true
		&& Name_IsDashing == ClassReps[(int32)ENetFields_Private::IsDashing].Property->GetFName()
		&& Name_IsWallsliding == ClassReps[(int32)ENetFields_Private::IsWallsliding].Property->GetFName()
		&& Name_FacingRight == ClassReps[(int32)ENetFields_Private::FacingRight].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USSTCharacterMovementComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USSTCharacterMovementComponent);
USSTCharacterMovementComponent::~USSTCharacterMovementComponent() {}
// End Class USSTCharacterMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESSTCharacterMovementMode_StaticEnum, TEXT("ESSTCharacterMovementMode"), &Z_Registration_Info_UEnum_ESSTCharacterMovementMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 314325196U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USSTCharacterMovementComponent, USSTCharacterMovementComponent::StaticClass, TEXT("USSTCharacterMovementComponent"), &Z_Registration_Info_UClass_USSTCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USSTCharacterMovementComponent), 3906755380U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_2910311495(TEXT("/Script/SST"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_SSTCharacterMovementComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
