// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SST/Public/CameraTrigger.h"
#include "SST/Public/CameraTriggerUpdateContents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraTrigger() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
SST_API UClass* Z_Construct_UClass_ACameraTrigger();
SST_API UClass* Z_Construct_UClass_ACameraTrigger_NoRegister();
SST_API UScriptStruct* Z_Construct_UScriptStruct_FCameraTriggerUpdateBool();
SST_API UScriptStruct* Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat();
SST_API UScriptStruct* Z_Construct_UScriptStruct_FCameraTriggerUpdateVector();
UPackage* Z_Construct_UPackage__Script_SST();
// End Cross Module References

// Begin Class ACameraTrigger Function InitiateCameraUpdate
struct CameraTrigger_eventInitiateCameraUpdate_Parms
{
	AActor* Actor;
	bool Undo;
};
static FName NAME_ACameraTrigger_InitiateCameraUpdate = FName(TEXT("InitiateCameraUpdate"));
void ACameraTrigger::InitiateCameraUpdate(AActor* Actor, bool Undo)
{
	CameraTrigger_eventInitiateCameraUpdate_Parms Parms;
	Parms.Actor=Actor;
	Parms.Undo=Undo ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_ACameraTrigger_InitiateCameraUpdate),&Parms);
}
struct Z_Construct_UFunction_ACameraTrigger_InitiateCameraUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Performs the actal modifications to the camera parameters */" },
		{ "ModuleRelativePath", "Public/CameraTrigger.h" },
		{ "ToolTip", "Performs the actal modifications to the camera parameters" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_Undo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Undo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACameraTrigger_InitiateCameraUpdate_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraTrigger_eventInitiateCameraUpdate_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACameraTrigger_InitiateCameraUpdate_Statics::NewProp_Undo_SetBit(void* Obj)
{
	((CameraTrigger_eventInitiateCameraUpdate_Parms*)Obj)->Undo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACameraTrigger_InitiateCameraUpdate_Statics::NewProp_Undo = { "Undo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraTrigger_eventInitiateCameraUpdate_Parms), &Z_Construct_UFunction_ACameraTrigger_InitiateCameraUpdate_Statics::NewProp_Undo_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraTrigger_InitiateCameraUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraTrigger_InitiateCameraUpdate_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraTrigger_InitiateCameraUpdate_Statics::NewProp_Undo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraTrigger_InitiateCameraUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraTrigger_InitiateCameraUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraTrigger, nullptr, "InitiateCameraUpdate", nullptr, nullptr, Z_Construct_UFunction_ACameraTrigger_InitiateCameraUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraTrigger_InitiateCameraUpdate_Statics::PropPointers), sizeof(CameraTrigger_eventInitiateCameraUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraTrigger_InitiateCameraUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraTrigger_InitiateCameraUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CameraTrigger_eventInitiateCameraUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraTrigger_InitiateCameraUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraTrigger_InitiateCameraUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraTrigger::execInitiateCameraUpdate)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_UBOOL(Z_Param_Undo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitiateCameraUpdate_Implementation(Z_Param_Actor,Z_Param_Undo);
	P_NATIVE_END;
}
// End Class ACameraTrigger Function InitiateCameraUpdate

// Begin Class ACameraTrigger Function OnOverlapBegin
struct CameraTrigger_eventOnOverlapBegin_Parms
{
	AActor* ThisActor;
	AActor* OtherActor;
};
static FName NAME_ACameraTrigger_OnOverlapBegin = FName(TEXT("OnOverlapBegin"));
void ACameraTrigger::OnOverlapBegin(AActor* ThisActor, AActor* OtherActor)
{
	CameraTrigger_eventOnOverlapBegin_Parms Parms;
	Parms.ThisActor=ThisActor;
	Parms.OtherActor=OtherActor;
	ProcessEvent(FindFunctionChecked(NAME_ACameraTrigger_OnOverlapBegin),&Parms);
}
struct Z_Construct_UFunction_ACameraTrigger_OnOverlapBegin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Called when the character enters the trigger volume. */" },
		{ "ModuleRelativePath", "Public/CameraTrigger.h" },
		{ "ToolTip", "Called when the character enters the trigger volume." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThisActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACameraTrigger_OnOverlapBegin_Statics::NewProp_ThisActor = { "ThisActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraTrigger_eventOnOverlapBegin_Parms, ThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACameraTrigger_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraTrigger_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraTrigger_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraTrigger_OnOverlapBegin_Statics::NewProp_ThisActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraTrigger_OnOverlapBegin_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraTrigger_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraTrigger_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraTrigger, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ACameraTrigger_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraTrigger_OnOverlapBegin_Statics::PropPointers), sizeof(CameraTrigger_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraTrigger_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraTrigger_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(CameraTrigger_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraTrigger_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraTrigger_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraTrigger::execOnOverlapBegin)
{
	P_GET_OBJECT(AActor,Z_Param_ThisActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin_Implementation(Z_Param_ThisActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class ACameraTrigger Function OnOverlapBegin

// Begin Class ACameraTrigger Function OnOverlapEnd
struct CameraTrigger_eventOnOverlapEnd_Parms
{
	AActor* ThisActor;
	AActor* OtherActor;
};
static FName NAME_ACameraTrigger_OnOverlapEnd = FName(TEXT("OnOverlapEnd"));
void ACameraTrigger::OnOverlapEnd(AActor* ThisActor, AActor* OtherActor)
{
	CameraTrigger_eventOnOverlapEnd_Parms Parms;
	Parms.ThisActor=ThisActor;
	Parms.OtherActor=OtherActor;
	ProcessEvent(FindFunctionChecked(NAME_ACameraTrigger_OnOverlapEnd),&Parms);
}
struct Z_Construct_UFunction_ACameraTrigger_OnOverlapEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Called when the character leaves the trigger volume. */" },
		{ "ModuleRelativePath", "Public/CameraTrigger.h" },
		{ "ToolTip", "Called when the character leaves the trigger volume." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThisActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACameraTrigger_OnOverlapEnd_Statics::NewProp_ThisActor = { "ThisActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraTrigger_eventOnOverlapEnd_Parms, ThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACameraTrigger_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraTrigger_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraTrigger_OnOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraTrigger_OnOverlapEnd_Statics::NewProp_ThisActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraTrigger_OnOverlapEnd_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraTrigger_OnOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraTrigger_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraTrigger, nullptr, "OnOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_ACameraTrigger_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraTrigger_OnOverlapEnd_Statics::PropPointers), sizeof(CameraTrigger_eventOnOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraTrigger_OnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraTrigger_OnOverlapEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(CameraTrigger_eventOnOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraTrigger_OnOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraTrigger_OnOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraTrigger::execOnOverlapEnd)
{
	P_GET_OBJECT(AActor,Z_Param_ThisActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapEnd_Implementation(Z_Param_ThisActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class ACameraTrigger Function OnOverlapEnd

// Begin Class ACameraTrigger
void ACameraTrigger::StaticRegisterNativesACameraTrigger()
{
	UClass* Class = ACameraTrigger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitiateCameraUpdate", &ACameraTrigger::execInitiateCameraUpdate },
		{ "OnOverlapBegin", &ACameraTrigger::execOnOverlapBegin },
		{ "OnOverlapEnd", &ACameraTrigger::execOnOverlapEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraTrigger);
UClass* Z_Construct_UClass_ACameraTrigger_NoRegister()
{
	return ACameraTrigger::StaticClass();
}
struct Z_Construct_UClass_ACameraTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A trigger object designed to work with the CameraFollowedCharacter type.\n * Defines regions where the player camera blends to a different camera, and/or\n *   changes parameters (e.g. zoom). Can be configured to revert back to previous\n *   settings when leaving the region.\n */" },
		{ "IncludePath", "CameraTrigger.h" },
		{ "ModuleRelativePath", "Public/CameraTrigger.h" },
		{ "ToolTip", "A trigger object designed to work with the CameraFollowedCharacter type.\nDefines regions where the player camera blends to a different camera, and/or\n  changes parameters (e.g. zoom). Can be configured to revert back to previous\n  settings when leaving the region." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UndoAfterEndOverlap_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** If true, the camera will revert to previous settings when leaving the volume */" },
		{ "ModuleRelativePath", "Public/CameraTrigger.h" },
		{ "ToolTip", "If true, the camera will revert to previous settings when leaving the volume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** If not none, will swap to target external camera in the scene */" },
		{ "ModuleRelativePath", "Public/CameraTrigger.h" },
		{ "ToolTip", "If not none, will swap to target external camera in the scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCameraBlendTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Time over which to smoothly blend to an external camera */" },
		{ "ModuleRelativePath", "Public/CameraTrigger.h" },
		{ "ToolTip", "Time over which to smoothly blend to an external camera" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatParameters_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Updates to apply */" },
		{ "ModuleRelativePath", "Public/CameraTrigger.h" },
		{ "ToolTip", "Updates to apply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolParameters_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CameraTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorParameters_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CameraTrigger.h" },
	};
#endif // WITH_METADATA
	static void NewProp_UndoAfterEndOverlap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UndoAfterEndOverlap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCamera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetCameraBlendTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatParameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoolParameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoolParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorParameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACameraTrigger_InitiateCameraUpdate, "InitiateCameraUpdate" }, // 2116638139
		{ &Z_Construct_UFunction_ACameraTrigger_OnOverlapBegin, "OnOverlapBegin" }, // 749852610
		{ &Z_Construct_UFunction_ACameraTrigger_OnOverlapEnd, "OnOverlapEnd" }, // 601529219
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ACameraTrigger_Statics::NewProp_UndoAfterEndOverlap_SetBit(void* Obj)
{
	((ACameraTrigger*)Obj)->UndoAfterEndOverlap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACameraTrigger_Statics::NewProp_UndoAfterEndOverlap = { "UndoAfterEndOverlap", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACameraTrigger), &Z_Construct_UClass_ACameraTrigger_Statics::NewProp_UndoAfterEndOverlap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UndoAfterEndOverlap_MetaData), NewProp_UndoAfterEndOverlap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraTrigger_Statics::NewProp_TargetCamera = { "TargetCamera", nullptr, (EPropertyFlags)0x0144000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraTrigger, TargetCamera), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCamera_MetaData), NewProp_TargetCamera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraTrigger_Statics::NewProp_TargetCameraBlendTime = { "TargetCameraBlendTime", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraTrigger, TargetCameraBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCameraBlendTime_MetaData), NewProp_TargetCameraBlendTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACameraTrigger_Statics::NewProp_FloatParameters_Inner = { "FloatParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCameraTriggerUpdateFloat, METADATA_PARAMS(0, nullptr) }; // 2382621127
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACameraTrigger_Statics::NewProp_FloatParameters = { "FloatParameters", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraTrigger, FloatParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatParameters_MetaData), NewProp_FloatParameters_MetaData) }; // 2382621127
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACameraTrigger_Statics::NewProp_BoolParameters_Inner = { "BoolParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCameraTriggerUpdateBool, METADATA_PARAMS(0, nullptr) }; // 1920774402
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACameraTrigger_Statics::NewProp_BoolParameters = { "BoolParameters", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraTrigger, BoolParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolParameters_MetaData), NewProp_BoolParameters_MetaData) }; // 1920774402
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACameraTrigger_Statics::NewProp_VectorParameters_Inner = { "VectorParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCameraTriggerUpdateVector, METADATA_PARAMS(0, nullptr) }; // 343687005
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACameraTrigger_Statics::NewProp_VectorParameters = { "VectorParameters", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraTrigger, VectorParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorParameters_MetaData), NewProp_VectorParameters_MetaData) }; // 343687005
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraTrigger_Statics::NewProp_UndoAfterEndOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraTrigger_Statics::NewProp_TargetCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraTrigger_Statics::NewProp_TargetCameraBlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraTrigger_Statics::NewProp_FloatParameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraTrigger_Statics::NewProp_FloatParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraTrigger_Statics::NewProp_BoolParameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraTrigger_Statics::NewProp_BoolParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraTrigger_Statics::NewProp_VectorParameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraTrigger_Statics::NewProp_VectorParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraTrigger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACameraTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraTrigger_Statics::ClassParams = {
	&ACameraTrigger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACameraTrigger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACameraTrigger_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_ACameraTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACameraTrigger()
{
	if (!Z_Registration_Info_UClass_ACameraTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraTrigger.OuterSingleton, Z_Construct_UClass_ACameraTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACameraTrigger.OuterSingleton;
}
template<> SST_API UClass* StaticClass<ACameraTrigger>()
{
	return ACameraTrigger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraTrigger);
ACameraTrigger::~ACameraTrigger() {}
// End Class ACameraTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACameraTrigger, ACameraTrigger::StaticClass, TEXT("ACameraTrigger"), &Z_Registration_Info_UClass_ACameraTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraTrigger), 743928141U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_930682516(TEXT("/Script/SST"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_CameraTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
