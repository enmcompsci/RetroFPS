// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetroFPSTutorial/RetroFPSTutorialGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRetroFPSTutorialGameModeBase() {}
// Cross Module References
	RETROFPSTUTORIAL_API UClass* Z_Construct_UClass_ARetroFPSTutorialGameModeBase_NoRegister();
	RETROFPSTUTORIAL_API UClass* Z_Construct_UClass_ARetroFPSTutorialGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RetroFPSTutorial();
// End Cross Module References
	void ARetroFPSTutorialGameModeBase::StaticRegisterNativesARetroFPSTutorialGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARetroFPSTutorialGameModeBase);
	UClass* Z_Construct_UClass_ARetroFPSTutorialGameModeBase_NoRegister()
	{
		return ARetroFPSTutorialGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARetroFPSTutorialGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARetroFPSTutorialGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RetroFPSTutorial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetroFPSTutorialGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RetroFPSTutorialGameModeBase.h" },
		{ "ModuleRelativePath", "RetroFPSTutorialGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARetroFPSTutorialGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARetroFPSTutorialGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARetroFPSTutorialGameModeBase_Statics::ClassParams = {
		&ARetroFPSTutorialGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARetroFPSTutorialGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARetroFPSTutorialGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARetroFPSTutorialGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ARetroFPSTutorialGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARetroFPSTutorialGameModeBase.OuterSingleton, Z_Construct_UClass_ARetroFPSTutorialGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARetroFPSTutorialGameModeBase.OuterSingleton;
	}
	template<> RETROFPSTUTORIAL_API UClass* StaticClass<ARetroFPSTutorialGameModeBase>()
	{
		return ARetroFPSTutorialGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARetroFPSTutorialGameModeBase);
	struct Z_CompiledInDeferFile_FID_RetroFPSTutorial_Source_RetroFPSTutorial_RetroFPSTutorialGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RetroFPSTutorial_Source_RetroFPSTutorial_RetroFPSTutorialGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARetroFPSTutorialGameModeBase, ARetroFPSTutorialGameModeBase::StaticClass, TEXT("ARetroFPSTutorialGameModeBase"), &Z_Registration_Info_UClass_ARetroFPSTutorialGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARetroFPSTutorialGameModeBase), 3257169868U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RetroFPSTutorial_Source_RetroFPSTutorial_RetroFPSTutorialGameModeBase_h_961449625(TEXT("/Script/RetroFPSTutorial"),
		Z_CompiledInDeferFile_FID_RetroFPSTutorial_Source_RetroFPSTutorial_RetroFPSTutorialGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RetroFPSTutorial_Source_RetroFPSTutorial_RetroFPSTutorialGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
