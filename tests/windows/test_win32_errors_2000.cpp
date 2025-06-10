#include <format>
#include <windows.h>
#include <gtest/gtest.h>

#include <Helpers/String.hpp>
#include <Helpers/SysError.hpp>

using namespace RC;

TEST(Win32SystemErrorsTest2000, Win32ErrorEncryptionFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ENCRYPTION_FAILED)).c_str(), L"[0x1770] The specified file could not be encrypted.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDecryptionFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DECRYPTION_FAILED)).c_str(), L"[0x1771] The specified file could not be decrypted.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorFileEncrypted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_ENCRYPTED)).c_str(), L"[0x1772] The specified file is encrypted and the user does not have the ability to decrypt it.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorNoRecoveryPolicy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_RECOVERY_POLICY)).c_str(), L"[0x1773] There is no valid encryption recovery policy configured for this system.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorNoEfs)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_EFS)).c_str(), L"[0x1774] The required encryption driver is not loaded for this system.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorWrongEfs)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WRONG_EFS)).c_str(), L"[0x1775] The file was encrypted with a different encryption driver than is currently loaded.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorNoUserKeys)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_USER_KEYS)).c_str(), L"[0x1776] There are no EFS keys defined for the user.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorFileNotEncrypted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_NOT_ENCRYPTED)).c_str(), L"[0x1777] The specified file is not encrypted.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorNotExportFormat)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_EXPORT_FORMAT)).c_str(), L"[0x1778] The specified file is not in the defined EFS export format.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorFileReadOnly)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_READ_ONLY)).c_str(), L"[0x1779] The specified file is read only.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDirEfsDisallowed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DIR_EFS_DISALLOWED)).c_str(), L"[0x177a] The directory has been disabled for encryption.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorEfsServerNotTrusted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EFS_SERVER_NOT_TRUSTED)).c_str(), L"[0x177b] The server is not trusted for remote encryption operation.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorBadRecoveryPolicy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_RECOVERY_POLICY)).c_str(), L"[0x177c] Recovery policy configured for this system contains invalid recovery certificate.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorEfsAlgBlobTooBig)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EFS_ALG_BLOB_TOO_BIG)).c_str(), L"[0x177d] The encryption algorithm used on the source file needs a bigger key buffer than the one on the destination file.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorVolumeNotSupportEfs)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VOLUME_NOT_SUPPORT_EFS)).c_str(), L"[0x177e] The disk partition does not support file encryption.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorEfsDisabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EFS_DISABLED)).c_str(), L"[0x177f] This machine is disabled for file encryption.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorEfsVersionNotSupport)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EFS_VERSION_NOT_SUPPORT)).c_str(), L"[0x1780] A newer system is required to decrypt this encrypted file.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCsEncryptionInvalidServerResponse)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CS_ENCRYPTION_INVALID_SERVER_RESPONSE)).c_str(), L"[0x1781] The remote server sent an invalid response for a file being opened with Client Side Encryption.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCsEncryptionUnsupportedServer)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CS_ENCRYPTION_UNSUPPORTED_SERVER)).c_str(), L"[0x1782] Client Side Encryption is not supported by the remote server even though it claims to support it.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCsEncryptionExistingEncryptedFile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CS_ENCRYPTION_EXISTING_ENCRYPTED_FILE)).c_str(), L"[0x1783] File is encrypted and should be opened in Client Side Encryption mode.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCsEncryptionNewEncryptedFile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CS_ENCRYPTION_NEW_ENCRYPTED_FILE)).c_str(), L"[0x1784] A new encrypted file is being created and a $EFS needs to be provided.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCsEncryptionFileNotCse)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CS_ENCRYPTION_FILE_NOT_CSE)).c_str(), L"[0x1785] The SMB client requested a CSE FSCTL on a non-CSE file.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorEncryptionPolicyDeniesOperation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ENCRYPTION_POLICY_DENIES_OPERATION)).c_str(), L"[0x1786] The requested operation was blocked by policy. For more information, contact your system administrator.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorWipEncryptionFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WIP_ENCRYPTION_FAILED)).c_str(), L"[0x1787] The specified file could not be encrypted with Windows Information Protection.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorPdeEncryptionUnavailableFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PDE_ENCRYPTION_UNAVAILABLE_FAILURE)).c_str(), L"[0x1788] Personal Data Encryption keys to encrypt data are currently unavailable due to a failure.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorPdeDecryptionUnavailableFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PDE_DECRYPTION_UNAVAILABLE_FAILURE)).c_str(), L"[0x1789] Personal Data Encryption keys to decrypt data are currently unavailable due to a failure.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorPdeDecryptionUnavailable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PDE_DECRYPTION_UNAVAILABLE)).c_str(), L"[0x178a] Personal Data Encryption keys to decrypt data are currently unavailable as the user's session is locked.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorNoBrowserServersFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_BROWSER_SERVERS_FOUND)).c_str(), L"[0x17e6] The list of servers for this workgroup is not currently available");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorClusterObjectIsClusterSetVm)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLUSTER_OBJECT_IS_CLUSTER_SET_VM)).c_str(), L"[0x186a]  The object cannot be deleted from the local cluster because it is registered with the cluster set.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCnuTemplateAlreadyExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CNU_TEMPLATE_ALREADY_EXISTS)).c_str(), L"[0x186b] A cluster native update template with that name already exists.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCnuTemplateNameNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CNU_TEMPLATE_NAME_NOT_FOUND)).c_str(), L"[0x186c] A cluster native update template with that name was not found.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCnuRunNameNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CNU_RUN_NAME_NOT_FOUND)).c_str(), L"[0x186d] A cluster native update run with the specified name was not found.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCnuRunAlreadyInProgress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CNU_RUN_ALREADY_IN_PROGRESS)).c_str(), L"[0x186e] A cluster native update run is already in progress on the cluster.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCnuRunNotInProgress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CNU_RUN_NOT_IN_PROGRESS)).c_str(), L"[0x186f] There is currently no ongoing cluster native update run on the cluster.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCnuNotReady)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CNU_NOT_READY)).c_str(), L"[0x1870] Cluster native update not ready - run Enable-ClusterNativeUpdate to load.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogSectorInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_SECTOR_INVALID)).c_str(), L"[0x19c8] Log service encountered an invalid log sector.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogSectorParityInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_SECTOR_PARITY_INVALID)).c_str(), L"[0x19c9] Log service encountered a log sector with invalid block parity.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogSectorRemapped)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_SECTOR_REMAPPED)).c_str(), L"[0x19ca] Log service encountered a remapped log sector.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogBlockIncomplete)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_BLOCK_INCOMPLETE)).c_str(), L"[0x19cb] Log service encountered a partial or incomplete log block.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogInvalidRange)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_INVALID_RANGE)).c_str(), L"[0x19cc] Log service encountered an attempt access data outside the active log range.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogBlocksExhausted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_BLOCKS_EXHAUSTED)).c_str(), L"[0x19cd] Log service user marshalling buffers are exhausted.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogReadContextInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_READ_CONTEXT_INVALID)).c_str(), L"[0x19ce] Log service encountered an attempt read from a marshalling area with an invalid read context.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogRestartInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_RESTART_INVALID)).c_str(), L"[0x19cf] Log service encountered an invalid log restart area.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogBlockVersion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_BLOCK_VERSION)).c_str(), L"[0x19d0] Log service encountered an invalid log block version.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogBlockInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_BLOCK_INVALID)).c_str(), L"[0x19d1] Log service encountered an invalid log block.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogReadModeInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_READ_MODE_INVALID)).c_str(), L"[0x19d2] Log service encountered an attempt to read the log with an invalid read mode.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogNoRestart)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_NO_RESTART)).c_str(), L"[0x19d3] Log service encountered a log stream with no restart area.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogMetadataCorrupt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_METADATA_CORRUPT)).c_str(), L"[0x19d4] Log service encountered a corrupted metadata file.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogMetadataInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_METADATA_INVALID)).c_str(), L"[0x19d5] Log service encountered a metadata file that could not be created by the log file system.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogMetadataInconsistent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_METADATA_INCONSISTENT)).c_str(), L"[0x19d6] Log service encountered a metadata file with inconsistent data.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogReservationInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_RESERVATION_INVALID)).c_str(), L"[0x19d7] Log service encountered an attempt to erroneous allocate or dispose reservation space.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogCantDelete)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_CANT_DELETE)).c_str(), L"[0x19d8] Log service cannot delete log file or file system container.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogContainerLimitExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_CONTAINER_LIMIT_EXCEEDED)).c_str(), L"[0x19d9] Log service has reached the maximum allowable containers allocated to a log file.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogStartOfLog)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_START_OF_LOG)).c_str(), L"[0x19da] Log service has attempted to read or write backward past the start of the log.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogPolicyAlreadyInstalled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_POLICY_ALREADY_INSTALLED)).c_str(), L"[0x19db] Log policy could not be installed because a policy of the same type is already present.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogPolicyNotInstalled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_POLICY_NOT_INSTALLED)).c_str(), L"[0x19dc] Log policy in question was not installed at the time of the request.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogPolicyInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_POLICY_INVALID)).c_str(), L"[0x19dd] The installed set of policies on the log is invalid.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogPolicyConflict)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_POLICY_CONFLICT)).c_str(), L"[0x19de] A policy on the log in question prevented the operation from completing.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogPinnedArchiveTail)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_PINNED_ARCHIVE_TAIL)).c_str(), L"[0x19df] Log space cannot be reclaimed because the log is pinned by the archive tail.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogRecordNonexistent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_RECORD_NONEXISTENT)).c_str(), L"[0x19e0] Log record is not a record in the log file.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogRecordsReservedInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_RECORDS_RESERVED_INVALID)).c_str(), L"[0x19e1] Number of reserved log records or the adjustment of the number of reserved log records is invalid.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogSpaceReservedInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_SPACE_RESERVED_INVALID)).c_str(), L"[0x19e2] Reserved log space or the adjustment of the log space is invalid.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogTailInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_TAIL_INVALID)).c_str(), L"[0x19e3] An new or existing archive tail or base of the active log is invalid.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogFull)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_FULL)).c_str(), L"[0x19e4] Log space is exhausted.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCouldNotResizeLog)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_COULD_NOT_RESIZE_LOG)).c_str(), L"[0x19e5] The log could not be set to the requested size.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogMultiplexed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_MULTIPLEXED)).c_str(), L"[0x19e6] Log is multiplexed, no direct writes to the physical log is allowed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogDedicated)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_DEDICATED)).c_str(), L"[0x19e7] The operation failed because the log is a dedicated log.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogArchiveNotInProgress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_ARCHIVE_NOT_IN_PROGRESS)).c_str(), L"[0x19e8] The operation requires an archive context.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogArchiveInProgress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_ARCHIVE_IN_PROGRESS)).c_str(), L"[0x19e9] Log archival is in progress.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogEphemeral)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_EPHEMERAL)).c_str(), L"[0x19ea] The operation requires a non-ephemeral log, but the log is ephemeral.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogNotEnoughContainers)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_NOT_ENOUGH_CONTAINERS)).c_str(), L"[0x19eb] The log must have at least two containers before it can be read from or written to.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogClientAlreadyRegistered)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_CLIENT_ALREADY_REGISTERED)).c_str(), L"[0x19ec] A log client has already registered on the stream.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogClientNotRegistered)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_CLIENT_NOT_REGISTERED)).c_str(), L"[0x19ed] A log client has not been registered on the stream.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogFullHandlerInProgress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_FULL_HANDLER_IN_PROGRESS)).c_str(), L"[0x19ee] A request has already been made to handle the log full condition.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogContainerReadFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_CONTAINER_READ_FAILED)).c_str(), L"[0x19ef] Log service encountered an error when attempting to read from a log container.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogContainerWriteFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_CONTAINER_WRITE_FAILED)).c_str(), L"[0x19f0] Log service encountered an error when attempting to write to a log container.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogContainerOpenFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_CONTAINER_OPEN_FAILED)).c_str(), L"[0x19f1] Log service encountered an error when attempting open a log container.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogContainerStateInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_CONTAINER_STATE_INVALID)).c_str(), L"[0x19f2] Log service encountered an invalid container state when attempting a requested action.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogStateInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_STATE_INVALID)).c_str(), L"[0x19f3] Log service is not in the correct state to perform a requested action.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogPinned)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_PINNED)).c_str(), L"[0x19f4] Log space cannot be reclaimed because the log is pinned.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogMetadataFlushFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_METADATA_FLUSH_FAILED)).c_str(), L"[0x19f5] Log metadata flush failed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogInconsistentSecurity)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_INCONSISTENT_SECURITY)).c_str(), L"[0x19f6] Security on the log and its containers is inconsistent.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogAppendedFlushFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_APPENDED_FLUSH_FAILED)).c_str(), L"[0x19f7] Records were appended to the log or reservation changes were made, but the log could not be flushed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogPinnedReservation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_PINNED_RESERVATION)).c_str(), L"[0x19f8] The log is pinned due to reservation consuming most of the log space. Free some reserved records to make space available.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorInvalidTransaction)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_TRANSACTION)).c_str(), L"[0x1a2c] The transaction handle associated with this operation is not valid.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionNotActive)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_NOT_ACTIVE)).c_str(), L"[0x1a2d] The requested operation was made in the context of a transaction that is no longer active.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionRequestNotValid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_REQUEST_NOT_VALID)).c_str(), L"[0x1a2e] The requested operation is not valid on the Transaction object in its current state.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionNotRequested)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_NOT_REQUESTED)).c_str(), L"[0x1a2f] The caller has called a response API, but the response is not expected because the TM did not issue the corresponding request to the caller.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionAlreadyAborted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_ALREADY_ABORTED)).c_str(), L"[0x1a30] It is too late to perform the requested operation, since the Transaction has already been aborted.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionAlreadyCommitted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_ALREADY_COMMITTED)).c_str(), L"[0x1a31] It is too late to perform the requested operation, since the Transaction has already been committed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTmInitializationFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TM_INITIALIZATION_FAILED)).c_str(), L"[0x1a32] The Transaction Manager was unable to be successfully initialized. Transacted operations are not supported.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorResourcemanagerReadOnly)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RESOURCEMANAGER_READ_ONLY)).c_str(), L"[0x1a33] The specified ResourceManager made no changes or updates to the resource under this transaction.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionNotJoined)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_NOT_JOINED)).c_str(), L"[0x1a34] The resource manager has attempted to prepare a transaction that it has not successfully joined.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionSuperiorExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_SUPERIOR_EXISTS)).c_str(), L"[0x1a35] The Transaction object already has a superior enlistment, and the caller attempted an operation that would have created a new superior. Only a single superior enlistment is allow.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCrmProtocolAlreadyExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CRM_PROTOCOL_ALREADY_EXISTS)).c_str(), L"[0x1a36] The RM tried to register a protocol that already exists.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionPropagationFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_PROPAGATION_FAILED)).c_str(), L"[0x1a37] The attempt to propagate the Transaction failed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCrmProtocolNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CRM_PROTOCOL_NOT_FOUND)).c_str(), L"[0x1a38] The requested propagation protocol was not registered as a CRM.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionInvalidMarshallBuffer)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_INVALID_MARSHALL_BUFFER)).c_str(), L"[0x1a39] The buffer passed in to PushTransaction or PullTransaction is not in a valid format.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCurrentTransactionNotValid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CURRENT_TRANSACTION_NOT_VALID)).c_str(), L"[0x1a3a] The current transaction context associated with the thread is not a valid handle to a transaction object.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_NOT_FOUND)).c_str(), L"[0x1a3b] The specified Transaction object could not be opened, because it was not found.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorResourcemanagerNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RESOURCEMANAGER_NOT_FOUND)).c_str(), L"[0x1a3c] The specified ResourceManager object could not be opened, because it was not found.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorEnlistmentNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ENLISTMENT_NOT_FOUND)).c_str(), L"[0x1a3d] The specified Enlistment object could not be opened, because it was not found.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionmanagerNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTIONMANAGER_NOT_FOUND)).c_str(), L"[0x1a3e] The specified TransactionManager object could not be opened, because it was not found.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionmanagerNotOnline)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTIONMANAGER_NOT_ONLINE)).c_str(), L"[0x1a3f] The object specified could not be created or opened, because its associated TransactionManager is not online.  The TransactionManager must be brought fully Online by calling RecoverTransactionManager to recover to the end of its LogFile before objects in its Transaction or ResourceManager namespaces can be opened.  In addition, errors in writing records to its LogFile can cause a TransactionManager to go offline.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionmanagerRecoveryNameCollision)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTIONMANAGER_RECOVERY_NAME_COLLISION)).c_str(), L"[0x1a40] The specified TransactionManager was unable to create the objects contained in its logfile in the Ob namespace. Therefore, the TransactionManager was unable to recover.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionNotRoot)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_NOT_ROOT)).c_str(), L"[0x1a41] The call to create a superior Enlistment on this Transaction object could not be completed, because the Transaction object specified for the enlistment is a subordinate branch of the Transaction. Only the root of the Transaction can be enlisted on as a superior.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionObjectExpired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_OBJECT_EXPIRED)).c_str(), L"[0x1a42] Because the associated transaction manager or resource manager has been closed, the handle is no longer valid.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionResponseNotEnlisted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_RESPONSE_NOT_ENLISTED)).c_str(), L"[0x1a43] The specified operation could not be performed on this Superior enlistment, because the enlistment was not created with the corresponding completion response in the NotificationMask.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionRecordTooLong)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_RECORD_TOO_LONG)).c_str(), L"[0x1a44] The specified operation could not be performed, because the record that would be logged was too long. This can occur because of two conditions: either there are too many Enlistments on this Transaction, or the combined RecoveryInformation being logged on behalf of those Enlistments is too long.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorImplicitTransactionNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IMPLICIT_TRANSACTION_NOT_SUPPORTED)).c_str(), L"[0x1a45] Implicit transaction are not supported.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionIntegrityViolated)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_INTEGRITY_VIOLATED)).c_str(), L"[0x1a46] The kernel transaction manager had to abort or forget the transaction because it blocked forward progress.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionmanagerIdentityMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTIONMANAGER_IDENTITY_MISMATCH)).c_str(), L"[0x1a47] The TransactionManager identity that was supplied did not match the one recorded in the TransactionManager's log file.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorRmCannotBeFrozenForSnapshot)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RM_CANNOT_BE_FROZEN_FOR_SNAPSHOT)).c_str(), L"[0x1a48] This snapshot operation cannot continue because a transactional resource manager cannot be frozen in its current state.  Please try again.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionMustWritethrough)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_MUST_WRITETHROUGH)).c_str(), L"[0x1a49] The transaction cannot be enlisted on with the specified EnlistmentMask, because the transaction has already completed the PrePrepare phase.  In order to ensure correctness, the ResourceManager must switch to a write-through mode and cease caching data within this transaction.  Enlisting for only subsequent transaction phases may still succeed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionNoSuperior)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_NO_SUPERIOR)).c_str(), L"[0x1a4a] The transaction does not have a superior enlistment.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorHeuristicDamagePossible)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_HEURISTIC_DAMAGE_POSSIBLE)).c_str(), L"[0x1a4b] The attempt to commit the Transaction completed, but it is possible that some portion of the transaction tree did not commit successfully due to heuristics.  Therefore it is possible that some data modified in the transaction may not have committed, resulting in transactional inconsistency.  If possible, check the consistency of the associated data.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionalConflict)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTIONAL_CONFLICT)).c_str(), L"[0x1a90] The function attempted to use a name that is reserved for use by another transaction.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorRmNotActive)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RM_NOT_ACTIVE)).c_str(), L"[0x1a91] Transaction support within the specified resource manager is not started or was shut down due to an error.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorRmMetadataCorrupt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RM_METADATA_CORRUPT)).c_str(), L"[0x1a92] The metadata of the RM has been corrupted. The RM will not function.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDirectoryNotRm)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DIRECTORY_NOT_RM)).c_str(), L"[0x1a93] The specified directory does not contain a resource manager.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionsUnsupportedRemote)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTIONS_UNSUPPORTED_REMOTE)).c_str(), L"[0x1a95] The remote server or share does not support transacted file operations.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogResizeInvalidSize)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_RESIZE_INVALID_SIZE)).c_str(), L"[0x1a96] The requested log size is invalid.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorObjectNoLongerExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_OBJECT_NO_LONGER_EXISTS)).c_str(), L"[0x1a97] The object (file, stream, link) corresponding to the handle has been deleted by a Transaction Savepoint Rollback.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorStreamMiniversionNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STREAM_MINIVERSION_NOT_FOUND)).c_str(), L"[0x1a98] The specified file miniversion was not found for this transacted file open.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorStreamMiniversionNotValid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STREAM_MINIVERSION_NOT_VALID)).c_str(), L"[0x1a99] The specified file miniversion was found but has been invalidated. Most likely cause is a transaction savepoint rollback.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorMiniversionInaccessibleFromSpecifiedTransaction)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MINIVERSION_INACCESSIBLE_FROM_SPECIFIED_TRANSACTION)).c_str(), L"[0x1a9a] A miniversion may only be opened in the context of the transaction that created it.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCantOpenMiniversionWithModifyIntent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANT_OPEN_MINIVERSION_WITH_MODIFY_INTENT)).c_str(), L"[0x1a9b] It is not possible to open a miniversion with modify access.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCantCreateMoreStreamMiniversions)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANT_CREATE_MORE_STREAM_MINIVERSIONS)).c_str(), L"[0x1a9c] It is not possible to create any more miniversions for this stream.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorRemoteFileVersionMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REMOTE_FILE_VERSION_MISMATCH)).c_str(), L"[0x1a9e] The remote server sent mismatching version number or Fid for a file opened with transactions.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorHandleNoLongerValid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_HANDLE_NO_LONGER_VALID)).c_str(), L"[0x1a9f] The handle has been invalidated by a transaction. The most likely cause is the presence of memory mapping on a file or an open handle when the transaction ended or rolled back to savepoint.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorNoTxfMetadata)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_TXF_METADATA)).c_str(), L"[0x1aa0] There is no transaction metadata on the file.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogCorruptionDetected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_CORRUPTION_DETECTED)).c_str(), L"[0x1aa1] The log data is corrupt.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCantRecoverWithHandleOpen)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANT_RECOVER_WITH_HANDLE_OPEN)).c_str(), L"[0x1aa2] The file can't be recovered because there is a handle still open on it.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorRmDisconnected)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RM_DISCONNECTED)).c_str(), L"[0x1aa3] The transaction outcome is unavailable because the resource manager responsible for it has disconnected.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorEnlistmentNotSuperior)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ENLISTMENT_NOT_SUPERIOR)).c_str(), L"[0x1aa4] The request was rejected because the enlistment in question is not a superior enlistment.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorRecoveryNotNeeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RECOVERY_NOT_NEEDED)).c_str(), L"[0x1aa5] The transactional resource manager is already consistent. Recovery is not needed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorRmAlreadyStarted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RM_ALREADY_STARTED)).c_str(), L"[0x1aa6] The transactional resource manager has already been started.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorFileIdentityNotPersistent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FILE_IDENTITY_NOT_PERSISTENT)).c_str(), L"[0x1aa7] The file cannot be opened transactionally, because its identity depends on the outcome of an unresolved transaction.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCantBreakTransactionalDependency)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANT_BREAK_TRANSACTIONAL_DEPENDENCY)).c_str(), L"[0x1aa8] The operation cannot be performed because another transaction is depending on the fact that this property will not change.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCantCrossRmBoundary)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANT_CROSS_RM_BOUNDARY)).c_str(), L"[0x1aa9] The operation would involve a single file with two transactional resource managers and is therefore not allowed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTxfDirNotEmpty)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TXF_DIR_NOT_EMPTY)).c_str(), L"[0x1aaa] The $Txf directory must be empty for this operation to succeed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorIndoubtTransactionsExist)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INDOUBT_TRANSACTIONS_EXIST)).c_str(), L"[0x1aab] The operation would leave a transactional resource manager in an inconsistent state and is therefore not allowed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTmVolatile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TM_VOLATILE)).c_str(), L"[0x1aac] The operation could not be completed because the transaction manager does not have a log.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorRollbackTimerExpired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ROLLBACK_TIMER_EXPIRED)).c_str(), L"[0x1aad] A rollback could not be scheduled because a previously scheduled rollback has already executed or been queued for execution.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTxfAttributeCorrupt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TXF_ATTRIBUTE_CORRUPT)).c_str(), L"[0x1aae] The transactional metadata attribute on the file or directory is corrupt and unreadable.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorEfsNotAllowedInTransaction)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EFS_NOT_ALLOWED_IN_TRANSACTION)).c_str(), L"[0x1aaf] The encryption operation could not be completed because a transaction is active.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionalOpenNotAllowed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTIONAL_OPEN_NOT_ALLOWED)).c_str(), L"[0x1ab0] This object is not allowed to be opened in a transaction.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorLogGrowthFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOG_GROWTH_FAILED)).c_str(), L"[0x1ab1] An attempt to create space in the transactional resource manager's log failed. The failure status has been recorded in the event log.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactedMappingUnsupportedRemote)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTED_MAPPING_UNSUPPORTED_REMOTE)).c_str(), L"[0x1ab2] Memory mapping (creating a mapped section) a remote file under a transaction is not supported.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTxfMetadataAlreadyPresent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TXF_METADATA_ALREADY_PRESENT)).c_str(), L"[0x1ab3] Transaction metadata is already present on this file and cannot be superseded.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionScopeCallbacksNotSet)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_SCOPE_CALLBACKS_NOT_SET)).c_str(), L"[0x1ab4] A transaction scope could not be entered because the scope handler has not been initialized.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionRequiredPromotion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_REQUIRED_PROMOTION)).c_str(), L"[0x1ab5] Promotion was required in order to allow the resource manager to enlist, but the transaction was set to disallow it.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCannotExecuteFileInTransaction)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANNOT_EXECUTE_FILE_IN_TRANSACTION)).c_str(), L"[0x1ab6] This file is open for modification in an unresolved transaction and may be opened for execute only by a transacted reader.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionsNotFrozen)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTIONS_NOT_FROZEN)).c_str(), L"[0x1ab7] The request to thaw frozen transactions was ignored because transactions had not previously been frozen.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionFreezeInProgress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_FREEZE_IN_PROGRESS)).c_str(), L"[0x1ab8] Transactions cannot be frozen because a freeze is already in progress.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorNotSnapshotVolume)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SNAPSHOT_VOLUME)).c_str(), L"[0x1ab9] The target volume is not a snapshot volume. This operation is only valid on a volume mounted as a snapshot.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorNoSavepointWithOpenFiles)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_SAVEPOINT_WITH_OPEN_FILES)).c_str(), L"[0x1aba] The savepoint operation failed because files are open on the transaction. This is not permitted.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDataLostRepair)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DATA_LOST_REPAIR)).c_str(), L"[0x1abb] Windows has discovered corruption in a file, and that file has since been repaired. Data loss may have occurred.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorSparseNotAllowedInTransaction)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SPARSE_NOT_ALLOWED_IN_TRANSACTION)).c_str(), L"[0x1abc] The sparse operation could not be completed because a transaction is active on the file.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTmIdentityMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TM_IDENTITY_MISMATCH)).c_str(), L"[0x1abd] The call to create a TransactionManager object failed because the Tm Identity stored in the logfile does not match the Tm Identity that was passed in as an argument.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorFloatedSection)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_FLOATED_SECTION)).c_str(), L"[0x1abe] I/O was attempted on a section object that has been floated as a result of a transaction ending. There is no valid data.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCannotAcceptTransactedWork)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANNOT_ACCEPT_TRANSACTED_WORK)).c_str(), L"[0x1abf] The transactional resource manager cannot currently accept transacted work due to a transient condition such as low resources.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCannotAbortTransactions)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANNOT_ABORT_TRANSACTIONS)).c_str(), L"[0x1ac0] The transactional resource manager had too many transactions outstanding that could not be aborted. The transactional resource manger has been shut down.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorBadClusters)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BAD_CLUSTERS)).c_str(), L"[0x1ac1] The operation could not be completed due to bad clusters on disk.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCompressionNotAllowedInTransaction)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_COMPRESSION_NOT_ALLOWED_IN_TRANSACTION)).c_str(), L"[0x1ac2] The compression operation could not be completed because a transaction is active on the file.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorVolumeDirty)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_VOLUME_DIRTY)).c_str(), L"[0x1ac3] The operation could not be completed because the volume is dirty. Please run chkdsk and try again.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorNoLinkTrackingInTransaction)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_LINK_TRACKING_IN_TRANSACTION)).c_str(), L"[0x1ac4] The link tracking operation could not be completed because a transaction is active.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorOperationNotSupportedInTransaction)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_OPERATION_NOT_SUPPORTED_IN_TRANSACTION)).c_str(), L"[0x1ac5] This operation cannot be performed in a transaction.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorExpiredHandle)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EXPIRED_HANDLE)).c_str(), L"[0x1ac6] The handle is no longer properly associated with its transaction.  It may have been opened in a transactional resource manager that was subsequently forced to restart.  Please close the handle and open a new one.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTransactionNotEnlisted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TRANSACTION_NOT_ENLISTED)).c_str(), L"[0x1ac7] The specified operation could not be performed because the resource manager is not enlisted in the transaction.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorEnlistmentNotInitialized)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ENLISTMENT_NOT_INITIALIZED)).c_str(), L"[0x1ac8] The transaction is linked to an enlistment that is not fully initialized yet.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxWinstationNameInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_WINSTATION_NAME_INVALID)).c_str(), L"[0x1b59] The specified session name is invalid.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxInvalidPd)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_INVALID_PD)).c_str(), L"[0x1b5a] The specified protocol driver is invalid.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxPdNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_PD_NOT_FOUND)).c_str(), L"[0x1b5b] The specified protocol driver was not found in the system path.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxWdNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_WD_NOT_FOUND)).c_str(), L"[0x1b5c] The specified terminal connection driver was not found in the system path.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxCannotMakeEventlogEntry)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_CANNOT_MAKE_EVENTLOG_ENTRY)).c_str(), L"[0x1b5d] A registry key for event logging could not be created for this session.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxServiceNameCollision)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_SERVICE_NAME_COLLISION)).c_str(), L"[0x1b5e] A service with the same name already exists on the system.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxClosePending)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_CLOSE_PENDING)).c_str(), L"[0x1b5f] A close operation is pending on the session.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxNoOutbuf)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_NO_OUTBUF)).c_str(), L"[0x1b60] There are no free output buffers available.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxModemInfNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_MODEM_INF_NOT_FOUND)).c_str(), L"[0x1b61] The MODEM.INF file was not found.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxInvalidModemname)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_INVALID_MODEMNAME)).c_str(), L"[0x1b62] The modem name was not found in MODEM.INF.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxModemResponseError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_MODEM_RESPONSE_ERROR)).c_str(), L"[0x1b63] The modem did not accept the command sent to it. Verify that the configured modem name matches the attached modem.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxModemResponseTimeout)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_MODEM_RESPONSE_TIMEOUT)).c_str(), L"[0x1b64] The modem did not respond to the command sent to it. Verify that the modem is properly cabled and powered on.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxModemResponseNoCarrier)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_MODEM_RESPONSE_NO_CARRIER)).c_str(), L"[0x1b65] Carrier detect has failed or carrier has been dropped due to disconnect.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxModemResponseNoDialtone)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_MODEM_RESPONSE_NO_DIALTONE)).c_str(), L"[0x1b66] Dial tone not detected within the required time. Verify that the phone cable is properly attached and functional.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxModemResponseBusy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_MODEM_RESPONSE_BUSY)).c_str(), L"[0x1b67] Busy signal detected at remote site on callback.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxModemResponseVoice)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_MODEM_RESPONSE_VOICE)).c_str(), L"[0x1b68] Voice detected at remote site on callback.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxTdError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_TD_ERROR)).c_str(), L"[0x1b69] Transport driver error");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxWinstationNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_WINSTATION_NOT_FOUND)).c_str(), L"[0x1b6e] The specified session cannot be found.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxWinstationAlreadyExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_WINSTATION_ALREADY_EXISTS)).c_str(), L"[0x1b6f] The specified session name is already in use.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxWinstationBusy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_WINSTATION_BUSY)).c_str(), L"[0x1b70] The task you are trying to do can't be completed because Remote Desktop Services is currently busy. Please try again in a few minutes. Other users should still be able to log on.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxBadVideoMode)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_BAD_VIDEO_MODE)).c_str(), L"[0x1b71] An attempt has been made to connect to a session whose video mode is not supported by the current client.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxGraphicsInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_GRAPHICS_INVALID)).c_str(), L"[0x1b7b] The application attempted to enable DOS graphics mode. DOS graphics mode is not supported.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxLogonDisabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_LOGON_DISABLED)).c_str(), L"[0x1b7d] Your interactive logon privilege has been disabled. Please contact your administrator.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxNotConsole)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_NOT_CONSOLE)).c_str(), L"[0x1b7e] The requested operation can be performed only on the system console. This is most often the result of a driver or system DLL requiring direct console access.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxClientQueryTimeout)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_CLIENT_QUERY_TIMEOUT)).c_str(), L"[0x1b80] The client failed to respond to the server connect message.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxConsoleDisconnect)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_CONSOLE_DISCONNECT)).c_str(), L"[0x1b81] Disconnecting the console session is not supported.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxConsoleConnect)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_CONSOLE_CONNECT)).c_str(), L"[0x1b82] Reconnecting a disconnected session to the console is not supported.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxShadowDenied)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_SHADOW_DENIED)).c_str(), L"[0x1b84] The request to control another session remotely was denied.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxWinstationAccessDenied)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_WINSTATION_ACCESS_DENIED)).c_str(), L"[0x1b85] The requested session access is denied.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxInvalidWd)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_INVALID_WD)).c_str(), L"[0x1b89] The specified terminal connection driver is invalid.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxShadowInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_SHADOW_INVALID)).c_str(), L"[0x1b8a] The requested session cannot be controlled remotely. This may be because the session is disconnected or does not currently have a user logged on.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxShadowDisabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_SHADOW_DISABLED)).c_str(), L"[0x1b8b] The requested session is not configured to allow remote control.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxClientLicenseInUse)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_CLIENT_LICENSE_IN_USE)).c_str(), L"[0x1b8c] Your request to connect to this Terminal Server has been rejected. Your Terminal Server client license number is currently being used by another user. Please call your system administrator to obtain a unique license number.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxClientLicenseNotSet)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_CLIENT_LICENSE_NOT_SET)).c_str(), L"[0x1b8d] Your request to connect to this Terminal Server has been rejected. Your Terminal Server client license number has not been entered for this copy of the Terminal Server client. Please contact your system administrator.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxLicenseNotAvailable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_LICENSE_NOT_AVAILABLE)).c_str(), L"[0x1b8e] The number of connections to this computer is limited and all connections are in use right now. Try connecting later or contact your system administrator.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxLicenseClientInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_LICENSE_CLIENT_INVALID)).c_str(), L"[0x1b8f] The client you are using is not licensed to use this system. Your logon request is denied.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxLicenseExpired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_LICENSE_EXPIRED)).c_str(), L"[0x1b90] The system license has expired. Your logon request is denied.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxShadowNotRunning)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_SHADOW_NOT_RUNNING)).c_str(), L"[0x1b91] Remote control could not be terminated because the specified session is not currently being remotely controlled.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxShadowEndedByModeChange)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_SHADOW_ENDED_BY_MODE_CHANGE)).c_str(), L"[0x1b92] The remote control of the console was terminated because the display mode was changed. Changing the display mode in a remote control session is not supported.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorActivationCountExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ACTIVATION_COUNT_EXCEEDED)).c_str(), L"[0x1b93] Activation has already been reset the maximum number of times for this installation. Your activation timer will not be cleared.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxWinstationsDisabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_WINSTATIONS_DISABLED)).c_str(), L"[0x1b94] Remote logins are currently disabled.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxEncryptionLevelRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_ENCRYPTION_LEVEL_REQUIRED)).c_str(), L"[0x1b95] You do not have the proper encryption level to access this Session.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxSessionInUse)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_SESSION_IN_USE)).c_str(), L"[0x1b96] The user %s\\\\%s is currently logged on to this computer. Only the current user or an administrator can log on to this computer.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxNoForceLogoff)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_NO_FORCE_LOGOFF)).c_str(), L"[0x1b97] The user %s\\\\%s is already logged on to the console of this computer. You do not have permission to log in at this time. To resolve this issue, contact %s\\\\%s and have them log off.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxAccountRestriction)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_ACCOUNT_RESTRICTION)).c_str(), L"[0x1b98] Unable to log you on because of an account restriction.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorRdpProtocolError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RDP_PROTOCOL_ERROR)).c_str(), L"[0x1b99] The RDP protocol component %2 detected an error in the protocol stream and has disconnected the client.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxCdmConnect)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_CDM_CONNECT)).c_str(), L"[0x1b9a] The Client Drive Mapping Service Has Connected on Terminal Connection.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxCdmDisconnect)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_CDM_DISCONNECT)).c_str(), L"[0x1b9b] The Client Drive Mapping Service Has Disconnected on Terminal Connection.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorCtxSecurityLayerError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CTX_SECURITY_LAYER_ERROR)).c_str(), L"[0x1b9c] The Terminal Server security layer detected an error in the protocol stream and has disconnected the client.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTsIncompatibleSessions)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TS_INCOMPATIBLE_SESSIONS)).c_str(), L"[0x1b9d] The target session is incompatible with the current session.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorTsVideoSubsystemError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_TS_VIDEO_SUBSYSTEM_ERROR)).c_str(), L"[0x1b9e] Windows can't connect to your session because a problem occurred in the Windows video subsystem. Try connecting again later, or contact the server administrator for assistance.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNotInstalled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NOT_INSTALLED)).c_str(), L"[0x2008] An error occurred while installing the directory service. For more information, see the event log.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsMembershipEvaluatedLocally)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_MEMBERSHIP_EVALUATED_LOCALLY)).c_str(), L"[0x2009] The directory service evaluated group memberships locally.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNoAttributeOrValue)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_ATTRIBUTE_OR_VALUE)).c_str(), L"[0x200a] The specified directory service attribute or value does not exist.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsInvalidAttributeSyntax)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INVALID_ATTRIBUTE_SYNTAX)).c_str(), L"[0x200b] The attribute syntax specified to the directory service is invalid.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAttributeTypeUndefined)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ATTRIBUTE_TYPE_UNDEFINED)).c_str(), L"[0x200c] The attribute type specified to the directory service is not defined.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAttributeOrValueExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ATTRIBUTE_OR_VALUE_EXISTS)).c_str(), L"[0x200d] The specified directory service attribute or value already exists.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsBusy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_BUSY)).c_str(), L"[0x200e] The directory service is busy.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsUnavailable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_UNAVAILABLE)).c_str(), L"[0x200f] The directory service is unavailable.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNoRidsAllocated)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_RIDS_ALLOCATED)).c_str(), L"[0x2010] The directory service was unable to allocate a relative identifier.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNoMoreRids)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_MORE_RIDS)).c_str(), L"[0x2011] The directory service has exhausted the pool of relative identifiers.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsIncorrectRoleOwner)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INCORRECT_ROLE_OWNER)).c_str(), L"[0x2012] The requested operation could not be performed because the directory service is not the master for that type of operation.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsRidmgrInitError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_RIDMGR_INIT_ERROR)).c_str(), L"[0x2013] The directory service was unable to initialize the subsystem that allocates relative identifiers.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsObjClassViolation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_OBJ_CLASS_VIOLATION)).c_str(), L"[0x2014] The requested operation did not satisfy one or more constraints associated with the class of the object.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantOnNonLeaf)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_ON_NON_LEAF)).c_str(), L"[0x2015] The directory service can perform the requested operation only on a leaf object.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantOnRdn)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_ON_RDN)).c_str(), L"[0x2016] The directory service cannot perform the requested operation on the RDN attribute of an object.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantModObjClass)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_MOD_OBJ_CLASS)).c_str(), L"[0x2017] The directory service detected an attempt to modify the object class of an object.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCrossDomMoveError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CROSS_DOM_MOVE_ERROR)).c_str(), L"[0x2018] The requested cross-domain move operation could not be performed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsGcNotAvailable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_GC_NOT_AVAILABLE)).c_str(), L"[0x2019] Unable to contact the global catalog server.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorSharedPolicy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SHARED_POLICY)).c_str(), L"[0x201a] The policy object is shared and can only be modified at the root.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorPolicyObjectNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_POLICY_OBJECT_NOT_FOUND)).c_str(), L"[0x201b] The policy object does not exist.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorPolicyOnlyInDs)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_POLICY_ONLY_IN_DS)).c_str(), L"[0x201c] The requested policy information is only in the directory service.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorPromotionActive)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PROMOTION_ACTIVE)).c_str(), L"[0x201d] A domain controller promotion is currently active.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorNoPromotionActive)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_PROMOTION_ACTIVE)).c_str(), L"[0x201e] A domain controller promotion is not currently active");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsOperationsError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_OPERATIONS_ERROR)).c_str(), L"[0x2020] An operations error occurred.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsProtocolError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_PROTOCOL_ERROR)).c_str(), L"[0x2021] A protocol error occurred.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsTimelimitExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_TIMELIMIT_EXCEEDED)).c_str(), L"[0x2022] The time limit for this request was exceeded.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSizelimitExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SIZELIMIT_EXCEEDED)).c_str(), L"[0x2023] The size limit for this request was exceeded.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAdminLimitExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ADMIN_LIMIT_EXCEEDED)).c_str(), L"[0x2024] The administrative limit for this request was exceeded.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCompareFalse)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_COMPARE_FALSE)).c_str(), L"[0x2025] The compare response was false.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCompareTrue)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_COMPARE_TRUE)).c_str(), L"[0x2026] The compare response was true.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAuthMethodNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_AUTH_METHOD_NOT_SUPPORTED)).c_str(), L"[0x2027] The requested authentication method is not supported by the server.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsStrongAuthRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_STRONG_AUTH_REQUIRED)).c_str(), L"[0x2028] A more secure authentication method is required for this server.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsInappropriateAuth)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INAPPROPRIATE_AUTH)).c_str(), L"[0x2029] Inappropriate authentication.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAuthUnknown)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_AUTH_UNKNOWN)).c_str(), L"[0x202a] The authentication mechanism is unknown.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsReferral)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_REFERRAL)).c_str(), L"[0x202b] A referral was returned from the server.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsUnavailableCritExtension)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_UNAVAILABLE_CRIT_EXTENSION)).c_str(), L"[0x202c] The server does not support the requested critical extension.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsConfidentialityRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CONFIDENTIALITY_REQUIRED)).c_str(), L"[0x202d] This request requires a secure connection.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsInappropriateMatching)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INAPPROPRIATE_MATCHING)).c_str(), L"[0x202e] Inappropriate matching.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsConstraintViolation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CONSTRAINT_VIOLATION)).c_str(), L"[0x202f] A constraint violation occurred.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNoSuchObject)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_SUCH_OBJECT)).c_str(), L"[0x2030] There is no such object on the server.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAliasProblem)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ALIAS_PROBLEM)).c_str(), L"[0x2031] There is an alias problem.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsInvalidDnSyntax)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INVALID_DN_SYNTAX)).c_str(), L"[0x2032] An invalid dn syntax has been specified.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsIsLeaf)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_IS_LEAF)).c_str(), L"[0x2033] The object is a leaf object.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAliasDerefProblem)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ALIAS_DEREF_PROBLEM)).c_str(), L"[0x2034] There is an alias dereferencing problem.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsUnwillingToPerform)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_UNWILLING_TO_PERFORM)).c_str(), L"[0x2035] The server is unwilling to process the request.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsLoopDetect)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_LOOP_DETECT)).c_str(), L"[0x2036] A loop has been detected.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNamingViolation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NAMING_VIOLATION)).c_str(), L"[0x2037] There is a naming violation.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsObjectResultsTooLarge)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_OBJECT_RESULTS_TOO_LARGE)).c_str(), L"[0x2038] The result set is too large.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAffectsMultipleDsas)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_AFFECTS_MULTIPLE_DSAS)).c_str(), L"[0x2039] The operation affects multiple DSAs");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsServerDown)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SERVER_DOWN)).c_str(), L"[0x203a] The server is not operational.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsLocalError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_LOCAL_ERROR)).c_str(), L"[0x203b] A local error has occurred.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsEncodingError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ENCODING_ERROR)).c_str(), L"[0x203c] An encoding error has occurred.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDecodingError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DECODING_ERROR)).c_str(), L"[0x203d] A decoding error has occurred.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsFilterUnknown)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_FILTER_UNKNOWN)).c_str(), L"[0x203e] The search filter cannot be recognized.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsParamError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_PARAM_ERROR)).c_str(), L"[0x203f] One or more parameters are illegal.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NOT_SUPPORTED)).c_str(), L"[0x2040] The specified method is not supported.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNoResultsReturned)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_RESULTS_RETURNED)).c_str(), L"[0x2041] No results were returned.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsControlNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CONTROL_NOT_FOUND)).c_str(), L"[0x2042] The specified control is not supported by the server.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsClientLoop)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CLIENT_LOOP)).c_str(), L"[0x2043] A referral loop was detected by the client.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsReferralLimitExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_REFERRAL_LIMIT_EXCEEDED)).c_str(), L"[0x2044] The preset referral limit was exceeded.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSortControlMissing)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SORT_CONTROL_MISSING)).c_str(), L"[0x2045] The search requires a SORT control.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsOffsetRangeError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_OFFSET_RANGE_ERROR)).c_str(), L"[0x2046] The search results exceed the offset range specified.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsRidmgrDisabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_RIDMGR_DISABLED)).c_str(), L"[0x2047] The directory service detected the subsystem that allocates relative identifiers is disabled. This can occur as a protective mechanism when the system determines a significant portion of relative identifiers (RIDs) have been exhausted. Please see http://go.microsoft.com/fwlink/?LinkId=228610 for recommended diagnostic steps and the procedure to re-enable account creation.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsRootMustBeNc)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ROOT_MUST_BE_NC)).c_str(), L"[0x206d] The root object must be the head of a naming context. The root object cannot have an instantiated parent.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAddReplicaInhibited)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ADD_REPLICA_INHIBITED)).c_str(), L"[0x206e] The add replica operation cannot be performed. The naming context must be writeable in order to create the replica.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAttNotDefInSchema)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ATT_NOT_DEF_IN_SCHEMA)).c_str(), L"[0x206f] A reference to an attribute that is not defined in the schema occurred.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsMaxObjSizeExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_MAX_OBJ_SIZE_EXCEEDED)).c_str(), L"[0x2070] The maximum size of an object has been exceeded.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsObjStringNameExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_OBJ_STRING_NAME_EXISTS)).c_str(), L"[0x2071] An attempt was made to add an object to the directory with a name that is already in use.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNoRdnDefinedInSchema)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_RDN_DEFINED_IN_SCHEMA)).c_str(), L"[0x2072] An attempt was made to add an object of a class that does not have an RDN defined in the schema.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsRdnDoesntMatchSchema)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_RDN_DOESNT_MATCH_SCHEMA)).c_str(), L"[0x2073] An attempt was made to add an object using an RDN that is not the RDN defined in the schema.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNoRequestedAttsFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_REQUESTED_ATTS_FOUND)).c_str(), L"[0x2074] None of the requested attributes were found on the objects.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsUserBufferToSmall)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_USER_BUFFER_TO_SMALL)).c_str(), L"[0x2075] The user buffer is too small.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAttIsNotOnObj)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ATT_IS_NOT_ON_OBJ)).c_str(), L"[0x2076] The attribute specified in the operation is not present on the object.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsIllegalModOperation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ILLEGAL_MOD_OPERATION)).c_str(), L"[0x2077] Illegal modify operation. Some aspect of the modification is not permitted.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsObjTooLarge)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_OBJ_TOO_LARGE)).c_str(), L"[0x2078] The specified object is too large.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsBadInstanceType)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_BAD_INSTANCE_TYPE)).c_str(), L"[0x2079] The specified instance type is not valid.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsMasterdsaRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_MASTERDSA_REQUIRED)).c_str(), L"[0x207a] The operation must be performed at a master DSA.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsObjectClassRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_OBJECT_CLASS_REQUIRED)).c_str(), L"[0x207b] The object class attribute must be specified.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsMissingRequiredAtt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_MISSING_REQUIRED_ATT)).c_str(), L"[0x207c] A required attribute is missing.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAttNotDefForClass)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ATT_NOT_DEF_FOR_CLASS)).c_str(), L"[0x207d] An attempt was made to modify an object to include an attribute that is not legal for its class.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAttAlreadyExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ATT_ALREADY_EXISTS)).c_str(), L"[0x207e] The specified attribute is already present on the object.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantAddAttValues)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_ADD_ATT_VALUES)).c_str(), L"[0x2080] The specified attribute is not present, or has no values.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSingleValueConstraint)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SINGLE_VALUE_CONSTRAINT)).c_str(), L"[0x2081] Multiple values were specified for an attribute that can have only one value.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsRangeConstraint)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_RANGE_CONSTRAINT)).c_str(), L"[0x2082] A value for the attribute was not in the acceptable range of values.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAttValAlreadyExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ATT_VAL_ALREADY_EXISTS)).c_str(), L"[0x2083] The specified value already exists.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantRemMissingAtt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_REM_MISSING_ATT)).c_str(), L"[0x2084] The attribute cannot be removed because it is not present on the object.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantRemMissingAttVal)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_REM_MISSING_ATT_VAL)).c_str(), L"[0x2085] The attribute value cannot be removed because it is not present on the object.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsRootCantBeSubref)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ROOT_CANT_BE_SUBREF)).c_str(), L"[0x2086] The specified root object cannot be a subref.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNoChaining)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_CHAINING)).c_str(), L"[0x2087] Chaining is not permitted.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNoChainedEval)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_CHAINED_EVAL)).c_str(), L"[0x2088] Chained evaluation is not permitted.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNoParentObject)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_PARENT_OBJECT)).c_str(), L"[0x2089] The operation could not be performed because the object's parent is either uninstantiated or deleted.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsParentIsAnAlias)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_PARENT_IS_AN_ALIAS)).c_str(), L"[0x208a] Having a parent that is an alias is not permitted. Aliases are leaf objects.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantMixMasterAndReps)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_MIX_MASTER_AND_REPS)).c_str(), L"[0x208b] The object and parent must be of the same type, either both masters or both replicas.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsChildrenExist)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CHILDREN_EXIST)).c_str(), L"[0x208c] The operation cannot be performed because child objects exist. This operation can only be performed on a leaf object.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsObjNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_OBJ_NOT_FOUND)).c_str(), L"[0x208d] Directory object not found.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAliasedObjMissing)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ALIASED_OBJ_MISSING)).c_str(), L"[0x208e] The aliased object is missing.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsBadNameSyntax)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_BAD_NAME_SYNTAX)).c_str(), L"[0x208f] The object name has bad syntax.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAliasPointsToAlias)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ALIAS_POINTS_TO_ALIAS)).c_str(), L"[0x2090] It is not permitted for an alias to refer to another alias.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantDerefAlias)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_DEREF_ALIAS)).c_str(), L"[0x2091] The alias cannot be dereferenced.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsOutOfScope)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_OUT_OF_SCOPE)).c_str(), L"[0x2092] The operation is out of scope.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsObjectBeingRemoved)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_OBJECT_BEING_REMOVED)).c_str(), L"[0x2093] The operation cannot continue because the object is in the process of being removed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantDeleteDsaObj)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_DELETE_DSA_OBJ)).c_str(), L"[0x2094] The DSA object cannot be deleted.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsGenericError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_GENERIC_ERROR)).c_str(), L"[0x2095] A directory service error has occurred.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDsaMustBeIntMaster)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DSA_MUST_BE_INT_MASTER)).c_str(), L"[0x2096] The operation can only be performed on an internal master DSA object.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsClassNotDsa)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CLASS_NOT_DSA)).c_str(), L"[0x2097] The object must be of class DSA.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsInsuffAccessRights)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INSUFF_ACCESS_RIGHTS)).c_str(), L"[0x2098] Insufficient access rights to perform the operation.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsIllegalSuperior)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ILLEGAL_SUPERIOR)).c_str(), L"[0x2099] The object cannot be added because the parent is not on the list of possible superiors.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAttributeOwnedBySam)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ATTRIBUTE_OWNED_BY_SAM)).c_str(), L"[0x209a] Access to the attribute is not permitted because the attribute is owned by the Security Accounts Manager (SAM).");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNameTooManyParts)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NAME_TOO_MANY_PARTS)).c_str(), L"[0x209b] The name has too many parts.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNameTooLong)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NAME_TOO_LONG)).c_str(), L"[0x209c] The name is too long.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNameValueTooLong)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NAME_VALUE_TOO_LONG)).c_str(), L"[0x209d] The name value is too long.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNameUnparseable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NAME_UNPARSEABLE)).c_str(), L"[0x209e] The directory service encountered an error parsing a name.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNameTypeUnknown)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NAME_TYPE_UNKNOWN)).c_str(), L"[0x209f] The directory service cannot get the attribute type for a name.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNotAnObject)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NOT_AN_OBJECT)).c_str(), L"[0x20a0] The name does not identify an object; the name identifies a phantom.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSecDescTooShort)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SEC_DESC_TOO_SHORT)).c_str(), L"[0x20a1] The security descriptor is too short.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSecDescInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SEC_DESC_INVALID)).c_str(), L"[0x20a2] The security descriptor is invalid.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNoDeletedName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_DELETED_NAME)).c_str(), L"[0x20a3] Failed to create name for deleted object.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSubrefMustHaveParent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SUBREF_MUST_HAVE_PARENT)).c_str(), L"[0x20a4] The parent of a new subref must exist.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNcnameMustBeNc)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NCNAME_MUST_BE_NC)).c_str(), L"[0x20a5] The object must be a naming context.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantAddSystemOnly)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_ADD_SYSTEM_ONLY)).c_str(), L"[0x20a6] It is not permitted to add an attribute which is owned by the system.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsClassMustBeConcrete)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CLASS_MUST_BE_CONCRETE)).c_str(), L"[0x20a7] The class of the object must be structural; you cannot instantiate an abstract class.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsInvalidDmd)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INVALID_DMD)).c_str(), L"[0x20a8] The schema object could not be found.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsObjGuidExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_OBJ_GUID_EXISTS)).c_str(), L"[0x20a9] A local object with this GUID (dead or alive) already exists.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNotOnBacklink)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NOT_ON_BACKLINK)).c_str(), L"[0x20aa] The operation cannot be performed on a back link.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNoCrossrefForNc)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_CROSSREF_FOR_NC)).c_str(), L"[0x20ab] The cross reference for the specified naming context could not be found.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsShuttingDown)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SHUTTING_DOWN)).c_str(), L"[0x20ac] The operation could not be performed because the directory service is shutting down.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsUnknownOperation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_UNKNOWN_OPERATION)).c_str(), L"[0x20ad] The directory service request is invalid.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsInvalidRoleOwner)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INVALID_ROLE_OWNER)).c_str(), L"[0x20ae] The role owner attribute could not be read.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCouldntContactFsmo)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_COULDNT_CONTACT_FSMO)).c_str(), L"[0x20af] The requested FSMO operation failed. The current FSMO holder could not be contacted.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCrossNcDnRename)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CROSS_NC_DN_RENAME)).c_str(), L"[0x20b0] Modification of a DN across a naming context is not permitted.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantModSystemOnly)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_MOD_SYSTEM_ONLY)).c_str(), L"[0x20b1] The attribute cannot be modified because it is owned by the system.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsReplicatorOnly)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_REPLICATOR_ONLY)).c_str(), L"[0x20b2] Only the replicator can perform this function.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsObjClassNotDefined)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_OBJ_CLASS_NOT_DEFINED)).c_str(), L"[0x20b3] The specified class is not defined.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsObjClassNotSubclass)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_OBJ_CLASS_NOT_SUBCLASS)).c_str(), L"[0x20b4] The specified class is not a subclass.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNameReferenceInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NAME_REFERENCE_INVALID)).c_str(), L"[0x20b5] The name reference is invalid.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCrossRefExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CROSS_REF_EXISTS)).c_str(), L"[0x20b6] A cross reference already exists.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantDelMasterCrossref)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_DEL_MASTER_CROSSREF)).c_str(), L"[0x20b7] It is not permitted to delete a master cross reference.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSubtreeNotifyNotNcHead)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SUBTREE_NOTIFY_NOT_NC_HEAD)).c_str(), L"[0x20b8] Subtree notifications are only supported on NC heads.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNotifyFilterTooComplex)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NOTIFY_FILTER_TOO_COMPLEX)).c_str(), L"[0x20b9] Notification filter is too complex.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDupRdn)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DUP_RDN)).c_str(), L"[0x20ba] Schema update failed: duplicate RDN.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDupOid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DUP_OID)).c_str(), L"[0x20bb] Schema update failed: duplicate OID.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDupMapiId)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DUP_MAPI_ID)).c_str(), L"[0x20bc] Schema update failed: duplicate MAPI identifier.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDupSchemaIdGuid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DUP_SCHEMA_ID_GUID)).c_str(), L"[0x20bd] Schema update failed: duplicate schema-id GUID.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDupLdapDisplayName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DUP_LDAP_DISPLAY_NAME)).c_str(), L"[0x20be] Schema update failed: duplicate LDAP display name.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSemanticAttTest)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SEMANTIC_ATT_TEST)).c_str(), L"[0x20bf] Schema update failed: range-lower less than range upper.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSyntaxMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SYNTAX_MISMATCH)).c_str(), L"[0x20c0] Schema update failed: syntax mismatch.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsExistsInMustHave)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_EXISTS_IN_MUST_HAVE)).c_str(), L"[0x20c1] Schema deletion failed: attribute is used in must-contain.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsExistsInMayHave)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_EXISTS_IN_MAY_HAVE)).c_str(), L"[0x20c2] Schema deletion failed: attribute is used in may-contain.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNonexistentMayHave)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NONEXISTENT_MAY_HAVE)).c_str(), L"[0x20c3] Schema update failed: attribute in may-contain does not exist.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNonexistentMustHave)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NONEXISTENT_MUST_HAVE)).c_str(), L"[0x20c4] Schema update failed: attribute in must-contain does not exist.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAuxClsTestFail)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_AUX_CLS_TEST_FAIL)).c_str(), L"[0x20c5] Schema update failed: class in aux-class list does not exist or is not an auxiliary class.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNonexistentPossSup)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NONEXISTENT_POSS_SUP)).c_str(), L"[0x20c6] Schema update failed: class in poss-superiors does not exist.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSubClsTestFail)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SUB_CLS_TEST_FAIL)).c_str(), L"[0x20c7] Schema update failed: class in subclassof list does not exist or does not satisfy hierarchy rules.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsBadRdnAttIdSyntax)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_BAD_RDN_ATT_ID_SYNTAX)).c_str(), L"[0x20c8] Schema update failed: Rdn-Att-Id has wrong syntax.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsExistsInAuxCls)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_EXISTS_IN_AUX_CLS)).c_str(), L"[0x20c9] Schema deletion failed: class is used as auxiliary class.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsExistsInSubCls)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_EXISTS_IN_SUB_CLS)).c_str(), L"[0x20ca] Schema deletion failed: class is used as sub class.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsExistsInPossSup)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_EXISTS_IN_POSS_SUP)).c_str(), L"[0x20cb] Schema deletion failed: class is used as poss superior.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsRecalcschemaFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_RECALCSCHEMA_FAILED)).c_str(), L"[0x20cc] Schema update failed in recalculating validation cache.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsTreeDeleteNotFinished)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_TREE_DELETE_NOT_FINISHED)).c_str(), L"[0x20cd] The tree deletion is not finished. The request must be made again to continue deleting the tree.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantDelete)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_DELETE)).c_str(), L"[0x20ce] The requested delete operation could not be performed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAttSchemaReqId)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ATT_SCHEMA_REQ_ID)).c_str(), L"[0x20cf] Cannot read the governs class identifier for the schema record.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsBadAttSchemaSyntax)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_BAD_ATT_SCHEMA_SYNTAX)).c_str(), L"[0x20d0] The attribute schema has bad syntax.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantCacheAtt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_CACHE_ATT)).c_str(), L"[0x20d1] The attribute could not be cached.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantCacheClass)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_CACHE_CLASS)).c_str(), L"[0x20d2] The class could not be cached.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantRemoveAttCache)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_REMOVE_ATT_CACHE)).c_str(), L"[0x20d3] The attribute could not be removed from the cache.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantRemoveClassCache)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_REMOVE_CLASS_CACHE)).c_str(), L"[0x20d4] The class could not be removed from the cache.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantRetrieveDn)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_RETRIEVE_DN)).c_str(), L"[0x20d5] The distinguished name attribute could not be read.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsMissingSupref)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_MISSING_SUPREF)).c_str(), L"[0x20d6] No superior reference has been configured for the directory service. The directory service is therefore unable to issue referrals to objects outside this forest.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantRetrieveInstance)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_RETRIEVE_INSTANCE)).c_str(), L"[0x20d7] The instance type attribute could not be retrieved.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCodeInconsistency)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CODE_INCONSISTENCY)).c_str(), L"[0x20d8] An internal error has occurred.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDatabaseError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DATABASE_ERROR)).c_str(), L"[0x20d9] A database error has occurred.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsGovernsidMissing)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_GOVERNSID_MISSING)).c_str(), L"[0x20da] The attribute GOVERNSID is missing.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsMissingExpectedAtt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_MISSING_EXPECTED_ATT)).c_str(), L"[0x20db] An expected attribute is missing.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNcnameMissingCrRef)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NCNAME_MISSING_CR_REF)).c_str(), L"[0x20dc] The specified naming context is missing a cross reference.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSecurityCheckingError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SECURITY_CHECKING_ERROR)).c_str(), L"[0x20dd] A security checking error has occurred.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSchemaNotLoaded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SCHEMA_NOT_LOADED)).c_str(), L"[0x20de] The schema is not loaded.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSchemaAllocFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SCHEMA_ALLOC_FAILED)).c_str(), L"[0x20df] Schema allocation failed. Please check if the machine is running low on memory.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsAttSchemaReqSyntax)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ATT_SCHEMA_REQ_SYNTAX)).c_str(), L"[0x20e0] Failed to obtain the required syntax for the attribute schema.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsGcverifyError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_GCVERIFY_ERROR)).c_str(), L"[0x20e1] The global catalog verification failed. The global catalog is not available or does not support the operation. Some part of the directory is currently not available.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraSchemaMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_SCHEMA_MISMATCH)).c_str(), L"[0x20e2] The replication operation failed because of a schema mismatch between the servers involved.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantFindDsaObj)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_FIND_DSA_OBJ)).c_str(), L"[0x20e3] The DSA object could not be found.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantFindExpectedNc)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_FIND_EXPECTED_NC)).c_str(), L"[0x20e4] The naming context could not be found.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantFindNcInCache)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_FIND_NC_IN_CACHE)).c_str(), L"[0x20e5] The naming context could not be found in the cache.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantRetrieveChild)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_RETRIEVE_CHILD)).c_str(), L"[0x20e6] The child object could not be retrieved.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSecurityIllegalModify)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SECURITY_ILLEGAL_MODIFY)).c_str(), L"[0x20e7] The modification was not permitted for security reasons.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantReplaceHiddenRec)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_REPLACE_HIDDEN_REC)).c_str(), L"[0x20e8] The operation cannot replace the hidden record.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsBadHierarchyFile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_BAD_HIERARCHY_FILE)).c_str(), L"[0x20e9] The hierarchy file is invalid.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsBuildHierarchyTableFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_BUILD_HIERARCHY_TABLE_FAILED)).c_str(), L"[0x20ea] The attempt to build the hierarchy table failed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsConfigParamMissing)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CONFIG_PARAM_MISSING)).c_str(), L"[0x20eb] The directory configuration parameter is missing from the registry.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCountingAbIndicesFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_COUNTING_AB_INDICES_FAILED)).c_str(), L"[0x20ec] The attempt to count the address book indices failed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsHierarchyTableMallocFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_HIERARCHY_TABLE_MALLOC_FAILED)).c_str(), L"[0x20ed] The allocation of the hierarchy table failed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsInternalFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INTERNAL_FAILURE)).c_str(), L"[0x20ee] The directory service encountered an internal failure.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsUnknownError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_UNKNOWN_ERROR)).c_str(), L"[0x20ef] The directory service encountered an unknown failure.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsRootRequiresClassTop)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ROOT_REQUIRES_CLASS_TOP)).c_str(), L"[0x20f0] A root object requires a class of 'top'.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsRefusingFsmoRoles)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_REFUSING_FSMO_ROLES)).c_str(), L"[0x20f1] This directory server is shutting down, and cannot take ownership of new floating single-master operation roles.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsMissingFsmoSettings)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_MISSING_FSMO_SETTINGS)).c_str(), L"[0x20f2] The directory service is missing mandatory configuration information, and is unable to determine the ownership of floating single-master operation roles.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsUnableToSurrenderRoles)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_UNABLE_TO_SURRENDER_ROLES)).c_str(), L"[0x20f3] The directory service was unable to transfer ownership of one or more floating single-master operation roles to other servers.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraGeneric)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_GENERIC)).c_str(), L"[0x20f4] The replication operation failed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraInvalidParameter)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_INVALID_PARAMETER)).c_str(), L"[0x20f5] An invalid parameter was specified for this replication operation.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraBusy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_BUSY)).c_str(), L"[0x20f6] The directory service is too busy to complete the replication operation at this time.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraBadDn)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_BAD_DN)).c_str(), L"[0x20f7] The distinguished name specified for this replication operation is invalid.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraBadNc)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_BAD_NC)).c_str(), L"[0x20f8] The naming context specified for this replication operation is invalid.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraDnExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_DN_EXISTS)).c_str(), L"[0x20f9] The distinguished name specified for this replication operation already exists.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraInternalError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_INTERNAL_ERROR)).c_str(), L"[0x20fa] The replication system encountered an internal error.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraInconsistentDit)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_INCONSISTENT_DIT)).c_str(), L"[0x20fb] The replication operation encountered a database inconsistency.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraConnectionFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_CONNECTION_FAILED)).c_str(), L"[0x20fc] The server specified for this replication operation could not be contacted.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraBadInstanceType)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_BAD_INSTANCE_TYPE)).c_str(), L"[0x20fd] The replication operation encountered an object with an invalid instance type.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraOutOfMem)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_OUT_OF_MEM)).c_str(), L"[0x20fe] The replication operation failed to allocate memory.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraMailProblem)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_MAIL_PROBLEM)).c_str(), L"[0x20ff] The replication operation encountered an error with the mail system.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraRefAlreadyExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_REF_ALREADY_EXISTS)).c_str(), L"[0x2100] The replication reference information for the target server already exists.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraRefNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_REF_NOT_FOUND)).c_str(), L"[0x2101] The replication reference information for the target server does not exist.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraObjIsRepSource)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_OBJ_IS_REP_SOURCE)).c_str(), L"[0x2102] The naming context cannot be removed because it is replicated to another server.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraDbError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_DB_ERROR)).c_str(), L"[0x2103] The replication operation encountered a database error.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraNoReplica)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_NO_REPLICA)).c_str(), L"[0x2104] The naming context is in the process of being removed or is not replicated from the specified server.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraAccessDenied)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_ACCESS_DENIED)).c_str(), L"[0x2105] Replication access was denied.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_NOT_SUPPORTED)).c_str(), L"[0x2106] The requested operation is not supported by this version of the directory service.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraRpcCancelled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_RPC_CANCELLED)).c_str(), L"[0x2107] The replication remote procedure call was cancelled.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraSourceDisabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_SOURCE_DISABLED)).c_str(), L"[0x2108] The source server is currently rejecting replication requests.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraSinkDisabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_SINK_DISABLED)).c_str(), L"[0x2109] The destination server is currently rejecting replication requests.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraNameCollision)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_NAME_COLLISION)).c_str(), L"[0x210a] The replication operation failed due to a collision of object names.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraSourceReinstalled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_SOURCE_REINSTALLED)).c_str(), L"[0x210b] The replication source has been reinstalled.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraMissingParent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_MISSING_PARENT)).c_str(), L"[0x210c] The replication operation failed because a required parent object is missing.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraPreempted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_PREEMPTED)).c_str(), L"[0x210d] The replication operation was preempted.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraAbandonSync)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_ABANDON_SYNC)).c_str(), L"[0x210e] The replication synchronization attempt was abandoned because of a lack of updates.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraShutdown)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_SHUTDOWN)).c_str(), L"[0x210f] The replication operation was terminated because the system is shutting down.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraIncompatiblePartialSet)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_INCOMPATIBLE_PARTIAL_SET)).c_str(), L"[0x2110] Synchronization attempt failed because the destination DC is currently waiting to synchronize new partial attributes from source. This condition is normal if a recent schema change modified the partial attribute set. The destination partial attribute set is not a subset of source partial attribute set.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraSourceIsPartialReplica)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_SOURCE_IS_PARTIAL_REPLICA)).c_str(), L"[0x2111] The replication synchronization attempt failed because a master replica attempted to sync from a partial replica.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraExtnConnectionFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_EXTN_CONNECTION_FAILED)).c_str(), L"[0x2112] The server specified for this replication operation was contacted, but that server was unable to contact an additional server needed to complete the operation.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsInstallSchemaMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INSTALL_SCHEMA_MISMATCH)).c_str(), L"[0x2113] The version of the directory service schema of the source forest is not compatible with the version of directory service on this computer.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDupLinkId)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DUP_LINK_ID)).c_str(), L"[0x2114] Schema update failed: An attribute with the same link identifier already exists.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNameErrorResolving)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NAME_ERROR_RESOLVING)).c_str(), L"[0x2115] Name translation: Generic processing error.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNameErrorNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NAME_ERROR_NOT_FOUND)).c_str(), L"[0x2116] Name translation: Could not find the name or insufficient right to see name.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNameErrorNotUnique)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NAME_ERROR_NOT_UNIQUE)).c_str(), L"[0x2117] Name translation: Input name mapped to more than one output name.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNameErrorNoMapping)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NAME_ERROR_NO_MAPPING)).c_str(), L"[0x2118] Name translation: Input name found, but not the associated output format.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNameErrorDomainOnly)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NAME_ERROR_DOMAIN_ONLY)).c_str(), L"[0x2119] Name translation: Unable to resolve completely, only the domain was found.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNameErrorNoSyntacticalMapping)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NAME_ERROR_NO_SYNTACTICAL_MAPPING)).c_str(), L"[0x211a] Name translation: Unable to perform purely syntactical mapping at the client without going out to the wire.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsConstructedAttMod)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CONSTRUCTED_ATT_MOD)).c_str(), L"[0x211b] Modification of a constructed attribute is not allowed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsWrongOmObjClass)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_WRONG_OM_OBJ_CLASS)).c_str(), L"[0x211c] The OM-Object-Class specified is incorrect for an attribute with the specified syntax.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDraReplPending)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_REPL_PENDING)).c_str(), L"[0x211d] The replication request has been posted; waiting for reply.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDsRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DS_REQUIRED)).c_str(), L"[0x211e] The requested operation requires a directory service, and none was available.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsInvalidLdapDisplayName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INVALID_LDAP_DISPLAY_NAME)).c_str(), L"[0x211f] The LDAP display name of the class or attribute contains non-ASCII characters.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNonBaseSearch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NON_BASE_SEARCH)).c_str(), L"[0x2120] The requested search operation is only supported for base searches.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantRetrieveAtts)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_RETRIEVE_ATTS)).c_str(), L"[0x2121] The search failed to retrieve attributes from the database.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsBacklinkWithoutLink)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_BACKLINK_WITHOUT_LINK)).c_str(), L"[0x2122] The schema update operation tried to add a backward link attribute that has no corresponding forward link.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsEpochMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_EPOCH_MISMATCH)).c_str(), L"[0x2123] Source and destination of a cross-domain move do not agree on the object's epoch number. Either source or destination does not have the latest version of the object.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSrcNameMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SRC_NAME_MISMATCH)).c_str(), L"[0x2124] Source and destination of a cross-domain move do not agree on the object's current name. Either source or destination does not have the latest version of the object.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSrcAndDstNcIdentical)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SRC_AND_DST_NC_IDENTICAL)).c_str(), L"[0x2125] Source and destination for the cross-domain move operation are identical. Caller should use local move operation instead of cross-domain move operation.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDstNcMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DST_NC_MISMATCH)).c_str(), L"[0x2126] Source and destination for a cross-domain move are not in agreement on the naming contexts in the forest. Either source or destination does not have the latest version of the Partitions container.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNotAuthoritiveForDstNc)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NOT_AUTHORITIVE_FOR_DST_NC)).c_str(), L"[0x2127] Destination of a cross-domain move is not authoritative for the destination naming context.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSrcGuidMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SRC_GUID_MISMATCH)).c_str(), L"[0x2128] Source and destination of a cross-domain move do not agree on the identity of the source object. Either source or destination does not have the latest version of the source object.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantMoveDeletedObject)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_MOVE_DELETED_OBJECT)).c_str(), L"[0x2129] Object being moved across-domains is already known to be deleted by the destination server. The source server does not have the latest version of the source object.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsPdcOperationInProgress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_PDC_OPERATION_IN_PROGRESS)).c_str(), L"[0x212a] Another operation which requires exclusive access to the PDC FSMO is already in progress.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCrossDomainCleanupReqd)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CROSS_DOMAIN_CLEANUP_REQD)).c_str(), L"[0x212b] A cross-domain move operation failed such that two versions of the moved object exist - one each in the source and destination domains. The destination object needs to be removed to restore the system to a consistent state.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsIllegalXdomMoveOperation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ILLEGAL_XDOM_MOVE_OPERATION)).c_str(), L"[0x212c] This object may not be moved across domain boundaries either because cross-domain moves for this class are disallowed, or the object has some special characteristics, e.g.: trust account or restricted RID, which prevent its move.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantWithAcctGroupMembershps)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_WITH_ACCT_GROUP_MEMBERSHPS)).c_str(), L"[0x212d] Can't move objects with memberships across domain boundaries as once moved, this would violate the membership conditions of the account group. Remove the object from any account group memberships and retry.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNcMustHaveNcParent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NC_MUST_HAVE_NC_PARENT)).c_str(), L"[0x212e] A naming context head must be the immediate child of another naming context head, not of an interior node.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCrImpossibleToValidate)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CR_IMPOSSIBLE_TO_VALIDATE)).c_str(), L"[0x212f] The directory cannot validate the proposed naming context name because it does not hold a replica of the naming context above the proposed naming context. Please ensure that the domain naming master role is held by a server that is configured as a global catalog server, and that the server is up to date with its replication partners. (Applies only to Windows 2000 Domain Naming masters)");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsDstDomainNotNative)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DST_DOMAIN_NOT_NATIVE)).c_str(), L"[0x2130] Destination domain must be in native mode.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsMissingInfrastructureContainer)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_MISSING_INFRASTRUCTURE_CONTAINER)).c_str(), L"[0x2131] The operation cannot be performed because the server does not have an infrastructure container in the domain of interest.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantMoveAccountGroup)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_MOVE_ACCOUNT_GROUP)).c_str(), L"[0x2132] Cross-domain move of non-empty account groups is not allowed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantMoveResourceGroup)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_MOVE_RESOURCE_GROUP)).c_str(), L"[0x2133] Cross-domain move of non-empty resource groups is not allowed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsInvalidSearchFlag)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INVALID_SEARCH_FLAG)).c_str(), L"[0x2134] The search flags for the attribute are invalid. The ANR bit is valid only on attributes of Unicode or Teletex strings.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNoTreeDeleteAboveNc)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_TREE_DELETE_ABOVE_NC)).c_str(), L"[0x2135] Tree deletions starting at an object which has an NC head as a descendant are not allowed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCouldntLockTreeForDelete)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_COULDNT_LOCK_TREE_FOR_DELETE)).c_str(), L"[0x2136] The directory service failed to lock a tree in preparation for a tree deletion because the tree was in use.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCouldntIdentifyObjectsForTreeDelete)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_COULDNT_IDENTIFY_OBJECTS_FOR_TREE_DELETE)).c_str(), L"[0x2137] The directory service failed to identify the list of objects to delete while attempting a tree deletion.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSamInitFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SAM_INIT_FAILURE)).c_str(), L"[0x2138] Security Accounts Manager initialization failed because of the following error: %1. Error Status: 0x%2. Please shutdown this system and reboot into Directory Services Restore Mode, check the event log for more detailed information.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSensitiveGroupViolation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SENSITIVE_GROUP_VIOLATION)).c_str(), L"[0x2139] Only an administrator can modify the membership list of an administrative group.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantModPrimarygroupid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_MOD_PRIMARYGROUPID)).c_str(), L"[0x213a] Cannot change the primary group ID of a domain controller account.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsIllegalBaseSchemaMod)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ILLEGAL_BASE_SCHEMA_MOD)).c_str(), L"[0x213b] An attempt is made to modify the base schema.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNonsafeSchemaChange)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NONSAFE_SCHEMA_CHANGE)).c_str(), L"[0x213c] Adding a new mandatory attribute to an existing class, deleting a mandatory attribute from an existing class, or adding an optional attribute to the special class Top that is not a backlink attribute (directly or through inheritance, for example, by adding or deleting an auxiliary class) is not allowed.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsSchemaUpdateDisallowed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SCHEMA_UPDATE_DISALLOWED)).c_str(), L"[0x213d] Schema update is not allowed on this DC because the DC is not the schema FSMO Role Owner.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsCantCreateUnderSchema)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_CREATE_UNDER_SCHEMA)).c_str(), L"[0x213e] An object of this class cannot be created under the schema container. You can only create attribute-schema and class-schema objects under the schema container.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsInstallNoSrcSchVersion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INSTALL_NO_SRC_SCH_VERSION)).c_str(), L"[0x213f] The replica/child install failed to get the objectVersion attribute on the schema container on the source DC. Either the attribute is missing on the schema container or the credentials supplied do not have permission to read it.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsInstallNoSchVersionInInifile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INSTALL_NO_SCH_VERSION_IN_INIFILE)).c_str(), L"[0x2140] The replica/child install failed to read the objectVersion attribute in the SCHEMA section of the file schema.ini in the system32 directory.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsInvalidGroupType)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INVALID_GROUP_TYPE)).c_str(), L"[0x2141] The specified group type is invalid.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNoNestGlobalgroupInMixeddomain)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_NEST_GLOBALGROUP_IN_MIXEDDOMAIN)).c_str(), L"[0x2142] You cannot nest global groups in a mixed domain if the group is security-enabled.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsNoNestLocalgroupInMixeddomain)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_NEST_LOCALGROUP_IN_MIXEDDOMAIN)).c_str(), L"[0x2143] You cannot nest local groups in a mixed domain if the group is security-enabled.");
}

TEST(Win32SystemErrorsTest2000, Win32ErrorDsGlobalCantHaveLocalMember)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_GLOBAL_CANT_HAVE_LOCAL_MEMBER)).c_str(), L"[0x2144] A global group cannot have a local group as a member.");
}
