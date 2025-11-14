#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
186,
198,
199,
200,
201,
202,
203,
204,
205,
206,
209,
210,
211,
374,
375,
376,
405,
406,
407,
427,
428,
429,
430,
527,
528,
529,
532,
567,
568,
570,
572,
574,
576,
581,
589,
590,
591,
592,
593,
594,
595,
596,
597,
690,
691,
757,
763,
766,
768,
773,
774,
776,
777,
781,
782,
784,
786,
787,
790,
791,
792,
795,
797,
800,
802,
804,
813,
877,
879,
881,
891,
892,
893,
894,
896,
903,
904,
905,
906,
907,
915,
916,
917,
921,
922,
924,
928,
929,
930,
1209,
1387,
1388,
7097,
7098,
7100,
7101,
7102,
7103,
7104,
7106,
7108,
7110,
7120,
7122,
7127,
7129,
7131,
7133,
7184,
7185,
7187,
7188,
7189,
7190,
7191,
7193,
7195,
8082,
8086,
8088,
8089,
8090,
8091,
8338,
8339,
8340,
8341,
8359,
8360,
8361,
8363,
8403,
8471,
8473,
8475,
8483,
8484,
8485,
8486,
8872,
8876,
8877,
8904,
8922,
8929,
8936,
8947,
8951,
8971,
9045,
9047,
9056,
9058,
9059,
9066,
9080,
9100,
9101,
9109,
9111,
9118,
9119,
9122,
9124,
9129,
9135,
9136,
9143,
9145,
9157,
9160,
9161,
9162,
9173,
9182,
9188,
9189,
9190,
9192,
9193,
9210,
9212,
9226,
9243,
9270,
9300,
9301,
9741,
9833,
9834,
10036,
10037,
10044,
10045,
10046,
10051,
10126,
10507,
10508,
10719,
10729,
11513,
11534,
11536,
11538,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_InitializeInternal_raw (int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 186,
ves_icall_System_Array_InternalCreate,
// token 198,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 199,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 200,
ves_icall_System_Array_CanChangePrimitive,
// token 201,
ves_icall_System_Array_FastCopy,
// token 202,
ves_icall_System_Array_GetLengthInternal_raw,
// token 203,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 204,
ves_icall_System_Array_GetGenericValue_icall,
// token 205,
ves_icall_System_Array_GetValueImpl_raw,
// token 206,
ves_icall_System_Array_SetGenericValue_icall,
// token 209,
ves_icall_System_Array_SetValueImpl_raw,
// token 210,
ves_icall_System_Array_InitializeInternal_raw,
// token 211,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 374,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 375,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 376,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 405,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 406,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 407,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 427,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 428,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 429,
ves_icall_System_Enum_InternalGetCorElementType,
// token 430,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 527,
ves_icall_System_Environment_get_ProcessorCount,
// token 528,
ves_icall_System_Environment_get_TickCount,
// token 529,
ves_icall_System_Environment_get_TickCount64,
// token 532,
ves_icall_System_Environment_FailFast_raw,
// token 567,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 568,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 570,
ves_icall_System_GC_SuppressFinalize_raw,
// token 572,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 574,
ves_icall_System_GC_GetGCMemoryInfo,
// token 576,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 581,
ves_icall_System_Object_MemberwiseClone_raw,
// token 589,
ves_icall_System_Math_Ceiling,
// token 590,
ves_icall_System_Math_Cos,
// token 591,
ves_icall_System_Math_Floor,
// token 592,
ves_icall_System_Math_Log10,
// token 593,
ves_icall_System_Math_Pow,
// token 594,
ves_icall_System_Math_Sin,
// token 595,
ves_icall_System_Math_Sqrt,
// token 596,
ves_icall_System_Math_Tan,
// token 597,
ves_icall_System_Math_ModF,
// token 690,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 691,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 757,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 763,
ves_icall_RuntimeType_make_array_type_raw,
// token 766,
ves_icall_RuntimeType_make_byref_type_raw,
// token 768,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 773,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 774,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 776,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 777,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 781,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 782,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 784,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 786,
ves_icall_System_RuntimeType_getFullName_raw,
// token 787,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 790,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 791,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 792,
ves_icall_RuntimeType_GetFields_native_raw,
// token 795,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 797,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 800,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 802,
ves_icall_RuntimeType_GetName_raw,
// token 804,
ves_icall_RuntimeType_GetNamespace_raw,
// token 813,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 877,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 879,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 881,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 891,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 892,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 893,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 894,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 896,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 903,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 904,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 905,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 906,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 907,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 915,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 916,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 917,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 921,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 922,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 924,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 928,
ves_icall_System_String_FastAllocateString_raw,
// token 929,
ves_icall_System_String_InternalIsInterned_raw,
// token 930,
ves_icall_System_String_InternalIntern_raw,
// token 1209,
ves_icall_System_Type_internal_from_handle_raw,
// token 1387,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1388,
ves_icall_System_ValueType_Equals_raw,
// token 7097,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7098,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7100,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7101,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7102,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7103,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7104,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7106,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7108,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7110,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7120,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7122,
mono_monitor_exit_icall_raw,
// token 7127,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 7129,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 7131,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 7133,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7184,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7185,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7187,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7188,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7189,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7190,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7191,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7193,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7195,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8082,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8086,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8088,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8089,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8090,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8091,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 8338,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8339,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8340,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8341,
ves_icall_System_GCHandle_InternalSet_raw,
// token 8359,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 8360,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 8361,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 8363,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 8403,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8471,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 8473,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 8475,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 8483,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8484,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8485,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 8486,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8872,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8876,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8877,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8904,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8922,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8929,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8936,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8947,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8951,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8971,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 9045,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9047,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9056,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9058,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9059,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9066,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9080,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9100,
ves_icall_reflection_get_token_raw,
// token 9101,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9109,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9111,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9118,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9119,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9122,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9124,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9129,
ves_icall_reflection_get_token_raw,
// token 9135,
ves_icall_get_method_info_raw,
// token 9136,
ves_icall_get_method_attributes,
// token 9143,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9145,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9157,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9160,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9161,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9162,
ves_icall_reflection_get_token_raw,
// token 9173,
ves_icall_InternalInvoke_raw,
// token 9182,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 9188,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 9189,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 9190,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 9192,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9193,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9210,
ves_icall_InvokeClassConstructor_raw,
// token 9212,
ves_icall_InternalInvoke_raw,
// token 9226,
ves_icall_reflection_get_token_raw,
// token 9243,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9270,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 9300,
ves_icall_reflection_get_token_raw,
// token 9301,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9741,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9833,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9834,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10036,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10037,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10044,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10045,
ves_icall_ModuleBuilder_getToken_raw,
// token 10046,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10051,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10126,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10507,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10508,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10719,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10729,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 11513,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 11534,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 11536,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 11538,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
