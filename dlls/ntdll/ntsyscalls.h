/* Automatically generated by tools/make_specfiles */

#define ALL_SYSCALLS32 \
    SYSCALL_ENTRY( 0x0000, NtAcceptConnectPort, 24 ) \
    SYSCALL_ENTRY( 0x0001, NtAccessCheck, 32 ) \
    SYSCALL_ENTRY( 0x0002, NtAccessCheckAndAuditAlarm, 44 ) \
    SYSCALL_ENTRY( 0x0003, NtAddAtom, 12 ) \
    SYSCALL_ENTRY( 0x0004, NtAdjustGroupsToken, 24 ) \
    SYSCALL_ENTRY( 0x0005, NtAdjustPrivilegesToken, 24 ) \
    SYSCALL_ENTRY( 0x0006, NtAlertResumeThread, 8 ) \
    SYSCALL_ENTRY( 0x0007, NtAlertThread, 4 ) \
    SYSCALL_ENTRY( 0x0008, NtAlertThreadByThreadId, 4 ) \
    SYSCALL_ENTRY( 0x0009, NtAllocateLocallyUniqueId, 4 ) \
    SYSCALL_ENTRY( 0x000a, NtAllocateReserveObject, 12 ) \
    SYSCALL_ENTRY( 0x000b, NtAllocateUuids, 16 ) \
    SYSCALL_ENTRY( 0x000c, NtAllocateVirtualMemory, 24 ) \
    SYSCALL_ENTRY( 0x000d, NtAllocateVirtualMemoryEx, 28 ) \
    SYSCALL_ENTRY( 0x000e, NtAreMappedFilesTheSame, 8 ) \
    SYSCALL_ENTRY( 0x000f, NtAssignProcessToJobObject, 8 ) \
    SYSCALL_ENTRY( 0x0010, NtCallbackReturn, 12 ) \
    SYSCALL_ENTRY( 0x0011, NtCancelIoFile, 8 ) \
    SYSCALL_ENTRY( 0x0012, NtCancelIoFileEx, 12 ) \
    SYSCALL_ENTRY( 0x0013, NtCancelSynchronousIoFile, 12 ) \
    SYSCALL_ENTRY( 0x0014, NtCancelTimer, 8 ) \
    SYSCALL_ENTRY( 0x0015, NtClearEvent, 4 ) \
    SYSCALL_ENTRY( 0x0016, NtClose, 4 ) \
    SYSCALL_ENTRY( 0x0017, NtCommitTransaction, 8 ) \
    SYSCALL_ENTRY( 0x0018, NtCompareObjects, 8 ) \
    SYSCALL_ENTRY( 0x0019, NtCompareTokens, 12 ) \
    SYSCALL_ENTRY( 0x001a, NtCompleteConnectPort, 4 ) \
    SYSCALL_ENTRY( 0x001b, NtConnectPort, 32 ) \
    SYSCALL_ENTRY( 0x001c, NtContinue, 8 ) \
    SYSCALL_ENTRY( 0x001d, NtContinueEx, 8 ) \
    SYSCALL_ENTRY( 0x001e, NtConvertBetweenAuxiliaryCounterAndPerformanceCounter, 16 ) \
    SYSCALL_ENTRY( 0x001f, NtCreateDebugObject, 16 ) \
    SYSCALL_ENTRY( 0x0020, NtCreateDirectoryObject, 12 ) \
    SYSCALL_ENTRY( 0x0021, NtCreateEvent, 20 ) \
    SYSCALL_ENTRY( 0x0022, NtCreateFile, 44 ) \
    SYSCALL_ENTRY( 0x0023, NtCreateIoCompletion, 16 ) \
    SYSCALL_ENTRY( 0x0024, NtCreateJobObject, 12 ) \
    SYSCALL_ENTRY( 0x0025, NtCreateKey, 28 ) \
    SYSCALL_ENTRY( 0x0026, NtCreateKeyTransacted, 32 ) \
    SYSCALL_ENTRY( 0x0027, NtCreateKeyedEvent, 16 ) \
    SYSCALL_ENTRY( 0x0028, NtCreateLowBoxToken, 36 ) \
    SYSCALL_ENTRY( 0x0029, NtCreateMailslotFile, 32 ) \
    SYSCALL_ENTRY( 0x002a, NtCreateMutant, 16 ) \
    SYSCALL_ENTRY( 0x002b, NtCreateNamedPipeFile, 56 ) \
    SYSCALL_ENTRY( 0x002c, NtCreatePagingFile, 16 ) \
    SYSCALL_ENTRY( 0x002d, NtCreatePort, 20 ) \
    SYSCALL_ENTRY( 0x002e, NtCreateSection, 28 ) \
    SYSCALL_ENTRY( 0x002f, NtCreateSemaphore, 20 ) \
    SYSCALL_ENTRY( 0x0030, NtCreateSymbolicLinkObject, 16 ) \
    SYSCALL_ENTRY( 0x0031, NtCreateThread, 32 ) \
    SYSCALL_ENTRY( 0x0032, NtCreateThreadEx, 44 ) \
    SYSCALL_ENTRY( 0x0033, NtCreateTimer, 16 ) \
    SYSCALL_ENTRY( 0x0034, NtCreateToken, 52 ) \
    SYSCALL_ENTRY( 0x0035, NtCreateTransaction, 40 ) \
    SYSCALL_ENTRY( 0x0036, NtCreateUserProcess, 44 ) \
    SYSCALL_ENTRY( 0x0037, NtDebugActiveProcess, 8 ) \
    SYSCALL_ENTRY( 0x0038, NtDebugContinue, 12 ) \
    SYSCALL_ENTRY( 0x0039, NtDelayExecution, 8 ) \
    SYSCALL_ENTRY( 0x003a, NtDeleteAtom, 4 ) \
    SYSCALL_ENTRY( 0x003b, NtDeleteFile, 4 ) \
    SYSCALL_ENTRY( 0x003c, NtDeleteKey, 4 ) \
    SYSCALL_ENTRY( 0x003d, NtDeleteValueKey, 8 ) \
    SYSCALL_ENTRY( 0x003e, NtDeviceIoControlFile, 40 ) \
    SYSCALL_ENTRY( 0x003f, NtDisplayString, 4 ) \
    SYSCALL_ENTRY( 0x0040, NtDuplicateObject, 28 ) \
    SYSCALL_ENTRY( 0x0041, NtDuplicateToken, 24 ) \
    SYSCALL_ENTRY( 0x0042, NtEnumerateKey, 24 ) \
    SYSCALL_ENTRY( 0x0043, NtEnumerateValueKey, 24 ) \
    SYSCALL_ENTRY( 0x0044, NtFilterToken, 24 ) \
    SYSCALL_ENTRY( 0x0045, NtFindAtom, 12 ) \
    SYSCALL_ENTRY( 0x0046, NtFlushBuffersFile, 8 ) \
    SYSCALL_ENTRY( 0x0047, NtFlushBuffersFileEx, 20 ) \
    SYSCALL_ENTRY( 0x0048, NtFlushInstructionCache, 12 ) \
    SYSCALL_ENTRY( 0x0049, NtFlushKey, 4 ) \
    SYSCALL_ENTRY( 0x004a, NtFlushProcessWriteBuffers, 0 ) \
    SYSCALL_ENTRY( 0x004b, NtFlushVirtualMemory, 16 ) \
    SYSCALL_ENTRY( 0x004c, NtFreeVirtualMemory, 16 ) \
    SYSCALL_ENTRY( 0x004d, NtFsControlFile, 40 ) \
    SYSCALL_ENTRY( 0x004e, NtGetContextThread, 8 ) \
    SYSCALL_ENTRY( 0x004f, NtGetCurrentProcessorNumber, 0 ) \
    SYSCALL_ENTRY( 0x0050, NtGetNextProcess, 20 ) \
    SYSCALL_ENTRY( 0x0051, NtGetNextThread, 24 ) \
    SYSCALL_ENTRY( 0x0052, NtGetNlsSectionPtr, 20 ) \
    SYSCALL_ENTRY( 0x0053, NtGetWriteWatch, 28 ) \
    SYSCALL_ENTRY( 0x0054, NtImpersonateAnonymousToken, 4 ) \
    SYSCALL_ENTRY( 0x0055, NtInitializeNlsFiles, 12 ) \
    SYSCALL_ENTRY( 0x0056, NtInitiatePowerAction, 16 ) \
    SYSCALL_ENTRY( 0x0057, NtIsProcessInJob, 8 ) \
    SYSCALL_ENTRY( 0x0058, NtListenPort, 8 ) \
    SYSCALL_ENTRY( 0x0059, NtLoadDriver, 4 ) \
    SYSCALL_ENTRY( 0x005a, NtLoadKey, 8 ) \
    SYSCALL_ENTRY( 0x005b, NtLoadKey2, 12 ) \
    SYSCALL_ENTRY( 0x005c, NtLoadKeyEx, 32 ) \
    SYSCALL_ENTRY( 0x005d, NtLockFile, 40 ) \
    SYSCALL_ENTRY( 0x005e, NtLockVirtualMemory, 16 ) \
    SYSCALL_ENTRY( 0x005f, NtMakePermanentObject, 4 ) \
    SYSCALL_ENTRY( 0x0060, NtMakeTemporaryObject, 4 ) \
    SYSCALL_ENTRY( 0x0061, NtMapViewOfSection, 40 ) \
    SYSCALL_ENTRY( 0x0062, NtMapViewOfSectionEx, 36 ) \
    SYSCALL_ENTRY( 0x0063, NtNotifyChangeDirectoryFile, 36 ) \
    SYSCALL_ENTRY( 0x0064, NtNotifyChangeKey, 40 ) \
    SYSCALL_ENTRY( 0x0065, NtNotifyChangeMultipleKeys, 48 ) \
    SYSCALL_ENTRY( 0x0066, NtOpenDirectoryObject, 12 ) \
    SYSCALL_ENTRY( 0x0067, NtOpenEvent, 12 ) \
    SYSCALL_ENTRY( 0x0068, NtOpenFile, 24 ) \
    SYSCALL_ENTRY( 0x0069, NtOpenIoCompletion, 12 ) \
    SYSCALL_ENTRY( 0x006a, NtOpenJobObject, 12 ) \
    SYSCALL_ENTRY( 0x006b, NtOpenKey, 12 ) \
    SYSCALL_ENTRY( 0x006c, NtOpenKeyEx, 16 ) \
    SYSCALL_ENTRY( 0x006d, NtOpenKeyTransacted, 16 ) \
    SYSCALL_ENTRY( 0x006e, NtOpenKeyTransactedEx, 20 ) \
    SYSCALL_ENTRY( 0x006f, NtOpenKeyedEvent, 12 ) \
    SYSCALL_ENTRY( 0x0070, NtOpenMutant, 12 ) \
    SYSCALL_ENTRY( 0x0071, NtOpenProcess, 16 ) \
    SYSCALL_ENTRY( 0x0072, NtOpenProcessToken, 12 ) \
    SYSCALL_ENTRY( 0x0073, NtOpenProcessTokenEx, 16 ) \
    SYSCALL_ENTRY( 0x0074, NtOpenSection, 12 ) \
    SYSCALL_ENTRY( 0x0075, NtOpenSemaphore, 12 ) \
    SYSCALL_ENTRY( 0x0076, NtOpenSymbolicLinkObject, 12 ) \
    SYSCALL_ENTRY( 0x0077, NtOpenThread, 16 ) \
    SYSCALL_ENTRY( 0x0078, NtOpenThreadToken, 16 ) \
    SYSCALL_ENTRY( 0x0079, NtOpenThreadTokenEx, 20 ) \
    SYSCALL_ENTRY( 0x007a, NtOpenTimer, 12 ) \
    SYSCALL_ENTRY( 0x007b, NtPowerInformation, 20 ) \
    SYSCALL_ENTRY( 0x007c, NtPrivilegeCheck, 12 ) \
    SYSCALL_ENTRY( 0x007d, NtProtectVirtualMemory, 20 ) \
    SYSCALL_ENTRY( 0x007e, NtPulseEvent, 8 ) \
    SYSCALL_ENTRY( 0x007f, NtQueryAttributesFile, 8 ) \
    SYSCALL_ENTRY( 0x0080, NtQueryDefaultLocale, 8 ) \
    SYSCALL_ENTRY( 0x0081, NtQueryDefaultUILanguage, 4 ) \
    SYSCALL_ENTRY( 0x0082, NtQueryDirectoryFile, 44 ) \
    SYSCALL_ENTRY( 0x0083, NtQueryDirectoryObject, 28 ) \
    SYSCALL_ENTRY( 0x0084, NtQueryEaFile, 36 ) \
    SYSCALL_ENTRY( 0x0085, NtQueryEvent, 20 ) \
    SYSCALL_ENTRY( 0x0086, NtQueryFullAttributesFile, 8 ) \
    SYSCALL_ENTRY( 0x0087, NtQueryInformationAtom, 20 ) \
    SYSCALL_ENTRY( 0x0088, NtQueryInformationFile, 20 ) \
    SYSCALL_ENTRY( 0x0089, NtQueryInformationJobObject, 20 ) \
    SYSCALL_ENTRY( 0x008a, NtQueryInformationProcess, 20 ) \
    SYSCALL_ENTRY( 0x008b, NtQueryInformationThread, 20 ) \
    SYSCALL_ENTRY( 0x008c, NtQueryInformationToken, 20 ) \
    SYSCALL_ENTRY( 0x008d, NtQueryInstallUILanguage, 4 ) \
    SYSCALL_ENTRY( 0x008e, NtQueryIoCompletion, 20 ) \
    SYSCALL_ENTRY( 0x008f, NtQueryKey, 20 ) \
    SYSCALL_ENTRY( 0x0090, NtQueryLicenseValue, 20 ) \
    SYSCALL_ENTRY( 0x0091, NtQueryMultipleValueKey, 24 ) \
    SYSCALL_ENTRY( 0x0092, NtQueryMutant, 20 ) \
    SYSCALL_ENTRY( 0x0093, NtQueryObject, 20 ) \
    SYSCALL_ENTRY( 0x0094, NtQueryPerformanceCounter, 8 ) \
    SYSCALL_ENTRY( 0x0095, NtQuerySection, 20 ) \
    SYSCALL_ENTRY( 0x0096, NtQuerySecurityObject, 20 ) \
    SYSCALL_ENTRY( 0x0097, NtQuerySemaphore, 20 ) \
    SYSCALL_ENTRY( 0x0098, NtQuerySymbolicLinkObject, 12 ) \
    SYSCALL_ENTRY( 0x0099, NtQuerySystemEnvironmentValue, 16 ) \
    SYSCALL_ENTRY( 0x009a, NtQuerySystemEnvironmentValueEx, 20 ) \
    SYSCALL_ENTRY( 0x009b, NtQuerySystemInformation, 16 ) \
    SYSCALL_ENTRY( 0x009c, NtQuerySystemInformationEx, 24 ) \
    SYSCALL_ENTRY( 0x009d, NtQuerySystemTime, 4 ) \
    SYSCALL_ENTRY( 0x009e, NtQueryTimer, 20 ) \
    SYSCALL_ENTRY( 0x009f, NtQueryTimerResolution, 12 ) \
    SYSCALL_ENTRY( 0x00a0, NtQueryValueKey, 24 ) \
    SYSCALL_ENTRY( 0x00a1, NtQueryVirtualMemory, 24 ) \
    SYSCALL_ENTRY( 0x00a2, NtQueryVolumeInformationFile, 20 ) \
    SYSCALL_ENTRY( 0x00a3, NtQueueApcThread, 20 ) \
    SYSCALL_ENTRY( 0x00a4, NtQueueApcThreadEx, 24 ) \
    SYSCALL_ENTRY( 0x00a5, NtRaiseException, 12 ) \
    SYSCALL_ENTRY( 0x00a6, NtRaiseHardError, 24 ) \
    SYSCALL_ENTRY( 0x00a7, NtReadFile, 36 ) \
    SYSCALL_ENTRY( 0x00a8, NtReadFileScatter, 36 ) \
    SYSCALL_ENTRY( 0x00a9, NtReadVirtualMemory, 20 ) \
    SYSCALL_ENTRY( 0x00aa, NtRegisterThreadTerminatePort, 4 ) \
    SYSCALL_ENTRY( 0x00ab, NtReleaseKeyedEvent, 16 ) \
    SYSCALL_ENTRY( 0x00ac, NtReleaseMutant, 8 ) \
    SYSCALL_ENTRY( 0x00ad, NtReleaseSemaphore, 12 ) \
    SYSCALL_ENTRY( 0x00ae, NtRemoveIoCompletion, 20 ) \
    SYSCALL_ENTRY( 0x00af, NtRemoveIoCompletionEx, 24 ) \
    SYSCALL_ENTRY( 0x00b0, NtRemoveProcessDebug, 8 ) \
    SYSCALL_ENTRY( 0x00b1, NtRenameKey, 8 ) \
    SYSCALL_ENTRY( 0x00b2, NtReplaceKey, 12 ) \
    SYSCALL_ENTRY( 0x00b3, NtReplyWaitReceivePort, 16 ) \
    SYSCALL_ENTRY( 0x00b4, NtRequestWaitReplyPort, 12 ) \
    SYSCALL_ENTRY( 0x00b5, NtResetEvent, 8 ) \
    SYSCALL_ENTRY( 0x00b6, NtResetWriteWatch, 12 ) \
    SYSCALL_ENTRY( 0x00b7, NtRestoreKey, 12 ) \
    SYSCALL_ENTRY( 0x00b8, NtResumeProcess, 4 ) \
    SYSCALL_ENTRY( 0x00b9, NtResumeThread, 8 ) \
    SYSCALL_ENTRY( 0x00ba, NtRollbackTransaction, 8 ) \
    SYSCALL_ENTRY( 0x00bb, NtSaveKey, 8 ) \
    SYSCALL_ENTRY( 0x00bc, NtSecureConnectPort, 36 ) \
    SYSCALL_ENTRY( 0x00bd, NtSetContextThread, 8 ) \
    SYSCALL_ENTRY( 0x00be, NtSetDebugFilterState, 12 ) \
    SYSCALL_ENTRY( 0x00bf, NtSetDefaultLocale, 8 ) \
    SYSCALL_ENTRY( 0x00c0, NtSetDefaultUILanguage, 4 ) \
    SYSCALL_ENTRY( 0x00c1, NtSetEaFile, 16 ) \
    SYSCALL_ENTRY( 0x00c2, NtSetEvent, 8 ) \
    SYSCALL_ENTRY( 0x00c3, NtSetInformationDebugObject, 20 ) \
    SYSCALL_ENTRY( 0x00c4, NtSetInformationFile, 20 ) \
    SYSCALL_ENTRY( 0x00c5, NtSetInformationJobObject, 16 ) \
    SYSCALL_ENTRY( 0x00c6, NtSetInformationKey, 16 ) \
    SYSCALL_ENTRY( 0x00c7, NtSetInformationObject, 16 ) \
    SYSCALL_ENTRY( 0x00c8, NtSetInformationProcess, 16 ) \
    SYSCALL_ENTRY( 0x00c9, NtSetInformationThread, 16 ) \
    SYSCALL_ENTRY( 0x00ca, NtSetInformationToken, 16 ) \
    SYSCALL_ENTRY( 0x00cb, NtSetInformationVirtualMemory, 24 ) \
    SYSCALL_ENTRY( 0x00cc, NtSetIntervalProfile, 8 ) \
    SYSCALL_ENTRY( 0x00cd, NtSetIoCompletion, 20 ) \
    SYSCALL_ENTRY( 0x00ce, NtSetIoCompletionEx, 24 ) \
    SYSCALL_ENTRY( 0x00cf, NtSetLdtEntries, 24 ) \
    SYSCALL_ENTRY( 0x00d0, NtSetSecurityObject, 12 ) \
    SYSCALL_ENTRY( 0x00d1, NtSetSystemInformation, 12 ) \
    SYSCALL_ENTRY( 0x00d2, NtSetSystemTime, 8 ) \
    SYSCALL_ENTRY( 0x00d3, NtSetThreadExecutionState, 8 ) \
    SYSCALL_ENTRY( 0x00d4, NtSetTimer, 28 ) \
    SYSCALL_ENTRY( 0x00d5, NtSetTimerResolution, 12 ) \
    SYSCALL_ENTRY( 0x00d6, NtSetValueKey, 24 ) \
    SYSCALL_ENTRY( 0x00d7, NtSetVolumeInformationFile, 20 ) \
    SYSCALL_ENTRY( 0x00d8, NtShutdownSystem, 4 ) \
    SYSCALL_ENTRY( 0x00d9, NtSignalAndWaitForSingleObject, 16 ) \
    SYSCALL_ENTRY( 0x00da, NtSuspendProcess, 4 ) \
    SYSCALL_ENTRY( 0x00db, NtSuspendThread, 8 ) \
    SYSCALL_ENTRY( 0x00dc, NtSystemDebugControl, 24 ) \
    SYSCALL_ENTRY( 0x00dd, NtTerminateJobObject, 8 ) \
    SYSCALL_ENTRY( 0x00de, NtTerminateProcess, 8 ) \
    SYSCALL_ENTRY( 0x00df, NtTerminateThread, 8 ) \
    SYSCALL_ENTRY( 0x00e0, NtTestAlert, 0 ) \
    SYSCALL_ENTRY( 0x00e1, NtTraceControl, 24 ) \
    SYSCALL_ENTRY( 0x00e2, NtUnloadDriver, 4 ) \
    SYSCALL_ENTRY( 0x00e3, NtUnloadKey, 4 ) \
    SYSCALL_ENTRY( 0x00e4, NtUnlockFile, 20 ) \
    SYSCALL_ENTRY( 0x00e5, NtUnlockVirtualMemory, 16 ) \
    SYSCALL_ENTRY( 0x00e6, NtUnmapViewOfSection, 8 ) \
    SYSCALL_ENTRY( 0x00e7, NtUnmapViewOfSectionEx, 12 ) \
    SYSCALL_ENTRY( 0x00e8, NtWaitForAlertByThreadId, 8 ) \
    SYSCALL_ENTRY( 0x00e9, NtWaitForDebugEvent, 16 ) \
    SYSCALL_ENTRY( 0x00ea, NtWaitForKeyedEvent, 16 ) \
    SYSCALL_ENTRY( 0x00eb, NtWaitForMultipleObjects, 20 ) \
    SYSCALL_ENTRY( 0x00ec, NtWaitForSingleObject, 12 ) \
    SYSCALL_ENTRY( 0x00ed, NtWow64AllocateVirtualMemory64, 28 ) \
    SYSCALL_ENTRY( 0x00ee, NtWow64GetNativeSystemInformation, 16 ) \
    SYSCALL_ENTRY( 0x00ef, NtWow64IsProcessorFeaturePresent, 4 ) \
    SYSCALL_ENTRY( 0x00f0, NtWow64QueryInformationProcess64, 20 ) \
    SYSCALL_ENTRY( 0x00f1, NtWow64ReadVirtualMemory64, 28 ) \
    SYSCALL_ENTRY( 0x00f2, NtWow64WriteVirtualMemory64, 28 ) \
    SYSCALL_ENTRY( 0x00f3, NtWriteFile, 36 ) \
    SYSCALL_ENTRY( 0x00f4, NtWriteFileGather, 36 ) \
    SYSCALL_ENTRY( 0x00f5, NtWriteVirtualMemory, 20 ) \
    SYSCALL_ENTRY( 0x00f6, NtYieldExecution, 0 ) \
    SYSCALL_ENTRY( 0x00f7, wine_nt_to_unix_file_name, 16 ) \
    SYSCALL_ENTRY( 0x00f8, wine_unix_to_nt_file_name, 12 )

#define ALL_SYSCALLS64 \
    SYSCALL_ENTRY( 0x0000, NtAcceptConnectPort, 48 ) \
    SYSCALL_ENTRY( 0x0001, NtAccessCheck, 64 ) \
    SYSCALL_ENTRY( 0x0002, NtAccessCheckAndAuditAlarm, 88 ) \
    SYSCALL_ENTRY( 0x0003, NtAddAtom, 24 ) \
    SYSCALL_ENTRY( 0x0004, NtAdjustGroupsToken, 48 ) \
    SYSCALL_ENTRY( 0x0005, NtAdjustPrivilegesToken, 48 ) \
    SYSCALL_ENTRY( 0x0006, NtAlertResumeThread, 16 ) \
    SYSCALL_ENTRY( 0x0007, NtAlertThread, 8 ) \
    SYSCALL_ENTRY( 0x0008, NtAlertThreadByThreadId, 8 ) \
    SYSCALL_ENTRY( 0x0009, NtAllocateLocallyUniqueId, 8 ) \
    SYSCALL_ENTRY( 0x000a, NtAllocateReserveObject, 24 ) \
    SYSCALL_ENTRY( 0x000b, NtAllocateUuids, 32 ) \
    SYSCALL_ENTRY( 0x000c, NtAllocateVirtualMemory, 48 ) \
    SYSCALL_ENTRY( 0x000d, NtAllocateVirtualMemoryEx, 56 ) \
    SYSCALL_ENTRY( 0x000e, NtAreMappedFilesTheSame, 16 ) \
    SYSCALL_ENTRY( 0x000f, NtAssignProcessToJobObject, 16 ) \
    SYSCALL_ENTRY( 0x0010, NtCallbackReturn, 24 ) \
    SYSCALL_ENTRY( 0x0011, NtCancelIoFile, 16 ) \
    SYSCALL_ENTRY( 0x0012, NtCancelIoFileEx, 24 ) \
    SYSCALL_ENTRY( 0x0013, NtCancelSynchronousIoFile, 24 ) \
    SYSCALL_ENTRY( 0x0014, NtCancelTimer, 16 ) \
    SYSCALL_ENTRY( 0x0015, NtClearEvent, 8 ) \
    SYSCALL_ENTRY( 0x0016, NtClose, 8 ) \
    SYSCALL_ENTRY( 0x0017, NtCommitTransaction, 16 ) \
    SYSCALL_ENTRY( 0x0018, NtCompareObjects, 16 ) \
    SYSCALL_ENTRY( 0x0019, NtCompareTokens, 24 ) \
    SYSCALL_ENTRY( 0x001a, NtCompleteConnectPort, 8 ) \
    SYSCALL_ENTRY( 0x001b, NtConnectPort, 64 ) \
    SYSCALL_ENTRY( 0x001c, NtContinue, 16 ) \
    SYSCALL_ENTRY( 0x001d, NtContinueEx, 16 ) \
    SYSCALL_ENTRY( 0x001e, NtConvertBetweenAuxiliaryCounterAndPerformanceCounter, 32 ) \
    SYSCALL_ENTRY( 0x001f, NtCreateDebugObject, 32 ) \
    SYSCALL_ENTRY( 0x0020, NtCreateDirectoryObject, 24 ) \
    SYSCALL_ENTRY( 0x0021, NtCreateEvent, 40 ) \
    SYSCALL_ENTRY( 0x0022, NtCreateFile, 88 ) \
    SYSCALL_ENTRY( 0x0023, NtCreateIoCompletion, 32 ) \
    SYSCALL_ENTRY( 0x0024, NtCreateJobObject, 24 ) \
    SYSCALL_ENTRY( 0x0025, NtCreateKey, 56 ) \
    SYSCALL_ENTRY( 0x0026, NtCreateKeyTransacted, 64 ) \
    SYSCALL_ENTRY( 0x0027, NtCreateKeyedEvent, 32 ) \
    SYSCALL_ENTRY( 0x0028, NtCreateLowBoxToken, 72 ) \
    SYSCALL_ENTRY( 0x0029, NtCreateMailslotFile, 64 ) \
    SYSCALL_ENTRY( 0x002a, NtCreateMutant, 32 ) \
    SYSCALL_ENTRY( 0x002b, NtCreateNamedPipeFile, 112 ) \
    SYSCALL_ENTRY( 0x002c, NtCreatePagingFile, 32 ) \
    SYSCALL_ENTRY( 0x002d, NtCreatePort, 40 ) \
    SYSCALL_ENTRY( 0x002e, NtCreateSection, 56 ) \
    SYSCALL_ENTRY( 0x002f, NtCreateSemaphore, 40 ) \
    SYSCALL_ENTRY( 0x0030, NtCreateSymbolicLinkObject, 32 ) \
    SYSCALL_ENTRY( 0x0031, NtCreateThread, 64 ) \
    SYSCALL_ENTRY( 0x0032, NtCreateThreadEx, 88 ) \
    SYSCALL_ENTRY( 0x0033, NtCreateTimer, 32 ) \
    SYSCALL_ENTRY( 0x0034, NtCreateToken, 104 ) \
    SYSCALL_ENTRY( 0x0035, NtCreateTransaction, 80 ) \
    SYSCALL_ENTRY( 0x0036, NtCreateUserProcess, 88 ) \
    SYSCALL_ENTRY( 0x0037, NtDebugActiveProcess, 16 ) \
    SYSCALL_ENTRY( 0x0038, NtDebugContinue, 24 ) \
    SYSCALL_ENTRY( 0x0039, NtDelayExecution, 16 ) \
    SYSCALL_ENTRY( 0x003a, NtDeleteAtom, 8 ) \
    SYSCALL_ENTRY( 0x003b, NtDeleteFile, 8 ) \
    SYSCALL_ENTRY( 0x003c, NtDeleteKey, 8 ) \
    SYSCALL_ENTRY( 0x003d, NtDeleteValueKey, 16 ) \
    SYSCALL_ENTRY( 0x003e, NtDeviceIoControlFile, 80 ) \
    SYSCALL_ENTRY( 0x003f, NtDisplayString, 8 ) \
    SYSCALL_ENTRY( 0x0040, NtDuplicateObject, 56 ) \
    SYSCALL_ENTRY( 0x0041, NtDuplicateToken, 48 ) \
    SYSCALL_ENTRY( 0x0042, NtEnumerateKey, 48 ) \
    SYSCALL_ENTRY( 0x0043, NtEnumerateValueKey, 48 ) \
    SYSCALL_ENTRY( 0x0044, NtFilterToken, 48 ) \
    SYSCALL_ENTRY( 0x0045, NtFindAtom, 24 ) \
    SYSCALL_ENTRY( 0x0046, NtFlushBuffersFile, 16 ) \
    SYSCALL_ENTRY( 0x0047, NtFlushBuffersFileEx, 40 ) \
    SYSCALL_ENTRY( 0x0048, NtFlushInstructionCache, 24 ) \
    SYSCALL_ENTRY( 0x0049, NtFlushKey, 8 ) \
    SYSCALL_ENTRY( 0x004a, NtFlushProcessWriteBuffers, 0 ) \
    SYSCALL_ENTRY( 0x004b, NtFlushVirtualMemory, 32 ) \
    SYSCALL_ENTRY( 0x004c, NtFreeVirtualMemory, 32 ) \
    SYSCALL_ENTRY( 0x004d, NtFsControlFile, 80 ) \
    SYSCALL_ENTRY( 0x004e, NtGetContextThread, 16 ) \
    SYSCALL_ENTRY( 0x004f, NtGetCurrentProcessorNumber, 0 ) \
    SYSCALL_ENTRY( 0x0050, NtGetNextProcess, 40 ) \
    SYSCALL_ENTRY( 0x0051, NtGetNextThread, 48 ) \
    SYSCALL_ENTRY( 0x0052, NtGetNlsSectionPtr, 40 ) \
    SYSCALL_ENTRY( 0x0053, NtGetWriteWatch, 56 ) \
    SYSCALL_ENTRY( 0x0054, NtImpersonateAnonymousToken, 8 ) \
    SYSCALL_ENTRY( 0x0055, NtInitializeNlsFiles, 24 ) \
    SYSCALL_ENTRY( 0x0056, NtInitiatePowerAction, 32 ) \
    SYSCALL_ENTRY( 0x0057, NtIsProcessInJob, 16 ) \
    SYSCALL_ENTRY( 0x0058, NtListenPort, 16 ) \
    SYSCALL_ENTRY( 0x0059, NtLoadDriver, 8 ) \
    SYSCALL_ENTRY( 0x005a, NtLoadKey, 16 ) \
    SYSCALL_ENTRY( 0x005b, NtLoadKey2, 24 ) \
    SYSCALL_ENTRY( 0x005c, NtLoadKeyEx, 64 ) \
    SYSCALL_ENTRY( 0x005d, NtLockFile, 80 ) \
    SYSCALL_ENTRY( 0x005e, NtLockVirtualMemory, 32 ) \
    SYSCALL_ENTRY( 0x005f, NtMakePermanentObject, 8 ) \
    SYSCALL_ENTRY( 0x0060, NtMakeTemporaryObject, 8 ) \
    SYSCALL_ENTRY( 0x0061, NtMapViewOfSection, 80 ) \
    SYSCALL_ENTRY( 0x0062, NtMapViewOfSectionEx, 72 ) \
    SYSCALL_ENTRY( 0x0063, NtNotifyChangeDirectoryFile, 72 ) \
    SYSCALL_ENTRY( 0x0064, NtNotifyChangeKey, 80 ) \
    SYSCALL_ENTRY( 0x0065, NtNotifyChangeMultipleKeys, 96 ) \
    SYSCALL_ENTRY( 0x0066, NtOpenDirectoryObject, 24 ) \
    SYSCALL_ENTRY( 0x0067, NtOpenEvent, 24 ) \
    SYSCALL_ENTRY( 0x0068, NtOpenFile, 48 ) \
    SYSCALL_ENTRY( 0x0069, NtOpenIoCompletion, 24 ) \
    SYSCALL_ENTRY( 0x006a, NtOpenJobObject, 24 ) \
    SYSCALL_ENTRY( 0x006b, NtOpenKey, 24 ) \
    SYSCALL_ENTRY( 0x006c, NtOpenKeyEx, 32 ) \
    SYSCALL_ENTRY( 0x006d, NtOpenKeyTransacted, 32 ) \
    SYSCALL_ENTRY( 0x006e, NtOpenKeyTransactedEx, 40 ) \
    SYSCALL_ENTRY( 0x006f, NtOpenKeyedEvent, 24 ) \
    SYSCALL_ENTRY( 0x0070, NtOpenMutant, 24 ) \
    SYSCALL_ENTRY( 0x0071, NtOpenProcess, 32 ) \
    SYSCALL_ENTRY( 0x0072, NtOpenProcessToken, 24 ) \
    SYSCALL_ENTRY( 0x0073, NtOpenProcessTokenEx, 32 ) \
    SYSCALL_ENTRY( 0x0074, NtOpenSection, 24 ) \
    SYSCALL_ENTRY( 0x0075, NtOpenSemaphore, 24 ) \
    SYSCALL_ENTRY( 0x0076, NtOpenSymbolicLinkObject, 24 ) \
    SYSCALL_ENTRY( 0x0077, NtOpenThread, 32 ) \
    SYSCALL_ENTRY( 0x0078, NtOpenThreadToken, 32 ) \
    SYSCALL_ENTRY( 0x0079, NtOpenThreadTokenEx, 40 ) \
    SYSCALL_ENTRY( 0x007a, NtOpenTimer, 24 ) \
    SYSCALL_ENTRY( 0x007b, NtPowerInformation, 40 ) \
    SYSCALL_ENTRY( 0x007c, NtPrivilegeCheck, 24 ) \
    SYSCALL_ENTRY( 0x007d, NtProtectVirtualMemory, 40 ) \
    SYSCALL_ENTRY( 0x007e, NtPulseEvent, 16 ) \
    SYSCALL_ENTRY( 0x007f, NtQueryAttributesFile, 16 ) \
    SYSCALL_ENTRY( 0x0080, NtQueryDefaultLocale, 16 ) \
    SYSCALL_ENTRY( 0x0081, NtQueryDefaultUILanguage, 8 ) \
    SYSCALL_ENTRY( 0x0082, NtQueryDirectoryFile, 88 ) \
    SYSCALL_ENTRY( 0x0083, NtQueryDirectoryObject, 56 ) \
    SYSCALL_ENTRY( 0x0084, NtQueryEaFile, 72 ) \
    SYSCALL_ENTRY( 0x0085, NtQueryEvent, 40 ) \
    SYSCALL_ENTRY( 0x0086, NtQueryFullAttributesFile, 16 ) \
    SYSCALL_ENTRY( 0x0087, NtQueryInformationAtom, 40 ) \
    SYSCALL_ENTRY( 0x0088, NtQueryInformationFile, 40 ) \
    SYSCALL_ENTRY( 0x0089, NtQueryInformationJobObject, 40 ) \
    SYSCALL_ENTRY( 0x008a, NtQueryInformationProcess, 40 ) \
    SYSCALL_ENTRY( 0x008b, NtQueryInformationThread, 40 ) \
    SYSCALL_ENTRY( 0x008c, NtQueryInformationToken, 40 ) \
    SYSCALL_ENTRY( 0x008d, NtQueryInstallUILanguage, 8 ) \
    SYSCALL_ENTRY( 0x008e, NtQueryIoCompletion, 40 ) \
    SYSCALL_ENTRY( 0x008f, NtQueryKey, 40 ) \
    SYSCALL_ENTRY( 0x0090, NtQueryLicenseValue, 40 ) \
    SYSCALL_ENTRY( 0x0091, NtQueryMultipleValueKey, 48 ) \
    SYSCALL_ENTRY( 0x0092, NtQueryMutant, 40 ) \
    SYSCALL_ENTRY( 0x0093, NtQueryObject, 40 ) \
    SYSCALL_ENTRY( 0x0094, NtQueryPerformanceCounter, 16 ) \
    SYSCALL_ENTRY( 0x0095, NtQuerySection, 40 ) \
    SYSCALL_ENTRY( 0x0096, NtQuerySecurityObject, 40 ) \
    SYSCALL_ENTRY( 0x0097, NtQuerySemaphore, 40 ) \
    SYSCALL_ENTRY( 0x0098, NtQuerySymbolicLinkObject, 24 ) \
    SYSCALL_ENTRY( 0x0099, NtQuerySystemEnvironmentValue, 32 ) \
    SYSCALL_ENTRY( 0x009a, NtQuerySystemEnvironmentValueEx, 40 ) \
    SYSCALL_ENTRY( 0x009b, NtQuerySystemInformation, 32 ) \
    SYSCALL_ENTRY( 0x009c, NtQuerySystemInformationEx, 48 ) \
    SYSCALL_ENTRY( 0x009d, NtQuerySystemTime, 8 ) \
    SYSCALL_ENTRY( 0x009e, NtQueryTimer, 40 ) \
    SYSCALL_ENTRY( 0x009f, NtQueryTimerResolution, 24 ) \
    SYSCALL_ENTRY( 0x00a0, NtQueryValueKey, 48 ) \
    SYSCALL_ENTRY( 0x00a1, NtQueryVirtualMemory, 48 ) \
    SYSCALL_ENTRY( 0x00a2, NtQueryVolumeInformationFile, 40 ) \
    SYSCALL_ENTRY( 0x00a3, NtQueueApcThread, 40 ) \
    SYSCALL_ENTRY( 0x00a4, NtQueueApcThreadEx, 48 ) \
    SYSCALL_ENTRY( 0x00a5, NtRaiseException, 24 ) \
    SYSCALL_ENTRY( 0x00a6, NtRaiseHardError, 48 ) \
    SYSCALL_ENTRY( 0x00a7, NtReadFile, 72 ) \
    SYSCALL_ENTRY( 0x00a8, NtReadFileScatter, 72 ) \
    SYSCALL_ENTRY( 0x00a9, NtReadVirtualMemory, 40 ) \
    SYSCALL_ENTRY( 0x00aa, NtRegisterThreadTerminatePort, 8 ) \
    SYSCALL_ENTRY( 0x00ab, NtReleaseKeyedEvent, 32 ) \
    SYSCALL_ENTRY( 0x00ac, NtReleaseMutant, 16 ) \
    SYSCALL_ENTRY( 0x00ad, NtReleaseSemaphore, 24 ) \
    SYSCALL_ENTRY( 0x00ae, NtRemoveIoCompletion, 40 ) \
    SYSCALL_ENTRY( 0x00af, NtRemoveIoCompletionEx, 48 ) \
    SYSCALL_ENTRY( 0x00b0, NtRemoveProcessDebug, 16 ) \
    SYSCALL_ENTRY( 0x00b1, NtRenameKey, 16 ) \
    SYSCALL_ENTRY( 0x00b2, NtReplaceKey, 24 ) \
    SYSCALL_ENTRY( 0x00b3, NtReplyWaitReceivePort, 32 ) \
    SYSCALL_ENTRY( 0x00b4, NtRequestWaitReplyPort, 24 ) \
    SYSCALL_ENTRY( 0x00b5, NtResetEvent, 16 ) \
    SYSCALL_ENTRY( 0x00b6, NtResetWriteWatch, 24 ) \
    SYSCALL_ENTRY( 0x00b7, NtRestoreKey, 24 ) \
    SYSCALL_ENTRY( 0x00b8, NtResumeProcess, 8 ) \
    SYSCALL_ENTRY( 0x00b9, NtResumeThread, 16 ) \
    SYSCALL_ENTRY( 0x00ba, NtRollbackTransaction, 16 ) \
    SYSCALL_ENTRY( 0x00bb, NtSaveKey, 16 ) \
    SYSCALL_ENTRY( 0x00bc, NtSecureConnectPort, 72 ) \
    SYSCALL_ENTRY( 0x00bd, NtSetContextThread, 16 ) \
    SYSCALL_ENTRY( 0x00be, NtSetDebugFilterState, 24 ) \
    SYSCALL_ENTRY( 0x00bf, NtSetDefaultLocale, 16 ) \
    SYSCALL_ENTRY( 0x00c0, NtSetDefaultUILanguage, 8 ) \
    SYSCALL_ENTRY( 0x00c1, NtSetEaFile, 32 ) \
    SYSCALL_ENTRY( 0x00c2, NtSetEvent, 16 ) \
    SYSCALL_ENTRY( 0x00c3, NtSetInformationDebugObject, 40 ) \
    SYSCALL_ENTRY( 0x00c4, NtSetInformationFile, 40 ) \
    SYSCALL_ENTRY( 0x00c5, NtSetInformationJobObject, 32 ) \
    SYSCALL_ENTRY( 0x00c6, NtSetInformationKey, 32 ) \
    SYSCALL_ENTRY( 0x00c7, NtSetInformationObject, 32 ) \
    SYSCALL_ENTRY( 0x00c8, NtSetInformationProcess, 32 ) \
    SYSCALL_ENTRY( 0x00c9, NtSetInformationThread, 32 ) \
    SYSCALL_ENTRY( 0x00ca, NtSetInformationToken, 32 ) \
    SYSCALL_ENTRY( 0x00cb, NtSetInformationVirtualMemory, 48 ) \
    SYSCALL_ENTRY( 0x00cc, NtSetIntervalProfile, 16 ) \
    SYSCALL_ENTRY( 0x00cd, NtSetIoCompletion, 40 ) \
    SYSCALL_ENTRY( 0x00ce, NtSetIoCompletionEx, 48 ) \
    SYSCALL_ENTRY( 0x00cf, NtSetLdtEntries, 32 ) \
    SYSCALL_ENTRY( 0x00d0, NtSetSecurityObject, 24 ) \
    SYSCALL_ENTRY( 0x00d1, NtSetSystemInformation, 24 ) \
    SYSCALL_ENTRY( 0x00d2, NtSetSystemTime, 16 ) \
    SYSCALL_ENTRY( 0x00d3, NtSetThreadExecutionState, 16 ) \
    SYSCALL_ENTRY( 0x00d4, NtSetTimer, 56 ) \
    SYSCALL_ENTRY( 0x00d5, NtSetTimerResolution, 24 ) \
    SYSCALL_ENTRY( 0x00d6, NtSetValueKey, 48 ) \
    SYSCALL_ENTRY( 0x00d7, NtSetVolumeInformationFile, 40 ) \
    SYSCALL_ENTRY( 0x00d8, NtShutdownSystem, 8 ) \
    SYSCALL_ENTRY( 0x00d9, NtSignalAndWaitForSingleObject, 32 ) \
    SYSCALL_ENTRY( 0x00da, NtSuspendProcess, 8 ) \
    SYSCALL_ENTRY( 0x00db, NtSuspendThread, 16 ) \
    SYSCALL_ENTRY( 0x00dc, NtSystemDebugControl, 48 ) \
    SYSCALL_ENTRY( 0x00dd, NtTerminateJobObject, 16 ) \
    SYSCALL_ENTRY( 0x00de, NtTerminateProcess, 16 ) \
    SYSCALL_ENTRY( 0x00df, NtTerminateThread, 16 ) \
    SYSCALL_ENTRY( 0x00e0, NtTestAlert, 0 ) \
    SYSCALL_ENTRY( 0x00e1, NtTraceControl, 48 ) \
    SYSCALL_ENTRY( 0x00e2, NtUnloadDriver, 8 ) \
    SYSCALL_ENTRY( 0x00e3, NtUnloadKey, 8 ) \
    SYSCALL_ENTRY( 0x00e4, NtUnlockFile, 40 ) \
    SYSCALL_ENTRY( 0x00e5, NtUnlockVirtualMemory, 32 ) \
    SYSCALL_ENTRY( 0x00e6, NtUnmapViewOfSection, 16 ) \
    SYSCALL_ENTRY( 0x00e7, NtUnmapViewOfSectionEx, 24 ) \
    SYSCALL_ENTRY( 0x00e8, NtWaitForAlertByThreadId, 16 ) \
    SYSCALL_ENTRY( 0x00e9, NtWaitForDebugEvent, 32 ) \
    SYSCALL_ENTRY( 0x00ea, NtWaitForKeyedEvent, 32 ) \
    SYSCALL_ENTRY( 0x00eb, NtWaitForMultipleObjects, 40 ) \
    SYSCALL_ENTRY( 0x00ec, NtWaitForSingleObject, 24 ) \
    SYSCALL_ENTRY( 0x00ed, NtWriteFile, 72 ) \
    SYSCALL_ENTRY( 0x00ee, NtWriteFileGather, 72 ) \
    SYSCALL_ENTRY( 0x00ef, NtWriteVirtualMemory, 40 ) \
    SYSCALL_ENTRY( 0x00f0, NtYieldExecution, 0 ) \
    SYSCALL_ENTRY( 0x00f1, wine_nt_to_unix_file_name, 32 ) \
    SYSCALL_ENTRY( 0x00f2, wine_unix_to_nt_file_name, 24 )
