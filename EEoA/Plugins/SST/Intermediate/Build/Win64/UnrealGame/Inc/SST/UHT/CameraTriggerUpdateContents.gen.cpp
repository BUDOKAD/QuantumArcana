// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SST/Public/CameraTriggerUpdateContents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraTriggerUpdateContents() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
SST_API UEnum* Z_Construct_UEnum_SST_ECameraTriggerUpdateBoolParameter();
SST_API UEnum* Z_Construct_UEnum_SST_ECameraTriggerUpdateFloatParameter();
SST_API UEnum* Z_Construct_UEnum_SST_ECameraTriggerUpdateVectorParameter();
SST_API UScriptStruct* Z_Construct_UScriptStruct_FCameraTriggerUpdateBool();
SST_API UScriptStruct* Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat();
SST_API UScriptStruct* Z_Construct_UScriptStruct_FCameraTriggerUpdateVector();
UPackage* Z_Construct_UPackage__Script_SST();
// End Cross Module References

// Begin Enum ECameraTriggerUpdateFloatParameter
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraTriggerUpdateFloatParameter;
static UEnum* ECameraTriggerUpdateFloatParameter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraTriggerUpdateFloatParameter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraTriggerUpdateFloatParameter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SST_ECameraTriggerUpdateFloatParameter, (UObject*)Z_Construct_UPackage__Script_SST(), TEXT("ECameraTriggerUpdateFloatParameter"));
	}
	return Z_Registration_Info_UEnum_ECameraTriggerUpdateFloatParameter.OuterSingleton;
}
template<> SST_API UEnum* StaticEnum<ECameraTriggerUpdateFloatParameter>()
{
	return ECameraTriggerUpdateFloatParameter_StaticEnum();
}
struct Z_Construct_UEnum_SST_ECameraTriggerUpdateFloatParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LeadSpeed.DisplayName", "LeadSpeed" },
		{ "LeadSpeed.Name", "ECameraTriggerUpdateFloatParameter::LeadSpeed" },
		{ "MaxLeadDistance.DisplayName", "MaxLeadDistance" },
		{ "MaxLeadDistance.Name", "ECameraTriggerUpdateFloatParameter::MaxLeadDistance" },
		{ "ModuleRelativePath", "Public/CameraTriggerUpdateContents.h" },
		{ "ZLockHeight.DisplayName", "ZLockHeight" },
		{ "ZLockHeight.Name", "ECameraTriggerUpdateFloatParameter::ZLockHeight" },
		{ "ZoomDistance.DisplayName", "ZoomDistance" },
		{ "ZoomDistance.Name", "ECameraTriggerUpdateFloatParameter::ZoomDistance" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraTriggerUpdateFloatParameter::ZoomDistance", (int64)ECameraTriggerUpdateFloatParameter::ZoomDistance },
		{ "ECameraTriggerUpdateFloatParameter::MaxLeadDistance", (int64)ECameraTriggerUpdateFloatParameter::MaxLeadDistance },
		{ "ECameraTriggerUpdateFloatParameter::LeadSpeed", (int64)ECameraTriggerUpdateFloatParameter::LeadSpeed },
		{ "ECameraTriggerUpdateFloatParameter::ZLockHeight", (int64)ECameraTriggerUpdateFloatParameter::ZLockHeight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SST_ECameraTriggerUpdateFloatParameter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SST,
	nullptr,
	"ECameraTriggerUpdateFloatParameter",
	"ECameraTriggerUpdateFloatParameter",
	Z_Construct_UEnum_SST_ECameraTriggerUpdateFloatParameter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SST_ECameraTriggerUpdateFloatParameter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SST_ECameraTriggerUpdateFloatParameter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SST_ECameraTriggerUpdateFloatParameter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SST_ECameraTriggerUpdateFloatParameter()
{
	if (!Z_Registration_Info_UEnum_ECameraTriggerUpdateFloatParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraTriggerUpdateFloatParameter.InnerSingleton, Z_Construct_UEnum_SST_ECameraTriggerUpdateFloatParameter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraTriggerUpdateFloatParameter.InnerSingleton;
}
// End Enum ECameraTriggerUpdateFloatParameter

// Begin ScriptStruct FCameraTriggerUpdateFloat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraTriggerUpdateFloat;
class UScriptStruct* FCameraTriggerUpdateFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraTriggerUpdateFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraTriggerUpdateFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat, (UObject*)Z_Construct_UPackage__Script_SST(), TEXT("CameraTriggerUpdateFloat"));
	}
	return Z_Registration_Info_UScriptStruct_CameraTriggerUpdateFloat.OuterSingleton;
}
template<> SST_API UScriptStruct* StaticStruct<FCameraTriggerUpdateFloat>()
{
	return FCameraTriggerUpdateFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CameraTriggerUpdateContents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Which parameter to update */" },
		{ "ModuleRelativePath", "Public/CameraTriggerUpdateContents.h" },
		{ "ToolTip", "Which parameter to update" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** New value */" },
		{ "ModuleRelativePath", "Public/CameraTriggerUpdateContents.h" },
		{ "ToolTip", "New value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Total time over which to make a smooth transition. Instant if set to 0 */" },
		{ "ModuleRelativePath", "Public/CameraTriggerUpdateContents.h" },
		{ "ToolTip", "Total time over which to make a smooth transition. Instant if set to 0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Parameter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Parameter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraTriggerUpdateFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat_Statics::NewProp_Parameter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraTriggerUpdateFloat, Parameter), Z_Construct_UEnum_SST_ECameraTriggerUpdateFloatParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameter_MetaData), NewProp_Parameter_MetaData) }; // 2642074245
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraTriggerUpdateFloat, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraTriggerUpdateFloat, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendTime_MetaData), NewProp_BlendTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat_Statics::NewProp_Parameter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat_Statics::NewProp_Parameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat_Statics::NewProp_BlendTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SST,
	nullptr,
	&NewStructOps,
	"CameraTriggerUpdateFloat",
	Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat_Statics::PropPointers),
	sizeof(FCameraTriggerUpdateFloat),
	alignof(FCameraTriggerUpdateFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat()
{
	if (!Z_Registration_Info_UScriptStruct_CameraTriggerUpdateFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraTriggerUpdateFloat.InnerSingleton, Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraTriggerUpdateFloat.InnerSingleton;
}
// End ScriptStruct FCameraTriggerUpdateFloat

// Begin Enum ECameraTriggerUpdateBoolParameter
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraTriggerUpdateBoolParameter;
static UEnum* ECameraTriggerUpdateBoolParameter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraTriggerUpdateBoolParameter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraTriggerUpdateBoolParameter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SST_ECameraTriggerUpdateBoolParameter, (UObject*)Z_Construct_UPackage__Script_SST(), TEXT("ECameraTriggerUpdateBoolParameter"));
	}
	return Z_Registration_Info_UEnum_ECameraTriggerUpdateBoolParameter.OuterSingleton;
}
template<> SST_API UEnum* StaticEnum<ECameraTriggerUpdateBoolParameter>()
{
	return ECameraTriggerUpdateBoolParameter_StaticEnum();
}
struct Z_Construct_UEnum_SST_ECameraTriggerUpdateBoolParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FixLeadAtMax.DisplayName", "FixLeadAtMax" },
		{ "FixLeadAtMax.Name", "ECameraTriggerUpdateBoolParameter::FixLeadAtMax" },
		{ "ModuleRelativePath", "Public/CameraTriggerUpdateContents.h" },
		{ "ZLock.DisplayName", "ZLock" },
		{ "ZLock.Name", "ECameraTriggerUpdateBoolParameter::ZLock" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraTriggerUpdateBoolParameter::ZLock", (int64)ECameraTriggerUpdateBoolParameter::ZLock },
		{ "ECameraTriggerUpdateBoolParameter::FixLeadAtMax", (int64)ECameraTriggerUpdateBoolParameter::FixLeadAtMax },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SST_ECameraTriggerUpdateBoolParameter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SST,
	nullptr,
	"ECameraTriggerUpdateBoolParameter",
	"ECameraTriggerUpdateBoolParameter",
	Z_Construct_UEnum_SST_ECameraTriggerUpdateBoolParameter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SST_ECameraTriggerUpdateBoolParameter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SST_ECameraTriggerUpdateBoolParameter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SST_ECameraTriggerUpdateBoolParameter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SST_ECameraTriggerUpdateBoolParameter()
{
	if (!Z_Registration_Info_UEnum_ECameraTriggerUpdateBoolParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraTriggerUpdateBoolParameter.InnerSingleton, Z_Construct_UEnum_SST_ECameraTriggerUpdateBoolParameter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraTriggerUpdateBoolParameter.InnerSingleton;
}
// End Enum ECameraTriggerUpdateBoolParameter

// Begin ScriptStruct FCameraTriggerUpdateBool
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraTriggerUpdateBool;
class UScriptStruct* FCameraTriggerUpdateBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraTriggerUpdateBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraTriggerUpdateBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraTriggerUpdateBool, (UObject*)Z_Construct_UPackage__Script_SST(), TEXT("CameraTriggerUpdateBool"));
	}
	return Z_Registration_Info_UScriptStruct_CameraTriggerUpdateBool.OuterSingleton;
}
template<> SST_API UScriptStruct* StaticStruct<FCameraTriggerUpdateBool>()
{
	return FCameraTriggerUpdateBool::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CameraTriggerUpdateContents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Which parameter to update */" },
		{ "ModuleRelativePath", "Public/CameraTriggerUpdateContents.h" },
		{ "ToolTip", "Which parameter to update" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** New value */" },
		{ "ModuleRelativePath", "Public/CameraTriggerUpdateContents.h" },
		{ "ToolTip", "New value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Total time over which to make a smooth transition. Instant if set to 0 */" },
		{ "ModuleRelativePath", "Public/CameraTriggerUpdateContents.h" },
		{ "ToolTip", "Total time over which to make a smooth transition. Instant if set to 0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Parameter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Parameter;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraTriggerUpdateBool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics::NewProp_Parameter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraTriggerUpdateBool, Parameter), Z_Construct_UEnum_SST_ECameraTriggerUpdateBoolParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameter_MetaData), NewProp_Parameter_MetaData) }; // 2848470760
void Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics::NewProp_Value_SetBit(void* Obj)
{
	((FCameraTriggerUpdateBool*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraTriggerUpdateBool), &Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraTriggerUpdateBool, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendTime_MetaData), NewProp_BlendTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics::NewProp_Parameter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics::NewProp_Parameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics::NewProp_BlendTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SST,
	nullptr,
	&NewStructOps,
	"CameraTriggerUpdateBool",
	Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics::PropPointers),
	sizeof(FCameraTriggerUpdateBool),
	alignof(FCameraTriggerUpdateBool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraTriggerUpdateBool()
{
	if (!Z_Registration_Info_UScriptStruct_CameraTriggerUpdateBool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraTriggerUpdateBool.InnerSingleton, Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraTriggerUpdateBool.InnerSingleton;
}
// End ScriptStruct FCameraTriggerUpdateBool

// Begin Enum ECameraTriggerUpdateVectorParameter
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraTriggerUpdateVectorParameter;
static UEnum* ECameraTriggerUpdateVectorParameter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraTriggerUpdateVectorParameter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraTriggerUpdateVectorParameter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SST_ECameraTriggerUpdateVectorParameter, (UObject*)Z_Construct_UPackage__Script_SST(), TEXT("ECameraTriggerUpdateVectorParameter"));
	}
	return Z_Registration_Info_UEnum_ECameraTriggerUpdateVectorParameter.OuterSingleton;
}
template<> SST_API UEnum* StaticEnum<ECameraTriggerUpdateVectorParameter>()
{
	return ECameraTriggerUpdateVectorParameter_StaticEnum();
}
struct Z_Construct_UEnum_SST_ECameraTriggerUpdateVectorParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LocationOffset.DisplayName", "LocationOffset" },
		{ "LocationOffset.Name", "ECameraTriggerUpdateVectorParameter::LocationOffset" },
		{ "ModuleRelativePath", "Public/CameraTriggerUpdateContents.h" },
		{ "RotationOffset.DisplayName", "RotationOffset" },
		{ "RotationOffset.Name", "ECameraTriggerUpdateVectorParameter::RotationOffset" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraTriggerUpdateVectorParameter::LocationOffset", (int64)ECameraTriggerUpdateVectorParameter::LocationOffset },
		{ "ECameraTriggerUpdateVectorParameter::RotationOffset", (int64)ECameraTriggerUpdateVectorParameter::RotationOffset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SST_ECameraTriggerUpdateVectorParameter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SST,
	nullptr,
	"ECameraTriggerUpdateVectorParameter",
	"ECameraTriggerUpdateVectorParameter",
	Z_Construct_UEnum_SST_ECameraTriggerUpdateVectorParameter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SST_ECameraTriggerUpdateVectorParameter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SST_ECameraTriggerUpdateVectorParameter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SST_ECameraTriggerUpdateVectorParameter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SST_ECameraTriggerUpdateVectorParameter()
{
	if (!Z_Registration_Info_UEnum_ECameraTriggerUpdateVectorParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraTriggerUpdateVectorParameter.InnerSingleton, Z_Construct_UEnum_SST_ECameraTriggerUpdateVectorParameter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraTriggerUpdateVectorParameter.InnerSingleton;
}
// End Enum ECameraTriggerUpdateVectorParameter

// Begin ScriptStruct FCameraTriggerUpdateVector
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraTriggerUpdateVector;
class UScriptStruct* FCameraTriggerUpdateVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraTriggerUpdateVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraTriggerUpdateVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraTriggerUpdateVector, (UObject*)Z_Construct_UPackage__Script_SST(), TEXT("CameraTriggerUpdateVector"));
	}
	return Z_Registration_Info_UScriptStruct_CameraTriggerUpdateVector.OuterSingleton;
}
template<> SST_API UScriptStruct* StaticStruct<FCameraTriggerUpdateVector>()
{
	return FCameraTriggerUpdateVector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraTriggerUpdateVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CameraTriggerUpdateContents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Which parameter to update */" },
		{ "ModuleRelativePath", "Public/CameraTriggerUpdateContents.h" },
		{ "ToolTip", "Which parameter to update" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** New value */" },
		{ "ModuleRelativePath", "Public/CameraTriggerUpdateContents.h" },
		{ "ToolTip", "New value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Total time over which to make a smooth transition. Instant if set to 0 */" },
		{ "ModuleRelativePath", "Public/CameraTriggerUpdateContents.h" },
		{ "ToolTip", "Total time over which to make a smooth transition. Instant if set to 0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Parameter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Parameter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraTriggerUpdateVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraTriggerUpdateVector_Statics::NewProp_Parameter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCameraTriggerUpdateVector_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraTriggerUpdateVector, Parameter), Z_Construct_UEnum_SST_ECameraTriggerUpdateVectorParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameter_MetaData), NewProp_Parameter_MetaData) }; // 611497517
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraTriggerUpdateVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraTriggerUpdateVector, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraTriggerUpdateVector_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraTriggerUpdateVector, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendTime_MetaData), NewProp_BlendTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraTriggerUpdateVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTriggerUpdateVector_Statics::NewProp_Parameter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTriggerUpdateVector_Statics::NewProp_Parameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTriggerUpdateVector_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTriggerUpdateVector_Statics::NewProp_BlendTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTriggerUpdateVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraTriggerUpdateVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SST,
	nullptr,
	&NewStructOps,
	"CameraTriggerUpdateVector",
	Z_Construct_UScriptStruct_FCameraTriggerUpdateVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTriggerUpdateVector_Statics::PropPointers),
	sizeof(FCameraTriggerUpdateVector),
	alignof(FCameraTriggerUpdateVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTriggerUpdateVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraTriggerUpdateVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraTriggerUpdateVector()
{
	if (!Z_Registration_Info_UScriptStruct_CameraTriggerUpdateVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraTriggerUpdateVector.InnerSingleton, Z_Construct_UScriptStruct_FCameraTriggerUpdateVector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraTriggerUpdateVector.InnerSingleton;
}
// End ScriptStruct FCameraTriggerUpdateVector

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTriggerUpdateContents_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECameraTriggerUpdateFloatParameter_StaticEnum, TEXT("ECameraTriggerUpdateFloatParameter"), &Z_Registration_Info_UEnum_ECameraTriggerUpdateFloatParameter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2642074245U) },
		{ ECameraTriggerUpdateBoolParameter_StaticEnum, TEXT("ECameraTriggerUpdateBoolParameter"), &Z_Registration_Info_UEnum_ECameraTriggerUpdateBoolParameter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2848470760U) },
		{ ECameraTriggerUpdateVectorParameter_StaticEnum, TEXT("ECameraTriggerUpdateVectorParameter"), &Z_Registration_Info_UEnum_ECameraTriggerUpdateVectorParameter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 611497517U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCameraTriggerUpdateFloat::StaticStruct, Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat_Statics::NewStructOps, TEXT("CameraTriggerUpdateFloat"), &Z_Registration_Info_UScriptStruct_CameraTriggerUpdateFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraTriggerUpdateFloat), 2382621127U) },
		{ FCameraTriggerUpdateBool::StaticStruct, Z_Construct_UScriptStruct_FCameraTriggerUpdateBool_Statics::NewStructOps, TEXT("CameraTriggerUpdateBool"), &Z_Registration_Info_UScriptStruct_CameraTriggerUpdateBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraTriggerUpdateBool), 1920774402U) },
		{ FCameraTriggerUpdateVector::StaticStruct, Z_Construct_UScriptStruct_FCameraTriggerUpdateVector_Statics::NewStructOps, TEXT("CameraTriggerUpdateVector"), &Z_Registration_Info_UScriptStruct_CameraTriggerUpdateVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraTriggerUpdateVector), 343687005U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTriggerUpdateContents_h_1300330409(TEXT("/Script/SST"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTriggerUpdateContents_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTriggerUpdateContents_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTriggerUpdateContents_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTriggerUpdateContents_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
