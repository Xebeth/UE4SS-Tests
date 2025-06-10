#include <format>
#include <windows.h>
#include <gtest/gtest.h>

#include <Helpers/String.hpp>
#include <Helpers/SysError.hpp>

using namespace RC;

TEST(Win32SystemErrorsTest1000, Win32ErrorInsufficientPower)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSUFFICIENT_POWER)).c_str(), L"[0x27f] There is not enough power to complete the requested operation.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorMultipleFaultViolation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MULTIPLE_FAULT_VIOLATION)).c_str(), L"[0x280] ERROR_MULTIPLE_FAULT_VIOLATION");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSystemShutdown)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SYSTEM_SHUTDOWN)).c_str(), L"[0x281] The system is in the process of shutting down.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPortNotSet)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PORT_NOT_SET)).c_str(), L"[0x282] An attempt to remove a processes DebugPort was made, but a port was not already associated with the process.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDsVersionCheckFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_VERSION_CHECK_FAILURE)).c_str(), L"[0x283] This version of Windows is not compatible with the behavior version of directory forest, domain or domain controller.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorRangeNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RANGE_NOT_FOUND)).c_str(), L"[0x284] The specified range could not be found in the range list.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNotSafeModeDriver)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SAFE_MODE_DRIVER)).c_str(), L"[0x286] The driver was not loaded because the system is booting into safe mode.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFailedDriverEntry)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FAILED_DRIVER_ENTRY)).c_str(), L"[0x287] The driver was not loaded because it failed its initialization call.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDeviceEnumerationError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEVICE_ENUMERATION_ERROR)).c_str(), L"[0x288] The \"%hs\" encountered an error while applying power or reading the device configuration. This may be caused by a failure of your hardware or by a poor connection.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorMountPointNotResolved)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MOUNT_POINT_NOT_RESOLVED)).c_str(), L"[0x289] The create operation failed because the name contained at least one mount point which resolves to a volume to which the specified device object is not attached.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidDeviceObjectParameter)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_DEVICE_OBJECT_PARAMETER)).c_str(), L"[0x28a] The device object parameter is either not a valid device object or is not attached to the volume specified by the file name.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorMcaOccured)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MCA_OCCURED)).c_str(), L"[0x28b] A Machine Check Error has occurred. Please check the system eventlog for additional information.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDriverDatabaseError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DRIVER_DATABASE_ERROR)).c_str(), L"[0x28c] There was error [%2] processing the driver database.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSystemHiveTooLarge)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SYSTEM_HIVE_TOO_LARGE)).c_str(), L"[0x28d] System hive size has exceeded its limit.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDriverFailedPriorUnload)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DRIVER_FAILED_PRIOR_UNLOAD)).c_str(), L"[0x28e] The driver could not be loaded because a previous version of the driver is still in memory.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorVolsnapPrepareHibernate)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VOLSNAP_PREPARE_HIBERNATE)).c_str(), L"[0x28f] {Volume Shadow Copy Service} Please wait while the Volume Shadow Copy Service prepares volume %hs for hibernation.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorHibernationFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_HIBERNATION_FAILURE)).c_str(), L"[0x290] The system has failed to hibernate (The error code is %hs). Hibernation will be disabled until the system is restarted.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPwdTooLong)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PWD_TOO_LONG)).c_str(), L"[0x291] The password provided is too long to meet the policy of your user account. Please choose a shorter password.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFileSystemLimitation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_SYSTEM_LIMITATION)).c_str(), L"[0x299] The requested operation could not be completed due to a file system limitation");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAssertionFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ASSERTION_FAILURE)).c_str(), L"[0x29c] An assertion failure has occurred.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAcpiError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ACPI_ERROR)).c_str(), L"[0x29d] An error occurred in the ACPI subsystem.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorWowAssertion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WOW_ASSERTION)).c_str(), L"[0x29e] WOW Assertion Error.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPnpBadMpsTable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PNP_BAD_MPS_TABLE)).c_str(), L"[0x29f] A device is missing in the system BIOS MPS table. This device will not be used. Please contact your system vendor for system BIOS update.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPnpTranslationFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PNP_TRANSLATION_FAILED)).c_str(), L"[0x2a0] A translator failed to translate resources.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPnpIrqTranslationFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PNP_IRQ_TRANSLATION_FAILED)).c_str(), L"[0x2a1] A IRQ translator failed to translate resources.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPnpInvalidId)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PNP_INVALID_ID)).c_str(), L"[0x2a2] Driver %2 returned invalid ID for a child device (%3).");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorWakeSystemDebugger)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WAKE_SYSTEM_DEBUGGER)).c_str(), L"[0x2a3] {Kernel Debugger Awakened} the system debugger was awakened by an interrupt.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorHandlesClosed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_HANDLES_CLOSED)).c_str(), L"[0x2a4] {Handles Closed} Handles to objects have been automatically closed as a result of the requested operation.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorExtraneousInformation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EXTRANEOUS_INFORMATION)).c_str(), L"[0x2a5] {Too Much Information} The specified access control list (ACL) contained more information than was expected.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorRxactCommitNecessary)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RXACT_COMMIT_NECESSARY)).c_str(), L"[0x2a6] This warning level status indicates that the transaction state already exists for the registry sub-tree, but that a transaction commit was previously aborted. The commit has NOT been completed, but has not been rolled back either (so it may still be committed if desired).");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorMediaCheck)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MEDIA_CHECK)).c_str(), L"[0x2a7] {Media Changed} The media may have changed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorGuidSubstitutionMade)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_GUID_SUBSTITUTION_MADE)).c_str(), L"[0x2a8] {GUID Substitution} During the translation of a global identifier (GUID) to a Windows security ID (SID), no administratively-defined GUID prefix was found. A substitute prefix was used, which will not compromise system security. However, this may provide a more restrictive access than intended.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorStoppedOnSymlink)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STOPPED_ON_SYMLINK)).c_str(), L"[0x2a9] The create operation stopped after reaching a symbolic link");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorLongjump)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LONGJUMP)).c_str(), L"[0x2aa] A long jump has been executed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPlugplayQueryVetoed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PLUGPLAY_QUERY_VETOED)).c_str(), L"[0x2ab] The Plug and Play query operation was not successful.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorUnwindConsolidate)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNWIND_CONSOLIDATE)).c_str(), L"[0x2ac] A frame consolidation has been executed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorRegistryHiveRecovered)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REGISTRY_HIVE_RECOVERED)).c_str(), L"[0x2ad] {Registry Hive Recovered} Registry hive (file): %hs was corrupted and it has been recovered. Some data might have been lost.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDllMightBeInsecure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DLL_MIGHT_BE_INSECURE)).c_str(), L"[0x2ae] The application is attempting to run executable code from the module %hs. This may be insecure. An alternative, %hs, is available. Should the application use the secure module %hs?");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDllMightBeIncompatible)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DLL_MIGHT_BE_INCOMPATIBLE)).c_str(), L"[0x2af] The application is loading executable code from the module %hs. This is secure, but may be incompatible with previous releases of the operating system. An alternative, %hs, is available. Should the application use the secure module %hs?");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDbgReplyLater)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DBG_REPLY_LATER)).c_str(), L"[0x2b1] Debugger will reply later.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDbgUnableToProvideHandle)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DBG_UNABLE_TO_PROVIDE_HANDLE)).c_str(), L"[0x2b2] Debugger cannot provide handle.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDbgPrintexceptionC)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DBG_PRINTEXCEPTION_C)).c_str(), L"[0x2b6] Debugger printed exception on control C.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDbgRipexception)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DBG_RIPEXCEPTION)).c_str(), L"[0x2b7] Debugger received RIP exception.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorObjectNameExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_OBJECT_NAME_EXISTS)).c_str(), L"[0x2ba] {Object Exists} An attempt was made to create an object and the object name already existed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorThreadWasSuspended)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_THREAD_WAS_SUSPENDED)).c_str(), L"[0x2bb] {Thread Suspended} A thread termination occurred while the thread was suspended. The thread was resumed, and termination proceeded.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorImageNotAtBase)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IMAGE_NOT_AT_BASE)).c_str(), L"[0x2bc] {Image Relocated} An image file could not be mapped at the address specified in the image file. Local fixups must be performed on this image.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorRxactStateCreated)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RXACT_STATE_CREATED)).c_str(), L"[0x2bd] This informational level status indicates that a specified registry sub-tree transaction state did not yet exist and had to be created.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorBadCurrentDirectory)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_CURRENT_DIRECTORY)).c_str(), L"[0x2bf] {Invalid Current Directory} The process cannot switch to the startup current directory %hs. Select OK to set current directory to %hs, or select CANCEL to exit.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFtReadRecoveryFromBackup)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FT_READ_RECOVERY_FROM_BACKUP)).c_str(), L"[0x2c0] {Redundant Read} To satisfy a read request, the NT fault-tolerant file system successfully read the requested data from a redundant copy. This was done because the file system encountered a failure on a member of the fault-tolerant volume, but was unable to reassign the failing area of the device.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFtWriteRecovery)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FT_WRITE_RECOVERY)).c_str(), L"[0x2c1] {Redundant Write} To satisfy a write request, the NT fault-tolerant file system successfully wrote a redundant copy of the information. This was done because the file system encountered a failure on a member of the fault-tolerant volume, but was not able to reassign the failing area of the device.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorImageMachineTypeMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IMAGE_MACHINE_TYPE_MISMATCH)).c_str(), L"[0x2c2] {Machine Type Mismatch} The image file %hs is valid, but is for a machine type other than the current machine. Select OK to continue, or CANCEL to fail the DLL load.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorReceivePartial)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RECEIVE_PARTIAL)).c_str(), L"[0x2c3] {Partial Data Received} The network transport returned partial data to its client. The remaining data will be sent later.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorReceiveExpedited)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RECEIVE_EXPEDITED)).c_str(), L"[0x2c4] {Expedited Data Received} The network transport returned data to its client that was marked as expedited by the remote system.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorReceivePartialExpedited)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RECEIVE_PARTIAL_EXPEDITED)).c_str(), L"[0x2c5] {Partial Expedited Data Received} The network transport returned partial data to its client and this data was marked as expedited by the remote system. The remaining data will be sent later.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorEventDone)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVENT_DONE)).c_str(), L"[0x2c6] {TDI Event Done} The TDI indication has completed successfully.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorEventPending)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVENT_PENDING)).c_str(), L"[0x2c7] {TDI Event Pending} The TDI indication has entered the pending state.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCheckingFileSystem)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CHECKING_FILE_SYSTEM)).c_str(), L"[0x2c8] Checking file system on %wZ");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFatalAppExit)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FATAL_APP_EXIT)).c_str(), L"[0x2c9] {Fatal Application Exit} %hs");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPredefinedHandle)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PREDEFINED_HANDLE)).c_str(), L"[0x2ca] The specified registry key is referenced by a predefined handle.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorWasUnlocked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WAS_UNLOCKED)).c_str(), L"[0x2cb] {Page Unlocked} The page protection of a locked page was changed to 'No Access' and the page was unlocked from memory and from the process.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceNotification)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_NOTIFICATION)).c_str(), L"[0x2cc] %hs");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorWasLocked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WAS_LOCKED)).c_str(), L"[0x2cd] {Page Locked} One of the pages to lock was already locked.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorLogHardError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_HARD_ERROR)).c_str(), L"[0x2ce] Application popup: %1 : %2");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAlreadyWin32)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ALREADY_WIN32)).c_str(), L"[0x2cf] ERROR_ALREADY_WIN32");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorImageMachineTypeMismatchExe)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IMAGE_MACHINE_TYPE_MISMATCH_EXE)).c_str(), L"[0x2d0] {Machine Type Mismatch} The image file %hs is valid, but is for a machine type other than the current machine.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoYieldPerformed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_YIELD_PERFORMED)).c_str(), L"[0x2d1] A yield execution was performed and no thread was available to run.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorTimerResumeIgnored)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TIMER_RESUME_IGNORED)).c_str(), L"[0x2d2] The resumable flag to a timer API was ignored.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorArbitrationUnhandled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ARBITRATION_UNHANDLED)).c_str(), L"[0x2d3] The arbiter has deferred arbitration of these resources to its parent");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCardbusNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CARDBUS_NOT_SUPPORTED)).c_str(), L"[0x2d4] The inserted CardBus device cannot be started because of a configuration error on \"%hs\".");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorMpProcessorMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MP_PROCESSOR_MISMATCH)).c_str(), L"[0x2d5] The CPUs in this multiprocessor system are not all the same revision level. To use all processors the operating system restricts itself to the features of the least capable processor in the system. Should problems occur with this system, contact the CPU manufacturer to see if this mix of processors is supported.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorHibernated)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_HIBERNATED)).c_str(), L"[0x2d6] The system was put into hibernation.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorResumeHibernation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RESUME_HIBERNATION)).c_str(), L"[0x2d7] The system was resumed from hibernation.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFirmwareUpdated)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FIRMWARE_UPDATED)).c_str(), L"[0x2d8] Windows has detected that the system firmware (BIOS) was updated [previous firmware date = %2, current firmware date %3].");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDriversLeakingLockedPages)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DRIVERS_LEAKING_LOCKED_PAGES)).c_str(), L"[0x2d9] A device driver is leaking locked I/O pages causing system degradation. The system has automatically enabled tracking code in order to try and catch the culprit.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorWakeSystem)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WAKE_SYSTEM)).c_str(), L"[0x2da] The system has awoken");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorWait1)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WAIT_1)).c_str(), L"[0x2db] ERROR_WAIT_1");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorWait2)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WAIT_2)).c_str(), L"[0x2dc] ERROR_WAIT_2");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorWait3)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WAIT_3)).c_str(), L"[0x2dd] ERROR_WAIT_3");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorWait63)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WAIT_63)).c_str(), L"[0x2de] ERROR_WAIT_63");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAbandonedWait63)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ABANDONED_WAIT_63)).c_str(), L"[0x2e0] ERROR_ABANDONED_WAIT_63");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorKernelApc)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_KERNEL_APC)).c_str(), L"[0x2e2] ERROR_KERNEL_APC");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAlerted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ALERTED)).c_str(), L"[0x2e3] ERROR_ALERTED");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorElevationRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ELEVATION_REQUIRED)).c_str(), L"[0x2e4] The requested operation requires elevation.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorReparse)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REPARSE)).c_str(), L"[0x2e5] A reparse should be performed by the Object Manager since the name of the file resulted in a symbolic link.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorOplockBreakInProgress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_OPLOCK_BREAK_IN_PROGRESS)).c_str(), L"[0x2e6] An open/create operation completed while an oplock break is underway.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorVolumeMounted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VOLUME_MOUNTED)).c_str(), L"[0x2e7] A new volume has been mounted by a file system.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorRxactCommitted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RXACT_COMMITTED)).c_str(), L"[0x2e8] This success level status indicates that the transaction state already exists for the registry sub-tree, but that a transaction commit was previously aborted. The commit has now been completed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNotifyCleanup)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOTIFY_CLEANUP)).c_str(), L"[0x2e9] This indicates that a notify change request has been completed due to closing the handle which made the notify change request.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPrimaryTransportConnectFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PRIMARY_TRANSPORT_CONNECT_FAILED)).c_str(), L"[0x2ea] {Connect Failure on Primary Transport} An attempt was made to connect to the remote server %hs on the primary transport, but the connection failed. The computer WAS able to connect on a secondary transport.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPageFaultTransition)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PAGE_FAULT_TRANSITION)).c_str(), L"[0x2eb] Page fault was a transition fault.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPageFaultDemandZero)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PAGE_FAULT_DEMAND_ZERO)).c_str(), L"[0x2ec] Page fault was a demand zero fault.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPageFaultCopyOnWrite)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PAGE_FAULT_COPY_ON_WRITE)).c_str(), L"[0x2ed] Page fault was a demand zero fault.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPageFaultGuardPage)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PAGE_FAULT_GUARD_PAGE)).c_str(), L"[0x2ee] Page fault was a demand zero fault.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPageFaultPagingFile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PAGE_FAULT_PAGING_FILE)).c_str(), L"[0x2ef] Page fault was satisfied by reading from a secondary storage device.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCachePageLocked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CACHE_PAGE_LOCKED)).c_str(), L"[0x2f0] Cached page was locked during operation.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCrashDump)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CRASH_DUMP)).c_str(), L"[0x2f1] Crash dump exists in paging file.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorBufferAllZeros)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BUFFER_ALL_ZEROS)).c_str(), L"[0x2f2] Specified buffer contains all zeros.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorReparseObject)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REPARSE_OBJECT)).c_str(), L"[0x2f3] A reparse should be performed by the Object Manager since the name of the file resulted in a symbolic link.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorResourceRequirementsChanged)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RESOURCE_REQUIREMENTS_CHANGED)).c_str(), L"[0x2f4] The device has succeeded a query-stop and its resource requirements have changed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorTranslationComplete)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSLATION_COMPLETE)).c_str(), L"[0x2f5] The translator has translated these resources into the global space and no further translations should be performed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNothingToTerminate)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOTHING_TO_TERMINATE)).c_str(), L"[0x2f6] A process being terminated has no threads to terminate.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorProcessNotInJob)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PROCESS_NOT_IN_JOB)).c_str(), L"[0x2f7] The specified process is not part of a job.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorProcessInJob)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PROCESS_IN_JOB)).c_str(), L"[0x2f8] The specified process is part of a job.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorVolsnapHibernateReady)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VOLSNAP_HIBERNATE_READY)).c_str(), L"[0x2f9] {Volume Shadow Copy Service} The system is now ready for hibernation.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFsfilterOpCompletedSuccessfully)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FSFILTER_OP_COMPLETED_SUCCESSFULLY)).c_str(), L"[0x2fa] A file system or file system filter driver has successfully completed an FsFilter operation.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInterruptVectorAlreadyConnected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INTERRUPT_VECTOR_ALREADY_CONNECTED)).c_str(), L"[0x2fb] The specified interrupt vector was already connected.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInterruptStillConnected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INTERRUPT_STILL_CONNECTED)).c_str(), L"[0x2fc] The specified interrupt vector is still connected.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorWaitForOplock)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WAIT_FOR_OPLOCK)).c_str(), L"[0x2fd] An operation is blocked waiting for an oplock.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCallbackPopStack)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CALLBACK_POP_STACK)).c_str(), L"[0x300] An exception occurred in a user mode callback and the kernel callback frame should be removed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCompressionDisabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_COMPRESSION_DISABLED)).c_str(), L"[0x301] Compression is disabled for this volume.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCantfetchbackwards)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANTFETCHBACKWARDS)).c_str(), L"[0x302] The data provider cannot fetch backwards through a result set.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCantscrollbackwards)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANTSCROLLBACKWARDS)).c_str(), L"[0x303] The data provider cannot scroll backwards through a result set.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorRowsnotreleased)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ROWSNOTRELEASED)).c_str(), L"[0x304] The data provider requires that previously fetched data is released before asking for more data.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorBadAccessorFlags)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_ACCESSOR_FLAGS)).c_str(), L"[0x305] The data provider was not able to interpret the flags set for a column binding in an accessor.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorErrorsEncountered)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ERRORS_ENCOUNTERED)).c_str(), L"[0x306] One or more errors occurred while processing the request.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNotCapable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_CAPABLE)).c_str(), L"[0x307] The implementation is not capable of performing the request.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorRequestOutOfSequence)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REQUEST_OUT_OF_SEQUENCE)).c_str(), L"[0x308] The client of a component requested an operation which is not valid given the state of the component instance.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorVersionParseError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VERSION_PARSE_ERROR)).c_str(), L"[0x309] A version number could not be parsed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorBadstartposition)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BADSTARTPOSITION)).c_str(), L"[0x30a] The iterator's start position is invalid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorMemoryHardware)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MEMORY_HARDWARE)).c_str(), L"[0x30b] The hardware has reported an uncorrectable memory error.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDiskRepairDisabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DISK_REPAIR_DISABLED)).c_str(), L"[0x30c] The attempted operation required self healing to be enabled.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInsufficientResourceForSpecifiedSharedSectionSize)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSUFFICIENT_RESOURCE_FOR_SPECIFIED_SHARED_SECTION_SIZE)).c_str(), L"[0x30d] The Desktop heap encountered an error while allocating session memory. There is more information in the system event log.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSystemPowerstateTransition)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SYSTEM_POWERSTATE_TRANSITION)).c_str(), L"[0x30e] The system power state is transitioning from %2 to %3.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSystemPowerstateComplexTransition)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SYSTEM_POWERSTATE_COMPLEX_TRANSITION)).c_str(), L"[0x30f] The system power state is transitioning from %2 to %3 but could enter %4.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorMcaException)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MCA_EXCEPTION)).c_str(), L"[0x310] A thread is getting dispatched with MCA EXCEPTION because of MCA.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAccessAuditByPolicy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ACCESS_AUDIT_BY_POLICY)).c_str(), L"[0x311] Access to %1 is monitored by policy rule %2.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAccessDisabledNoSaferUiByPolicy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ACCESS_DISABLED_NO_SAFER_UI_BY_POLICY)).c_str(), L"[0x312] Access to %1 has been restricted by your Administrator by policy rule %2.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAbandonHiberfile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ABANDON_HIBERFILE)).c_str(), L"[0x313] A valid hibernation file has been invalidated and should be abandoned.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorLostWritebehindDataNetworkDisconnected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOST_WRITEBEHIND_DATA_NETWORK_DISCONNECTED)).c_str(), L"[0x314] {Delayed Write Failed} Windows was unable to save all the data for the file %hs; the data has been lost. This error may be caused by network connectivity issues. Please try to save this file elsewhere.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorLostWritebehindDataNetworkServerError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOST_WRITEBEHIND_DATA_NETWORK_SERVER_ERROR)).c_str(), L"[0x315] {Delayed Write Failed} Windows was unable to save all the data for the file %hs; the data has been lost. This error was returned by the server on which the file exists. Please try to save this file elsewhere.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorLostWritebehindDataLocalDiskError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOST_WRITEBEHIND_DATA_LOCAL_DISK_ERROR)).c_str(), L"[0x316] {Delayed Write Failed} Windows was unable to save all the data for the file %hs; the data has been lost. This error may be caused if the device has been removed or the media is write-protected.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorBadMcfgTable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_MCFG_TABLE)).c_str(), L"[0x317] The resources required for this device conflict with the MCFG table.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDiskRepairRedirected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DISK_REPAIR_REDIRECTED)).c_str(), L"[0x318] The volume repair could not be performed while it is online. Please schedule to take the volume offline so that it can be repaired.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDiskRepairUnsuccessful)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DISK_REPAIR_UNSUCCESSFUL)).c_str(), L"[0x319] The volume repair was not successful.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCorruptLogOverfull)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CORRUPT_LOG_OVERFULL)).c_str(), L"[0x31a] One of the volume corruption logs is full. Further corruptions that may be detected won't be logged.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCorruptLogCorrupted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CORRUPT_LOG_CORRUPTED)).c_str(), L"[0x31b] One of the volume corruption logs is internally corrupted and needs to be recreated. The volume may contain undetected corruptions and must be scanned.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCorruptLogUnavailable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CORRUPT_LOG_UNAVAILABLE)).c_str(), L"[0x31c] One of the volume corruption logs is unavailable for being operated on.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCorruptLogDeletedFull)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CORRUPT_LOG_DELETED_FULL)).c_str(), L"[0x31d] One of the volume corruption logs was deleted while still having corruption records in them. The volume contains detected corruptions and must be scanned.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCorruptLogCleared)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CORRUPT_LOG_CLEARED)).c_str(), L"[0x31e] One of the volume corruption logs was cleared by chkdsk and no longer contains real corruptions.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorOrphanNameExhausted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ORPHAN_NAME_EXHAUSTED)).c_str(), L"[0x31f] Orphaned files exist on the volume but could not be recovered because no more new names could be created in the recovery directory. Files must be moved from the recovery directory.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorOplockSwitchedToNewHandle)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_OPLOCK_SWITCHED_TO_NEW_HANDLE)).c_str(), L"[0x320] The oplock that was associated with this handle is now associated with a different handle.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCannotGrantRequestedOplock)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANNOT_GRANT_REQUESTED_OPLOCK)).c_str(), L"[0x321] An oplock of the requested level cannot be granted.  An oplock of a lower level may be available.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCannotBreakOplock)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANNOT_BREAK_OPLOCK)).c_str(), L"[0x322] The operation did not complete successfully because it would cause an oplock to be broken. The caller has requested that existing oplocks not be broken.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorOplockHandleClosed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_OPLOCK_HANDLE_CLOSED)).c_str(), L"[0x323] The handle with which this oplock was associated has been closed.  The oplock is now broken.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoAceCondition)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_ACE_CONDITION)).c_str(), L"[0x324] The specified access control entry (ACE) does not contain a condition.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidAceCondition)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_ACE_CONDITION)).c_str(), L"[0x325] The specified access control entry (ACE) contains an invalid condition.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFileHandleRevoked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_HANDLE_REVOKED)).c_str(), L"[0x326] Access to the specified file handle has been revoked.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorImageAtDifferentBase)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IMAGE_AT_DIFFERENT_BASE)).c_str(), L"[0x327] {Image Relocated} An image file was mapped at a different address from the one specified in the image file but fixups will still be automatically performed on the image.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorEncryptedIoNotPossible)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ENCRYPTED_IO_NOT_POSSIBLE)).c_str(), L"[0x328] The read or write operation to an encrypted file could not be completed because the file has not been opened for data access.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFileMetadataOptimizationInProgress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_METADATA_OPTIMIZATION_IN_PROGRESS)).c_str(), L"[0x329] File metadata optimization is already in progress.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorQuotaActivity)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_QUOTA_ACTIVITY)).c_str(), L"[0x32a] The requested operation failed due to quota operation is still in progress.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorHandleRevoked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_HANDLE_REVOKED)).c_str(), L"[0x32b] Access to the specified handle has been revoked.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCallbackInvokeInline)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CALLBACK_INVOKE_INLINE)).c_str(), L"[0x32c] The callback function must be invoked inline.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCpuSetInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CPU_SET_INVALID)).c_str(), L"[0x32d] The specified CPU Set IDs are invalid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorEnclaveNotTerminated)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ENCLAVE_NOT_TERMINATED)).c_str(), L"[0x32e] The specified enclave has not yet been terminated.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorEnclaveViolation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ENCLAVE_VIOLATION)).c_str(), L"[0x32f] An attempt was made to access protected memory in violation of its secure access policy.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServerTransportConflict)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVER_TRANSPORT_CONFLICT)).c_str(), L"[0x330] Multiple mappings to shared resource(s) on a server, using more than one transport, are not allowed. Use a single transport for all mappings to a server and try again.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCertificateValidationPreferenceConflict)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CERTIFICATE_VALIDATION_PREFERENCE_CONFLICT)).c_str(), L"[0x331] Multiple mappings to shared resource(s) on a server, using different certificate validation preferences, are not allowed. Use the same preference for all mappings to a server and try again.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFtReadFromCopyFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FT_READ_FROM_COPY_FAILURE)).c_str(), L"[0x332] The specified copy of the requested data could not be read.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSectionDirectMapOnly)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SECTION_DIRECT_MAP_ONLY)).c_str(), L"[0x333] The section creation request was failed because it would have been satisfied with a direct map and the caller explicitly signified this was not wanted.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorEaAccessDenied)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EA_ACCESS_DENIED)).c_str(), L"[0x3e2] Access to the extended attribute was denied.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorOperationAborted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_OPERATION_ABORTED)).c_str(), L"[0x3e3] The I/O operation has been aborted because of either a thread exit or an application request.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorIoIncomplete)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IO_INCOMPLETE)).c_str(), L"[0x3e4] Overlapped I/O event is not in a signaled state.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoaccess)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOACCESS)).c_str(), L"[0x3e6] Invalid access to memory location.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSwaperror)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SWAPERROR)).c_str(), L"[0x3e7] Error performing inpage operation.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorStackOverflow)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STACK_OVERFLOW)).c_str(), L"[0x3e9] Recursion too deep; the stack overflowed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidMessage)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_MESSAGE)).c_str(), L"[0x3ea] The window cannot act on the sent message.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCanNotComplete)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CAN_NOT_COMPLETE)).c_str(), L"[0x3eb] Cannot complete this function.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidFlags)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_FLAGS)).c_str(), L"[0x3ec] Invalid flags.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorUnrecognizedVolume)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNRECOGNIZED_VOLUME)).c_str(), L"[0x3ed] The volume does not contain a recognized file system. Please make sure that all required file system drivers are loaded and that the volume is not corrupted.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFileInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_INVALID)).c_str(), L"[0x3ee] The volume for a file has been externally altered so that the opened file is no longer valid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFullscreenMode)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FULLSCREEN_MODE)).c_str(), L"[0x3ef] The requested operation cannot be performed in full-screen mode.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoToken)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_TOKEN)).c_str(), L"[0x3f0] An attempt was made to reference a token that does not exist.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorBaddb)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BADDB)).c_str(), L"[0x3f1] The configuration registry database is corrupt.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorBadkey)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BADKEY)).c_str(), L"[0x3f2] The configuration registry key is invalid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCantopen)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANTOPEN)).c_str(), L"[0x3f3] The configuration registry key could not be opened.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCantread)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANTREAD)).c_str(), L"[0x3f4] The configuration registry key could not be read.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCantwrite)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANTWRITE)).c_str(), L"[0x3f5] The configuration registry key could not be written.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorRegistryRecovered)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REGISTRY_RECOVERED)).c_str(), L"[0x3f6] One of the files in the registry database had to be recovered by use of a log or alternate copy. The recovery was successful.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorRegistryCorrupt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REGISTRY_CORRUPT)).c_str(), L"[0x3f7] The registry is corrupted. The structure of one of the files containing registry data is corrupted, or the system's memory image of the file is corrupted, or the file could not be recovered because the alternate copy or log was absent or corrupted.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorRegistryIoFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REGISTRY_IO_FAILED)).c_str(), L"[0x3f8] An I/O operation initiated by the registry failed unrecoverably. The registry could not read in, or write out, or flush, one of the files that contain the system's image of the registry.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNotRegistryFile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_REGISTRY_FILE)).c_str(), L"[0x3f9] The system has attempted to load or restore a file into the registry, but the specified file is not in a registry file format.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorKeyDeleted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_KEY_DELETED)).c_str(), L"[0x3fa] Illegal operation attempted on a registry key that has been marked for deletion.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoLogSpace)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_LOG_SPACE)).c_str(), L"[0x3fb] System could not allocate the required space in a registry log.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorKeyHasChildren)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_KEY_HAS_CHILDREN)).c_str(), L"[0x3fc] Cannot create a symbolic link in a registry key that already has subkeys or values.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorChildMustBeVolatile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CHILD_MUST_BE_VOLATILE)).c_str(), L"[0x3fd] Cannot create a stable subkey under a volatile parent key.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNotifyEnumDir)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOTIFY_ENUM_DIR)).c_str(), L"[0x3fe] A notify change request is being completed and the information is not being returned in the caller's buffer. The caller now needs to enumerate the files to find the changes.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDependentServicesRunning)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEPENDENT_SERVICES_RUNNING)).c_str(), L"[0x41b] A stop control has been sent to a service that other running services are dependent on.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidServiceControl)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_SERVICE_CONTROL)).c_str(), L"[0x41c] The requested control is not valid for this service.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceRequestTimeout)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_REQUEST_TIMEOUT)).c_str(), L"[0x41d] The service did not respond to the start or control request in a timely fashion.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceNoThread)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_NO_THREAD)).c_str(), L"[0x41e] A thread could not be created for the service.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceDatabaseLocked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_DATABASE_LOCKED)).c_str(), L"[0x41f] The service database is locked.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceAlreadyRunning)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_ALREADY_RUNNING)).c_str(), L"[0x420] An instance of the service is already running.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidServiceAccount)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_SERVICE_ACCOUNT)).c_str(), L"[0x421] The account name is invalid or does not exist, or the password is invalid for the account name specified.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceDisabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_DISABLED)).c_str(), L"[0x422] The service cannot be started, either because it is disabled or because it has no enabled devices associated with it.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCircularDependency)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CIRCULAR_DEPENDENCY)).c_str(), L"[0x423] Circular service dependency was specified.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceDoesNotExist)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_DOES_NOT_EXIST)).c_str(), L"[0x424] The specified service does not exist as an installed service.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceCannotAcceptCtrl)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_CANNOT_ACCEPT_CTRL)).c_str(), L"[0x425] The service cannot accept control messages at this time.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceNotActive)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_NOT_ACTIVE)).c_str(), L"[0x426] The service has not been started.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFailedServiceControllerConnect)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FAILED_SERVICE_CONTROLLER_CONNECT)).c_str(), L"[0x427] The service process could not connect to the service controller.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorExceptionInService)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EXCEPTION_IN_SERVICE)).c_str(), L"[0x428] An exception occurred in the service when handling the control request.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDatabaseDoesNotExist)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DATABASE_DOES_NOT_EXIST)).c_str(), L"[0x429] The database specified does not exist.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceSpecificError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_SPECIFIC_ERROR)).c_str(), L"[0x42a] The service has returned a service-specific error code.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorProcessAborted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PROCESS_ABORTED)).c_str(), L"[0x42b] The process terminated unexpectedly.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceDependencyFail)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_DEPENDENCY_FAIL)).c_str(), L"[0x42c] The dependency service or group failed to start.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceLogonFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_LOGON_FAILED)).c_str(), L"[0x42d] The service did not start due to a logon failure.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceStartHang)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_START_HANG)).c_str(), L"[0x42e] After starting, the service hung in a start-pending state.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidServiceLock)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_SERVICE_LOCK)).c_str(), L"[0x42f] The specified service database lock is invalid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceMarkedForDelete)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_MARKED_FOR_DELETE)).c_str(), L"[0x430] The specified service has been marked for deletion.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_EXISTS)).c_str(), L"[0x431] The specified service already exists.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAlreadyRunningLkg)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ALREADY_RUNNING_LKG)).c_str(), L"[0x432] The system is currently running with the last-known-good configuration.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceDependencyDeleted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_DEPENDENCY_DELETED)).c_str(), L"[0x433] The dependency service does not exist or has been marked for deletion.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorBootAlreadyAccepted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BOOT_ALREADY_ACCEPTED)).c_str(), L"[0x434] The current boot has already been accepted for use as the last-known-good control set.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceNeverStarted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_NEVER_STARTED)).c_str(), L"[0x435] No attempts to start the service have been made since the last boot.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDuplicateServiceName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DUPLICATE_SERVICE_NAME)).c_str(), L"[0x436] The name is already in use as either a service name or a service display name.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDifferentServiceAccount)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DIFFERENT_SERVICE_ACCOUNT)).c_str(), L"[0x437] The account specified for this service is different from the account specified for other services running in the same process.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCannotDetectDriverFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANNOT_DETECT_DRIVER_FAILURE)).c_str(), L"[0x438] Failure actions can only be set for Win32 services, not for drivers.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCannotDetectProcessAbort)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANNOT_DETECT_PROCESS_ABORT)).c_str(), L"[0x439] This service runs in the same process as the service control manager. Therefore, the service control manager cannot take action if this service's process terminates unexpectedly.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoRecoveryProgram)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_RECOVERY_PROGRAM)).c_str(), L"[0x43a] No recovery program has been configured for this service.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceNotInExe)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_NOT_IN_EXE)).c_str(), L"[0x43b] The executable program that this service is configured to run in does not implement the service.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNotSafebootService)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SAFEBOOT_SERVICE)).c_str(), L"[0x43c] This service cannot be started in Safe Mode");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorEndOfMedia)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_END_OF_MEDIA)).c_str(), L"[0x44c] The physical end of the tape has been reached.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFilemarkDetected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILEMARK_DETECTED)).c_str(), L"[0x44d] A tape access reached a filemark.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorBeginningOfMedia)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BEGINNING_OF_MEDIA)).c_str(), L"[0x44e] The beginning of the tape or a partition was encountered.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSetmarkDetected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SETMARK_DETECTED)).c_str(), L"[0x44f] A tape access reached the end of a set of files.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoDataDetected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_DATA_DETECTED)).c_str(), L"[0x450] No more data is on the tape.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPartitionFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PARTITION_FAILURE)).c_str(), L"[0x451] Tape could not be partitioned.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidBlockLength)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_BLOCK_LENGTH)).c_str(), L"[0x452] When accessing a new tape of a multivolume partition, the current block size is incorrect.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDeviceNotPartitioned)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEVICE_NOT_PARTITIONED)).c_str(), L"[0x453] Tape partition information could not be found when loading a tape.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorUnableToLockMedia)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNABLE_TO_LOCK_MEDIA)).c_str(), L"[0x454] Unable to lock the media eject mechanism.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorUnableToUnloadMedia)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNABLE_TO_UNLOAD_MEDIA)).c_str(), L"[0x455] Unable to unload the media.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorMediaChanged)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MEDIA_CHANGED)).c_str(), L"[0x456] The media in the drive may have changed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorBusReset)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BUS_RESET)).c_str(), L"[0x457] The I/O bus was reset.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoMediaInDrive)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_MEDIA_IN_DRIVE)).c_str(), L"[0x458] No media in drive.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoUnicodeTranslation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_UNICODE_TRANSLATION)).c_str(), L"[0x459] No mapping for the Unicode character exists in the target multi-byte code page.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDllInitFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DLL_INIT_FAILED)).c_str(), L"[0x45a] A dynamic link library (DLL) initialization routine failed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorShutdownInProgress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SHUTDOWN_IN_PROGRESS)).c_str(), L"[0x45b] A system shutdown is in progress.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoShutdownInProgress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_SHUTDOWN_IN_PROGRESS)).c_str(), L"[0x45c] Unable to abort the system shutdown because no shutdown was in progress.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorIoDevice)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IO_DEVICE)).c_str(), L"[0x45d] The request could not be performed because of an I/O device error.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSerialNoDevice)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERIAL_NO_DEVICE)).c_str(), L"[0x45e] No serial device was successfully initialized. The serial driver will unload.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorIrqBusy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IRQ_BUSY)).c_str(), L"[0x45f] Unable to open a device that was sharing an interrupt request (IRQ) with other devices. At least one other device that uses that IRQ was already opened.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorMoreWrites)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MORE_WRITES)).c_str(), L"[0x460] A serial I/O operation was completed by another write to the serial port. (The IOCTL_SERIAL_XOFF_COUNTER reached zero.)");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCounterTimeout)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_COUNTER_TIMEOUT)).c_str(), L"[0x461] A serial I/O operation completed because the timeout period expired. (The IOCTL_SERIAL_XOFF_COUNTER did not reach zero.)");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFloppyIdMarkNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FLOPPY_ID_MARK_NOT_FOUND)).c_str(), L"[0x462] No ID address mark was found on the floppy disk.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFloppyWrongCylinder)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FLOPPY_WRONG_CYLINDER)).c_str(), L"[0x463] Mismatch between the floppy disk sector ID field and the floppy disk controller track address.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFloppyUnknownError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FLOPPY_UNKNOWN_ERROR)).c_str(), L"[0x464] The floppy disk controller reported an error that is not recognized by the floppy disk driver.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFloppyBadRegisters)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FLOPPY_BAD_REGISTERS)).c_str(), L"[0x465] The floppy disk controller returned inconsistent results in its registers.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDiskRecalibrateFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DISK_RECALIBRATE_FAILED)).c_str(), L"[0x466] While accessing the hard disk, a recalibrate operation failed, even after retries.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDiskOperationFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DISK_OPERATION_FAILED)).c_str(), L"[0x467] While accessing the hard disk, a disk operation failed even after retries.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDiskResetFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DISK_RESET_FAILED)).c_str(), L"[0x468] While accessing the hard disk, a disk controller reset was needed, but even that failed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorEomOverflow)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EOM_OVERFLOW)).c_str(), L"[0x469] Physical end of tape encountered.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNotEnoughServerMemory)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_ENOUGH_SERVER_MEMORY)).c_str(), L"[0x46a] Not enough server memory resources are available to process this command.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPossibleDeadlock)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_POSSIBLE_DEADLOCK)).c_str(), L"[0x46b] A potential deadlock condition has been detected.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorMappedAlignment)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MAPPED_ALIGNMENT)).c_str(), L"[0x46c] The base address or the file offset specified does not have the proper alignment.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSetPowerStateVetoed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SET_POWER_STATE_VETOED)).c_str(), L"[0x474] An attempt to change the system power state was vetoed by another application or driver.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSetPowerStateFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SET_POWER_STATE_FAILED)).c_str(), L"[0x475] The system BIOS failed an attempt to change the system power state.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorTooManyLinks)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TOO_MANY_LINKS)).c_str(), L"[0x476] An attempt was made to create more links on a file than the file system supports.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorOldWinVersion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_OLD_WIN_VERSION)).c_str(), L"[0x47e] The specified program requires a newer version of Windows.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAppWrongOs)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_APP_WRONG_OS)).c_str(), L"[0x47f] The specified program is not a Windows or MS-DOS program.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSingleInstanceApp)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SINGLE_INSTANCE_APP)).c_str(), L"[0x480] Cannot start more than one instance of the specified program.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorRmodeApp)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RMODE_APP)).c_str(), L"[0x481] The specified program was written for an earlier version of Windows.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidDll)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_DLL)).c_str(), L"[0x482] One of the library files needed to run this application is damaged.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoAssociation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_ASSOCIATION)).c_str(), L"[0x483] No application is associated with the specified file for this operation.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDdeFail)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DDE_FAIL)).c_str(), L"[0x484] An error occurred in sending the command to the application.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDllNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DLL_NOT_FOUND)).c_str(), L"[0x485] One of the library files needed to run this application cannot be found.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoMoreUserHandles)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_MORE_USER_HANDLES)).c_str(), L"[0x486] The current process has used all of its system allowance of handles for Window Manager objects.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorMessageSyncOnly)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MESSAGE_SYNC_ONLY)).c_str(), L"[0x487] The message can be used only with synchronous operations.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSourceElementEmpty)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SOURCE_ELEMENT_EMPTY)).c_str(), L"[0x488] The indicated source element has no media.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDestinationElementFull)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DESTINATION_ELEMENT_FULL)).c_str(), L"[0x489] The indicated destination element already contains media.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorIllegalElementAddress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ILLEGAL_ELEMENT_ADDRESS)).c_str(), L"[0x48a] The indicated element does not exist.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorMagazineNotPresent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MAGAZINE_NOT_PRESENT)).c_str(), L"[0x48b] The indicated element is part of a magazine that is not present.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDeviceRequiresCleaning)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEVICE_REQUIRES_CLEANING)).c_str(), L"[0x48d] The device has indicated that cleaning is required before further operations are attempted.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDeviceDoorOpen)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEVICE_DOOR_OPEN)).c_str(), L"[0x48e] The device has indicated that its door is open.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDeviceNotConnected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEVICE_NOT_CONNECTED)).c_str(), L"[0x48f] The device is not connected.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_FOUND)).c_str(), L"[0x490] Element not found.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoMatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_MATCH)).c_str(), L"[0x491] There was no match for the specified key in the index.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSetNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SET_NOT_FOUND)).c_str(), L"[0x492] The property set specified does not exist on the object.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPointNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_POINT_NOT_FOUND)).c_str(), L"[0x493] The point passed to GetMouseMovePoints is not in the buffer.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoTrackingService)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_TRACKING_SERVICE)).c_str(), L"[0x494] The tracking (workstation) service is not running.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoVolumeId)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_VOLUME_ID)).c_str(), L"[0x495] The Volume ID could not be found.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorUnableToRemoveReplaced)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNABLE_TO_REMOVE_REPLACED)).c_str(), L"[0x497] Unable to remove the file to be replaced.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorUnableToMoveReplacement)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNABLE_TO_MOVE_REPLACEMENT)).c_str(), L"[0x498] Unable to move the replacement file to the file to be replaced. The file to be replaced has retained its original name.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorUnableToMoveReplacement2)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNABLE_TO_MOVE_REPLACEMENT_2)).c_str(), L"[0x499] Unable to move the replacement file to the file to be replaced. The file to be replaced has been renamed using the backup name.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorJournalDeleteInProgress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_JOURNAL_DELETE_IN_PROGRESS)).c_str(), L"[0x49a] The volume change journal is being deleted.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorJournalNotActive)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_JOURNAL_NOT_ACTIVE)).c_str(), L"[0x49b] The volume change journal is not active.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPotentialFileFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_POTENTIAL_FILE_FOUND)).c_str(), L"[0x49c] A file was found, but it may not be the correct file.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorJournalEntryDeleted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_JOURNAL_ENTRY_DELETED)).c_str(), L"[0x49d] The journal entry has been deleted from the journal.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPartitionTerminating)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PARTITION_TERMINATING)).c_str(), L"[0x4a0] An attempt was made to access a partition that has begun termination.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorShutdownIsScheduled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SHUTDOWN_IS_SCHEDULED)).c_str(), L"[0x4a6] A system shutdown has already been scheduled.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorShutdownUsersLoggedOn)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SHUTDOWN_USERS_LOGGED_ON)).c_str(), L"[0x4a7] The system shutdown cannot be initiated because there are other users logged on to the computer.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorShutdownDisksNotInMaintenanceMode)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SHUTDOWN_DISKS_NOT_IN_MAINTENANCE_MODE)).c_str(), L"[0x4a8] The system shutdown cannot safely proceed without enabling node maintenance mode for cluster node and waiting for the drain to complete.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorBadDevice)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_DEVICE)).c_str(), L"[0x4b0] The specified device name is invalid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorConnectionUnavail)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CONNECTION_UNAVAIL)).c_str(), L"[0x4b1] The device is not currently connected but it is a remembered connection.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDeviceAlreadyRemembered)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEVICE_ALREADY_REMEMBERED)).c_str(), L"[0x4b2] The local device name has a remembered connection to another network resource.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoNetOrBadPath)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_NET_OR_BAD_PATH)).c_str(), L"[0x4b3] The network path was either typed incorrectly, does not exist, or the network provider is not currently available. Please try retyping the path or contact your network administrator.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorBadProvider)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_PROVIDER)).c_str(), L"[0x4b4] The specified network provider name is invalid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCannotOpenProfile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANNOT_OPEN_PROFILE)).c_str(), L"[0x4b5] Unable to open the network connection profile.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorBadProfile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_PROFILE)).c_str(), L"[0x4b6] The network connection profile is corrupted.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNotContainer)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_CONTAINER)).c_str(), L"[0x4b7] Cannot enumerate a noncontainer.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorExtendedError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EXTENDED_ERROR)).c_str(), L"[0x4b8] An extended error has occurred.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidGroupname)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_GROUPNAME)).c_str(), L"[0x4b9] The format of the specified group name is invalid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidComputername)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_COMPUTERNAME)).c_str(), L"[0x4ba] The format of the specified computer name is invalid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidEventname)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_EVENTNAME)).c_str(), L"[0x4bb] The format of the specified event name is invalid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidDomainname)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_DOMAINNAME)).c_str(), L"[0x4bc] The format of the specified domain name is invalid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidServicename)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_SERVICENAME)).c_str(), L"[0x4bd] The format of the specified service name is invalid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidNetname)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_NETNAME)).c_str(), L"[0x4be] The format of the specified network name is invalid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidSharename)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_SHARENAME)).c_str(), L"[0x4bf] The format of the specified share name is invalid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidPasswordname)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_PASSWORDNAME)).c_str(), L"[0x4c0] The format of the specified password is invalid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidMessagename)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_MESSAGENAME)).c_str(), L"[0x4c1] The format of the specified message name is invalid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidMessagedest)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_MESSAGEDEST)).c_str(), L"[0x4c2] The format of the specified message destination is invalid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSessionCredentialConflict)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SESSION_CREDENTIAL_CONFLICT)).c_str(), L"[0x4c3] Multiple connections to a server or shared resource by the same user, using more than one user name, are not allowed. Disconnect all previous connections to the server or shared resource and try again.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorRemoteSessionLimitExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REMOTE_SESSION_LIMIT_EXCEEDED)).c_str(), L"[0x4c4] An attempt was made to establish a session to a network server, but there are already too many sessions established to that server.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDupDomainname)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DUP_DOMAINNAME)).c_str(), L"[0x4c5] The workgroup or domain name is already in use by another computer on the network.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoNetwork)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_NETWORK)).c_str(), L"[0x4c6] The network is not present or not started.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCancelled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANCELLED)).c_str(), L"[0x4c7] The operation was canceled by the user.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorUserMappedFile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_USER_MAPPED_FILE)).c_str(), L"[0x4c8] The requested operation cannot be performed on a file with a user-mapped section open.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorConnectionRefused)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CONNECTION_REFUSED)).c_str(), L"[0x4c9] The remote computer refused the network connection.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorGracefulDisconnect)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_GRACEFUL_DISCONNECT)).c_str(), L"[0x4ca] The network connection was gracefully closed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAddressAlreadyAssociated)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ADDRESS_ALREADY_ASSOCIATED)).c_str(), L"[0x4cb] The network transport endpoint already has an address associated with it.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAddressNotAssociated)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ADDRESS_NOT_ASSOCIATED)).c_str(), L"[0x4cc] An address has not yet been associated with the network endpoint.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorConnectionInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CONNECTION_INVALID)).c_str(), L"[0x4cd] An operation was attempted on a nonexistent network connection.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorConnectionActive)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CONNECTION_ACTIVE)).c_str(), L"[0x4ce] An invalid operation was attempted on an active network connection.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNetworkUnreachable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NETWORK_UNREACHABLE)).c_str(), L"[0x4cf] The network location cannot be reached. For information about network troubleshooting, see Windows Help.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorHostUnreachable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_HOST_UNREACHABLE)).c_str(), L"[0x4d0] The network location cannot be reached. For information about network troubleshooting, see Windows Help.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorProtocolUnreachable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PROTOCOL_UNREACHABLE)).c_str(), L"[0x4d1] The network location cannot be reached. For information about network troubleshooting, see Windows Help.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPortUnreachable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PORT_UNREACHABLE)).c_str(), L"[0x4d2] No service is operating at the destination network endpoint on the remote system.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorRequestAborted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REQUEST_ABORTED)).c_str(), L"[0x4d3] The request was aborted.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorConnectionAborted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CONNECTION_ABORTED)).c_str(), L"[0x4d4] The network connection was aborted by the local system.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorRetry)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RETRY)).c_str(), L"[0x4d5] The operation could not be completed. A retry should be performed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorConnectionCountLimit)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CONNECTION_COUNT_LIMIT)).c_str(), L"[0x4d6] A connection to the server could not be made because the limit on the number of concurrent connections for this account has been reached.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorLoginTimeRestriction)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOGIN_TIME_RESTRICTION)).c_str(), L"[0x4d7] Attempting to log in during an unauthorized time of day for this account.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorLoginWkstaRestriction)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOGIN_WKSTA_RESTRICTION)).c_str(), L"[0x4d8] The account is not authorized to log in from this station.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorIncorrectAddress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INCORRECT_ADDRESS)).c_str(), L"[0x4d9] The network address could not be used for the operation requested.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAlreadyRegistered)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ALREADY_REGISTERED)).c_str(), L"[0x4da] The service is already registered.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_NOT_FOUND)).c_str(), L"[0x4db] The specified service does not exist.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNotAuthenticated)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_AUTHENTICATED)).c_str(), L"[0x4dc] The operation being requested was not performed because the user has not been authenticated.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNotLoggedOn)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_LOGGED_ON)).c_str(), L"[0x4dd] The operation being requested was not performed because the user has not logged on to the network. The specified service does not exist.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAlreadyInitialized)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ALREADY_INITIALIZED)).c_str(), L"[0x4df] An attempt was made to perform an initialization operation when initialization has already been completed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoSuchSite)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_SUCH_SITE)).c_str(), L"[0x4e1] The specified site does not exist.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDomainControllerExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DOMAIN_CONTROLLER_EXISTS)).c_str(), L"[0x4e2] A domain controller with the specified name already exists.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorOnlyIfConnected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ONLY_IF_CONNECTED)).c_str(), L"[0x4e3] This operation is supported only when you are connected to the server.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorOverrideNochanges)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_OVERRIDE_NOCHANGES)).c_str(), L"[0x4e4] The group policy framework should call the extension even if there are no changes.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorBadUserProfile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_USER_PROFILE)).c_str(), L"[0x4e5] The specified user does not have a valid profile.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNotSupportedOnSbs)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SUPPORTED_ON_SBS)).c_str(), L"[0x4e6] This operation is not supported on a computer running Windows Server 2003 for Small Business Server");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServerShutdownInProgress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVER_SHUTDOWN_IN_PROGRESS)).c_str(), L"[0x4e7] The server machine is shutting down.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorHostDown)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_HOST_DOWN)).c_str(), L"[0x4e8] The remote system is not available. For information about network troubleshooting, see Windows Help.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNonAccountSid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NON_ACCOUNT_SID)).c_str(), L"[0x4e9] The security identifier provided is not from an account domain.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNonDomainSid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NON_DOMAIN_SID)).c_str(), L"[0x4ea] The security identifier provided does not have a domain component.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorApphelpBlock)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_APPHELP_BLOCK)).c_str(), L"[0x4eb] AppHelp dialog canceled thus preventing the application from starting.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAccessDisabledByPolicy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ACCESS_DISABLED_BY_POLICY)).c_str(), L"[0x4ec] This program is blocked by group policy. For more information, contact your system administrator.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorRegNatConsumption)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REG_NAT_CONSUMPTION)).c_str(), L"[0x4ed] A program attempt to use an invalid register value. Normally caused by an uninitialized register. This error is Itanium specific.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCscshareOffline)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CSCSHARE_OFFLINE)).c_str(), L"[0x4ee] The share is currently offline or does not exist.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPkinitFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PKINIT_FAILURE)).c_str(), L"[0x4ef] The Kerberos protocol encountered an error while validating the KDC certificate during smartcard logon. There is more information in the system event log.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSmartcardSubsystemFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SMARTCARD_SUBSYSTEM_FAILURE)).c_str(), L"[0x4f0] The Kerberos protocol encountered an error while attempting to utilize the smartcard subsystem.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDowngradeDetected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DOWNGRADE_DETECTED)).c_str(), L"[0x4f1] The system cannot contact a domain controller to service the authentication request. Please try again later.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorMachineLocked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MACHINE_LOCKED)).c_str(), L"[0x4f7] The machine is locked and cannot be shut down without the force option.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSmbGuestLogonBlocked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SMB_GUEST_LOGON_BLOCKED)).c_str(), L"[0x4f8] You can't access this shared folder because your organization's security policies block unauthenticated guest access. These policies help protect your PC from unsafe or malicious devices on the network.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCallbackSuppliedInvalidData)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CALLBACK_SUPPLIED_INVALID_DATA)).c_str(), L"[0x4f9] An application-defined callback gave invalid data when called.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSyncForegroundRefreshRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SYNC_FOREGROUND_REFRESH_REQUIRED)).c_str(), L"[0x4fa] The group policy framework should call the extension in the synchronous foreground policy refresh.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDriverBlocked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DRIVER_BLOCKED)).c_str(), L"[0x4fb] This driver has been blocked from loading");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidImportOfNonDll)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_IMPORT_OF_NON_DLL)).c_str(), L"[0x4fc] A dynamic link library (DLL) referenced a module that was neither a DLL nor the process's executable image.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAccessDisabledWebblade)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ACCESS_DISABLED_WEBBLADE)).c_str(), L"[0x4fd] Windows cannot open this program since it has been disabled.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAccessDisabledWebbladeTamper)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ACCESS_DISABLED_WEBBLADE_TAMPER)).c_str(), L"[0x4fe] Windows cannot open this program because the license enforcement system has been tampered with or become corrupted.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorRecoveryFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RECOVERY_FAILURE)).c_str(), L"[0x4ff] A transaction recover failed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAlreadyFiber)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ALREADY_FIBER)).c_str(), L"[0x500] The current thread has already been converted to a fiber.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAlreadyThread)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ALREADY_THREAD)).c_str(), L"[0x501] The current thread has already been converted from a fiber.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorStackBufferOverrun)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STACK_BUFFER_OVERRUN)).c_str(), L"[0x502] The system detected an overrun of a stack-based buffer in this application. This overrun could potentially allow a malicious user to gain control of this application.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorParameterQuotaExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PARAMETER_QUOTA_EXCEEDED)).c_str(), L"[0x503] Data present in one of the parameters is more than the function can operate on.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDebuggerInactive)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEBUGGER_INACTIVE)).c_str(), L"[0x504] An attempt to do an operation on a debug object failed because the object is in the process of being deleted.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDelayLoadFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DELAY_LOAD_FAILED)).c_str(), L"[0x505] An attempt to delay-load a .dll or get a function address in a delay-loaded .dll failed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorVdmDisallowed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VDM_DISALLOWED)).c_str(), L"[0x506] %1 is a 16-bit application. You do not have permissions to execute 16-bit applications. Check your permissions with your system administrator.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorUnidentifiedError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNIDENTIFIED_ERROR)).c_str(), L"[0x507] Insufficient information exists to identify the cause of failure.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidCruntimeParameter)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_CRUNTIME_PARAMETER)).c_str(), L"[0x508] The parameter passed to a C runtime function is incorrect.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorBeyondVdl)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BEYOND_VDL)).c_str(), L"[0x509] The operation occurred beyond the valid data length of the file.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorIncompatibleServiceSidType)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INCOMPATIBLE_SERVICE_SID_TYPE)).c_str(), L"[0x50a] The service start failed since one or more services in the same process have an incompatible service SID type setting. A service with restricted service SID type can only coexist in the same process with other services with a restricted SID type. If the service SID type for this service was just configured, the hosting process must be restarted in order to start this service.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDriverProcessTerminated)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DRIVER_PROCESS_TERMINATED)).c_str(), L"[0x50b] The process hosting the driver for this device has been terminated.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorImplementationLimit)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IMPLEMENTATION_LIMIT)).c_str(), L"[0x50c] An operation attempted to exceed an implementation-defined limit.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorProcessIsProtected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PROCESS_IS_PROTECTED)).c_str(), L"[0x50d] Either the target process, or the target thread's containing process, is a protected process.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorServiceNotifyClientLagging)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_NOTIFY_CLIENT_LAGGING)).c_str(), L"[0x50e] The service notification client is lagging too far behind the current state of services in the machine.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDiskQuotaExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DISK_QUOTA_EXCEEDED)).c_str(), L"[0x50f] The requested file operation failed because the storage quota was exceeded. To free up disk space, move files to a different location or delete unnecessary files. For more information, contact your system administrator.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorContentBlocked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CONTENT_BLOCKED)).c_str(), L"[0x510] The requested file operation failed because the storage policy blocks that type of file. For more information, contact your system administrator.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorIncompatibleServicePrivilege)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INCOMPATIBLE_SERVICE_PRIVILEGE)).c_str(), L"[0x511] A privilege that the service requires to function properly does not exist in the service account configuration. You may use the Services Microsoft Management Console (MMC) snap-in (services.msc) and the Local Security Settings MMC snap-in (secpol.msc) to view the service configuration and the account configuration.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAppHang)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_APP_HANG)).c_str(), L"[0x512] A thread involved in this operation appears to be unresponsive.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidLabel)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_LABEL)).c_str(), L"[0x513] Indicates a particular Security ID may not be assigned as the label of an object.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNotAllAssigned)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_ALL_ASSIGNED)).c_str(), L"[0x514] Not all privileges or groups referenced are assigned to the caller.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSomeNotMapped)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SOME_NOT_MAPPED)).c_str(), L"[0x515] Some mapping between account names and security IDs was not done.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoQuotasForAccount)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_QUOTAS_FOR_ACCOUNT)).c_str(), L"[0x516] No system quota limits are specifically set for this account.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorLocalUserSessionKey)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOCAL_USER_SESSION_KEY)).c_str(), L"[0x517] No encryption key is available. A well-known encryption key was returned.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNullLmPassword)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NULL_LM_PASSWORD)).c_str(), L"[0x518] The password is too complex to be converted to a LAN Manager password. The LAN Manager password returned is a NULL string.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorUnknownRevision)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNKNOWN_REVISION)).c_str(), L"[0x519] The revision level is unknown.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorRevisionMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REVISION_MISMATCH)).c_str(), L"[0x51a] Indicates two revision levels are incompatible.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidOwner)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_OWNER)).c_str(), L"[0x51b] This security ID may not be assigned as the owner of this object.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidPrimaryGroup)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_PRIMARY_GROUP)).c_str(), L"[0x51c] This security ID may not be assigned as the primary group of an object.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoImpersonationToken)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_IMPERSONATION_TOKEN)).c_str(), L"[0x51d] An attempt has been made to operate on an impersonation token by a thread that is not currently impersonating a client.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCantDisableMandatory)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANT_DISABLE_MANDATORY)).c_str(), L"[0x51e] The group may not be disabled.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoLogonServers)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_LOGON_SERVERS)).c_str(), L"[0x51f] We can't sign you in with this credential because your domain isn't available. Make sure your device is connected to your organization's network and try again. If you previously signed in on this device with another credential, you can sign in with that credential.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoSuchLogonSession)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_SUCH_LOGON_SESSION)).c_str(), L"[0x520] A specified logon session does not exist. It may already have been terminated.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoSuchPrivilege)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_SUCH_PRIVILEGE)).c_str(), L"[0x521] A specified privilege does not exist.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPrivilegeNotHeld)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PRIVILEGE_NOT_HELD)).c_str(), L"[0x522] A required privilege is not held by the client.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidAccountName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_ACCOUNT_NAME)).c_str(), L"[0x523] The name provided is not a properly formed account name.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoWildcardCharacters)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_WILDCARD_CHARACTERS)).c_str(), L"[0x589] No wildcards were found.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorClipboardNotOpen)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLIPBOARD_NOT_OPEN)).c_str(), L"[0x58a] Thread does not have a clipboard open.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorHotkeyNotRegistered)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_HOTKEY_NOT_REGISTERED)).c_str(), L"[0x58b] Hot key is not registered.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorWindowNotDialog)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WINDOW_NOT_DIALOG)).c_str(), L"[0x58c] The window is not a valid dialog window.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorControlIdNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CONTROL_ID_NOT_FOUND)).c_str(), L"[0x58d] Control ID not found.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidComboboxMessage)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_COMBOBOX_MESSAGE)).c_str(), L"[0x58e] Invalid message for a combo box because it does not have an edit control.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorWindowNotCombobox)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WINDOW_NOT_COMBOBOX)).c_str(), L"[0x58f] The window is not a combo box.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidEditHeight)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_EDIT_HEIGHT)).c_str(), L"[0x590] Height must be less than 256.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDcNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DC_NOT_FOUND)).c_str(), L"[0x591] Invalid device context (DC) handle.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidHookFilter)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_HOOK_FILTER)).c_str(), L"[0x592] Invalid hook procedure type.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidFilterProc)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_FILTER_PROC)).c_str(), L"[0x593] Invalid hook procedure.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorHookNeedsHmod)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_HOOK_NEEDS_HMOD)).c_str(), L"[0x594] Cannot set nonlocal hook without a module handle.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorGlobalOnlyHook)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_GLOBAL_ONLY_HOOK)).c_str(), L"[0x595] This hook procedure can only be set globally.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorJournalHookSet)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_JOURNAL_HOOK_SET)).c_str(), L"[0x596] The journal hook procedure is already installed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorHookNotInstalled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_HOOK_NOT_INSTALLED)).c_str(), L"[0x597] The hook procedure is not installed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidLbMessage)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_LB_MESSAGE)).c_str(), L"[0x598] Invalid message for single-selection list box.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSetcountOnBadLb)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SETCOUNT_ON_BAD_LB)).c_str(), L"[0x599] LB_SETCOUNT sent to non-lazy list box.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorLbWithoutTabstops)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LB_WITHOUT_TABSTOPS)).c_str(), L"[0x59a] This list box does not support tab stops.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDestroyObjectOfOtherThread)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DESTROY_OBJECT_OF_OTHER_THREAD)).c_str(), L"[0x59b] Cannot destroy object created by another thread.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorChildWindowMenu)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CHILD_WINDOW_MENU)).c_str(), L"[0x59c] Child windows cannot have menus.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoSystemMenu)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_SYSTEM_MENU)).c_str(), L"[0x59d] The window does not have a system menu.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidMsgboxStyle)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_MSGBOX_STYLE)).c_str(), L"[0x59e] Invalid message box style.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidSpiValue)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_SPI_VALUE)).c_str(), L"[0x59f] Invalid system-wide (SPI_*) parameter.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorScreenAlreadyLocked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SCREEN_ALREADY_LOCKED)).c_str(), L"[0x5a0] Screen already locked.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorHwndsHaveDiffParent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_HWNDS_HAVE_DIFF_PARENT)).c_str(), L"[0x5a1] All handles to windows in a multiple-window position structure must have the same parent.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNotChildWindow)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_CHILD_WINDOW)).c_str(), L"[0x5a2] The window is not a child window.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidGwCommand)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_GW_COMMAND)).c_str(), L"[0x5a3] Invalid GW_* command.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidThreadId)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_THREAD_ID)).c_str(), L"[0x5a4] Invalid thread identifier.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNonMdichildWindow)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NON_MDICHILD_WINDOW)).c_str(), L"[0x5a5] Cannot process a message from a window that is not a multiple document interface (MDI) window.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPopupAlreadyActive)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_POPUP_ALREADY_ACTIVE)).c_str(), L"[0x5a6] Popup menu already active.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoScrollbars)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_SCROLLBARS)).c_str(), L"[0x5a7] The window does not have scroll bars.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidScrollbarRange)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_SCROLLBAR_RANGE)).c_str(), L"[0x5a8] Scroll bar range cannot be greater than MAXLONG.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidShowwinCommand)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_SHOWWIN_COMMAND)).c_str(), L"[0x5a9] Cannot show or remove the window in the way specified.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoSystemResources)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_SYSTEM_RESOURCES)).c_str(), L"[0x5aa] Insufficient system resources exist to complete the requested service.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNonpagedSystemResources)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NONPAGED_SYSTEM_RESOURCES)).c_str(), L"[0x5ab] Insufficient system resources exist to complete the requested service.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPagedSystemResources)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PAGED_SYSTEM_RESOURCES)).c_str(), L"[0x5ac] Insufficient system resources exist to complete the requested service.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorWorkingSetQuota)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WORKING_SET_QUOTA)).c_str(), L"[0x5ad] Insufficient quota to complete the requested service.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPagefileQuota)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PAGEFILE_QUOTA)).c_str(), L"[0x5ae] Insufficient quota to complete the requested service.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCommitmentLimit)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_COMMITMENT_LIMIT)).c_str(), L"[0x5af] The paging file is too small for this operation to complete.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorMenuItemNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MENU_ITEM_NOT_FOUND)).c_str(), L"[0x5b0] A menu item was not found.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidKeyboardHandle)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_KEYBOARD_HANDLE)).c_str(), L"[0x5b1] Invalid keyboard layout handle.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorHookTypeNotAllowed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_HOOK_TYPE_NOT_ALLOWED)).c_str(), L"[0x5b2] Hook type not allowed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorRequiresInteractiveWindowstation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REQUIRES_INTERACTIVE_WINDOWSTATION)).c_str(), L"[0x5b3] This operation requires an interactive window station.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorTimeout)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TIMEOUT)).c_str(), L"[0x5b4] This operation returned because the timeout period expired.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidMonitorHandle)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_MONITOR_HANDLE)).c_str(), L"[0x5b5] Invalid monitor handle.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorIncorrectSize)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INCORRECT_SIZE)).c_str(), L"[0x5b6] Incorrect size argument.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSymlinkClassDisabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SYMLINK_CLASS_DISABLED)).c_str(), L"[0x5b7] The symbolic link cannot be followed because its type is disabled.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorSymlinkNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SYMLINK_NOT_SUPPORTED)).c_str(), L"[0x5b8] This application does not support the current operation on symbolic links.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorXmlParseError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_XML_PARSE_ERROR)).c_str(), L"[0x5b9] Windows was unable to parse the requested XML data.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorXmldsigError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_XMLDSIG_ERROR)).c_str(), L"[0x5ba] An error was encountered while processing an XML digital signature.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorRestartApplication)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RESTART_APPLICATION)).c_str(), L"[0x5bb] This application must be restarted.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorWrongCompartment)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WRONG_COMPARTMENT)).c_str(), L"[0x5bc] The caller made the connection request in the wrong routing compartment.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorAuthipFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_AUTHIP_FAILURE)).c_str(), L"[0x5bd] There was an AuthIP failure when attempting to connect to the remote host.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNoNvramResources)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_NVRAM_RESOURCES)).c_str(), L"[0x5be] Insufficient NVRAM resources exist to complete the requested service. A reboot might be required.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorNotGuiProcess)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_GUI_PROCESS)).c_str(), L"[0x5bf] Unable to finish the requested operation because the specified process is not a GUI process.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorEventlogFileCorrupt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVENTLOG_FILE_CORRUPT)).c_str(), L"[0x5dc] The event log file is corrupted.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorEventlogCantStart)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVENTLOG_CANT_START)).c_str(), L"[0x5dd] No event log file could be opened, so the event logging service did not start.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorLogFileFull)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_FILE_FULL)).c_str(), L"[0x5de] The event log file is full.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorEventlogFileChanged)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVENTLOG_FILE_CHANGED)).c_str(), L"[0x5df] The event log file has changed between read operations.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorContainerAssigned)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CONTAINER_ASSIGNED)).c_str(), L"[0x5e0] The specified Job already has a container assigned to it.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorJobNoContainer)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_JOB_NO_CONTAINER)).c_str(), L"[0x5e1] The specified Job does not have a container assigned to it.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidTaskName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_TASK_NAME)).c_str(), L"[0x60e] The specified task name is invalid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidTaskIndex)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_TASK_INDEX)).c_str(), L"[0x60f] The specified task index is invalid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorThreadAlreadyInTask)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_THREAD_ALREADY_IN_TASK)).c_str(), L"[0x610] The specified thread is already joining a task.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInstallServiceFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_SERVICE_FAILURE)).c_str(), L"[0x641] The Windows Installer Service could not be accessed. This can occur if the Windows Installer is not correctly installed. Contact your support personnel for assistance.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInstallUserexit)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_USEREXIT)).c_str(), L"[0x642] User cancelled installation.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInstallFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_FAILURE)).c_str(), L"[0x643] Fatal error during installation.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInstallSuspend)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_SUSPEND)).c_str(), L"[0x644] Installation suspended, incomplete.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorUnknownProduct)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNKNOWN_PRODUCT)).c_str(), L"[0x645] This action is only valid for products that are currently installed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorUnknownFeature)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNKNOWN_FEATURE)).c_str(), L"[0x646] Feature ID not registered.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorUnknownComponent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNKNOWN_COMPONENT)).c_str(), L"[0x647] Component ID not registered.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorUnknownProperty)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNKNOWN_PROPERTY)).c_str(), L"[0x648] Unknown property.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidHandleState)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_HANDLE_STATE)).c_str(), L"[0x649] Handle is in an invalid state.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorBadConfiguration)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_CONFIGURATION)).c_str(), L"[0x64a] The configuration data for this product is corrupt. Contact your support personnel.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorIndexAbsent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INDEX_ABSENT)).c_str(), L"[0x64b] Component qualifier not present.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInstallSourceAbsent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_SOURCE_ABSENT)).c_str(), L"[0x64c] The installation source for this product is not available. Verify that the source exists and that you can access it.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInstallPackageVersion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_PACKAGE_VERSION)).c_str(), L"[0x64d] This installation package cannot be installed by the Windows Installer service. You must install a Windows service pack that contains a newer version of the Windows Installer service.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorProductUninstalled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PRODUCT_UNINSTALLED)).c_str(), L"[0x64e] Product is uninstalled.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorBadQuerySyntax)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_QUERY_SYNTAX)).c_str(), L"[0x64f] SQL query syntax invalid or unsupported.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidField)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_FIELD)).c_str(), L"[0x650] Record field does not exist.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDeviceRemoved)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEVICE_REMOVED)).c_str(), L"[0x651] The device has been removed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInstallAlreadyRunning)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_ALREADY_RUNNING)).c_str(), L"[0x652] Another installation is already in progress. Complete that installation before proceeding with this install.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInstallPackageOpenFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_PACKAGE_OPEN_FAILED)).c_str(), L"[0x653] This installation package could not be opened. Verify that the package exists and that you can access it, or contact the application vendor to verify that this is a valid Windows Installer package.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInstallPackageInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_PACKAGE_INVALID)).c_str(), L"[0x654] This installation package could not be opened. Contact the application vendor to verify that this is a valid Windows Installer package.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInstallUiFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_UI_FAILURE)).c_str(), L"[0x655] There was an error starting the Windows Installer service user interface. Contact your support personnel.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInstallLogFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_LOG_FAILURE)).c_str(), L"[0x656] Error opening installation log file. Verify that the specified log file location exists and that you can write to it.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInstallLanguageUnsupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_LANGUAGE_UNSUPPORTED)).c_str(), L"[0x657] The language of this installation package is not supported by your system.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInstallTransformFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_TRANSFORM_FAILURE)).c_str(), L"[0x658] Error applying transforms. Verify that the specified transform paths are valid.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInstallPackageRejected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_PACKAGE_REJECTED)).c_str(), L"[0x659] This installation is forbidden by system policy. Contact your system administrator.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFunctionNotCalled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FUNCTION_NOT_CALLED)).c_str(), L"[0x65a] Function could not be executed.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorFunctionFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FUNCTION_FAILED)).c_str(), L"[0x65b] Function failed during execution.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInvalidTable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_TABLE)).c_str(), L"[0x65c] Invalid or unknown table specified.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorDatatypeMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DATATYPE_MISMATCH)).c_str(), L"[0x65d] Data supplied is of wrong type.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorUnsupportedType)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNSUPPORTED_TYPE)).c_str(), L"[0x65e] Data of this type is not supported.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorCreateFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CREATE_FAILED)).c_str(), L"[0x65f] The Windows Installer service failed to start. Contact your support personnel.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInstallTempUnwritable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_TEMP_UNWRITABLE)).c_str(), L"[0x660] The Temp folder is on a drive that is full or is inaccessible. Free up space on the drive or verify that you have write permission on the Temp folder.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInstallPlatformUnsupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_PLATFORM_UNSUPPORTED)).c_str(), L"[0x661] This installation package is not supported by this processor type. Contact your product vendor.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorInstallNotused)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_NOTUSED)).c_str(), L"[0x662] Component not used on this computer.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPatchPackageOpenFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PATCH_PACKAGE_OPEN_FAILED)).c_str(), L"[0x663] This update package could not be opened. Verify that the update package exists and that you can access it, or contact the application vendor to verify that this is a valid Windows Installer update package.");
}

TEST(Win32SystemErrorsTest1000, Win32ErrorPatchPackageInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PATCH_PACKAGE_INVALID)).c_str(), L"[0x664] This update package could not be opened. Contact the application vendor to verify that this is a valid Windows Installer update package.");
}
