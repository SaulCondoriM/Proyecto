// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPTesting_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MPTesting;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MPTesting()
	{
		if (!Z_Registration_Info_UPackage__Script_MPTesting.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MPTesting",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x3AAA4A9F,
				0x46051729,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MPTesting.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MPTesting.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MPTesting(Z_Construct_UPackage__Script_MPTesting, TEXT("/Script/MPTesting"), Z_Registration_Info_UPackage__Script_MPTesting, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3AAA4A9F, 0x46051729));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
