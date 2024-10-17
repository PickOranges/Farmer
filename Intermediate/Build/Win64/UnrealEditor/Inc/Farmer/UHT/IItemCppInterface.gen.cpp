// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/IItemCppInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIItemCppInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	FARMER_API UClass* Z_Construct_UClass_UItemCppInterface();
	FARMER_API UClass* Z_Construct_UClass_UItemCppInterface_NoRegister();
	FARMER_API UScriptStruct* Z_Construct_UScriptStruct_FNameTextPair();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NameTextPair;
class UScriptStruct* FNameTextPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NameTextPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NameTextPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNameTextPair, (UObject*)Z_Construct_UPackage__Script_Farmer(), TEXT("NameTextPair"));
	}
	return Z_Registration_Info_UScriptStruct_NameTextPair.OuterSingleton;
}
template<> FARMER_API UScriptStruct* StaticStruct<FNameTextPair>()
{
	return FNameTextPair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNameTextPair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameTextPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "IItemCppInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNameTextPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNameTextPair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameTextPair_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "NameTextPair" },
		{ "ModuleRelativePath", "IItemCppInterface.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNameTextPair_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNameTextPair, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameTextPair_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FNameTextPair_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameTextPair_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "NameTextPair" },
		{ "ModuleRelativePath", "IItemCppInterface.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNameTextPair_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNameTextPair, Text), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameTextPair_Statics::NewProp_Text_MetaData), Z_Construct_UScriptStruct_FNameTextPair_Statics::NewProp_Text_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNameTextPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameTextPair_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameTextPair_Statics::NewProp_Text,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNameTextPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
		nullptr,
		&NewStructOps,
		"NameTextPair",
		Z_Construct_UScriptStruct_FNameTextPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameTextPair_Statics::PropPointers),
		sizeof(FNameTextPair),
		alignof(FNameTextPair),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameTextPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNameTextPair_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameTextPair_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNameTextPair()
	{
		if (!Z_Registration_Info_UScriptStruct_NameTextPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NameTextPair.InnerSingleton, Z_Construct_UScriptStruct_FNameTextPair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NameTextPair.InnerSingleton;
	}
	DEFINE_FUNCTION(IItemCppInterface::execInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interaction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IItemCppInterface::execViewRaycast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FNameTextPair*)Z_Param__Result=P_THIS->ViewRaycast_Implementation();
		P_NATIVE_END;
	}
	struct ItemCppInterface_eventViewRaycast_Parms
	{
		FNameTextPair ReturnValue;
	};
	void IItemCppInterface::Interaction()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interaction instead.");
	}
	FNameTextPair IItemCppInterface::ViewRaycast()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ViewRaycast instead.");
		ItemCppInterface_eventViewRaycast_Parms Parms;
		return Parms.ReturnValue;
	}
	void UItemCppInterface::StaticRegisterNativesUItemCppInterface()
	{
		UClass* Class = UItemCppInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interaction", &IItemCppInterface::execInteraction },
			{ "ViewRaycast", &IItemCppInterface::execViewRaycast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemCppInterface_Interaction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemCppInterface_Interaction_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interface, only implemented in the derived classes !\n" },
#endif
		{ "ModuleRelativePath", "IItemCppInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interface, only implemented in the derived classes !" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemCppInterface_Interaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemCppInterface, nullptr, "Interaction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemCppInterface_Interaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemCppInterface_Interaction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UItemCppInterface_Interaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemCppInterface_Interaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemCppInterface_ViewRaycast_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemCppInterface_ViewRaycast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemCppInterface_eventViewRaycast_Parms, ReturnValue), Z_Construct_UScriptStruct_FNameTextPair, METADATA_PARAMS(0, nullptr) }; // 3068867704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemCppInterface_ViewRaycast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemCppInterface_ViewRaycast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemCppInterface_ViewRaycast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "IItemCppInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemCppInterface_ViewRaycast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemCppInterface, nullptr, "ViewRaycast", nullptr, nullptr, Z_Construct_UFunction_UItemCppInterface_ViewRaycast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemCppInterface_ViewRaycast_Statics::PropPointers), sizeof(ItemCppInterface_eventViewRaycast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemCppInterface_ViewRaycast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemCppInterface_ViewRaycast_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemCppInterface_ViewRaycast_Statics::PropPointers) < 2048);
	static_assert(sizeof(ItemCppInterface_eventViewRaycast_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemCppInterface_ViewRaycast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemCppInterface_ViewRaycast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemCppInterface);
	UClass* Z_Construct_UClass_UItemCppInterface_NoRegister()
	{
		return UItemCppInterface::StaticClass();
	}
	struct Z_Construct_UClass_UItemCppInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemCppInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemCppInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemCppInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemCppInterface_Interaction, "Interaction" }, // 722514883
		{ &Z_Construct_UFunction_UItemCppInterface_ViewRaycast, "ViewRaycast" }, // 2538124763
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemCppInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemCppInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "IItemCppInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemCppInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IItemCppInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemCppInterface_Statics::ClassParams = {
		&UItemCppInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemCppInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemCppInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UItemCppInterface()
	{
		if (!Z_Registration_Info_UClass_UItemCppInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemCppInterface.OuterSingleton, Z_Construct_UClass_UItemCppInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemCppInterface.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<UItemCppInterface>()
	{
		return UItemCppInterface::StaticClass();
	}
	UItemCppInterface::UItemCppInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemCppInterface);
	UItemCppInterface::~UItemCppInterface() {}
	static FName NAME_UItemCppInterface_Interaction = FName(TEXT("Interaction"));
	void IItemCppInterface::Execute_Interaction(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UItemCppInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UItemCppInterface_Interaction);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IItemCppInterface*)(O->GetNativeInterfaceAddress(UItemCppInterface::StaticClass())))
		{
			I->Interaction_Implementation();
		}
	}
	static FName NAME_UItemCppInterface_ViewRaycast = FName(TEXT("ViewRaycast"));
	FNameTextPair IItemCppInterface::Execute_ViewRaycast(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UItemCppInterface::StaticClass()));
		ItemCppInterface_eventViewRaycast_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UItemCppInterface_ViewRaycast);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IItemCppInterface*)(O->GetNativeInterfaceAddress(UItemCppInterface::StaticClass())))
		{
			Parms.ReturnValue = I->ViewRaycast_Implementation();
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_Statics::ScriptStructInfo[] = {
		{ FNameTextPair::StaticStruct, Z_Construct_UScriptStruct_FNameTextPair_Statics::NewStructOps, TEXT("NameTextPair"), &Z_Registration_Info_UScriptStruct_NameTextPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNameTextPair), 3068867704U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemCppInterface, UItemCppInterface::StaticClass, TEXT("UItemCppInterface"), &Z_Registration_Info_UClass_UItemCppInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemCppInterface), 796932084U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_4195527885(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
