// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimatedActor/Public/AnimActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimActor() {}
// Cross Module References
	ANIMATEDACTOR_API UFunction* Z_Construct_UDelegateFunction_AnimatedActor_AnimOverride__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AnimatedActor();
	ANIMATEDACTOR_API UFunction* Z_Construct_UDelegateFunction_AnimatedActor_AnimActorAnimTickSignature__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ANIMATEDACTOR_API UScriptStruct* Z_Construct_UScriptStruct_FAnimatedComponents();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ANIMATEDACTOR_API UScriptStruct* Z_Construct_UScriptStruct_FSplineMovement();
	ANIMATEDACTOR_API UScriptStruct* Z_Construct_UScriptStruct_FRotateAnimations();
	ANIMATEDACTOR_API UScriptStruct* Z_Construct_UScriptStruct_FLocationAnimations();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ANIMATEDACTOR_API UClass* Z_Construct_UClass_UAnimActor_NoRegister();
	ANIMATEDACTOR_API UClass* Z_Construct_UClass_UAnimActor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ANIMATEDACTOR_API UFunction* Z_Construct_UFunction_UAnimActor_AnimTick();
	ANIMATEDACTOR_API UFunction* Z_Construct_UFunction_UAnimActor_SetAnimCallBack();
	ANIMATEDACTOR_API UFunction* Z_Construct_UFunction_UAnimActor_StartStopAnim();
	ANIMATEDACTOR_API UFunction* Z_Construct_UFunction_UAnimActor_StopAnimations();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AnimatedActor_AnimOverride__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AnimatedActor_AnimOverride__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AnimatedActor_AnimOverride__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AnimatedActor, nullptr, "AnimOverride__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AnimatedActor_AnimOverride__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimatedActor_AnimOverride__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AnimatedActor_AnimOverride__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AnimatedActor_AnimOverride__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AnimatedActor_AnimActorAnimTickSignature__DelegateSignature_Statics
	{
		struct _Script_AnimatedActor_eventAnimActorAnimTickSignature_Parms
		{
			USceneComponent* Scene_component;
			int32 AnimComponentIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AnimComponentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene_component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AnimatedActor_AnimActorAnimTickSignature__DelegateSignature_Statics::NewProp_AnimComponentIndex = { "AnimComponentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AnimatedActor_eventAnimActorAnimTickSignature_Parms, AnimComponentIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AnimatedActor_AnimActorAnimTickSignature__DelegateSignature_Statics::NewProp_Scene_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AnimatedActor_AnimActorAnimTickSignature__DelegateSignature_Statics::NewProp_Scene_component = { "Scene_component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AnimatedActor_eventAnimActorAnimTickSignature_Parms, Scene_component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_AnimatedActor_AnimActorAnimTickSignature__DelegateSignature_Statics::NewProp_Scene_component_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimatedActor_AnimActorAnimTickSignature__DelegateSignature_Statics::NewProp_Scene_component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AnimatedActor_AnimActorAnimTickSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AnimatedActor_AnimActorAnimTickSignature__DelegateSignature_Statics::NewProp_AnimComponentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AnimatedActor_AnimActorAnimTickSignature__DelegateSignature_Statics::NewProp_Scene_component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AnimatedActor_AnimActorAnimTickSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AnimatedActor_AnimActorAnimTickSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AnimatedActor, nullptr, "AnimActorAnimTickSignature__DelegateSignature", sizeof(_Script_AnimatedActor_eventAnimActorAnimTickSignature_Parms), Z_Construct_UDelegateFunction_AnimatedActor_AnimActorAnimTickSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimatedActor_AnimActorAnimTickSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AnimatedActor_AnimActorAnimTickSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimatedActor_AnimActorAnimTickSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AnimatedActor_AnimActorAnimTickSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AnimatedActor_AnimActorAnimTickSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FAnimatedComponents::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATEDACTOR_API uint32 Get_Z_Construct_UScriptStruct_FAnimatedComponents_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimatedComponents, Z_Construct_UPackage__Script_AnimatedActor(), TEXT("AnimatedComponents"), sizeof(FAnimatedComponents), Get_Z_Construct_UScriptStruct_FAnimatedComponents_Hash());
	}
	return Singleton;
}
template<> ANIMATEDACTOR_API UScriptStruct* StaticStruct<FAnimatedComponents>()
{
	return FAnimatedComponents::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimatedComponents(FAnimatedComponents::StaticStruct, TEXT("/Script/AnimatedActor"), TEXT("AnimatedComponents"), false, nullptr, nullptr);
static struct FScriptStruct_AnimatedActor_StaticRegisterNativesFAnimatedComponents
{
	FScriptStruct_AnimatedActor_StaticRegisterNativesFAnimatedComponents()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimatedComponents")),new UScriptStruct::TCppStructOps<FAnimatedComponents>);
	}
} ScriptStruct_AnimatedActor_StaticRegisterNativesFAnimatedComponents;
	struct Z_Construct_UScriptStruct_FAnimatedComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ComponentName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedComponents_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimatedComponents>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_TimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimatedComponents, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_TimerHandle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_TimerHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_SplineMovement_MetaData[] = {
		{ "Category", "AnimatedComponents" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_SplineMovement = { "SplineMovement", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimatedComponents, SplineMovement), Z_Construct_UScriptStruct_FSplineMovement, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_SplineMovement_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_SplineMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_RotationAnimation_MetaData[] = {
		{ "Category", "AnimatedComponents" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_RotationAnimation = { "RotationAnimation", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimatedComponents, RotationAnimation), Z_Construct_UScriptStruct_FRotateAnimations, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_RotationAnimation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_RotationAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_LocationAnimation_MetaData[] = {
		{ "Category", "AnimatedComponents" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_LocationAnimation = { "LocationAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimatedComponents, LocationAnimation), Z_Construct_UScriptStruct_FLocationAnimations, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_LocationAnimation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_LocationAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_TickSpeed_MetaData[] = {
		{ "Category", "AnimatedComponents" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_TickSpeed = { "TickSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimatedComponents, TickSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_TickSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_TickSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Category", "AnimatedComponents" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimatedComponents, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_ComponentName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_ComponentName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimatedComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_TimerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_SplineMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_RotationAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_LocationAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_TickSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedComponents_Statics::NewProp_ComponentName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimatedComponents_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimatedActor,
		nullptr,
		&NewStructOps,
		"AnimatedComponents",
		sizeof(FAnimatedComponents),
		alignof(FAnimatedComponents),
		Z_Construct_UScriptStruct_FAnimatedComponents_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedComponents_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedComponents_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedComponents_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimatedComponents()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimatedComponents_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimatedActor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimatedComponents"), sizeof(FAnimatedComponents), Get_Z_Construct_UScriptStruct_FAnimatedComponents_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimatedComponents_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimatedComponents_Hash() { return 3694462986U; }
class UScriptStruct* FSplineMovement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATEDACTOR_API uint32 Get_Z_Construct_UScriptStruct_FSplineMovement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplineMovement, Z_Construct_UPackage__Script_AnimatedActor(), TEXT("SplineMovement"), sizeof(FSplineMovement), Get_Z_Construct_UScriptStruct_FSplineMovement_Hash());
	}
	return Singleton;
}
template<> ANIMATEDACTOR_API UScriptStruct* StaticStruct<FSplineMovement>()
{
	return FSplineMovement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSplineMovement(FSplineMovement::StaticStruct, TEXT("/Script/AnimatedActor"), TEXT("SplineMovement"), false, nullptr, nullptr);
static struct FScriptStruct_AnimatedActor_StaticRegisterNativesFSplineMovement
{
	FScriptStruct_AnimatedActor_StaticRegisterNativesFSplineMovement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SplineMovement")),new UScriptStruct::TCppStructOps<FSplineMovement>);
	}
} ScriptStruct_AnimatedActor_StaticRegisterNativesFSplineMovement;
	struct Z_Construct_UScriptStruct_FSplineMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_p_speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isReversing_MetaData[];
#endif
		static void NewProp_isReversing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isReversing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reverse_MetaData[];
#endif
		static void NewProp_Reverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Reverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineMovement_MetaData[];
#endif
		static void NewProp_SplineMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SplineMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SplineComponentName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMovement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSplineMovement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplineMovement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_p_speed_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_p_speed = { "p_speed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineMovement, p_speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_p_speed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_p_speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_isReversing_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_isReversing_SetBit(void* Obj)
	{
		((FSplineMovement*)Obj)->isReversing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_isReversing = { "isReversing", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSplineMovement), &Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_isReversing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_isReversing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_isReversing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_dt_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineMovement, dt), METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_dt_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_dt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_distance_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineMovement, distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_distance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_spline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_spline = { "spline", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineMovement, spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_spline_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_spline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_Reverse_MetaData[] = {
		{ "Category", "AnimatedComponents" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_Reverse_SetBit(void* Obj)
	{
		((FSplineMovement*)Obj)->Reverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_Reverse = { "Reverse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSplineMovement), &Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_Reverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_Reverse_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_Reverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "AnimatedComponents" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineMovement, MaxSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_MaxSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "AnimatedComponents" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineMovement, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_Speed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_SplineMovement_MetaData[] = {
		{ "Category", "AnimatedComponents" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_SplineMovement_SetBit(void* Obj)
	{
		((FSplineMovement*)Obj)->SplineMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_SplineMovement = { "SplineMovement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSplineMovement), &Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_SplineMovement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_SplineMovement_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_SplineMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_SplineComponentName_MetaData[] = {
		{ "Category", "AnimatedComponents" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_SplineComponentName = { "SplineComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineMovement, SplineComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_SplineComponentName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_SplineComponentName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplineMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_p_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_isReversing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_dt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_Reverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_SplineMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMovement_Statics::NewProp_SplineComponentName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplineMovement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimatedActor,
		nullptr,
		&NewStructOps,
		"SplineMovement",
		sizeof(FSplineMovement),
		alignof(FSplineMovement),
		Z_Construct_UScriptStruct_FSplineMovement_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMovement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMovement_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMovement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSplineMovement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSplineMovement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimatedActor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SplineMovement"), sizeof(FSplineMovement), Get_Z_Construct_UScriptStruct_FSplineMovement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSplineMovement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSplineMovement_Hash() { return 1642451763U; }
class UScriptStruct* FLocationAnimations::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATEDACTOR_API uint32 Get_Z_Construct_UScriptStruct_FLocationAnimations_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocationAnimations, Z_Construct_UPackage__Script_AnimatedActor(), TEXT("LocationAnimations"), sizeof(FLocationAnimations), Get_Z_Construct_UScriptStruct_FLocationAnimations_Hash());
	}
	return Singleton;
}
template<> ANIMATEDACTOR_API UScriptStruct* StaticStruct<FLocationAnimations>()
{
	return FLocationAnimations::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocationAnimations(FLocationAnimations::StaticStruct, TEXT("/Script/AnimatedActor"), TEXT("LocationAnimations"), false, nullptr, nullptr);
static struct FScriptStruct_AnimatedActor_StaticRegisterNativesFLocationAnimations
{
	FScriptStruct_AnimatedActor_StaticRegisterNativesFLocationAnimations()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocationAnimations")),new UScriptStruct::TCppStructOps<FLocationAnimations>);
	}
} ScriptStruct_AnimatedActor_StaticRegisterNativesFLocationAnimations;
	struct Z_Construct_UScriptStruct_FLocationAnimations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isReversing_MetaData[];
#endif
		static void NewProp_isReversing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isReversing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_delta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reverse_MetaData[];
#endif
		static void NewProp_Reverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Reverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationAnimation_MetaData[];
#endif
		static void NewProp_LocationAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LocationAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationAnimations_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocationAnimations>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_isReversing_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_isReversing_SetBit(void* Obj)
	{
		((FLocationAnimations*)Obj)->isReversing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_isReversing = { "isReversing", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLocationAnimations), &Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_isReversing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_isReversing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_isReversing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_delta_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_delta = { "delta", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocationAnimations, delta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_delta_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_delta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_EndLocation_MetaData[] = {
		{ "Category", "AnimatedComponents" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocationAnimations, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_EndLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_StartLocation_MetaData[] = {
		{ "Category", "AnimatedComponents" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocationAnimations, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_StartLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_Reverse_MetaData[] = {
		{ "Category", "AnimatedComponents" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_Reverse_SetBit(void* Obj)
	{
		((FLocationAnimations*)Obj)->Reverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_Reverse = { "Reverse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLocationAnimations), &Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_Reverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_Reverse_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_Reverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_LocationAnimation_MetaData[] = {
		{ "Category", "AnimatedComponents" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_LocationAnimation_SetBit(void* Obj)
	{
		((FLocationAnimations*)Obj)->LocationAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_LocationAnimation = { "LocationAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLocationAnimations), &Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_LocationAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_LocationAnimation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_LocationAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocationAnimations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_isReversing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_delta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_Reverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationAnimations_Statics::NewProp_LocationAnimation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocationAnimations_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimatedActor,
		nullptr,
		&NewStructOps,
		"LocationAnimations",
		sizeof(FLocationAnimations),
		alignof(FLocationAnimations),
		Z_Construct_UScriptStruct_FLocationAnimations_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationAnimations_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationAnimations_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationAnimations_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocationAnimations()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocationAnimations_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimatedActor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocationAnimations"), sizeof(FLocationAnimations), Get_Z_Construct_UScriptStruct_FLocationAnimations_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocationAnimations_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocationAnimations_Hash() { return 436403376U; }
class UScriptStruct* FRotateAnimations::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATEDACTOR_API uint32 Get_Z_Construct_UScriptStruct_FRotateAnimations_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotateAnimations, Z_Construct_UPackage__Script_AnimatedActor(), TEXT("RotateAnimations"), sizeof(FRotateAnimations), Get_Z_Construct_UScriptStruct_FRotateAnimations_Hash());
	}
	return Singleton;
}
template<> ANIMATEDACTOR_API UScriptStruct* StaticStruct<FRotateAnimations>()
{
	return FRotateAnimations::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRotateAnimations(FRotateAnimations::StaticStruct, TEXT("/Script/AnimatedActor"), TEXT("RotateAnimations"), false, nullptr, nullptr);
static struct FScriptStruct_AnimatedActor_StaticRegisterNativesFRotateAnimations
{
	FScriptStruct_AnimatedActor_StaticRegisterNativesFRotateAnimations()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RotateAnimations")),new UScriptStruct::TCppStructOps<FRotateAnimations>);
	}
} ScriptStruct_AnimatedActor_StaticRegisterNativesFRotateAnimations;
	struct Z_Construct_UScriptStruct_FRotateAnimations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateAround_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RotateAround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateAroundComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RotateAroundComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateAnimation_MetaData[];
#endif
		static void NewProp_RotateAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RotateAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotateAnimations_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotateAnimations>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotateAround_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotateAround = { "RotateAround", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotateAnimations, RotateAround), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotateAround_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotateAround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotateAroundComponent_MetaData[] = {
		{ "Category", "AnimatedComponents" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotateAroundComponent = { "RotateAroundComponent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotateAnimations, RotateAroundComponent), METADATA_PARAMS(Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotateAroundComponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotateAroundComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotationVector_MetaData[] = {
		{ "Category", "AnimatedComponents" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotationVector = { "RotationVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotateAnimations, RotationVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotationVector_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotationVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotateAnimation_MetaData[] = {
		{ "Category", "AnimatedComponents" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotateAnimation_SetBit(void* Obj)
	{
		((FRotateAnimations*)Obj)->RotateAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotateAnimation = { "RotateAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRotateAnimations), &Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotateAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotateAnimation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotateAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRotateAnimations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotateAround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotateAroundComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotationVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotateAnimations_Statics::NewProp_RotateAnimation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotateAnimations_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimatedActor,
		nullptr,
		&NewStructOps,
		"RotateAnimations",
		sizeof(FRotateAnimations),
		alignof(FRotateAnimations),
		Z_Construct_UScriptStruct_FRotateAnimations_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRotateAnimations_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRotateAnimations_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRotateAnimations_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRotateAnimations()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRotateAnimations_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimatedActor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RotateAnimations"), sizeof(FRotateAnimations), Get_Z_Construct_UScriptStruct_FRotateAnimations_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRotateAnimations_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRotateAnimations_Hash() { return 1519942824U; }
	static FName NAME_UAnimActor_AnimTick = FName(TEXT("AnimTick"));
	void UAnimActor::AnimTick(USceneComponent* sc, int32 AnimComponent)
	{
		AnimActor_eventAnimTick_Parms Parms;
		Parms.sc=sc;
		Parms.AnimComponent=AnimComponent;
		ProcessEvent(FindFunctionChecked(NAME_UAnimActor_AnimTick),&Parms);
	}
	void UAnimActor::StaticRegisterNativesUAnimActor()
	{
		UClass* Class = UAnimActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimTick", &UAnimActor::execAnimTick },
			{ "SetAnimCallBack", &UAnimActor::execSetAnimCallBack },
			{ "StartStopAnim", &UAnimActor::execStartStopAnim },
			{ "StopAnimations", &UAnimActor::execStopAnimations },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimActor_AnimTick_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AnimComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimActor_AnimTick_Statics::NewProp_AnimComponent = { "AnimComponent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimActor_eventAnimTick_Parms, AnimComponent), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimActor_AnimTick_Statics::NewProp_sc_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimActor_AnimTick_Statics::NewProp_sc = { "sc", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimActor_eventAnimTick_Parms, sc), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimActor_AnimTick_Statics::NewProp_sc_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAnimActor_AnimTick_Statics::NewProp_sc_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimActor_AnimTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimActor_AnimTick_Statics::NewProp_AnimComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimActor_AnimTick_Statics::NewProp_sc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimActor_AnimTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimActor_AnimTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimActor, nullptr, "AnimTick", sizeof(AnimActor_eventAnimTick_Parms), Z_Construct_UFunction_UAnimActor_AnimTick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimActor_AnimTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimActor_AnimTick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimActor_AnimTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimActor_AnimTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimActor_AnimTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimActor_SetAnimCallBack_Statics
	{
		struct AnimActor_eventSetAnimCallBack_Parms
		{
			FScriptDelegate AnimCallback;
			int32 AnimationIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AnimationIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_AnimCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimActor_SetAnimCallBack_Statics::NewProp_AnimationIndex = { "AnimationIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimActor_eventSetAnimCallBack_Parms, AnimationIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimActor_SetAnimCallBack_Statics::NewProp_AnimCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAnimActor_SetAnimCallBack_Statics::NewProp_AnimCallback = { "AnimCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimActor_eventSetAnimCallBack_Parms, AnimCallback), Z_Construct_UDelegateFunction_AnimatedActor_AnimOverride__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAnimActor_SetAnimCallBack_Statics::NewProp_AnimCallback_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAnimActor_SetAnimCallBack_Statics::NewProp_AnimCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimActor_SetAnimCallBack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimActor_SetAnimCallBack_Statics::NewProp_AnimationIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimActor_SetAnimCallBack_Statics::NewProp_AnimCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimActor_SetAnimCallBack_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimatedComponents" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimActor_SetAnimCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimActor, nullptr, "SetAnimCallBack", sizeof(AnimActor_eventSetAnimCallBack_Parms), Z_Construct_UFunction_UAnimActor_SetAnimCallBack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimActor_SetAnimCallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimActor_SetAnimCallBack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimActor_SetAnimCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimActor_SetAnimCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimActor_SetAnimCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimActor_StartStopAnim_Statics
	{
		struct AnimActor_eventStartStopAnim_Parms
		{
			bool Start;
			int32 AnimationIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AnimationIndex;
		static void NewProp_Start_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimActor_StartStopAnim_Statics::NewProp_AnimationIndex = { "AnimationIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimActor_eventStartStopAnim_Parms, AnimationIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimActor_StartStopAnim_Statics::NewProp_Start_SetBit(void* Obj)
	{
		((AnimActor_eventStartStopAnim_Parms*)Obj)->Start = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimActor_StartStopAnim_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimActor_eventStartStopAnim_Parms), &Z_Construct_UFunction_UAnimActor_StartStopAnim_Statics::NewProp_Start_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimActor_StartStopAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimActor_StartStopAnim_Statics::NewProp_AnimationIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimActor_StartStopAnim_Statics::NewProp_Start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimActor_StartStopAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimActor_StartStopAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimActor, nullptr, "StartStopAnim", sizeof(AnimActor_eventStartStopAnim_Parms), Z_Construct_UFunction_UAnimActor_StartStopAnim_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimActor_StartStopAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimActor_StartStopAnim_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimActor_StartStopAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimActor_StartStopAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimActor_StartStopAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimActor_StopAnimations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimActor_StopAnimations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimActor_StopAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimActor, nullptr, "StopAnimations", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimActor_StopAnimations_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimActor_StopAnimations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimActor_StopAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimActor_StopAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimActor_NoRegister()
	{
		return UAnimActor::StaticClass();
	}
	struct Z_Construct_UClass_UAnimActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimatedComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimatedComponents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimatedComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAnimTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnimTick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimatedActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimActor_AnimTick, "AnimTick" }, // 3273375353
		{ &Z_Construct_UFunction_UAnimActor_SetAnimCallBack, "SetAnimCallBack" }, // 3373566936
		{ &Z_Construct_UFunction_UAnimActor_StartStopAnim, "StartStopAnim" }, // 592945929
		{ &Z_Construct_UFunction_UAnimActor_StopAnimations, "StopAnimations" }, // 3552187812
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AnimActor.h" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimActor_Statics::NewProp_AnimatedComponents_MetaData[] = {
		{ "Category", "AnimatedComponents" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimActor_Statics::NewProp_AnimatedComponents = { "AnimatedComponents", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimActor, AnimatedComponents), METADATA_PARAMS(Z_Construct_UClass_UAnimActor_Statics::NewProp_AnimatedComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimActor_Statics::NewProp_AnimatedComponents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimActor_Statics::NewProp_AnimatedComponents_Inner = { "AnimatedComponents", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimatedComponents, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimActor_Statics::NewProp_OnAnimTick_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/AnimActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimActor_Statics::NewProp_OnAnimTick = { "OnAnimTick", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimActor, OnAnimTick), Z_Construct_UDelegateFunction_AnimatedActor_AnimActorAnimTickSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAnimActor_Statics::NewProp_OnAnimTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimActor_Statics::NewProp_OnAnimTick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimActor_Statics::NewProp_AnimatedComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimActor_Statics::NewProp_AnimatedComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimActor_Statics::NewProp_OnAnimTick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimActor_Statics::ClassParams = {
		&UAnimActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAnimActor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimActor, 755378284);
	template<> ANIMATEDACTOR_API UClass* StaticClass<UAnimActor>()
	{
		return UAnimActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimActor(Z_Construct_UClass_UAnimActor, &UAnimActor::StaticClass, TEXT("/Script/AnimatedActor"), TEXT("UAnimActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
