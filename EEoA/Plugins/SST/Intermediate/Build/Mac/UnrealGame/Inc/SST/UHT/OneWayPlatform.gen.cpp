// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SST/Public/OneWayPlatform.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOneWayPlatform() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
SST_API UClass* Z_Construct_UClass_AOneWayPlatform();
SST_API UClass* Z_Construct_UClass_AOneWayPlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_SST();
// End Cross Module References

// Begin Class AOneWayPlatform Function OnOverlapBeginBelowTrigger
struct OneWayPlatform_eventOnOverlapBeginBelowTrigger_Parms
{
	UPrimitiveComponent* OverlappedComp;
	AActor* OtherActor;
	UPrimitiveComponent* OtherComp;
	int32 OtherBodyIndex;
	bool bFromSweep;
	FHitResult SweepResult;
};
static FName NAME_AOneWayPlatform_OnOverlapBeginBelowTrigger = FName(TEXT("OnOverlapBeginBelowTrigger"));
void AOneWayPlatform::OnOverlapBeginBelowTrigger(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult)
{
	OneWayPlatform_eventOnOverlapBeginBelowTrigger_Parms Parms;
	Parms.OverlappedComp=OverlappedComp;
	Parms.OtherActor=OtherActor;
	Parms.OtherComp=OtherComp;
	Parms.OtherBodyIndex=OtherBodyIndex;
	Parms.bFromSweep=bFromSweep ? true : false;
	Parms.SweepResult=SweepResult;
	ProcessEvent(FindFunctionChecked(NAME_AOneWayPlatform_OnOverlapBeginBelowTrigger),&Parms);
}
struct Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Overlap" },
		{ "Comment", "/** Called when a character approaches the platform from below */" },
		{ "ModuleRelativePath", "Public/OneWayPlatform.h" },
		{ "ToolTip", "Called when a character approaches the platform from below" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OneWayPlatform_eventOnOverlapBeginBelowTrigger_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OneWayPlatform_eventOnOverlapBeginBelowTrigger_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OneWayPlatform_eventOnOverlapBeginBelowTrigger_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OneWayPlatform_eventOnOverlapBeginBelowTrigger_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((OneWayPlatform_eventOnOverlapBeginBelowTrigger_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OneWayPlatform_eventOnOverlapBeginBelowTrigger_Parms), &Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OneWayPlatform_eventOnOverlapBeginBelowTrigger_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOneWayPlatform, nullptr, "OnOverlapBeginBelowTrigger", nullptr, nullptr, Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::PropPointers), sizeof(OneWayPlatform_eventOnOverlapBeginBelowTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::Function_MetaDataParams) };
static_assert(sizeof(OneWayPlatform_eventOnOverlapBeginBelowTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOneWayPlatform::execOnOverlapBeginBelowTrigger)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBeginBelowTrigger_Implementation(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AOneWayPlatform Function OnOverlapBeginBelowTrigger

// Begin Class AOneWayPlatform Function OnOverlapEndBelowTrigger
struct OneWayPlatform_eventOnOverlapEndBelowTrigger_Parms
{
	UPrimitiveComponent* OverlappedComp;
	AActor* OtherActor;
	UPrimitiveComponent* OtherComp;
	int32 OtherBodyIndex;
};
static FName NAME_AOneWayPlatform_OnOverlapEndBelowTrigger = FName(TEXT("OnOverlapEndBelowTrigger"));
void AOneWayPlatform::OnOverlapEndBelowTrigger(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	OneWayPlatform_eventOnOverlapEndBelowTrigger_Parms Parms;
	Parms.OverlappedComp=OverlappedComp;
	Parms.OtherActor=OtherActor;
	Parms.OtherComp=OtherComp;
	Parms.OtherBodyIndex=OtherBodyIndex;
	ProcessEvent(FindFunctionChecked(NAME_AOneWayPlatform_OnOverlapEndBelowTrigger),&Parms);
}
struct Z_Construct_UFunction_AOneWayPlatform_OnOverlapEndBelowTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Overlap" },
		{ "Comment", "/** Called when a character is no longer directly below the platform */" },
		{ "ModuleRelativePath", "Public/OneWayPlatform.h" },
		{ "ToolTip", "Called when a character is no longer directly below the platform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOneWayPlatform_OnOverlapEndBelowTrigger_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OneWayPlatform_eventOnOverlapEndBelowTrigger_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOneWayPlatform_OnOverlapEndBelowTrigger_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OneWayPlatform_eventOnOverlapEndBelowTrigger_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOneWayPlatform_OnOverlapEndBelowTrigger_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OneWayPlatform_eventOnOverlapEndBelowTrigger_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOneWayPlatform_OnOverlapEndBelowTrigger_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OneWayPlatform_eventOnOverlapEndBelowTrigger_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOneWayPlatform_OnOverlapEndBelowTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOneWayPlatform_OnOverlapEndBelowTrigger_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOneWayPlatform_OnOverlapEndBelowTrigger_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOneWayPlatform_OnOverlapEndBelowTrigger_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOneWayPlatform_OnOverlapEndBelowTrigger_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOneWayPlatform_OnOverlapEndBelowTrigger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOneWayPlatform_OnOverlapEndBelowTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOneWayPlatform, nullptr, "OnOverlapEndBelowTrigger", nullptr, nullptr, Z_Construct_UFunction_AOneWayPlatform_OnOverlapEndBelowTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOneWayPlatform_OnOverlapEndBelowTrigger_Statics::PropPointers), sizeof(OneWayPlatform_eventOnOverlapEndBelowTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOneWayPlatform_OnOverlapEndBelowTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOneWayPlatform_OnOverlapEndBelowTrigger_Statics::Function_MetaDataParams) };
static_assert(sizeof(OneWayPlatform_eventOnOverlapEndBelowTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOneWayPlatform_OnOverlapEndBelowTrigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOneWayPlatform_OnOverlapEndBelowTrigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOneWayPlatform::execOnOverlapEndBelowTrigger)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapEndBelowTrigger_Implementation(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AOneWayPlatform Function OnOverlapEndBelowTrigger

// Begin Class AOneWayPlatform Function RequestCharacterPassthrough
struct Z_Construct_UFunction_AOneWayPlatform_RequestCharacterPassthrough_Statics
{
	struct OneWayPlatform_eventRequestCharacterPassthrough_Parms
	{
		ACharacter* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Call this method with the target character to allow the character to fall through */" },
		{ "ModuleRelativePath", "Public/OneWayPlatform.h" },
		{ "ToolTip", "Call this method with the target character to allow the character to fall through" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOneWayPlatform_RequestCharacterPassthrough_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OneWayPlatform_eventRequestCharacterPassthrough_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOneWayPlatform_RequestCharacterPassthrough_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOneWayPlatform_RequestCharacterPassthrough_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOneWayPlatform_RequestCharacterPassthrough_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOneWayPlatform_RequestCharacterPassthrough_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOneWayPlatform, nullptr, "RequestCharacterPassthrough", nullptr, nullptr, Z_Construct_UFunction_AOneWayPlatform_RequestCharacterPassthrough_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOneWayPlatform_RequestCharacterPassthrough_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOneWayPlatform_RequestCharacterPassthrough_Statics::OneWayPlatform_eventRequestCharacterPassthrough_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOneWayPlatform_RequestCharacterPassthrough_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOneWayPlatform_RequestCharacterPassthrough_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOneWayPlatform_RequestCharacterPassthrough_Statics::OneWayPlatform_eventRequestCharacterPassthrough_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOneWayPlatform_RequestCharacterPassthrough()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOneWayPlatform_RequestCharacterPassthrough_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOneWayPlatform::execRequestCharacterPassthrough)
{
	P_GET_OBJECT(ACharacter,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestCharacterPassthrough(Z_Param_Character);
	P_NATIVE_END;
}
// End Class AOneWayPlatform Function RequestCharacterPassthrough

// Begin Class AOneWayPlatform
void AOneWayPlatform::StaticRegisterNativesAOneWayPlatform()
{
	UClass* Class = AOneWayPlatform::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBeginBelowTrigger", &AOneWayPlatform::execOnOverlapBeginBelowTrigger },
		{ "OnOverlapEndBelowTrigger", &AOneWayPlatform::execOnOverlapEndBelowTrigger },
		{ "RequestCharacterPassthrough", &AOneWayPlatform::execRequestCharacterPassthrough },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOneWayPlatform);
UClass* Z_Construct_UClass_AOneWayPlatform_NoRegister()
{
	return AOneWayPlatform::StaticClass();
}
struct Z_Construct_UClass_AOneWayPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A platform which, by default, allows the character to pass through when jumping up from below, but\n *\x09""becomes solid ground when falling from above. By default, pressing down+jump will cause the character\n *\x09to fall back through the platform. Both of these capabilities can be disabled per instance. \n * \n * Sets collision on a per-character basis, so that in a multiplayer setting one character can remain\n *\x09standing on the platform while another passes through. \n */" },
		{ "IncludePath", "OneWayPlatform.h" },
		{ "ModuleRelativePath", "Public/OneWayPlatform.h" },
		{ "ToolTip", "A platform which, by default, allows the character to pass through when jumping up from below, but\n    becomes solid ground when falling from above. By default, pressing down+jump will cause the character\n    to fall back through the platform. Both of these capabilities can be disabled per instance.\n\nSets collision on a per-character basis, so that in a multiplayer setting one character can remain\n    standing on the platform while another passes through." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "OneWayPlatform" },
		{ "Comment", "/** Static Mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OneWayPlatform.h" },
		{ "ToolTip", "Static Mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BelowTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "OneWayPlatform" },
		{ "Comment", "/** Below Trigger Volume -- Disables collision when player approaches from below */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OneWayPlatform.h" },
		{ "ToolTip", "Below Trigger Volume -- Disables collision when player approaches from below" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanPassThroughFromBelow_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "OneWayPlatform" },
		{ "Comment", "/** If true, player can pass through the platform from below (one-way behavior) */" },
		{ "ModuleRelativePath", "Public/OneWayPlatform.h" },
		{ "ToolTip", "If true, player can pass through the platform from below (one-way behavior)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanDropDownFromAbove_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "OneWayPlatform" },
		{ "Comment", "/** If true, the player can drop through the platform while standing on it via an input */" },
		{ "ModuleRelativePath", "Public/OneWayPlatform.h" },
		{ "ToolTip", "If true, the player can drop through the platform while standing on it via an input" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BelowTrigger;
	static void NewProp_CanPassThroughFromBelow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanPassThroughFromBelow;
	static void NewProp_CanDropDownFromAbove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanDropDownFromAbove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOneWayPlatform_OnOverlapBeginBelowTrigger, "OnOverlapBeginBelowTrigger" }, // 1920055927
		{ &Z_Construct_UFunction_AOneWayPlatform_OnOverlapEndBelowTrigger, "OnOverlapEndBelowTrigger" }, // 1899553983
		{ &Z_Construct_UFunction_AOneWayPlatform_RequestCharacterPassthrough, "RequestCharacterPassthrough" }, // 2745021280
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOneWayPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOneWayPlatform_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x014400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOneWayPlatform, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOneWayPlatform_Statics::NewProp_BelowTrigger = { "BelowTrigger", nullptr, (EPropertyFlags)0x014400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOneWayPlatform, BelowTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BelowTrigger_MetaData), NewProp_BelowTrigger_MetaData) };
void Z_Construct_UClass_AOneWayPlatform_Statics::NewProp_CanPassThroughFromBelow_SetBit(void* Obj)
{
	((AOneWayPlatform*)Obj)->CanPassThroughFromBelow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOneWayPlatform_Statics::NewProp_CanPassThroughFromBelow = { "CanPassThroughFromBelow", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOneWayPlatform), &Z_Construct_UClass_AOneWayPlatform_Statics::NewProp_CanPassThroughFromBelow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanPassThroughFromBelow_MetaData), NewProp_CanPassThroughFromBelow_MetaData) };
void Z_Construct_UClass_AOneWayPlatform_Statics::NewProp_CanDropDownFromAbove_SetBit(void* Obj)
{
	((AOneWayPlatform*)Obj)->CanDropDownFromAbove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOneWayPlatform_Statics::NewProp_CanDropDownFromAbove = { "CanDropDownFromAbove", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOneWayPlatform), &Z_Construct_UClass_AOneWayPlatform_Statics::NewProp_CanDropDownFromAbove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanDropDownFromAbove_MetaData), NewProp_CanDropDownFromAbove_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOneWayPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOneWayPlatform_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOneWayPlatform_Statics::NewProp_BelowTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOneWayPlatform_Statics::NewProp_CanPassThroughFromBelow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOneWayPlatform_Statics::NewProp_CanDropDownFromAbove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOneWayPlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOneWayPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOneWayPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOneWayPlatform_Statics::ClassParams = {
	&AOneWayPlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOneWayPlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOneWayPlatform_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOneWayPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AOneWayPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOneWayPlatform()
{
	if (!Z_Registration_Info_UClass_AOneWayPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOneWayPlatform.OuterSingleton, Z_Construct_UClass_AOneWayPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOneWayPlatform.OuterSingleton;
}
template<> SST_API UClass* StaticClass<AOneWayPlatform>()
{
	return AOneWayPlatform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOneWayPlatform);
AOneWayPlatform::~AOneWayPlatform() {}
// End Class AOneWayPlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_OneWayPlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOneWayPlatform, AOneWayPlatform::StaticClass, TEXT("AOneWayPlatform"), &Z_Registration_Info_UClass_AOneWayPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOneWayPlatform), 3343948449U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_OneWayPlatform_h_1818179019(TEXT("/Script/SST"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_OneWayPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SST_Source_SST_Public_OneWayPlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
