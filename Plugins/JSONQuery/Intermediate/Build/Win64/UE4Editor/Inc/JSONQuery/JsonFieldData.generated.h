// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UJsonFieldData;
enum class EJSONResult : uint8;
class UObject;
#ifdef JSONQUERY_JsonFieldData_generated_h
#error "JsonFieldData.generated.h already included, missing '#pragma once' in JsonFieldData.h"
#endif
#define JSONQUERY_JsonFieldData_generated_h

#define JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_17_DELEGATE \
struct _Script_JSONQuery_eventOnGetResult_Parms \
{ \
	bool bSuccess; \
	UJsonFieldData* JSON; \
	EJSONResult Status; \
}; \
static inline void FOnGetResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetResult, bool bSuccess, UJsonFieldData* JSON, const EJSONResult Status) \
{ \
	_Script_JSONQuery_eventOnGetResult_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.JSON=JSON; \
	Parms.Status=Status; \
	OnGetResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveStringTextToFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveDirectory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveText); \
		P_GET_UBOOL(Z_Param_AllowOverWriting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UJsonFieldData::SaveStringTextToFile(Z_Param_SaveDirectory,Z_Param_FileName,Z_Param_SaveText,Z_Param_AllowOverWriting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRequest) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=UJsonFieldData::GetRequest(Z_Param_WorldContextObject,Z_Param_url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostRequestWithFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PostRequestWithFile(Z_Param_FilePath,Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostRequest) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PostRequest(Z_Param_WorldContextObject,Z_Param_url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->FromFile(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_dataString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->FromString(Z_Param_dataString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectKeys) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=this->GetObjectKeys(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectArray) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UJsonFieldData*>*)Z_Param__Result=this->GetObjectArray(Z_Param_WorldContextObject,Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->GetObject(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=this->GetFloatArray(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=this->GetIntArray(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<bool>*)Z_Param__Result=this->GetBoolArray(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=this->GetStringArray(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsNull) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_fieldExists); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetIsNull(Z_Param_key,Z_Param_Out_fieldExists); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetFloat(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetInt(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetBool(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetString(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetObjectArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(UJsonFieldData*,Z_Param_arrayData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetObjectArray(Z_Param_key,Z_Param_arrayData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_OBJECT(UJsonFieldData,Z_Param_objectData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetObject(Z_Param_key,Z_Param_objectData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNullArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_length); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetNullArray(Z_Param_key,Z_Param_Out_length); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(int32,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetIntArray(Z_Param_key,Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(float,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetFloatArray(Z_Param_key,Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(bool,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetBoolArray(Z_Param_key,Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(FString,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetStringArray(Z_Param_key,Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNull) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetNull(Z_Param_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetInt(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetFloat(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolean) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL(Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetBoolean(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetString(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreate) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=UJsonFieldData::Create(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasField(Z_Param_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->ToString(); \
		P_NATIVE_END; \
	}


#define JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveStringTextToFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveDirectory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveText); \
		P_GET_UBOOL(Z_Param_AllowOverWriting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UJsonFieldData::SaveStringTextToFile(Z_Param_SaveDirectory,Z_Param_FileName,Z_Param_SaveText,Z_Param_AllowOverWriting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRequest) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=UJsonFieldData::GetRequest(Z_Param_WorldContextObject,Z_Param_url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostRequestWithFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PostRequestWithFile(Z_Param_FilePath,Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostRequest) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PostRequest(Z_Param_WorldContextObject,Z_Param_url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->FromFile(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_dataString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->FromString(Z_Param_dataString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectKeys) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=this->GetObjectKeys(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectArray) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UJsonFieldData*>*)Z_Param__Result=this->GetObjectArray(Z_Param_WorldContextObject,Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->GetObject(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=this->GetFloatArray(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=this->GetIntArray(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<bool>*)Z_Param__Result=this->GetBoolArray(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=this->GetStringArray(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsNull) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_fieldExists); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetIsNull(Z_Param_key,Z_Param_Out_fieldExists); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetFloat(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetInt(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetBool(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetString(Z_Param_key,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetObjectArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(UJsonFieldData*,Z_Param_arrayData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetObjectArray(Z_Param_key,Z_Param_arrayData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_OBJECT(UJsonFieldData,Z_Param_objectData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetObject(Z_Param_key,Z_Param_objectData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNullArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_length); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetNullArray(Z_Param_key,Z_Param_Out_length); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(int32,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetIntArray(Z_Param_key,Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(float,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetFloatArray(Z_Param_key,Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(bool,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetBoolArray(Z_Param_key,Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_TARRAY(FString,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetStringArray(Z_Param_key,Z_Param_data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNull) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetNull(Z_Param_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetInt(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetFloat(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolean) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL(Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetBoolean(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=this->SetString(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreate) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJsonFieldData**)Z_Param__Result=UJsonFieldData::Create(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasField(Z_Param_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->ToString(); \
		P_NATIVE_END; \
	}


#define JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonFieldData(); \
	friend JSONQUERY_API class UClass* Z_Construct_UClass_UJsonFieldData(); \
public: \
	DECLARE_CLASS(UJsonFieldData, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/JSONQuery"), NO_API) \
	DECLARE_SERIALIZER(UJsonFieldData) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUJsonFieldData(); \
	friend JSONQUERY_API class UClass* Z_Construct_UClass_UJsonFieldData(); \
public: \
	DECLARE_CLASS(UJsonFieldData, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/JSONQuery"), NO_API) \
	DECLARE_SERIALIZER(UJsonFieldData) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonFieldData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonFieldData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonFieldData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonFieldData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonFieldData(UJsonFieldData&&); \
	NO_API UJsonFieldData(const UJsonFieldData&); \
public:


#define JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonFieldData(UJsonFieldData&&); \
	NO_API UJsonFieldData(const UJsonFieldData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonFieldData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonFieldData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UJsonFieldData)


#define JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_22_PRIVATE_PROPERTY_OFFSET
#define JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_19_PROLOG
#define JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_22_PRIVATE_PROPERTY_OFFSET \
	JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_22_RPC_WRAPPERS \
	JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_22_INCLASS \
	JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_22_PRIVATE_PROPERTY_OFFSET \
	JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_22_INCLASS_NO_PURE_DECLS \
	JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JSONQuery_UE4_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h


#define FOREACH_ENUM_EJSONRESULT(op) \
	op(EJSONResult::Success) \
	op(EJSONResult::HttpFailed) \
	op(EJSONResult::JSONParsingFailed) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
