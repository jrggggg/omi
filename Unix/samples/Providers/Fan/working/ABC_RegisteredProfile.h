/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _ABC_RegisteredProfile_h
#define _ABC_RegisteredProfile_h

#include <MI.h>
#include "CIM_RegisteredProfile.h"
#include "CIM_ManagedElement.h"

/*
**==============================================================================
**
** ABC_RegisteredProfile [ABC_RegisteredProfile]
**
** Keys:
**    InstanceID
**
**==============================================================================
*/

typedef struct _ABC_RegisteredProfile /* extends CIM_RegisteredProfile */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    /*KEY*/ MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* CIM_RegisteredProfile properties */
    MI_ConstUint16Field RegisteredOrganization;
    MI_ConstStringField OtherRegisteredOrganization;
    MI_ConstStringField RegisteredName;
    MI_ConstStringField RegisteredVersion;
    MI_ConstUint16AField AdvertiseTypes;
    MI_ConstStringAField AdvertiseTypeDescriptions;
    MI_ConstStringAField ImplementedFeatures;
    /* ABC_RegisteredProfile properties */
}
ABC_RegisteredProfile;

typedef struct _ABC_RegisteredProfile_Ref
{
    ABC_RegisteredProfile* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
ABC_RegisteredProfile_Ref;

typedef struct _ABC_RegisteredProfile_ConstRef
{
    MI_CONST ABC_RegisteredProfile* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
ABC_RegisteredProfile_ConstRef;

typedef struct _ABC_RegisteredProfile_Array
{
    struct _ABC_RegisteredProfile** data;
    MI_Uint32 size;
}
ABC_RegisteredProfile_Array;

typedef struct _ABC_RegisteredProfile_ConstArray
{
    struct _ABC_RegisteredProfile MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
ABC_RegisteredProfile_ConstArray;

typedef struct _ABC_RegisteredProfile_ArrayRef
{
    ABC_RegisteredProfile_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
ABC_RegisteredProfile_ArrayRef;

typedef struct _ABC_RegisteredProfile_ConstArrayRef
{
    ABC_RegisteredProfile_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
ABC_RegisteredProfile_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl ABC_RegisteredProfile_rtti;

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Construct(
    ABC_RegisteredProfile* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &ABC_RegisteredProfile_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Clone(
    const ABC_RegisteredProfile* self,
    ABC_RegisteredProfile** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL ABC_RegisteredProfile_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &ABC_RegisteredProfile_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Destruct(ABC_RegisteredProfile* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Delete(ABC_RegisteredProfile* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Post(
    const ABC_RegisteredProfile* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Set_InstanceID(
    ABC_RegisteredProfile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_SetPtr_InstanceID(
    ABC_RegisteredProfile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Clear_InstanceID(
    ABC_RegisteredProfile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Set_Caption(
    ABC_RegisteredProfile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_SetPtr_Caption(
    ABC_RegisteredProfile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Clear_Caption(
    ABC_RegisteredProfile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Set_Description(
    ABC_RegisteredProfile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_SetPtr_Description(
    ABC_RegisteredProfile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Clear_Description(
    ABC_RegisteredProfile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Set_ElementName(
    ABC_RegisteredProfile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_SetPtr_ElementName(
    ABC_RegisteredProfile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Clear_ElementName(
    ABC_RegisteredProfile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Set_RegisteredOrganization(
    ABC_RegisteredProfile* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->RegisteredOrganization)->value = x;
    ((MI_Uint16Field*)&self->RegisteredOrganization)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Clear_RegisteredOrganization(
    ABC_RegisteredProfile* self)
{
    memset((void*)&self->RegisteredOrganization, 0, sizeof(self->RegisteredOrganization));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Set_OtherRegisteredOrganization(
    ABC_RegisteredProfile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_SetPtr_OtherRegisteredOrganization(
    ABC_RegisteredProfile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Clear_OtherRegisteredOrganization(
    ABC_RegisteredProfile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Set_RegisteredName(
    ABC_RegisteredProfile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_SetPtr_RegisteredName(
    ABC_RegisteredProfile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Clear_RegisteredName(
    ABC_RegisteredProfile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        6);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Set_RegisteredVersion(
    ABC_RegisteredProfile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_SetPtr_RegisteredVersion(
    ABC_RegisteredProfile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Clear_RegisteredVersion(
    ABC_RegisteredProfile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        7);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Set_AdvertiseTypes(
    ABC_RegisteredProfile* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&arr,
        MI_UINT16A,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_SetPtr_AdvertiseTypes(
    ABC_RegisteredProfile* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&arr,
        MI_UINT16A,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Clear_AdvertiseTypes(
    ABC_RegisteredProfile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        8);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Set_AdvertiseTypeDescriptions(
    ABC_RegisteredProfile* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_SetPtr_AdvertiseTypeDescriptions(
    ABC_RegisteredProfile* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Clear_AdvertiseTypeDescriptions(
    ABC_RegisteredProfile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        9);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Set_ImplementedFeatures(
    ABC_RegisteredProfile* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        10,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_SetPtr_ImplementedFeatures(
    ABC_RegisteredProfile* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        10,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_Clear_ImplementedFeatures(
    ABC_RegisteredProfile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        10);
}

/*
**==============================================================================
**
** ABC_RegisteredProfile.CloseConformantInstances()
**
**==============================================================================
*/

typedef struct _ABC_RegisteredProfile_CloseConformantInstances
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MI_ConstStringField EnumerationContext;
}
ABC_RegisteredProfile_CloseConformantInstances;

MI_EXTERN_C MI_CONST MI_MethodDecl ABC_RegisteredProfile_CloseConformantInstances_rtti;

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_CloseConformantInstances_Construct(
    ABC_RegisteredProfile_CloseConformantInstances* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &ABC_RegisteredProfile_CloseConformantInstances_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_CloseConformantInstances_Clone(
    const ABC_RegisteredProfile_CloseConformantInstances* self,
    ABC_RegisteredProfile_CloseConformantInstances** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_CloseConformantInstances_Destruct(
    ABC_RegisteredProfile_CloseConformantInstances* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_CloseConformantInstances_Delete(
    ABC_RegisteredProfile_CloseConformantInstances* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_CloseConformantInstances_Post(
    const ABC_RegisteredProfile_CloseConformantInstances* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_CloseConformantInstances_Set_MIReturn(
    ABC_RegisteredProfile_CloseConformantInstances* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_CloseConformantInstances_Clear_MIReturn(
    ABC_RegisteredProfile_CloseConformantInstances* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_CloseConformantInstances_Set_EnumerationContext(
    ABC_RegisteredProfile_CloseConformantInstances* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_CloseConformantInstances_SetPtr_EnumerationContext(
    ABC_RegisteredProfile_CloseConformantInstances* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_CloseConformantInstances_Clear_EnumerationContext(
    ABC_RegisteredProfile_CloseConformantInstances* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

/*
**==============================================================================
**
** ABC_RegisteredProfile.OpenConformantInstances()
**
**==============================================================================
*/

typedef struct _ABC_RegisteredProfile_OpenConformantInstances
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MI_ConstStringField ResultClass;
    /*IN*/ MI_ConstStringAField IncludedPropertyList;
    /*IN*/ MI_ConstUint32Field OperationTimeout;
    /*IN*/ MI_ConstBooleanField ContinueOnError;
    /*IN*/ MI_ConstUint32Field MaxObjectCount;
    /*OUT*/ MI_ConstStringField EnumerationContext;
    /*OUT*/ MI_ConstBooleanField EndOfSequence;
    /*OUT*/ MI_ConstUint16AField InstanceType;
    /*OUT*/ CIM_ManagedElement_ConstArrayRef InstanceWithPathList;
}
ABC_RegisteredProfile_OpenConformantInstances;

MI_EXTERN_C MI_CONST MI_MethodDecl ABC_RegisteredProfile_OpenConformantInstances_rtti;

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Construct(
    ABC_RegisteredProfile_OpenConformantInstances* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &ABC_RegisteredProfile_OpenConformantInstances_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Clone(
    const ABC_RegisteredProfile_OpenConformantInstances* self,
    ABC_RegisteredProfile_OpenConformantInstances** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Destruct(
    ABC_RegisteredProfile_OpenConformantInstances* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Delete(
    ABC_RegisteredProfile_OpenConformantInstances* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Post(
    const ABC_RegisteredProfile_OpenConformantInstances* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Set_MIReturn(
    ABC_RegisteredProfile_OpenConformantInstances* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Clear_MIReturn(
    ABC_RegisteredProfile_OpenConformantInstances* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Set_ResultClass(
    ABC_RegisteredProfile_OpenConformantInstances* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_SetPtr_ResultClass(
    ABC_RegisteredProfile_OpenConformantInstances* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Clear_ResultClass(
    ABC_RegisteredProfile_OpenConformantInstances* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Set_IncludedPropertyList(
    ABC_RegisteredProfile_OpenConformantInstances* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_SetPtr_IncludedPropertyList(
    ABC_RegisteredProfile_OpenConformantInstances* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Clear_IncludedPropertyList(
    ABC_RegisteredProfile_OpenConformantInstances* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Set_OperationTimeout(
    ABC_RegisteredProfile_OpenConformantInstances* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->OperationTimeout)->value = x;
    ((MI_Uint32Field*)&self->OperationTimeout)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Clear_OperationTimeout(
    ABC_RegisteredProfile_OpenConformantInstances* self)
{
    memset((void*)&self->OperationTimeout, 0, sizeof(self->OperationTimeout));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Set_ContinueOnError(
    ABC_RegisteredProfile_OpenConformantInstances* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->ContinueOnError)->value = x;
    ((MI_BooleanField*)&self->ContinueOnError)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Clear_ContinueOnError(
    ABC_RegisteredProfile_OpenConformantInstances* self)
{
    memset((void*)&self->ContinueOnError, 0, sizeof(self->ContinueOnError));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Set_MaxObjectCount(
    ABC_RegisteredProfile_OpenConformantInstances* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MaxObjectCount)->value = x;
    ((MI_Uint32Field*)&self->MaxObjectCount)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Clear_MaxObjectCount(
    ABC_RegisteredProfile_OpenConformantInstances* self)
{
    memset((void*)&self->MaxObjectCount, 0, sizeof(self->MaxObjectCount));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Set_EnumerationContext(
    ABC_RegisteredProfile_OpenConformantInstances* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_SetPtr_EnumerationContext(
    ABC_RegisteredProfile_OpenConformantInstances* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Clear_EnumerationContext(
    ABC_RegisteredProfile_OpenConformantInstances* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        6);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Set_EndOfSequence(
    ABC_RegisteredProfile_OpenConformantInstances* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->EndOfSequence)->value = x;
    ((MI_BooleanField*)&self->EndOfSequence)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Clear_EndOfSequence(
    ABC_RegisteredProfile_OpenConformantInstances* self)
{
    memset((void*)&self->EndOfSequence, 0, sizeof(self->EndOfSequence));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Set_InstanceType(
    ABC_RegisteredProfile_OpenConformantInstances* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&arr,
        MI_UINT16A,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_SetPtr_InstanceType(
    ABC_RegisteredProfile_OpenConformantInstances* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&arr,
        MI_UINT16A,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Clear_InstanceType(
    ABC_RegisteredProfile_OpenConformantInstances* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        8);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Set_InstanceWithPathList(
    ABC_RegisteredProfile_OpenConformantInstances* self,
    const CIM_ManagedElement * const * data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&arr,
        MI_INSTANCEA,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_SetPtr_InstanceWithPathList(
    ABC_RegisteredProfile_OpenConformantInstances* self,
    const CIM_ManagedElement * const * data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&arr,
        MI_INSTANCEA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_OpenConformantInstances_Clear_InstanceWithPathList(
    ABC_RegisteredProfile_OpenConformantInstances* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        9);
}

/*
**==============================================================================
**
** ABC_RegisteredProfile.PullConformantInstances()
**
**==============================================================================
*/

typedef struct _ABC_RegisteredProfile_PullConformantInstances
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MI_ConstUint32Field MaxObjectCount;
    /*IN-OUT*/ MI_ConstStringField EnumerationContext;
    /*OUT*/ MI_ConstBooleanField EndOfSequence;
    /*OUT*/ MI_ConstUint16AField InstanceType;
    /*OUT*/ CIM_ManagedElement_ConstArrayRef InstanceWithPathList;
}
ABC_RegisteredProfile_PullConformantInstances;

MI_EXTERN_C MI_CONST MI_MethodDecl ABC_RegisteredProfile_PullConformantInstances_rtti;

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_Construct(
    ABC_RegisteredProfile_PullConformantInstances* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &ABC_RegisteredProfile_PullConformantInstances_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_Clone(
    const ABC_RegisteredProfile_PullConformantInstances* self,
    ABC_RegisteredProfile_PullConformantInstances** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_Destruct(
    ABC_RegisteredProfile_PullConformantInstances* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_Delete(
    ABC_RegisteredProfile_PullConformantInstances* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_Post(
    const ABC_RegisteredProfile_PullConformantInstances* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_Set_MIReturn(
    ABC_RegisteredProfile_PullConformantInstances* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_Clear_MIReturn(
    ABC_RegisteredProfile_PullConformantInstances* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_Set_MaxObjectCount(
    ABC_RegisteredProfile_PullConformantInstances* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MaxObjectCount)->value = x;
    ((MI_Uint32Field*)&self->MaxObjectCount)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_Clear_MaxObjectCount(
    ABC_RegisteredProfile_PullConformantInstances* self)
{
    memset((void*)&self->MaxObjectCount, 0, sizeof(self->MaxObjectCount));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_Set_EnumerationContext(
    ABC_RegisteredProfile_PullConformantInstances* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_SetPtr_EnumerationContext(
    ABC_RegisteredProfile_PullConformantInstances* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_Clear_EnumerationContext(
    ABC_RegisteredProfile_PullConformantInstances* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_Set_EndOfSequence(
    ABC_RegisteredProfile_PullConformantInstances* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->EndOfSequence)->value = x;
    ((MI_BooleanField*)&self->EndOfSequence)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_Clear_EndOfSequence(
    ABC_RegisteredProfile_PullConformantInstances* self)
{
    memset((void*)&self->EndOfSequence, 0, sizeof(self->EndOfSequence));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_Set_InstanceType(
    ABC_RegisteredProfile_PullConformantInstances* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&arr,
        MI_UINT16A,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_SetPtr_InstanceType(
    ABC_RegisteredProfile_PullConformantInstances* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&arr,
        MI_UINT16A,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_Clear_InstanceType(
    ABC_RegisteredProfile_PullConformantInstances* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_Set_InstanceWithPathList(
    ABC_RegisteredProfile_PullConformantInstances* self,
    const CIM_ManagedElement * const * data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&arr,
        MI_INSTANCEA,
        0);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_SetPtr_InstanceWithPathList(
    ABC_RegisteredProfile_PullConformantInstances* self,
    const CIM_ManagedElement * const * data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&arr,
        MI_INSTANCEA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL ABC_RegisteredProfile_PullConformantInstances_Clear_InstanceWithPathList(
    ABC_RegisteredProfile_PullConformantInstances* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

/*
**==============================================================================
**
** ABC_RegisteredProfile provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _ABC_RegisteredProfile_Self ABC_RegisteredProfile_Self;

MI_EXTERN_C void MI_CALL ABC_RegisteredProfile_Load(
    ABC_RegisteredProfile_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL ABC_RegisteredProfile_Unload(
    ABC_RegisteredProfile_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL ABC_RegisteredProfile_EnumerateInstances(
    ABC_RegisteredProfile_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL ABC_RegisteredProfile_GetInstance(
    ABC_RegisteredProfile_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const ABC_RegisteredProfile* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL ABC_RegisteredProfile_CreateInstance(
    ABC_RegisteredProfile_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const ABC_RegisteredProfile* newInstance);

MI_EXTERN_C void MI_CALL ABC_RegisteredProfile_ModifyInstance(
    ABC_RegisteredProfile_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const ABC_RegisteredProfile* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL ABC_RegisteredProfile_DeleteInstance(
    ABC_RegisteredProfile_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const ABC_RegisteredProfile* instanceName);

MI_EXTERN_C void MI_CALL ABC_RegisteredProfile_Invoke_CloseConformantInstances(
    ABC_RegisteredProfile_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const ABC_RegisteredProfile* instanceName,
    const ABC_RegisteredProfile_CloseConformantInstances* in);

MI_EXTERN_C void MI_CALL ABC_RegisteredProfile_Invoke_OpenConformantInstances(
    ABC_RegisteredProfile_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const ABC_RegisteredProfile* instanceName,
    const ABC_RegisteredProfile_OpenConformantInstances* in);

MI_EXTERN_C void MI_CALL ABC_RegisteredProfile_Invoke_PullConformantInstances(
    ABC_RegisteredProfile_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const ABC_RegisteredProfile* instanceName,
    const ABC_RegisteredProfile_PullConformantInstances* in);


#endif /* _ABC_RegisteredProfile_h */
