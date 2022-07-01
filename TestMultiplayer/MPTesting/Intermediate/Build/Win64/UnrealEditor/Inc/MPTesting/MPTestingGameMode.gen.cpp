// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPTesting/MPTestingGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPTestingGameMode() {}
// Cross Module References
	MPTESTING_API UClass* Z_Construct_UClass_AMPTestingGameMode_NoRegister();
	MPTESTING_API UClass* Z_Construct_UClass_AMPTestingGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MPTesting();
// End Cross Module References
	void AMPTestingGameMode::StaticRegisterNativesAMPTestingGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMPTestingGameMode);
	UClass* Z_Construct_UClass_AMPTestingGameMode_NoRegister()
	{
		return AMPTestingGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMPTestingGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMPTestingGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MPTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPTestingGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MPTestingGameMode.h" },
		{ "ModuleRelativePath", "MPTestingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMPTestingGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMPTestingGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMPTestingGameMode_Statics::ClassParams = {
		&AMPTestingGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMPTestingGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMPTestingGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMPTestingGameMode()
	{
		if (!Z_Registration_Info_UClass_AMPTestingGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMPTestingGameMode.OuterSingleton, Z_Construct_UClass_AMPTestingGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMPTestingGameMode.OuterSingleton;
	}
	template<> MPTESTING_API UClass* StaticClass<AMPTestingGameMode>()
	{
		return AMPTestingGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMPTestingGameMode);
	struct Z_CompiledInDeferFile_FID_MPTesting_Source_MPTesting_MPTestingGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPTesting_Source_MPTesting_MPTestingGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMPTestingGameMode, AMPTestingGameMode::StaticClass, TEXT("AMPTestingGameMode"), &Z_Registration_Info_UClass_AMPTestingGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMPTestingGameMode), 1028220316U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPTesting_Source_MPTesting_MPTestingGameMode_h_1515929387(TEXT("/Script/MPTesting"),
		Z_CompiledInDeferFile_FID_MPTesting_Source_MPTesting_MPTestingGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPTesting_Source_MPTesting_MPTestingGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
