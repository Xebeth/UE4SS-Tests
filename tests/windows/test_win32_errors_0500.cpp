#include <format>
#include <windows.h>
#include <gtest/gtest.h>

#include <Helpers/String.hpp>
#include <Helpers/SysError.hpp>

using namespace RC;

TEST(Win32SystemErrorsTest0500, Win32Success)
{
    EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SUCCESS)).c_str(), L"[0x0] The operation completed successfully.");
}

TEST(Win32SystemErrorsTest0500, Win32FileNotFound)
{
    EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_NOT_FOUND)).c_str(), L"[0x2] The system cannot find the file specified.");
}

TEST(Win32SystemErrorsTest0500, Win32PathNotFound)
{
    EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PATH_NOT_FOUND)).c_str(), L"[0x3] The system cannot find the path specified.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorTooManyOpenFiles)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TOO_MANY_OPEN_FILES)).c_str(),  L"[0x4] The system cannot open the file.");
}

TEST(Win32SystemErrorsTest0500, Win32AccessDenied)
{
    EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ACCESS_DENIED)).c_str(), L"[0x5] Access is denied.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidHandle)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_HANDLE)).c_str(),  L"[0x6] The handle is invalid.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorArenaTrashed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ARENA_TRASHED)).c_str(),  L"[0x7] The storage control blocks were destroyed.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidBlock)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_BLOCK)).c_str(),  L"[0x9] The storage control block address is invalid.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadEnvironment)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_ENVIRONMENT)).c_str(),  L"[0xa] The environment is incorrect.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadFormat)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_FORMAT)).c_str(),  L"[0xb] An attempt was made to load a program with an incorrect format.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidAccess)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_ACCESS)).c_str(),  L"[0xc] The access code is invalid.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidData)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_DATA)).c_str(),  L"[0xd] The data is invalid.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorOutofmemory)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_OUTOFMEMORY)).c_str(),  L"[0xe] Not enough memory resources are available to complete this operation.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidDrive)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_DRIVE)).c_str(),  L"[0xf] The system cannot find the drive specified.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCurrentDirectory)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CURRENT_DIRECTORY)).c_str(),  L"[0x10] The directory cannot be removed.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotSameDevice)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SAME_DEVICE)).c_str(),  L"[0x11] The system cannot move the file to a different disk drive.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNoMoreFiles)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_MORE_FILES)).c_str(),  L"[0x12] There are no more files.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorWriteProtect)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WRITE_PROTECT)).c_str(),  L"[0x13] The media is write protected.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadUnit)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_UNIT)).c_str(),  L"[0x14] The system cannot find the device specified.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotReady)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_READY)).c_str(),  L"[0x15] The device is not ready.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadCommand)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_COMMAND)).c_str(),  L"[0x16] The device does not recognize the command.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCrc)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CRC)).c_str(),  L"[0x17] Data error (cyclic redundancy check).");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadLength)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_LENGTH)).c_str(),  L"[0x18] The program issued a command but the command length is incorrect.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSeek)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SEEK)).c_str(),  L"[0x19] The drive cannot locate a specific area or track on the disk.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotDosDisk)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_DOS_DISK)).c_str(),  L"[0x1a] The specified disk or diskette cannot be accessed.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSectorNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SECTOR_NOT_FOUND)).c_str(),  L"[0x1b] The drive cannot find the sector requested.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorOutOfPaper)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_OUT_OF_PAPER)).c_str(),  L"[0x1c] The printer is out of paper.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorWriteFault)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WRITE_FAULT)).c_str(),  L"[0x1d] The system cannot write to the specified device.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorReadFault)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_READ_FAULT)).c_str(),  L"[0x1e] The system cannot read from the specified device.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorGenFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_GEN_FAILURE)).c_str(),  L"[0x1f] A device attached to the system is not functioning.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSharingViolation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SHARING_VIOLATION)).c_str(),  L"[0x20] The process cannot access the file because it is being used by another process.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorLockViolation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOCK_VIOLATION)).c_str(),  L"[0x21] The process cannot access the file because another process has locked a portion of the file.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorWrongDisk)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WRONG_DISK)).c_str(),  L"[0x22] The wrong diskette is in the drive. Insert %2 (Volume Serial Number: %3) into drive %1.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSharingBufferExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SHARING_BUFFER_EXCEEDED)).c_str(),  L"[0x24] Too many files opened for sharing.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorHandleEof)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_HANDLE_EOF)).c_str(),  L"[0x26] Reached the end of the file.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorHandleDiskFull)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_HANDLE_DISK_FULL)).c_str(),  L"[0x27] The disk is full.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SUPPORTED)).c_str(),  L"[0x32] The request is not supported.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorRemNotList)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REM_NOT_LIST)).c_str(),  L"[0x33] Windows cannot find the network path. Verify that the network path is correct and the destination computer is not busy or turned off. If Windows still cannot find the network path, contact your network administrator.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDupName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DUP_NAME)).c_str(),  L"[0x34] You were not connected because a duplicate name exists on the network. If joining a domain, go to System in Control Panel to change the computer name and try again. If joining a workgroup, choose another workgroup name.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadNetpath)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_NETPATH)).c_str(),  L"[0x35] The network path was not found.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNetworkBusy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NETWORK_BUSY)).c_str(),  L"[0x36] The network is busy.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorTooManyCmds)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TOO_MANY_CMDS)).c_str(),  L"[0x38] The network BIOS command limit has been reached.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorAdapHdwErr)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ADAP_HDW_ERR)).c_str(),  L"[0x39] A network adapter hardware error occurred.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadNetResp)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_NET_RESP)).c_str(),  L"[0x3a] The specified server cannot perform the requested operation.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorUnexpNetErr)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNEXP_NET_ERR)).c_str(),  L"[0x3b] An unexpected network error occurred.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadRemAdap)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_REM_ADAP)).c_str(),  L"[0x3c] The remote adapter is not compatible.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPrintqFull)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PRINTQ_FULL)).c_str(),  L"[0x3d] The printer queue is full.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNoSpoolSpace)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_SPOOL_SPACE)).c_str(),  L"[0x3e] Space to store the file waiting to be printed is not available on the server.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPrintCancelled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PRINT_CANCELLED)).c_str(),  L"[0x3f] Your file waiting to be printed was deleted.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNetnameDeleted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NETNAME_DELETED)).c_str(),  L"[0x40] The specified network name is no longer available.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNetworkAccessDenied)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NETWORK_ACCESS_DENIED)).c_str(),  L"[0x41] Network access is denied.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadDevType)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_DEV_TYPE)).c_str(),  L"[0x42] The network resource type is not correct.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadNetName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_NET_NAME)).c_str(),  L"[0x43] The network name cannot be found.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorTooManyNames)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TOO_MANY_NAMES)).c_str(),  L"[0x44] The name limit for the local computer network adapter card was exceeded.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorTooManySess)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TOO_MANY_SESS)).c_str(),  L"[0x45] The network BIOS session limit was exceeded.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSharingPaused)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SHARING_PAUSED)).c_str(),  L"[0x46] The remote server has been paused or is in the process of being started.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorReqNotAccep)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REQ_NOT_ACCEP)).c_str(),  L"[0x47] No more connections can be made to this remote computer at this time because there are already as many connections as the computer can accept.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorRedirPaused)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REDIR_PAUSED)).c_str(),  L"[0x48] The specified printer or disk device has been paused.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFileExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_EXISTS)).c_str(),  L"[0x50] The file exists.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCannotMake)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANNOT_MAKE)).c_str(),  L"[0x52] The directory or file cannot be created.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFailI24)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FAIL_I24)).c_str(),  L"[0x53] Fail on INT 24.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorOutOfStructures)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_OUT_OF_STRUCTURES)).c_str(),  L"[0x54] Storage to process this request is not available.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorAlreadyAssigned)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ALREADY_ASSIGNED)).c_str(),  L"[0x55] The local device name is already in use.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidPassword)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_PASSWORD)).c_str(),  L"[0x56] The specified network password is not correct.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNetWriteFault)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NET_WRITE_FAULT)).c_str(),  L"[0x58] A write fault occurred on the network.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNoProcSlots)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_PROC_SLOTS)).c_str(),  L"[0x59] The system cannot start another process at this time.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorTooManySemaphores)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TOO_MANY_SEMAPHORES)).c_str(),  L"[0x64] Cannot create another system semaphore.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorExclSemAlreadyOwned)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EXCL_SEM_ALREADY_OWNED)).c_str(),  L"[0x65] The exclusive semaphore is owned by another process.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSemIsSet)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SEM_IS_SET)).c_str(),  L"[0x66] The semaphore is set and cannot be closed.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorChildNotComplete)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CHILD_NOT_COMPLETE)).c_str(),  L"[0x81] The %1 application cannot be run in Win32 mode.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDirectAccessHandle)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DIRECT_ACCESS_HANDLE)).c_str(),  L"[0x82] Attempt to use a file handle to an open disk partition for an operation other than raw disk I/O.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNegativeSeek)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NEGATIVE_SEEK)).c_str(),  L"[0x83] An attempt was made to move the file pointer before the beginning of the file.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSeekOnDevice)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SEEK_ON_DEVICE)).c_str(),  L"[0x84] The file pointer cannot be set on the specified device or file.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorIsJoinTarget)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IS_JOIN_TARGET)).c_str(),  L"[0x85] A JOIN or SUBST command cannot be used for a drive that contains previously joined drives.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorIsJoined)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IS_JOINED)).c_str(),  L"[0x86] An attempt was made to use a JOIN or SUBST command on a drive that has already been joined.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorIsSubsted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IS_SUBSTED)).c_str(),  L"[0x87] An attempt was made to use a JOIN or SUBST command on a drive that has already been substituted.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotJoined)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_JOINED)).c_str(),  L"[0x88] The system tried to delete the JOIN of a drive that is not joined.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorTooManySemRequests)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TOO_MANY_SEM_REQUESTS)).c_str(),  L"[0x67] The semaphore cannot be set again.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidAtInterruptTime)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_AT_INTERRUPT_TIME)).c_str(),  L"[0x68] Cannot request exclusive semaphores at interrupt time.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSemOwnerDied)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SEM_OWNER_DIED)).c_str(),  L"[0x69] The previous ownership of this semaphore has ended.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSemUserLimit)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SEM_USER_LIMIT)).c_str(),  L"[0x6a] Insert the diskette for drive %1.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDiskChange)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DISK_CHANGE)).c_str(),  L"[0x6b] The program stopped because an alternate diskette was not inserted.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDriveLocked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DRIVE_LOCKED)).c_str(),  L"[0x6c] The disk is in use or locked by another process.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBrokenPipe)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BROKEN_PIPE)).c_str(),  L"[0x6d] The pipe has been ended.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorOpenFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_OPEN_FAILED)).c_str(),  L"[0x6e] The system cannot open the device or file specified.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBufferOverflow)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BUFFER_OVERFLOW)).c_str(),  L"[0x6f] The file name is too long.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDiskFull)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DISK_FULL)).c_str(),  L"[0x70] There is not enough space on the disk.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNoMoreSearchHandles)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_MORE_SEARCH_HANDLES)).c_str(),  L"[0x71] No more internal file identifiers available.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidTargetHandle)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_TARGET_HANDLE)).c_str(),  L"[0x72] The target internal file identifier is incorrect.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidCategory)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_CATEGORY)).c_str(),  L"[0x75] The IOCTL call made by the application program is not correct.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidVerifySwitch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_VERIFY_SWITCH)).c_str(),  L"[0x76] The verify-on-write switch parameter value is not correct.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadDriverLevel)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_DRIVER_LEVEL)).c_str(),  L"[0x77] The system does not support the command requested.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCallNotImplemented)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CALL_NOT_IMPLEMENTED)).c_str(),  L"[0x78] This function is not supported on this system.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSemTimeout)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SEM_TIMEOUT)).c_str(),  L"[0x79] The semaphore timeout period has expired.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidLevel)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_LEVEL)).c_str(),  L"[0x7c] The system call level is not correct.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNoVolumeLabel)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_VOLUME_LABEL)).c_str(),  L"[0x7d] The disk has no volume label.");
}

TEST(Win32SystemErrorsTest0500, Win32ModuleNotFound)
{
    EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MOD_NOT_FOUND)).c_str(), L"[0x7e] The specified module could not be found.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorProcNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PROC_NOT_FOUND)).c_str(),  L"[0x7f] The specified procedure could not be found.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorWaitNoChildren)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WAIT_NO_CHILDREN)).c_str(),  L"[0x80] There are no child processes to wait for.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotSubsted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SUBSTED)).c_str(),  L"[0x89] The system tried to delete the substitution of a drive that is not substituted.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorJoinToJoin)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_JOIN_TO_JOIN)).c_str(), L"[0x8a] The system tried to join a drive to a directory on a joined drive.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSubstToSubst)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SUBST_TO_SUBST)).c_str(), L"[0x8b] The system tried to substitute a drive to a directory on a substituted drive.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorJoinToSubst)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_JOIN_TO_SUBST)).c_str(), L"[0x8c] The system tried to join a drive to a directory on a substituted drive.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSubstToJoin)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SUBST_TO_JOIN)).c_str(), L"[0x8d] The system tried to SUBST a drive to a directory on a joined drive.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBusyDrive)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BUSY_DRIVE)).c_str(), L"[0x8e] The system cannot perform a JOIN or SUBST at this time.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSameDrive)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SAME_DRIVE)).c_str(), L"[0x8f] The system cannot join or substitute a drive to or for a directory on the same drive.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDirNotRoot)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DIR_NOT_ROOT)).c_str(), L"[0x90] The directory is not a subdirectory of the root directory.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDirNotEmpty)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DIR_NOT_EMPTY)).c_str(), L"[0x91] The directory is not empty.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorIsSubstPath)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IS_SUBST_PATH)).c_str(), L"[0x92] The path specified is being used in a substitute.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorIsJoinPath)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IS_JOIN_PATH)).c_str(), L"[0x93] Not enough resources are available to process this command.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPathBusy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PATH_BUSY)).c_str(), L"[0x94] The path specified cannot be used at this time.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorIsSubstTarget)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IS_SUBST_TARGET)).c_str(), L"[0x95] An attempt was made to join or substitute a drive for which a directory on the drive is the target of a previous substitute.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSystemTrace)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SYSTEM_TRACE)).c_str(), L"[0x96] System trace information was not specified in your CONFIG.SYS file, or tracing is disallowed.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidEventCount)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_EVENT_COUNT)).c_str(), L"[0x97] The number of specified semaphore events for DosMuxSemWait is not correct.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorTooManyMuxwaiters)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TOO_MANY_MUXWAITERS)).c_str(), L"[0x98] DosMuxSemWait did not execute; too many semaphores are already set.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidListFormat)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_LIST_FORMAT)).c_str(), L"[0x99] The DosMuxSemWait list is not correct.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorLabelTooLong)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LABEL_TOO_LONG)).c_str(), L"[0x9a] The volume label you entered exceeds the label character limit of the target file system.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorTooManyTcbs)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TOO_MANY_TCBS)).c_str(), L"[0x9b] Cannot create another thread.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSignalRefused)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SIGNAL_REFUSED)).c_str(), L"[0x9c] The recipient process has refused the signal.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDiscarded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DISCARDED)).c_str(), L"[0x9d] The segment is already discarded and cannot be locked.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotLocked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_LOCKED)).c_str(), L"[0x9e] The segment is already unlocked.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadThreadidAddr)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_THREADID_ADDR)).c_str(), L"[0x9f] The address for the thread ID is not correct.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadArguments)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_ARGUMENTS)).c_str(), L"[0xa0] One or more arguments are not correct.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadPathname)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_PATHNAME)).c_str(), L"[0xa1] The specified path is invalid.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSignalPending)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SIGNAL_PENDING)).c_str(), L"[0xa2] A signal is already pending.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorMaxThrdsReached)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MAX_THRDS_REACHED)).c_str(), L"[0xa4] No more threads can be created in the system.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorLockFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOCK_FAILED)).c_str(), L"[0xa7] Unable to lock a region of a file.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDeviceSupportInProgress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEVICE_SUPPORT_IN_PROGRESS)).c_str(), L"[0xab] Device's command support detection is in progress.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCancelViolation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANCEL_VIOLATION)).c_str(), L"[0xad] A lock request was not outstanding for the supplied cancel region.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorAtomicLocksNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ATOMIC_LOCKS_NOT_SUPPORTED)).c_str(), L"[0xae] The file system does not support atomic changes to the lock type.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidSegmentNumber)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_SEGMENT_NUMBER)).c_str(), L"[0xb4] The system detected a segment number that was not correct.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidOrdinal)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_ORDINAL)).c_str(), L"[0xb6] The operating system cannot run %1.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorAlreadyExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ALREADY_EXISTS)).c_str(), L"[0xb7] Cannot create a file when that file already exists.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidFlagNumber)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_FLAG_NUMBER)).c_str(), L"[0xba] The flag passed is not correct.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSemNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SEM_NOT_FOUND)).c_str(), L"[0xbb] The specified system semaphore name was not found.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidStartingCodeseg)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_STARTING_CODESEG)).c_str(), L"[0xbc] The operating system cannot run %1.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidStackseg)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_STACKSEG)).c_str(), L"[0xbd] The operating system cannot run %1.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidModuletype)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_MODULETYPE)).c_str(), L"[0xbe] The operating system cannot run %1.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidExeSignature)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_EXE_SIGNATURE)).c_str(), L"[0xbf] Cannot run %1 in Win32 mode.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorExeMarkedInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EXE_MARKED_INVALID)).c_str(), L"[0xc0] The operating system cannot run %1.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadExeFormat)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_EXE_FORMAT)).c_str(), L"[0xc1] %1 is not a valid Win32 application.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorIteratedDataExceeds64K)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ITERATED_DATA_EXCEEDS_64k)).c_str(), L"[0xc2] The operating system cannot run %1.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidMinallocsize)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_MINALLOCSIZE)).c_str(), L"[0xc3] The operating system cannot run %1.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDynlinkFromInvalidRing)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DYNLINK_FROM_INVALID_RING)).c_str(), L"[0xc4] The operating system cannot run this application program.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorIoplNotEnabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IOPL_NOT_ENABLED)).c_str(), L"[0xc5] The operating system is not presently configured to run this application.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidSegdpl)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_SEGDPL)).c_str(), L"[0xc6] The operating system cannot run %1.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorAutodatasegExceeds64K)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_AUTODATASEG_EXCEEDS_64k)).c_str(), L"[0xc7] The operating system cannot run this application program.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorRing2SegMustBeMovable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RING2SEG_MUST_BE_MOVABLE)).c_str(), L"[0xc8] The code segment cannot be greater than or equal to 64K.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorRelocChainXeedsSeglim)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RELOC_CHAIN_XEEDS_SEGLIM)).c_str(), L"[0xc9] The operating system cannot run %1.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInfloopInRelocChain)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INFLOOP_IN_RELOC_CHAIN)).c_str(), L"[0xca] The operating system cannot run %1.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorEnvvarNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ENVVAR_NOT_FOUND)).c_str(), L"[0xcb] The system could not find the environment option that was entered.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNoSignalSent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_SIGNAL_SENT)).c_str(), L"[0xcd] No process in the command subtree has a signal handler.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFilenameExcedRange)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILENAME_EXCED_RANGE)).c_str(), L"[0xce] The filename or extension is too long.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorRing2StackInUse)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RING2_STACK_IN_USE)).c_str(), L"[0xcf] The ring 2 stack is in use.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorMetaExpansionTooLong)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_META_EXPANSION_TOO_LONG)).c_str(), L"[0xd0] The global filename characters, * or ?, are entered incorrectly or too many global filename characters are specified.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidSignalNumber)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_SIGNAL_NUMBER)).c_str(), L"[0xd1] The signal being posted is not correct.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorThread1Inactive)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_THREAD_1_INACTIVE)).c_str(), L"[0xd2] The signal handler cannot be set.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorLocked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOCKED)).c_str(), L"[0xd4] The segment is locked and cannot be reallocated.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorTooManyModules)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TOO_MANY_MODULES)).c_str(), L"[0xd6] Too many dynamic-link modules are attached to this program or dynamic-link module.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNestingNotAllowed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NESTING_NOT_ALLOWED)).c_str(), L"[0xd7] Cannot nest calls to LoadModule.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorExeMachineTypeMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EXE_MACHINE_TYPE_MISMATCH)).c_str(), L"[0xd8] This version of %1 is not compatible with the version of Windows you're running. Check your computer's system information and then contact the software publisher.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorExeCannotModifySignedBinary)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EXE_CANNOT_MODIFY_SIGNED_BINARY)).c_str(), L"[0xd9] The image file %1 is signed, unable to modify.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorExeCannotModifyStrongSignedBinary)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EXE_CANNOT_MODIFY_STRONG_SIGNED_BINARY)).c_str(), L"[0xda] The image file %1 is strong signed, unable to modify.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFileCheckedOut)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_CHECKED_OUT)).c_str(), L"[0xdc] This file is checked out or locked for editing by another user.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCheckoutRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CHECKOUT_REQUIRED)).c_str(), L"[0xdd] The file must be checked out before saving changes.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadFileType)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_FILE_TYPE)).c_str(), L"[0xde] The file type being saved or retrieved has been blocked.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFileTooLarge)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_TOO_LARGE)).c_str(), L"[0xdf] The file size exceeds the limit allowed and cannot be saved.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFormsAuthRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FORMS_AUTH_REQUIRED)).c_str(), L"[0xe0] Access Denied. Before opening files in this location, you must first add the web site to your trusted sites list, browse to the web site, and select the option to login automatically.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorVirusInfected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VIRUS_INFECTED)).c_str(), L"[0xe1] Operation did not complete successfully because the file contains a virus or potentially unwanted software.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorVirusDeleted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VIRUS_DELETED)).c_str(), L"[0xe2] This file contains a virus or potentially unwanted software and cannot be opened. Due to the nature of this virus or potentially unwanted software, the file has been removed from this location.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPipeLocal)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PIPE_LOCAL)).c_str(), L"[0xe5] The pipe is local.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadPipe)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_PIPE)).c_str(), L"[0xe6] The pipe state is invalid.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPipeBusy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PIPE_BUSY)).c_str(), L"[0xe7] All pipe instances are busy.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNoData)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_DATA)).c_str(), L"[0xe8] The pipe is being closed.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPipeNotConnected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PIPE_NOT_CONNECTED)).c_str(), L"[0xe9] No process is on the other end of the pipe.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNoWorkDone)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_WORK_DONE)).c_str(), L"[0xeb] The action requested resulted in no work being done. Error-style clean-up has been performed.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorVcDisconnected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VC_DISCONNECTED)).c_str(), L"[0xf0] The session was canceled.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidEaName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_EA_NAME)).c_str(), L"[0xfe] The specified extended attribute name was invalid.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorEaListInconsistent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EA_LIST_INCONSISTENT)).c_str(), L"[0xff] The extended attributes are inconsistent.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNoMoreItems)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_MORE_ITEMS)).c_str(), L"[0x103] No more data is available.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCannotCopy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANNOT_COPY)).c_str(), L"[0x10a] The copy functions cannot be used.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDirectory)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DIRECTORY)).c_str(), L"[0x10b] The directory name is invalid.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorEasDidntFit)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EAS_DIDNT_FIT)).c_str(), L"[0x113] The extended attributes did not fit in the buffer.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorEaFileCorrupt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EA_FILE_CORRUPT)).c_str(), L"[0x114] The extended attribute file on the mounted file system is corrupt.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorEaTableFull)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EA_TABLE_FULL)).c_str(), L"[0x115] The extended attribute table file is full.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidEaHandle)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_EA_HANDLE)).c_str(), L"[0x116] The specified extended attribute handle is invalid.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorEasNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EAS_NOT_SUPPORTED)).c_str(), L"[0x11a] The mounted file system does not support extended attributes.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotOwner)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_OWNER)).c_str(), L"[0x120] Attempt to release mutex not owned by caller.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorTooManyPosts)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TOO_MANY_POSTS)).c_str(), L"[0x12a] Too many posts were made to a semaphore.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPartialCopy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PARTIAL_COPY)).c_str(), L"[0x12b] Only part of a ReadProcessMemory or WriteProcessMemory request was completed.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorOplockNotGranted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_OPLOCK_NOT_GRANTED)).c_str(), L"[0x12c] The oplock request is denied.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidOplockProtocol)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_OPLOCK_PROTOCOL)).c_str(), L"[0x12d] An invalid oplock acknowledgment was received by the system.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDiskTooFragmented)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DISK_TOO_FRAGMENTED)).c_str(), L"[0x12e] The volume is too fragmented to complete this operation.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDeletePending)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DELETE_PENDING)).c_str(), L"[0x12f] The file cannot be opened because it is in the process of being deleted.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorIncompatibleWithGlobalShortNameRegistrySetting)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INCOMPATIBLE_WITH_GLOBAL_SHORT_NAME_REGISTRY_SETTING)).c_str(), L"[0x130] Short name settings may not be changed on this volume due to the global registry setting.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorShortNamesNotEnabledOnVolume)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SHORT_NAMES_NOT_ENABLED_ON_VOLUME)).c_str(), L"[0x131] Short names are not enabled on this volume.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSecurityStreamIsInconsistent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SECURITY_STREAM_IS_INCONSISTENT)).c_str(), L"[0x132] The security stream for the given volume is in an inconsistent state. Please run CHKDSK on the volume.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidLockRange)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_LOCK_RANGE)).c_str(), L"[0x133] A requested file lock operation cannot be processed due to an invalid byte range.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorImageSubsystemNotPresent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IMAGE_SUBSYSTEM_NOT_PRESENT)).c_str(), L"[0x134] The subsystem needed to support the image type is not present.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotificationGuidAlreadyDefined)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOTIFICATION_GUID_ALREADY_DEFINED)).c_str(), L"[0x135] The specified file already has a notification GUID associated with it.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidExceptionHandler)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_EXCEPTION_HANDLER)).c_str(), L"[0x136] An invalid exception handler routine has been detected.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDuplicatePrivileges)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DUPLICATE_PRIVILEGES)).c_str(), L"[0x137] Duplicate privileges were specified for the token.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNoRangesProcessed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_RANGES_PROCESSED)).c_str(), L"[0x138] No ranges for the specified operation were able to be processed.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotAllowedOnSystemFile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_ALLOWED_ON_SYSTEM_FILE)).c_str(), L"[0x139] Operation is not allowed on a file system internal file.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDiskResourcesExhausted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DISK_RESOURCES_EXHAUSTED)).c_str(), L"[0x13a] The physical resources of this disk have been exhausted.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidToken)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_TOKEN)).c_str(), L"[0x13b] The token representing the data is invalid.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDeviceFeatureNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEVICE_FEATURE_NOT_SUPPORTED)).c_str(), L"[0x13c] The device does not support the command feature.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorMrMidNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MR_MID_NOT_FOUND)).c_str(), L"[0x13d] The system cannot find message text for message number 0x%1 in the message file for %2.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorScopeNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SCOPE_NOT_FOUND)).c_str(), L"[0x13e] The scope specified was not found.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorUndefinedScope)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNDEFINED_SCOPE)).c_str(), L"[0x13f] The Central Access Policy specified is not defined on the target machine.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidCap)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_CAP)).c_str(), L"[0x140] The Central Access Policy obtained from Active Directory is invalid.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDeviceUnreachable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEVICE_UNREACHABLE)).c_str(), L"[0x141] The device is unreachable.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDeviceNoResources)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEVICE_NO_RESOURCES)).c_str(), L"[0x142] The target device has insufficient resources to complete the operation.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDataChecksumError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DATA_CHECKSUM_ERROR)).c_str(), L"[0x143] A data integrity checksum error occurred. Data in the file stream is corrupt.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorIntermixedKernelEaOperation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INTERMIXED_KERNEL_EA_OPERATION)).c_str(), L"[0x144] An attempt was made to modify both a KERNEL and normal Extended Attribute (EA) in the same operation.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFileLevelTrimNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_LEVEL_TRIM_NOT_SUPPORTED)).c_str(), L"[0x146] Device does not support file-level TRIM.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorOffsetAlignmentViolation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_OFFSET_ALIGNMENT_VIOLATION)).c_str(), L"[0x147] The command specified a data offset that does not align to the device's granularity/alignment.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidFieldInParameterList)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_FIELD_IN_PARAMETER_LIST)).c_str(), L"[0x148] The command specified an invalid field in its parameter list.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorOperationInProgress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_OPERATION_IN_PROGRESS)).c_str(), L"[0x149] An operation is currently in progress with the device.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadDevicePath)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_DEVICE_PATH)).c_str(), L"[0x14a] An attempt was made to send down the command via an invalid path to the target device.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorTooManyDescriptors)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TOO_MANY_DESCRIPTORS)).c_str(), L"[0x14b] The command specified a number of descriptors that exceeded the maximum supported by the device.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorScrubDataDisabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SCRUB_DATA_DISABLED)).c_str(), L"[0x14c] Scrub is disabled on the specified file.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotRedundantStorage)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_REDUNDANT_STORAGE)).c_str(), L"[0x14d] The storage device does not provide redundancy.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorResidentFileNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RESIDENT_FILE_NOT_SUPPORTED)).c_str(), L"[0x14e] The specified operation is not supported on a resident file.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCompressedFileNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_COMPRESSED_FILE_NOT_SUPPORTED)).c_str(), L"[0x14f] The specified operation is not supported on a compressed file.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDirectoryNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DIRECTORY_NOT_SUPPORTED)).c_str(), L"[0x150] The specified operation is not supported on a directory.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotReadFromCopy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_READ_FROM_COPY)).c_str(), L"[0x151] The specified copy of the requested data could not be read.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFtWriteFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FT_WRITE_FAILURE)).c_str(), L"[0x152] The specified data could not be written to any of the copies.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFtDiScanRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FT_DI_SCAN_REQUIRED)).c_str(), L"[0x153] One or more copies of data on this device may be out of sync. No writes may be performed until a data integrity scan is completed.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidKernelInfoVersion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_KERNEL_INFO_VERSION)).c_str(), L"[0x154] The supplied kernel information version is invalid.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidPepInfoVersion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_PEP_INFO_VERSION)).c_str(), L"[0x155] The supplied PEP information version is invalid.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorObjectNotExternallyBacked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_OBJECT_NOT_EXTERNALLY_BACKED)).c_str(), L"[0x156] This object is not externally backed by any provider.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorExternalBackingProviderUnknown)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EXTERNAL_BACKING_PROVIDER_UNKNOWN)).c_str(), L"[0x157] The external backing provider is not recognized.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCompressionNotBeneficial)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_COMPRESSION_NOT_BENEFICIAL)).c_str(), L"[0x158] Compressing this object would not save space.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorStorageTopologyIdMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STORAGE_TOPOLOGY_ID_MISMATCH)).c_str(), L"[0x159] The request failed due to a storage topology ID mismatch.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBlockedByParentalControls)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BLOCKED_BY_PARENTAL_CONTROLS)).c_str(), L"[0x15a] The operation was blocked by parental controls.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBlockTooManyReferences)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BLOCK_TOO_MANY_REFERENCES)).c_str(), L"[0x15b] A file system block being referenced has already reached the maximum reference count and can't be referenced any further.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorMarkedToDisallowWrites)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MARKED_TO_DISALLOW_WRITES)).c_str(), L"[0x15c] The requested operation failed because the file stream is marked to disallow writes.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorEnclaveFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ENCLAVE_FAILURE)).c_str(), L"[0x15d] The requested operation failed with an architecture-specific failure code.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFailNoactionReboot)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FAIL_NOACTION_REBOOT)).c_str(), L"[0x15e] No action was taken as a system reboot is required.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFailShutdown)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FAIL_SHUTDOWN)).c_str(), L"[0x15f] The shutdown operation failed.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFailRestart)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FAIL_RESTART)).c_str(), L"[0x160] The restart operation failed.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorMaxSessionsReached)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MAX_SESSIONS_REACHED)).c_str(), L"[0x161] The maximum number of sessions has been reached.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNetworkAccessDeniedEdp)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NETWORK_ACCESS_DENIED_EDP)).c_str(), L"[0x162] Windows Information Protection policy does not allow access to this network resource.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDeviceHintNameBufferTooSmall)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEVICE_HINT_NAME_BUFFER_TOO_SMALL)).c_str(), L"[0x163] The device hint name buffer is too small to receive the remaining name.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorEdpPolicyDeniesOperation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EDP_POLICY_DENIES_OPERATION)).c_str(), L"[0x164] The requested operation was blocked by Windows Information Protection policy. For more information, contact your system administrator.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorEdpDplPolicyCantBeSatisfied)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EDP_DPL_POLICY_CANT_BE_SATISFIED)).c_str(), L"[0x165] The requested operation cannot be performed because hardware or software configuration of the device does not comply with Windows Information Protection under Lock policy. Please, verify that user PIN has been created. For more information, contact your system administrator.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileSyncRootMetadataCorrupt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_SYNC_ROOT_METADATA_CORRUPT)).c_str(), L"[0x166] The cloud sync root metadata is corrupted.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDeviceInMaintenance)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEVICE_IN_MAINTENANCE)).c_str(), L"[0x167] The device is in maintenance mode.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotSupportedOnDax)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SUPPORTED_ON_DAX)).c_str(), L"[0x168] The specified operation is not supported on a DAX volume.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDaxMappingExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DAX_MAPPING_EXISTS)).c_str(), L"[0x169] The volume has active DAX mappings.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileProviderNotRunning)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_PROVIDER_NOT_RUNNING)).c_str(), L"[0x16a] The cloud file provider is not running.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileMetadataCorrupt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_METADATA_CORRUPT)).c_str(), L"[0x16b] The cloud file metadata is corrupt and unreadable.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileMetadataTooLarge)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_METADATA_TOO_LARGE)).c_str(), L"[0x16c] The cloud file metadata is too large.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFilePropertyBlobTooLarge)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_PROPERTY_BLOB_TOO_LARGE)).c_str(), L"[0x16d] The cloud file property is too large.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFilePropertyBlobChecksumMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_PROPERTY_BLOB_CHECKSUM_MISMATCH)).c_str(), L"[0x16e] The cloud file property is possibly corrupt. The on-disk checksum does not match the computed checksum.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorChildProcessBlocked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CHILD_PROCESS_BLOCKED)).c_str(), L"[0x16f] The process creation has been blocked.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorStorageLostDataPersistence)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STORAGE_LOST_DATA_PERSISTENCE)).c_str(), L"[0x170] The storage device has lost data or persistence.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFileSystemVirtualizationUnavailable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_SYSTEM_VIRTUALIZATION_UNAVAILABLE)).c_str(), L"[0x171] The provider that supports file system virtualization is temporarily unavailable.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFileSystemVirtualizationMetadataCorrupt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_SYSTEM_VIRTUALIZATION_METADATA_CORRUPT)).c_str(), L"[0x172] The metadata for file system virtualization is corrupt and unreadable.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFileSystemVirtualizationBusy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_SYSTEM_VIRTUALIZATION_BUSY)).c_str(), L"[0x173] The provider that supports file system virtualization is too busy to complete this operation.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFileSystemVirtualizationProviderUnknown)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_SYSTEM_VIRTUALIZATION_PROVIDER_UNKNOWN)).c_str(), L"[0x174] The provider that supports file system virtualization is unknown.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorGdiHandleLeak)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_GDI_HANDLE_LEAK)).c_str(), L"[0x175] GDI handles were potentially leaked by the application.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileTooManyPropertyBlobs)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_TOO_MANY_PROPERTY_BLOBS)).c_str(), L"[0x176] The maximum number of cloud file properties has been reached.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFilePropertyVersionNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_PROPERTY_VERSION_NOT_SUPPORTED)).c_str(), L"[0x177] The version of the cloud file property store is not supported.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotACloudFile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_A_CLOUD_FILE)).c_str(), L"[0x178] The file is not a cloud file.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileNotInSync)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_NOT_IN_SYNC)).c_str(), L"[0x179] The file is not in sync with the cloud.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileAlreadyConnected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_ALREADY_CONNECTED)).c_str(), L"[0x17a] The cloud sync root is already connected with another cloud sync provider.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_NOT_SUPPORTED)).c_str(), L"[0x17b] The operation is not supported by the cloud sync provider.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileInvalidRequest)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_INVALID_REQUEST)).c_str(), L"[0x17c] The cloud operation is invalid.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileReadOnlyVolume)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_READ_ONLY_VOLUME)).c_str(), L"[0x17d] The cloud operation is not supported on a read-only volume.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileConnectedProviderOnly)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_CONNECTED_PROVIDER_ONLY)).c_str(), L"[0x17e] The operation is reserved for a connected cloud sync provider.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileValidationFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_VALIDATION_FAILED)).c_str(), L"[0x17f] The cloud sync provider failed to validate the downloaded data.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSmb1NotAvailable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SMB1_NOT_AVAILABLE)).c_str(), L"[0x180] You can't connect to the file share because it's not secure. This share requires the obsolete SMB1 protocol, which is unsafe and could expose your system to attack. Your system requires SMB2 or higher. For more info on resolving this issue, see: https://go.microsoft.com/fwlink/?linkid=852747");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFileSystemVirtualizationInvalidOperation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_SYSTEM_VIRTUALIZATION_INVALID_OPERATION)).c_str(), L"[0x181] The virtualization operation is not allowed on the file in its current state.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileAuthenticationFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_AUTHENTICATION_FAILED)).c_str(), L"[0x182] The cloud sync provider failed user authentication.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileInsufficientResources)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_INSUFFICIENT_RESOURCES)).c_str(), L"[0x183] The cloud sync provider failed to perform the operation due to low system resources.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileNetworkUnavailable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_NETWORK_UNAVAILABLE)).c_str(), L"[0x184] The cloud sync provider failed to perform the operation due to network being unavailable.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileUnsuccessful)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_UNSUCCESSFUL)).c_str(), L"[0x185] The cloud operation was unsuccessful.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileNotUnderSyncRoot)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_NOT_UNDER_SYNC_ROOT)).c_str(), L"[0x186] The operation is only supported on files under a cloud sync root.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileInUse)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_IN_USE)).c_str(), L"[0x187] The operation cannot be performed on cloud files in use.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFilePinned)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_PINNED)).c_str(), L"[0x188] The operation cannot be performed on pinned cloud files.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileRequestAborted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_REQUEST_ABORTED)).c_str(), L"[0x189] The cloud operation was aborted.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFilePropertyCorrupt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_PROPERTY_CORRUPT)).c_str(), L"[0x18a] The cloud file's property store is corrupt.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileAccessDenied)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_ACCESS_DENIED)).c_str(), L"[0x18b] Access to the cloud file is denied.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileIncompatibleHardlinks)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_INCOMPATIBLE_HARDLINKS)).c_str(), L"[0x18c] The cloud operation cannot be performed on a file with incompatible hardlinks.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFilePropertyLockConflict)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_PROPERTY_LOCK_CONFLICT)).c_str(), L"[0x18d] The operation failed due to a conflicting cloud file property lock.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileRequestCanceled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_REQUEST_CANCELED)).c_str(), L"[0x18e] The cloud operation was canceled by user.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorExternalSyskeyNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EXTERNAL_SYSKEY_NOT_SUPPORTED)).c_str(), L"[0x18f] An externally encrypted syskey has been configured, but the system no longer supports this feature.  Please see https://go.microsoft.com/fwlink/?linkid=851152 for more information.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorThreadModeAlreadyBackground)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_THREAD_MODE_ALREADY_BACKGROUND)).c_str(), L"[0x190] The thread is already in background processing mode.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorThreadModeNotBackground)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_THREAD_MODE_NOT_BACKGROUND)).c_str(), L"[0x191] The thread is not in background processing mode.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorProcessModeAlreadyBackground)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PROCESS_MODE_ALREADY_BACKGROUND)).c_str(), L"[0x192] The process is already in background processing mode.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorProcessModeNotBackground)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PROCESS_MODE_NOT_BACKGROUND)).c_str(), L"[0x193] The process is not in background processing mode.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileProviderTerminated)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_PROVIDER_TERMINATED)).c_str(), L"[0x194] The cloud file provider exited unexpectedly.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotACloudSyncRoot)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_A_CLOUD_SYNC_ROOT)).c_str(), L"[0x195] The file is not a cloud sync root.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFileProtectedUnderDpl)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_PROTECTED_UNDER_DPL)).c_str(), L"[0x196] The read or write operation to an encrypted file could not be completed because the file can only be accessed when the device is unlocked.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorVolumeNotClusterAligned)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VOLUME_NOT_CLUSTER_ALIGNED)).c_str(), L"[0x197] The volume is not cluster aligned on the disk.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNoPhysicallyAlignedFreeSpaceFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_PHYSICALLY_ALIGNED_FREE_SPACE_FOUND)).c_str(), L"[0x198] No physically aligned free space was found on the volume.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorAppxFileNotEncrypted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_APPX_FILE_NOT_ENCRYPTED)).c_str(), L"[0x199] The APPX file can not be accessed because it is not encrypted as expected.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorRwrawEncryptedFileNotEncrypted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RWRAW_ENCRYPTED_FILE_NOT_ENCRYPTED)).c_str(), L"[0x19a] A read or write of raw encrypted data cannot be performed because the file is not encrypted.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorRwrawEncryptedInvalidEdatainfoFileoffset)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RWRAW_ENCRYPTED_INVALID_EDATAINFO_FILEOFFSET)).c_str(), L"[0x19b] An invalid file offset in the encrypted data info block was passed for read or write operation of file's raw encrypted data.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorRwrawEncryptedInvalidEdatainfoFilerange)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RWRAW_ENCRYPTED_INVALID_EDATAINFO_FILERANGE)).c_str(), L"[0x19c] An invalid offset and length combination in the encrypted data info block was passed for read or write operation of file's raw encrypted data.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorRwrawEncryptedInvalidEdatainfoParameter)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RWRAW_ENCRYPTED_INVALID_EDATAINFO_PARAMETER)).c_str(), L"[0x19d] An invalid parameter in the encrypted data info block was passed for read or write operation of file's raw encrypted data.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorLinuxSubsystemNotPresent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LINUX_SUBSYSTEM_NOT_PRESENT)).c_str(), L"[0x19e] The Windows Subsystem for Linux is not installed. You can install by running 'wsl.exe --install'. For more information please visit https://aka.ms/wslinstall");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFtReadFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FT_READ_FAILURE)).c_str(), L"[0x19f] The specified data could not be read from any of the copies.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorStorageReserveIdInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STORAGE_RESERVE_ID_INVALID)).c_str(), L"[0x1a0] The specified storage reserve ID is invalid.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorStorageReserveDoesNotExist)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STORAGE_RESERVE_DOES_NOT_EXIST)).c_str(), L"[0x1a1] The specified storage reserve does not exist.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorStorageReserveAlreadyExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STORAGE_RESERVE_ALREADY_EXISTS)).c_str(), L"[0x1a2] The specified storage reserve already exists.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorStorageReserveNotEmpty)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STORAGE_RESERVE_NOT_EMPTY)).c_str(), L"[0x1a3] The specified storage reserve is not empty.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotADaxVolume)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_A_DAX_VOLUME)).c_str(), L"[0x1a4] This operation requires a DAX volume.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotDaxMappable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_DAX_MAPPABLE)).c_str(), L"[0x1a5] This stream is not DAX mappable.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorTimeSensitiveThread)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TIME_SENSITIVE_THREAD)).c_str(), L"[0x1a6] Operation cannot be performed on a time critical thread.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDplNotSupportedForUser)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DPL_NOT_SUPPORTED_FOR_USER)).c_str(), L"[0x1a7] User data protection is not supported for the current or provided user.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCaseDifferingNamesInDir)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CASE_DIFFERING_NAMES_IN_DIR)).c_str(), L"[0x1a8] This directory contains entries whose names differ only in case.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFileNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_NOT_SUPPORTED)).c_str(), L"[0x1a9] The file cannot be safely opened because it is not supported by this version of Windows.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileRequestTimeout)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_REQUEST_TIMEOUT)).c_str(), L"[0x1aa] The cloud operation was not completed before the time-out period expired.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNoTaskQueue)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_TASK_QUEUE)).c_str(), L"[0x1ab] A task queue is required for this operation but none is available.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSrcSrvDllLoadFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SRC_SRV_DLL_LOAD_FAILED)).c_str(), L"[0x1ac] Failed loading a valid version of srcsrv.dll.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotSupportedWithBtt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SUPPORTED_WITH_BTT)).c_str(), L"[0x1ad] This operation is not supported with BTT enabled.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorEncryptionDisabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ENCRYPTION_DISABLED)).c_str(), L"[0x1ae] This operation cannot be performed because encryption is currently disabled.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorEncryptingMetadataDisallowed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ENCRYPTING_METADATA_DISALLOWED)).c_str(), L"[0x1af] This encryption operation cannot be performed on filesystem metadata.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCantClearEncryptionFlag)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANT_CLEAR_ENCRYPTION_FLAG)).c_str(), L"[0x1b0] Encryption cannot be cleared on this file/directory because it still has an encrypted attribute.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNoSuchDevice)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_SUCH_DEVICE)).c_str(), L"[0x1b1] A device which does not exist was specified.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileDehydrationDisallowed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_DEHYDRATION_DISALLOWED)).c_str(), L"[0x1b2] Dehydration of the cloud file is disallowed by the cloud sync provider.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFileSnapInProgress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_SNAP_IN_PROGRESS)).c_str(), L"[0x1b3] A file snapshot operation was attempted when one is already in progress.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFileSnapUserSectionNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_SNAP_USER_SECTION_NOT_SUPPORTED)).c_str(), L"[0x1b4] A snapshot of the file cannot be taken because a user-mapped section is present.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFileSnapModifyNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_SNAP_MODIFY_NOT_SUPPORTED)).c_str(), L"[0x1b5] The file snapshot operation was terminated because one of the files was modified in a way incompatible with a snapshot operation.  Please try again.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFileSnapIoNotCoordinated)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_SNAP_IO_NOT_COORDINATED)).c_str(), L"[0x1b6] An I/O request could not be coordinated with a file snapshot operation.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFileSnapUnexpectedError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_SNAP_UNEXPECTED_ERROR)).c_str(), L"[0x1b7] An unexpected error occurred while processing a file snapshot operation.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFileSnapInvalidParameter)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_SNAP_INVALID_PARAMETER)).c_str(), L"[0x1b8] A file snapshot operation received an invalid parameter.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorUnsatisfiedDependencies)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNSATISFIED_DEPENDENCIES)).c_str(), L"[0x1b9] The operation could not be completed due to one or more unsatisfied dependencies.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCaseSensitivePath)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CASE_SENSITIVE_PATH)).c_str(), L"[0x1ba] The file cannot be opened because the path has a case-sensitive directory.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorUnexpectedNtcachemanagerError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNEXPECTED_NTCACHEMANAGER_ERROR)).c_str(), L"[0x1bb] The filesystem couldn't handle one of the CacheManager's callback error codes.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorLinuxSubsystemUpdateRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LINUX_SUBSYSTEM_UPDATE_REQUIRED)).c_str(), L"[0x1bc] Windows Subsystem for Linux must be updated to the latest version to proceed. You can update by running 'wsl.exe --update'. For more information please visit https://aka.ms/wslinstall");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDlpPolicyWarnsAgainstOperation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DLP_POLICY_WARNS_AGAINST_OPERATION)).c_str(), L"[0x1bd] This action is blocked, but you can choose to allow it. Please refer to the data loss prevention notification for further information.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDlpPolicyDeniesOperation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DLP_POLICY_DENIES_OPERATION)).c_str(), L"[0x1be] This action is blocked. Please refer to the data loss prevention notification for further information.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSecurityDeniesOperation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SECURITY_DENIES_OPERATION)).c_str(), L"[0x1bf] Access is denied because the file contains potentially unwanted software or content the security administrator decided to block.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorUntrustedMountPoint)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNTRUSTED_MOUNT_POINT)).c_str(), L"[0x1c0] The path cannot be traversed because it contains an untrusted mount point.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDlpPolicySilentlyFail)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DLP_POLICY_SILENTLY_FAIL)).c_str(), L"[0x1c1] This action is blocked. Please refer to the data loss prevention notification for further information.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCapauthzNotDevunlocked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CAPAUTHZ_NOT_DEVUNLOCKED)).c_str(), L"[0x1c2] Neither developer unlocked mode nor side loading mode is enabled on the device.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCapauthzChangeType)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CAPAUTHZ_CHANGE_TYPE)).c_str(), L"[0x1c3] Can not change application type during upgrade or re-provision.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCapauthzNotProvisioned)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CAPAUTHZ_NOT_PROVISIONED)).c_str(), L"[0x1c4] The application has not been provisioned.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCapauthzNotAuthorized)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CAPAUTHZ_NOT_AUTHORIZED)).c_str(), L"[0x1c5] The requested capability can not be authorized for this application.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCapauthzNoPolicy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CAPAUTHZ_NO_POLICY)).c_str(), L"[0x1c6] There is no capability authorization policy on the device.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCapauthzDbCorrupted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CAPAUTHZ_DB_CORRUPTED)).c_str(), L"[0x1c7] The capability authorization database has been corrupted.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCapauthzSccdInvalidCatalog)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CAPAUTHZ_SCCD_INVALID_CATALOG)).c_str(), L"[0x1c8] The custom capability's SCCD has an invalid catalog.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCapauthzSccdNoAuthEntity)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CAPAUTHZ_SCCD_NO_AUTH_ENTITY)).c_str(), L"[0x1c9] None of the authorized entity elements in the SCCD matched the app being installed; either the PFNs don't match, or the element's signature hash doesn't validate.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCapauthzSccdParseError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CAPAUTHZ_SCCD_PARSE_ERROR)).c_str(), L"[0x1ca] The custom capability's SCCD failed to parse.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCapauthzSccdDevModeRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CAPAUTHZ_SCCD_DEV_MODE_REQUIRED)).c_str(), L"[0x1cb] The custom capability's SCCD requires developer mode.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCapauthzSccdNoCapabilityMatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CAPAUTHZ_SCCD_NO_CAPABILITY_MATCH)).c_str(), L"[0x1cc] There not all declared custom capabilities are found in the SCCD.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCimfsImageCorrupt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CIMFS_IMAGE_CORRUPT)).c_str(), L"[0x1d6] The CimFS image is corrupt.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCimfsImageVersionNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CIMFS_IMAGE_VERSION_NOT_SUPPORTED)).c_str(), L"[0x1d7] The system does not support this version of the CimFS image.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorStorageStackAccessDenied)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STORAGE_STACK_ACCESS_DENIED)).c_str(), L"[0x1d8] The storage stack returned STATUS_ACCESS_DENEID for the current operation.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInsufficientVirtualAddrResources)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSUFFICIENT_VIRTUAL_ADDR_RESOURCES)).c_str(), L"[0x1d9] Insufficient Virtual Address resources to complete the operation.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorIndexOutOfBounds)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INDEX_OUT_OF_BOUNDS)).c_str(), L"[0x1da] The specified index is beyond the bounds of valid range.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCloudFileUsMessageTimeout)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLOUD_FILE_US_MESSAGE_TIMEOUT)).c_str(), L"[0x1db] The cloud provider failed to acknowledge a message before the time-out expired.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotADevVolume)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_A_DEV_VOLUME)).c_str(), L"[0x1dc] This operation requires a developer volume.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFsGuidMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FS_GUID_MISMATCH)).c_str(), L"[0x1dd] The file system GUID in the per machine state did not match the one on disk.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCantAttachToDevVolume)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANT_ATTACH_TO_DEV_VOLUME)).c_str(), L"[0x1de] The file system minifilter cannot attach to the developer volume.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorMemoryDecompressionFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MEMORY_DECOMPRESSION_FAILURE)).c_str(), L"[0x1df] The data stored in compressed memory falied to be decompressed.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPnpQueryRemoveDeviceTimeout)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PNP_QUERY_REMOVE_DEVICE_TIMEOUT)).c_str(), L"[0x1e0] The operation timed out waiting for this device to complete a PnP query-remove request due to a potential hang in its device stack. The system may need to be rebooted to complete the request.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPnpQueryRemoveRelatedDeviceTimeout)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PNP_QUERY_REMOVE_RELATED_DEVICE_TIMEOUT)).c_str(), L"[0x1e1] The operation timed out waiting for this device to complete a PnP query-remove request due to a potential hang in the device stack of a related device. The system may need to be rebooted to complete the operation.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPnpQueryRemoveUnrelatedDeviceTimeout)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PNP_QUERY_REMOVE_UNRELATED_DEVICE_TIMEOUT)).c_str(), L"[0x1e2] The operation timed out waiting for this device to complete a PnP query-remove request due to a potential hang in the device stack of an unrelated device. The system may need to be rebooted to complete the operation.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDeviceHardwareError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEVICE_HARDWARE_ERROR)).c_str(), L"[0x1e3] The request failed due to a fatal device hardware error.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidAddress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_ADDRESS)).c_str(), L"[0x1e7] Attempt to access invalid address.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorHasSystemCriticalFiles)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_HAS_SYSTEM_CRITICAL_FILES)).c_str(), L"[0x1e8] The volume contains paging, crash dump or other system critical files.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorEncryptedFileNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ENCRYPTED_FILE_NOT_SUPPORTED)).c_str(), L"[0x1e9] The specified operation is not supported on an encrypted file.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSparseFileNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SPARSE_FILE_NOT_SUPPORTED)).c_str(), L"[0x1ea] The specified operation is not supported on a sparse file.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPagefileNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PAGEFILE_NOT_SUPPORTED)).c_str(), L"[0x1eb] The specified operation is not supported on a pagefile.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorVolumeNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VOLUME_NOT_SUPPORTED)).c_str(), L"[0x1ec] The specified operation is not supported on a volume.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotSupportedWithBypassio)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SUPPORTED_WITH_BYPASSIO)).c_str(), L"[0x1ed] The specified operation is not supported on a BypassIO enabled file.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNoBypassioDriverSupport)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_BYPASSIO_DRIVER_SUPPORT)).c_str(), L"[0x1ee] The specified driver does not support BypassIO operations.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotSupportedWithEncryption)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SUPPORTED_WITH_ENCRYPTION)).c_str(), L"[0x1ef] The specified operation is not supported while encryption is enabled on the target object.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotSupportedWithCompression)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SUPPORTED_WITH_COMPRESSION)).c_str(), L"[0x1f0] The specified operation is not supported while compression is enabled on the target object.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotSupportedWithReplication)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SUPPORTED_WITH_REPLICATION)).c_str(), L"[0x1f1] The specified operation is not supported while replication is enabled on the target object.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotSupportedWithDeduplication)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SUPPORTED_WITH_DEDUPLICATION)).c_str(), L"[0x1f2] The specified operation is not supported while deduplication is enabled on the target object.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotSupportedWithAuditing)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SUPPORTED_WITH_AUDITING)).c_str(), L"[0x1f3] The specified operation is not supported while auditing is enabled on the target object.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorUserProfileLoad)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_USER_PROFILE_LOAD)).c_str(), L"[0x1f4] User profile cannot be loaded.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSessionKeyTooShort)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SESSION_KEY_TOO_SHORT)).c_str(), L"[0x1f5] The negotiated session key does not meet the minimum length requirement.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorAccessDeniedAppdata)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ACCESS_DENIED_APPDATA)).c_str(), L"[0x1f6] Access denied when accessing the user profile.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotSupportedWithMonitoring)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SUPPORTED_WITH_MONITORING)).c_str(), L"[0x1f7] The specified operation is not supported while monitoring is enabled on the target object.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotSupportedWithSnapshot)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SUPPORTED_WITH_SNAPSHOT)).c_str(), L"[0x1f8] The specified operation is not supported while snapshot is enabled on the target object.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotSupportedWithVirtualization)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SUPPORTED_WITH_VIRTUALIZATION)).c_str(), L"[0x1f9] The specified operation is not supported while virtualization is enabled on the target object.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBypassioFltNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BYPASSIO_FLT_NOT_SUPPORTED)).c_str(), L"[0x1fa] At least one minifilter does not support bypass IO.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDeviceResetRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEVICE_RESET_REQUIRED)).c_str(), L"[0x1fb] The device needs to be reset.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorVolumeWriteAccessDenied)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VOLUME_WRITE_ACCESS_DENIED)).c_str(), L"[0x1fc] The volume is opened for exclusive write access, preventing files from being opened for write access.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotSupportedWithCachedHandle)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SUPPORTED_WITH_CACHED_HANDLE)).c_str(), L"[0x1fd] The specified operation is not supported on a file opened for cached IO.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFsMetadataInconsistent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FS_METADATA_INCONSISTENT)).c_str(), L"[0x1fe] The file system encountered a metadata file with inconsistent data.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBlockWeakReferenceInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BLOCK_WEAK_REFERENCE_INVALID)).c_str(), L"[0x1ff] A file system block being referenced has been modified after containing a weak reference.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBlockSourceWeakReferenceInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BLOCK_SOURCE_WEAK_REFERENCE_INVALID)).c_str(), L"[0x200] The source file system block being referenced has been modified after containing a weak reference.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBlockTargetWeakReferenceInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BLOCK_TARGET_WEAK_REFERENCE_INVALID)).c_str(), L"[0x201] The target file system block being referenced has been modified after containing a weak reference.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBlockShared)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BLOCK_SHARED)).c_str(), L"[0x202] The target file system block is shared between multiple extents.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorVolumeUpgradeNotNeeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VOLUME_UPGRADE_NOT_NEEDED)).c_str(), L"[0x203] Volume format is up to date already.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorVolumeUpgradePending)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VOLUME_UPGRADE_PENDING)).c_str(), L"[0x204] Volume upgrade is pending.  A reboot or re-mount of the volume is required.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorVolumeUpgradeDisabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VOLUME_UPGRADE_DISABLED)).c_str(), L"[0x205] Volume upgrade is disabled.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorVolumeUpgradeDisabledTillOsDowngradeExpired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VOLUME_UPGRADE_DISABLED_TILL_OS_DOWNGRADE_EXPIRED)).c_str(), L"[0x206] Volume upgrade is disabled until Windows OS downgrade period has expired.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidConfigValue)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_CONFIG_VALUE)).c_str(), L"[0x207] The configured value is not valid.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorMemoryDecompressionHwError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MEMORY_DECOMPRESSION_HW_ERROR)).c_str(), L"[0x208] The data stored in compressed memory falied to be decompressed due to encountering an uncorrectable hardware memory error.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorVolumeRollbackDetected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VOLUME_ROLLBACK_DETECTED)).c_str(), L"[0x209] The operation was aborted because the observed volume identity or current state was not expected.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorArithmeticOverflow)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ARITHMETIC_OVERFLOW)).c_str(), L"[0x216] Arithmetic result exceeded 32 bits.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPipeConnected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PIPE_CONNECTED)).c_str(), L"[0x217] There is a process on other end of the pipe.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPipeListening)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PIPE_LISTENING)).c_str(), L"[0x218] Waiting for a process to open the other end of the pipe.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorVerifierStop)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VERIFIER_STOP)).c_str(), L"[0x219] Application verifier has found an error in the current process.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorAbiosError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ABIOS_ERROR)).c_str(), L"[0x21a] An error occurred in the ABIOS subsystem.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorWx86Warning)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WX86_WARNING)).c_str(), L"[0x21b] A warning occurred in the WX86 subsystem.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorWx86Error)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WX86_ERROR)).c_str(), L"[0x21c] An error occurred in the WX86 subsystem.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorTimerNotCanceled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TIMER_NOT_CANCELED)).c_str(), L"[0x21d] An attempt was made to cancel or set a timer that has an associated APC and the subject thread is not the thread that originally set the timer with an associated APC routine.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorUnwind)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNWIND)).c_str(), L"[0x21e] Unwind exception code.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadStack)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_STACK)).c_str(), L"[0x21f] An invalid or unaligned stack was encountered during an unwind operation.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidUnwindTarget)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_UNWIND_TARGET)).c_str(), L"[0x220] An invalid unwind target was encountered during an unwind operation.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidPortAttributes)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_PORT_ATTRIBUTES)).c_str(), L"[0x221] Invalid Object Attributes specified to NtCreatePort or invalid Port Attributes specified to NtConnectPort");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPortMessageTooLong)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PORT_MESSAGE_TOO_LONG)).c_str(), L"[0x222] Length of message passed to NtRequestPort or NtRequestWaitReplyPort was longer than the maximum message allowed by the port.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidQuotaLower)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_QUOTA_LOWER)).c_str(), L"[0x223] An attempt was made to lower a quota limit below the current usage.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDeviceAlreadyAttached)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEVICE_ALREADY_ATTACHED)).c_str(), L"[0x224] An attempt was made to attach to a device that was already attached to another device.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInstructionMisalignment)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTRUCTION_MISALIGNMENT)).c_str(), L"[0x225] An attempt was made to execute an instruction at an unaligned address and the host system does not support unaligned instruction references.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorProfilingNotStarted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PROFILING_NOT_STARTED)).c_str(), L"[0x226] Profiling not started.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorProfilingNotStopped)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PROFILING_NOT_STOPPED)).c_str(), L"[0x227] Profiling not stopped.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCouldNotInterpret)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_COULD_NOT_INTERPRET)).c_str(), L"[0x228] The passed ACL did not contain the minimum required information.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorProfilingAtLimit)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PROFILING_AT_LIMIT)).c_str(), L"[0x229] The number of active profiling objects is at the maximum and no more may be started.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCantWait)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANT_WAIT)).c_str(), L"[0x22a] Used to indicate that an operation cannot continue without blocking for I/O.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCantTerminateSelf)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANT_TERMINATE_SELF)).c_str(), L"[0x22b] Indicates that a thread attempted to terminate itself by default (called NtTerminateThread with NULL) and it was the last thread in the current process.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorUnexpectedMmCreateErr)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNEXPECTED_MM_CREATE_ERR)).c_str(), L"[0x22c] If an MM error is returned which is not defined in the standard FsRtl filter, it is converted to one of the following errors which is guaranteed to be in the filter. In this case information is lost, however, the filter correctly handles the exception.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorUnexpectedMmMapError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNEXPECTED_MM_MAP_ERROR)).c_str(), L"[0x22d] If an MM error is returned which is not defined in the standard FsRtl filter, it is converted to one of the following errors which is guaranteed to be in the filter. In this case information is lost, however, the filter correctly handles the exception.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorUnexpectedMmExtendErr)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNEXPECTED_MM_EXTEND_ERR)).c_str(), L"[0x22e] If an MM error is returned which is not defined in the standard FsRtl filter, it is converted to one of the following errors which is guaranteed to be in the filter. In this case information is lost, however, the filter correctly handles the exception.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadFunctionTable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_FUNCTION_TABLE)).c_str(), L"[0x22f] A malformed function table was encountered during an unwind operation.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNoGuidTranslation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_GUID_TRANSLATION)).c_str(), L"[0x230] Indicates that an attempt was made to assign protection to a file system file or directory and one of the SIDs in the security descriptor could not be translated into a GUID that could be stored by the file system. This causes the protection attempt to fail, which may cause a file creation attempt to fail.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidLdtSize)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_LDT_SIZE)).c_str(), L"[0x231] Indicates that an attempt was made to grow an LDT by setting its size, or that the size was not an even number of selectors.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidLdtOffset)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_LDT_OFFSET)).c_str(), L"[0x233] Indicates that the starting value for the LDT information was not an integral multiple of the selector size.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidLdtDescriptor)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_LDT_DESCRIPTOR)).c_str(), L"[0x234] Indicates that the user supplied an invalid descriptor when trying to set up Ldt descriptors.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorTooManyThreads)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TOO_MANY_THREADS)).c_str(), L"[0x235] Indicates a process has too many threads to perform the requested action. For example, assignment of a primary token may only be performed when a process has zero or one threads.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorThreadNotInProcess)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_THREAD_NOT_IN_PROCESS)).c_str(), L"[0x236] An attempt was made to operate on a thread within a specific process, but the thread specified is not in the process specified.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPagefileQuotaExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PAGEFILE_QUOTA_EXCEEDED)).c_str(), L"[0x237] Pagefile quota was exceeded.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorLogonServerConflict)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOGON_SERVER_CONFLICT)).c_str(), L"[0x238] The Netlogon service cannot start because another Netlogon service running in the domain conflicts with the specified role.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSynchronizationRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SYNCHRONIZATION_REQUIRED)).c_str(), L"[0x239] The SAM database on a Windows Server is significantly out of synchronization with the copy on the Domain Controller. A complete synchronization is required.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNetOpenFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NET_OPEN_FAILED)).c_str(), L"[0x23a] The NtCreateFile API failed. This error should never be returned to an application, it is a place holder for the Windows Lan Manager Redirector to use in its internal error mapping routines.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorIoPrivilegeFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IO_PRIVILEGE_FAILED)).c_str(), L"[0x23b] {Privilege Failed} The I/O permissions for the process could not be changed.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorMissingSystemfile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MISSING_SYSTEMFILE)).c_str(), L"[0x23d] {Missing System File} The required system file %hs is bad or missing.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorUnhandledException)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNHANDLED_EXCEPTION)).c_str(), L"[0x23e] {Application Error} The exception %s (0x");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorAppInitFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_APP_INIT_FAILURE)).c_str(), L"[0x23f] {Application Error} The application was unable to start correctly (0x%lx). Click OK to close the application.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPagefileCreateFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PAGEFILE_CREATE_FAILED)).c_str(), L"[0x240] {Unable to Create Paging File} The creation of the paging file %hs failed (%lx). The requested size was %ld.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidImageHash)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_IMAGE_HASH)).c_str(), L"[0x241] Windows cannot verify the digital signature for this file. A recent hardware or software change might have installed a file that is signed incorrectly or damaged, or that might be malicious software from an unknown source.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNoPagefile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_PAGEFILE)).c_str(), L"[0x242] {No Paging File Specified} No paging file was specified in the system configuration.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorIllegalFloatContext)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ILLEGAL_FLOAT_CONTEXT)).c_str(), L"[0x243] {EXCEPTION} A real-mode application issued a floating-point instruction and floating-point hardware is not present.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNoEventPair)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_EVENT_PAIR)).c_str(), L"[0x244] An event pair synchronization operation was performed using the thread specific client/server event pair object, but no event pair object was associated with the thread.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDomainCtrlrConfigError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DOMAIN_CTRLR_CONFIG_ERROR)).c_str(), L"[0x245] A Windows Server has an incorrect configuration.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorIllegalCharacter)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ILLEGAL_CHARACTER)).c_str(), L"[0x246] An illegal character was encountered. For a multi-byte character set this includes a lead byte without a succeeding trail byte. For the Unicode character set this includes the characters 0xFFFF and 0xFFFE.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorUndefinedCharacter)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNDEFINED_CHARACTER)).c_str(), L"[0x247] The Unicode character is not defined in the Unicode character set installed on the system.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFloppyVolume)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FLOPPY_VOLUME)).c_str(), L"[0x248] The paging file cannot be created on a floppy diskette.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBiosFailedToConnectInterrupt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BIOS_FAILED_TO_CONNECT_INTERRUPT)).c_str(), L"[0x249] The system BIOS failed to connect a system interrupt to the device or bus for which the device is connected.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBackupController)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BACKUP_CONTROLLER)).c_str(), L"[0x24a] This operation is only allowed for the Primary Domain Controller of the domain.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorMutantLimitExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MUTANT_LIMIT_EXCEEDED)).c_str(), L"[0x24b] An attempt was made to acquire a mutant such that its maximum count would have been exceeded.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFsDriverRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FS_DRIVER_REQUIRED)).c_str(), L"[0x24c] A volume has been accessed for which a file system driver is required that has not yet been loaded.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCannotLoadRegistryFile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANNOT_LOAD_REGISTRY_FILE)).c_str(), L"[0x24d] {Registry File Failure} The registry cannot load the hive (file): %hs or its log or alternate. It is corrupt, absent, or not writable.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDebugAttachFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEBUG_ATTACH_FAILED)).c_str(), L"[0x24e] {Unexpected Failure in DebugActiveProcess} An unexpected failure occurred while processing a DebugActiveProcess API request. You may choose OK to terminate the process, or Cancel to ignore the error.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSystemProcessTerminated)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SYSTEM_PROCESS_TERMINATED)).c_str(), L"[0x24f] {Fatal System Error} The %hs system process terminated unexpectedly with a status of 0x");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDataNotAccepted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DATA_NOT_ACCEPTED)).c_str(), L"[0x250] {Data Not Accepted} The TDI client could not handle the data received during an indication.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorVdmHardError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VDM_HARD_ERROR)).c_str(), L"[0x251] NTVDM encountered a hard error.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDriverCancelTimeout)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DRIVER_CANCEL_TIMEOUT)).c_str(), L"[0x252] {Cancel Timeout} The driver %hs failed to complete a cancelled I/O request in the allotted time.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorReplyMessageMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REPLY_MESSAGE_MISMATCH)).c_str(), L"[0x253] {Reply Message Mismatch} An attempt was made to reply to an LPC message, but the thread specified by the client ID in the message was not waiting on that message.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorLostWritebehindData)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOST_WRITEBEHIND_DATA)).c_str(), L"[0x254] {Delayed Write Failed} Windows was unable to save all the data for the file %hs. The data has been lost. This error may be caused by a failure of your computer hardware or network connection. Please try to save this file elsewhere.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorClientServerParametersInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLIENT_SERVER_PARAMETERS_INVALID)).c_str(), L"[0x255] The parameter(s) passed to the server in the client/server shared memory window were invalid. Too much data may have been put in the shared memory window.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNotTinyStream)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_TINY_STREAM)).c_str(), L"[0x256] The stream is not a tiny stream.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorStackOverflowRead)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STACK_OVERFLOW_READ)).c_str(), L"[0x257] The request must be handled by the stack overflow code.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorConvertToLarge)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CONVERT_TO_LARGE)).c_str(), L"[0x258] Internal OFS status codes indicating how an allocation operation is handled. Either it is retried after the containing onode is moved or the extent stream is converted to a large stream.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorFoundOutOfScope)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FOUND_OUT_OF_SCOPE)).c_str(), L"[0x259] The attempt to find the object found an object matching by ID on the volume but it is out of the scope of the handle used for the operation.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorAllocateBucket)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ALLOCATE_BUCKET)).c_str(), L"[0x25a] The bucket array must be grown. Retry transaction after doing so.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorMarshallOverflow)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MARSHALL_OVERFLOW)).c_str(), L"[0x25b] The user/kernel marshalling buffer has overflowed.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidVariant)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_VARIANT)).c_str(), L"[0x25c] The supplied variant structure contains invalid data.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadCompressionBuffer)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_COMPRESSION_BUFFER)).c_str(), L"[0x25d] The specified buffer contains ill-formed data.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorAuditFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_AUDIT_FAILED)).c_str(), L"[0x25e] {Audit Failed} An attempt to generate a security audit failed.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorTimerResolutionNotSet)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TIMER_RESOLUTION_NOT_SET)).c_str(), L"[0x25f] The timer resolution was not previously set by the current process.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInsufficientLogonInfo)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSUFFICIENT_LOGON_INFO)).c_str(), L"[0x260] There is insufficient account information to log you on.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadDllEntrypoint)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_DLL_ENTRYPOINT)).c_str(), L"[0x261] {Invalid DLL Entrypoint} The dynamic link library %hs is not written correctly. The stack pointer has been left in an inconsistent state. The entrypoint should be declared as WINAPI or STDCALL. Select YES to fail the DLL load. Select NO to continue execution. Selecting NO may cause the application to operate incorrectly.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorBadServiceEntrypoint)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_SERVICE_ENTRYPOINT)).c_str(), L"[0x262] {Invalid Service Callback Entrypoint} The %hs service is not written correctly. The stack pointer has been left in an inconsistent state. The callback entrypoint should be declared as WINAPI or STDCALL. Selecting OK will cause the service to continue operation. However, the service process may operate incorrectly.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorIpAddressConflict1)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IP_ADDRESS_CONFLICT1)).c_str(), L"[0x263] There is an IP address conflict with another system on the network");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorIpAddressConflict2)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IP_ADDRESS_CONFLICT2)).c_str(), L"[0x264] There is an IP address conflict with another system on the network");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorRegistryQuotaLimit)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REGISTRY_QUOTA_LIMIT)).c_str(), L"[0x265] {Low On Registry Space} The system has reached the maximum size allowed for the system part of the registry. Additional storage requests will be ignored.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNoCallbackActive)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_CALLBACK_ACTIVE)).c_str(), L"[0x266] A callback return system service cannot be executed when no callback is active.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPwdTooShort)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PWD_TOO_SHORT)).c_str(), L"[0x267] The password provided is too short to meet the policy of your user account. Please choose a longer password.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPwdTooRecent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PWD_TOO_RECENT)).c_str(), L"[0x268] The policy of your user account does not allow you to change passwords too frequently. This is done to prevent users from changing back to a familiar, but potentially discovered, password. If you feel your password has been compromised then please contact your administrator immediately to have a new one assigned.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPwdHistoryConflict)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PWD_HISTORY_CONFLICT)).c_str(), L"[0x269] You have attempted to change your password to one that you have used in the past. The policy of your user account does not allow this. Please select a password that you have not previously used.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorUnsupportedCompression)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNSUPPORTED_COMPRESSION)).c_str(), L"[0x26a] The specified compression format is unsupported.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidHwProfile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_HW_PROFILE)).c_str(), L"[0x26b] The specified hardware profile configuration is invalid.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorInvalidPlugplayDevicePath)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_PLUGPLAY_DEVICE_PATH)).c_str(), L"[0x26c] The specified Plug and Play registry device path is invalid.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorQuotaListInconsistent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_QUOTA_LIST_INCONSISTENT)).c_str(), L"[0x26d] The specified quota list is internally inconsistent with its descriptor.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorEvaluationExpiration)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVALUATION_EXPIRATION)).c_str(), L"[0x26e] {Windows Evaluation Notification} The evaluation period for this installation of Windows has expired. This system will shutdown in 1 hour. To restore access to this installation of Windows, please upgrade this installation using a licensed distribution of this product.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorIllegalDllRelocation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ILLEGAL_DLL_RELOCATION)).c_str(), L"[0x26f] {Illegal System DLL Relocation} The system DLL %hs was relocated in memory. The application will not run properly. The relocation occurred because the DLL %hs occupied an address range reserved for Windows system DLLs. The vendor supplying the DLL should be contacted for a new DLL.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDllInitFailedLogoff)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DLL_INIT_FAILED_LOGOFF)).c_str(), L"[0x270] {DLL Initialization Failed} The application failed to initialize because the window station is shutting down.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorValidateContinue)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VALIDATE_CONTINUE)).c_str(), L"[0x271] The validation process needs to continue on to the next step.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNoMoreMatches)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_MORE_MATCHES)).c_str(), L"[0x272] There are no more matches for the current index enumeration.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorRangeListConflict)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RANGE_LIST_CONFLICT)).c_str(), L"[0x273] The range could not be added to the range list because of a conflict.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorServerSidMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVER_SID_MISMATCH)).c_str(), L"[0x274] The server process is running under a SID different than that required by client.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCantEnableDenyOnly)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANT_ENABLE_DENY_ONLY)).c_str(), L"[0x275] A group marked use for deny only cannot be enabled.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorNointerface)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOINTERFACE)).c_str(), L"[0x278] The requested interface is not supported.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorDriverFailedSleep)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DRIVER_FAILED_SLEEP)).c_str(), L"[0x279] {System Standby Failed} The driver %hs does not support standby mode. Updating this driver may allow the system to go to standby mode.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCorruptSystemFile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CORRUPT_SYSTEM_FILE)).c_str(), L"[0x27a] The system file %1 has become corrupt and has been replaced.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorCommitmentMinimum)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_COMMITMENT_MINIMUM)).c_str(), L"[0x27b] {Virtual Memory Minimum Too Low} Your system is low on virtual memory. Windows is increasing the size of your virtual memory paging file. During this process, memory requests for some applications may be denied. For more information, see Help.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPnpRestartEnumeration)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PNP_RESTART_ENUMERATION)).c_str(), L"[0x27c] A device was removed so enumeration must be restarted.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorSystemImageBadSignature)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SYSTEM_IMAGE_BAD_SIGNATURE)).c_str(), L"[0x27d] {Fatal System Error} The system image %s is not properly signed. The file has been replaced with the signed file. The system has been shut down.");
}

TEST(Win32SystemErrorsTest0500, Win32ErrorPnpRebootRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PNP_REBOOT_REQUIRED)).c_str(), L"[0x27e] Device will not start without a reboot.");
}
