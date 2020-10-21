// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef ANIMATEDACTOR_AnimActor_generated_h
#error "AnimActor.generated.h already included, missing '#pragma once' in AnimActor.h"
#endif
#define ANIMATEDACTOR_AnimActor_generated_h

#define C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimatedComponents_Statics; \
	ANIMATEDACTOR_API static class UScriptStruct* StaticStruct();


template<> ANIMATEDACTOR_API UScriptStruct* StaticStruct<struct FAnimatedComponents>();

#define C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSplineMovement_Statics; \
	ANIMATEDACTOR_API static class UScriptStruct* StaticStruct();


template<> ANIMATEDACTOR_API UScriptStruct* StaticStruct<struct FSplineMovement>();

#define C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLocationAnimations_Statics; \
	ANIMATEDACTOR_API static class UScriptStruct* StaticStruct();


template<> ANIMATEDACTOR_API UScriptStruct* StaticStruct<struct FLocationAnimations>();

#define C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRotateAnimations_Statics; \
	ANIMATEDACTOR_API static class UScriptStruct* StaticStruct();


template<> ANIMATEDACTOR_API UScriptStruct* StaticStruct<struct FRotateAnimations>();

#define C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_160_DELEGATE \
static inline void FAnimOverride_DelegateWrapper(const FScriptDelegate& AnimOverride) \
{ \
	AnimOverride.ProcessDelegate<UObject>(NULL); \
}


#define C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_159_DELEGATE \
struct _Script_AnimatedActor_eventAnimActorAnimTickSignature_Parms \
{ \
	USceneComponent* Scene_component; \
	int32 AnimComponentIndex; \
}; \
static inline void FAnimActorAnimTickSignature_DelegateWrapper(const FMulticastScriptDelegate& AnimActorAnimTickSignature, USceneComponent* Scene_component, int32 AnimComponentIndex) \
{ \
	_Script_AnimatedActor_eventAnimActorAnimTickSignature_Parms Parms; \
	Parms.Scene_component=Scene_component; \
	Parms.AnimComponentIndex=AnimComponentIndex; \
	AnimActorAnimTickSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_RPC_WRAPPERS \
	virtual void AnimTick_Implementation(USceneComponent* sc, int32 AnimComponent); \
 \
	DECLARE_FUNCTION(execSetAnimCallBack) \
	{ \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_AnimCallback); \
		P_GET_PROPERTY(UIntProperty,Z_Param_AnimationIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimCallBack(FAnimOverride(Z_Param_Out_AnimCallback),Z_Param_AnimationIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAnimations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartStopAnim) \
	{ \
		P_GET_UBOOL(Z_Param_Start); \
		P_GET_PROPERTY(UIntProperty,Z_Param_AnimationIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartStopAnim(Z_Param_Start,Z_Param_AnimationIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimTick) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_sc); \
		P_GET_PROPERTY(UIntProperty,Z_Param_AnimComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimTick_Implementation(Z_Param_sc,Z_Param_AnimComponent); \
		P_NATIVE_END; \
	}


#define C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAnimCallBack) \
	{ \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_AnimCallback); \
		P_GET_PROPERTY(UIntProperty,Z_Param_AnimationIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimCallBack(FAnimOverride(Z_Param_Out_AnimCallback),Z_Param_AnimationIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAnimations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartStopAnim) \
	{ \
		P_GET_UBOOL(Z_Param_Start); \
		P_GET_PROPERTY(UIntProperty,Z_Param_AnimationIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartStopAnim(Z_Param_Start,Z_Param_AnimationIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimTick) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_sc); \
		P_GET_PROPERTY(UIntProperty,Z_Param_AnimComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimTick_Implementation(Z_Param_sc,Z_Param_AnimComponent); \
		P_NATIVE_END; \
	}


#define C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_EVENT_PARMS \
	struct AnimActor_eventAnimTick_Parms \
	{ \
		USceneComponent* sc; \
		int32 AnimComponent; \
	};


#define C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_CALLBACK_WRAPPERS
#define C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimActor(); \
	friend struct Z_Construct_UClass_UAnimActor_Statics; \
public: \
	DECLARE_CLASS(UAnimActor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimatedActor"), NO_API) \
	DECLARE_SERIALIZER(UAnimActor)


#define C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_INCLASS \
private: \
	static void StaticRegisterNativesUAnimActor(); \
	friend struct Z_Construct_UClass_UAnimActor_Statics; \
public: \
	DECLARE_CLASS(UAnimActor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimatedActor"), NO_API) \
	DECLARE_SERIALIZER(UAnimActor)


#define C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimActor(UAnimActor&&); \
	NO_API UAnimActor(const UAnimActor&); \
public:


#define C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimActor(UAnimActor&&); \
	NO_API UAnimActor(const UAnimActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimActor)


#define C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_PRIVATE_PROPERTY_OFFSET
#define C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_163_PROLOG \
	C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_EVENT_PARMS


#define C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_PRIVATE_PROPERTY_OFFSET \
	C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_RPC_WRAPPERS \
	C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_CALLBACK_WRAPPERS \
	C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_INCLASS \
	C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_PRIVATE_PROPERTY_OFFSET \
	C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_RPC_WRAPPERS_NO_PURE_DECLS \
	C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_CALLBACK_WRAPPERS \
	C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_INCLASS_NO_PURE_DECLS \
	C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h_166_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATEDACTOR_API UClass* StaticClass<class UAnimActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID C__Users_Alex_Desktop_Animated_Plugin_HostProject_Plugins_AnimatedActor_Source_AnimatedActor_Public_AnimActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
