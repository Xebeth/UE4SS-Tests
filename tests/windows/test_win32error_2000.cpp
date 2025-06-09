#include <format>
#include <windows.h>
#include <gtest/gtest.h>

#include <Helpers/String.hpp>
#include <Helpers/Win32Error.hpp>

using namespace RC;

TEST(SystemErrorsTest2000, SystemMessageErrorEncryptionFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_ENCRYPTION_FAILED)).c_str(), L"[0x1770] The specified file could not be encrypted. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDecryptionFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DECRYPTION_FAILED)).c_str(), L"[0x1771] The specified file could not be decrypted. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorFileEncrypted)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_FILE_ENCRYPTED)).c_str(), L"[0x1772] The specified file is encrypted and the user does not have the ability to decrypt it. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorNoRecoveryPolicy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NO_RECOVERY_POLICY)).c_str(), L"[0x1773] There is no valid encryption recovery policy configured for this system. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorNoEfs)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NO_EFS)).c_str(), L"[0x1774] The required encryption driver is not loaded for this system. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorWrongEfs)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WRONG_EFS)).c_str(), L"[0x1775] The file was encrypted with a different encryption driver than is currently loaded. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorNoUserKeys)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NO_USER_KEYS)).c_str(), L"[0x1776] There are no EFS keys defined for the user. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorFileNotEncrypted)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_FILE_NOT_ENCRYPTED)).c_str(), L"[0x1777] The specified file is not encrypted. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorNotExportFormat)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NOT_EXPORT_FORMAT)).c_str(), L"[0x1778] The specified file is not in the defined EFS export format. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorFileReadOnly)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_FILE_READ_ONLY)).c_str(), L"[0x1779] The specified file is read only. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDirEfsDisallowed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DIR_EFS_DISALLOWED)).c_str(), L"[0x177a] The directory has been disabled for encryption. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorEfsServerNotTrusted)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EFS_SERVER_NOT_TRUSTED)).c_str(), L"[0x177b] The server is not trusted for remote encryption operation. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorBadRecoveryPolicy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_BAD_RECOVERY_POLICY)).c_str(), L"[0x177c] Recovery policy configured for this system contains invalid recovery certificate. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorEfsAlgBlobTooBig)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EFS_ALG_BLOB_TOO_BIG)).c_str(), L"[0x177d] The encryption algorithm used on the source file needs a bigger key buffer than the one on the destination file. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorVolumeNotSupportEfs)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_VOLUME_NOT_SUPPORT_EFS)).c_str(), L"[0x177e] The disk partition does not support file encryption. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorEfsDisabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EFS_DISABLED)).c_str(), L"[0x177f] This machine is disabled for file encryption. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorEfsVersionNotSupport)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EFS_VERSION_NOT_SUPPORT)).c_str(), L"[0x1780] A newer system is required to decrypt this encrypted file. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCsEncryptionInvalidServerResponse)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CS_ENCRYPTION_INVALID_SERVER_RESPONSE)).c_str(), L"[0x1781] The remote server sent an invalid response for a file being opened with Client Side Encryption. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCsEncryptionUnsupportedServer)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CS_ENCRYPTION_UNSUPPORTED_SERVER)).c_str(), L"[0x1782] Client Side Encryption is not supported by the remote server even though it claims to support it. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCsEncryptionExistingEncryptedFile)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CS_ENCRYPTION_EXISTING_ENCRYPTED_FILE)).c_str(), L"[0x1783] File is encrypted and should be opened in Client Side Encryption mode. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCsEncryptionNewEncryptedFile)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CS_ENCRYPTION_NEW_ENCRYPTED_FILE)).c_str(), L"[0x1784] A new encrypted file is being created and a $EFS needs to be provided. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCsEncryptionFileNotCse)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CS_ENCRYPTION_FILE_NOT_CSE)).c_str(), L"[0x1785] The SMB client requested a CSE FSCTL on a non-CSE file. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorEncryptionPolicyDeniesOperation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_ENCRYPTION_POLICY_DENIES_OPERATION)).c_str(), L"[0x1786] The requested operation was blocked by policy. For more information, contact your system administrator. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorWipEncryptionFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WIP_ENCRYPTION_FAILED)).c_str(), L"[0x1787] The specified file could not be encrypted with Windows Information Protection. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorPdeEncryptionUnavailableFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PDE_ENCRYPTION_UNAVAILABLE_FAILURE)).c_str(), L"[0x1788] Personal Data Encryption keys to encrypt data are currently unavailable due to a failure. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorPdeDecryptionUnavailableFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PDE_DECRYPTION_UNAVAILABLE_FAILURE)).c_str(), L"[0x1789] Personal Data Encryption keys to decrypt data are currently unavailable due to a failure. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorPdeDecryptionUnavailable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PDE_DECRYPTION_UNAVAILABLE)).c_str(), L"[0x178a] Personal Data Encryption keys to decrypt data are currently unavailable as the user's session is locked. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorNoBrowserServersFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NO_BROWSER_SERVERS_FOUND)).c_str(), L"[0x17e6] The list of servers for this workgroup is not currently available ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorClusterObjectIsClusterSetVm)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_OBJECT_IS_CLUSTER_SET_VM)).c_str(), L"[0x186a]  The object cannot be deleted from the local cluster because it is registered with the cluster set. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCnuTemplateAlreadyExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CNU_TEMPLATE_ALREADY_EXISTS)).c_str(), L"[0x186b] A cluster native update template with that name already exists. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCnuTemplateNameNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CNU_TEMPLATE_NAME_NOT_FOUND)).c_str(), L"[0x186c] A cluster native update template with that name was not found. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCnuRunNameNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CNU_RUN_NAME_NOT_FOUND)).c_str(), L"[0x186d] A cluster native update run with the specified name was not found. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCnuRunAlreadyInProgress)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CNU_RUN_ALREADY_IN_PROGRESS)).c_str(), L"[0x186e] A cluster native update run is already in progress on the cluster. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCnuRunNotInProgress)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CNU_RUN_NOT_IN_PROGRESS)).c_str(), L"[0x186f] There is currently no ongoing cluster native update run on the cluster. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCnuNotReady)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CNU_NOT_READY)).c_str(), L"[0x1870] Cluster native update not ready - run Enable-ClusterNativeUpdate to load. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogSectorInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_SECTOR_INVALID)).c_str(), L"[0x19c8] Log service encountered an invalid log sector. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogSectorParityInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_SECTOR_PARITY_INVALID)).c_str(), L"[0x19c9] Log service encountered a log sector with invalid block parity. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogSectorRemapped)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_SECTOR_REMAPPED)).c_str(), L"[0x19ca] Log service encountered a remapped log sector. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogBlockIncomplete)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_BLOCK_INCOMPLETE)).c_str(), L"[0x19cb] Log service encountered a partial or incomplete log block. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogInvalidRange)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_INVALID_RANGE)).c_str(), L"[0x19cc] Log service encountered an attempt access data outside the active log range. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogBlocksExhausted)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_BLOCKS_EXHAUSTED)).c_str(), L"[0x19cd] Log service user marshalling buffers are exhausted. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogReadContextInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_READ_CONTEXT_INVALID)).c_str(), L"[0x19ce] Log service encountered an attempt read from a marshalling area with an invalid read context. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogRestartInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_RESTART_INVALID)).c_str(), L"[0x19cf] Log service encountered an invalid log restart area. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogBlockVersion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_BLOCK_VERSION)).c_str(), L"[0x19d0] Log service encountered an invalid log block version. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogBlockInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_BLOCK_INVALID)).c_str(), L"[0x19d1] Log service encountered an invalid log block. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogReadModeInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_READ_MODE_INVALID)).c_str(), L"[0x19d2] Log service encountered an attempt to read the log with an invalid read mode. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogNoRestart)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_NO_RESTART)).c_str(), L"[0x19d3] Log service encountered a log stream with no restart area. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogMetadataCorrupt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_METADATA_CORRUPT)).c_str(), L"[0x19d4] Log service encountered a corrupted metadata file. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogMetadataInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_METADATA_INVALID)).c_str(), L"[0x19d5] Log service encountered a metadata file that could not be created by the log file system. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogMetadataInconsistent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_METADATA_INCONSISTENT)).c_str(), L"[0x19d6] Log service encountered a metadata file with inconsistent data. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogReservationInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_RESERVATION_INVALID)).c_str(), L"[0x19d7] Log service encountered an attempt to erroneous allocate or dispose reservation space. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogCantDelete)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_CANT_DELETE)).c_str(), L"[0x19d8] Log service cannot delete log file or file system container. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogContainerLimitExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_CONTAINER_LIMIT_EXCEEDED)).c_str(), L"[0x19d9] Log service has reached the maximum allowable containers allocated to a log file. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogStartOfLog)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_START_OF_LOG)).c_str(), L"[0x19da] Log service has attempted to read or write backward past the start of the log. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogPolicyAlreadyInstalled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_POLICY_ALREADY_INSTALLED)).c_str(), L"[0x19db] Log policy could not be installed because a policy of the same type is already present. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogPolicyNotInstalled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_POLICY_NOT_INSTALLED)).c_str(), L"[0x19dc] Log policy in question was not installed at the time of the request. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogPolicyInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_POLICY_INVALID)).c_str(), L"[0x19dd] The installed set of policies on the log is invalid. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogPolicyConflict)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_POLICY_CONFLICT)).c_str(), L"[0x19de] A policy on the log in question prevented the operation from completing. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogPinnedArchiveTail)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_PINNED_ARCHIVE_TAIL)).c_str(), L"[0x19df] Log space cannot be reclaimed because the log is pinned by the archive tail. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogRecordNonexistent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_RECORD_NONEXISTENT)).c_str(), L"[0x19e0] Log record is not a record in the log file. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogRecordsReservedInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_RECORDS_RESERVED_INVALID)).c_str(), L"[0x19e1] Number of reserved log records or the adjustment of the number of reserved log records is invalid. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogSpaceReservedInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_SPACE_RESERVED_INVALID)).c_str(), L"[0x19e2] Reserved log space or the adjustment of the log space is invalid. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogTailInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_TAIL_INVALID)).c_str(), L"[0x19e3] An new or existing archive tail or base of the active log is invalid. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogFull)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_FULL)).c_str(), L"[0x19e4] Log space is exhausted. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCouldNotResizeLog)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_COULD_NOT_RESIZE_LOG)).c_str(), L"[0x19e5] The log could not be set to the requested size. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogMultiplexed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_MULTIPLEXED)).c_str(), L"[0x19e6] Log is multiplexed, no direct writes to the physical log is allowed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogDedicated)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_DEDICATED)).c_str(), L"[0x19e7] The operation failed because the log is a dedicated log. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogArchiveNotInProgress)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_ARCHIVE_NOT_IN_PROGRESS)).c_str(), L"[0x19e8] The operation requires an archive context. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogArchiveInProgress)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_ARCHIVE_IN_PROGRESS)).c_str(), L"[0x19e9] Log archival is in progress. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogEphemeral)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_EPHEMERAL)).c_str(), L"[0x19ea] The operation requires a non-ephemeral log, but the log is ephemeral. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogNotEnoughContainers)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_NOT_ENOUGH_CONTAINERS)).c_str(), L"[0x19eb] The log must have at least two containers before it can be read from or written to. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogClientAlreadyRegistered)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_CLIENT_ALREADY_REGISTERED)).c_str(), L"[0x19ec] A log client has already registered on the stream. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogClientNotRegistered)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_CLIENT_NOT_REGISTERED)).c_str(), L"[0x19ed] A log client has not been registered on the stream. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogFullHandlerInProgress)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_FULL_HANDLER_IN_PROGRESS)).c_str(), L"[0x19ee] A request has already been made to handle the log full condition. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogContainerReadFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_CONTAINER_READ_FAILED)).c_str(), L"[0x19ef] Log service encountered an error when attempting to read from a log container. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogContainerWriteFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_CONTAINER_WRITE_FAILED)).c_str(), L"[0x19f0] Log service encountered an error when attempting to write to a log container. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogContainerOpenFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_CONTAINER_OPEN_FAILED)).c_str(), L"[0x19f1] Log service encountered an error when attempting open a log container. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogContainerStateInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_CONTAINER_STATE_INVALID)).c_str(), L"[0x19f2] Log service encountered an invalid container state when attempting a requested action. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogStateInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_STATE_INVALID)).c_str(), L"[0x19f3] Log service is not in the correct state to perform a requested action. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogPinned)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_PINNED)).c_str(), L"[0x19f4] Log space cannot be reclaimed because the log is pinned. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogMetadataFlushFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_METADATA_FLUSH_FAILED)).c_str(), L"[0x19f5] Log metadata flush failed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogInconsistentSecurity)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_INCONSISTENT_SECURITY)).c_str(), L"[0x19f6] Security on the log and its containers is inconsistent. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogAppendedFlushFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_APPENDED_FLUSH_FAILED)).c_str(), L"[0x19f7] Records were appended to the log or reservation changes were made, but the log could not be flushed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogPinnedReservation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_PINNED_RESERVATION)).c_str(), L"[0x19f8] The log is pinned due to reservation consuming most of the log space. Free some reserved records to make space available. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorInvalidTransaction)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_TRANSACTION)).c_str(), L"[0x1a2c] The transaction handle associated with this operation is not valid. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionNotActive)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_NOT_ACTIVE)).c_str(), L"[0x1a2d] The requested operation was made in the context of a transaction that is no longer active. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionRequestNotValid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_REQUEST_NOT_VALID)).c_str(), L"[0x1a2e] The requested operation is not valid on the Transaction object in its current state. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionNotRequested)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_NOT_REQUESTED)).c_str(), L"[0x1a2f] The caller has called a response API, but the response is not expected because the TM did not issue the corresponding request to the caller. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionAlreadyAborted)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_ALREADY_ABORTED)).c_str(), L"[0x1a30] It is too late to perform the requested operation, since the Transaction has already been aborted. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionAlreadyCommitted)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_ALREADY_COMMITTED)).c_str(), L"[0x1a31] It is too late to perform the requested operation, since the Transaction has already been committed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTmInitializationFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TM_INITIALIZATION_FAILED)).c_str(), L"[0x1a32] The Transaction Manager was unable to be successfully initialized. Transacted operations are not supported. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorResourcemanagerReadOnly)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESOURCEMANAGER_READ_ONLY)).c_str(), L"[0x1a33] The specified ResourceManager made no changes or updates to the resource under this transaction. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionNotJoined)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_NOT_JOINED)).c_str(), L"[0x1a34] The resource manager has attempted to prepare a transaction that it has not successfully joined. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionSuperiorExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_SUPERIOR_EXISTS)).c_str(), L"[0x1a35] The Transaction object already has a superior enlistment, and the caller attempted an operation that would have created a new superior. Only a single superior enlistment is allow. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCrmProtocolAlreadyExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CRM_PROTOCOL_ALREADY_EXISTS)).c_str(), L"[0x1a36] The RM tried to register a protocol that already exists. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionPropagationFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_PROPAGATION_FAILED)).c_str(), L"[0x1a37] The attempt to propagate the Transaction failed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCrmProtocolNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CRM_PROTOCOL_NOT_FOUND)).c_str(), L"[0x1a38] The requested propagation protocol was not registered as a CRM. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionInvalidMarshallBuffer)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_INVALID_MARSHALL_BUFFER)).c_str(), L"[0x1a39] The buffer passed in to PushTransaction or PullTransaction is not in a valid format. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCurrentTransactionNotValid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CURRENT_TRANSACTION_NOT_VALID)).c_str(), L"[0x1a3a] The current transaction context associated with the thread is not a valid handle to a transaction object. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_NOT_FOUND)).c_str(), L"[0x1a3b] The specified Transaction object could not be opened, because it was not found. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorResourcemanagerNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESOURCEMANAGER_NOT_FOUND)).c_str(), L"[0x1a3c] The specified ResourceManager object could not be opened, because it was not found. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorEnlistmentNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_ENLISTMENT_NOT_FOUND)).c_str(), L"[0x1a3d] The specified Enlistment object could not be opened, because it was not found. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionmanagerNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTIONMANAGER_NOT_FOUND)).c_str(), L"[0x1a3e] The specified TransactionManager object could not be opened, because it was not found. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionmanagerNotOnline)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTIONMANAGER_NOT_ONLINE)).c_str(), L"[0x1a3f] The object specified could not be created or opened, because its associated TransactionManager is not online.  The TransactionManager must be brought fully Online by calling RecoverTransactionManager to recover to the end of its LogFile before objects in its Transaction or ResourceManager namespaces can be opened.  In addition, errors in writing records to its LogFile can cause a TransactionManager to go offline. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionmanagerRecoveryNameCollision)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTIONMANAGER_RECOVERY_NAME_COLLISION)).c_str(), L"[0x1a40] The specified TransactionManager was unable to create the objects contained in its logfile in the Ob namespace. Therefore, the TransactionManager was unable to recover. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionNotRoot)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_NOT_ROOT)).c_str(), L"[0x1a41] The call to create a superior Enlistment on this Transaction object could not be completed, because the Transaction object specified for the enlistment is a subordinate branch of the Transaction. Only the root of the Transaction can be enlisted on as a superior. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionObjectExpired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_OBJECT_EXPIRED)).c_str(), L"[0x1a42] Because the associated transaction manager or resource manager has been closed, the handle is no longer valid. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionResponseNotEnlisted)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_RESPONSE_NOT_ENLISTED)).c_str(), L"[0x1a43] The specified operation could not be performed on this Superior enlistment, because the enlistment was not created with the corresponding completion response in the NotificationMask. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionRecordTooLong)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_RECORD_TOO_LONG)).c_str(), L"[0x1a44] The specified operation could not be performed, because the record that would be logged was too long. This can occur because of two conditions: either there are too many Enlistments on this Transaction, or the combined RecoveryInformation being logged on behalf of those Enlistments is too long. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorImplicitTransactionNotSupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IMPLICIT_TRANSACTION_NOT_SUPPORTED)).c_str(), L"[0x1a45] Implicit transaction are not supported. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionIntegrityViolated)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_INTEGRITY_VIOLATED)).c_str(), L"[0x1a46] The kernel transaction manager had to abort or forget the transaction because it blocked forward progress. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionmanagerIdentityMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTIONMANAGER_IDENTITY_MISMATCH)).c_str(), L"[0x1a47] The TransactionManager identity that was supplied did not match the one recorded in the TransactionManager's log file. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorRmCannotBeFrozenForSnapshot)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RM_CANNOT_BE_FROZEN_FOR_SNAPSHOT)).c_str(), L"[0x1a48] This snapshot operation cannot continue because a transactional resource manager cannot be frozen in its current state.  Please try again. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionMustWritethrough)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_MUST_WRITETHROUGH)).c_str(), L"[0x1a49] The transaction cannot be enlisted on with the specified EnlistmentMask, because the transaction has already completed the PrePrepare phase.  In order to ensure correctness, the ResourceManager must switch to a write-through mode and cease caching data within this transaction.  Enlisting for only subsequent transaction phases may still succeed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionNoSuperior)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_NO_SUPERIOR)).c_str(), L"[0x1a4a] The transaction does not have a superior enlistment. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorHeuristicDamagePossible)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_HEURISTIC_DAMAGE_POSSIBLE)).c_str(), L"[0x1a4b] The attempt to commit the Transaction completed, but it is possible that some portion of the transaction tree did not commit successfully due to heuristics.  Therefore it is possible that some data modified in the transaction may not have committed, resulting in transactional inconsistency.  If possible, check the consistency of the associated data. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionalConflict)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTIONAL_CONFLICT)).c_str(), L"[0x1a90] The function attempted to use a name that is reserved for use by another transaction. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorRmNotActive)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RM_NOT_ACTIVE)).c_str(), L"[0x1a91] Transaction support within the specified resource manager is not started or was shut down due to an error. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorRmMetadataCorrupt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RM_METADATA_CORRUPT)).c_str(), L"[0x1a92] The metadata of the RM has been corrupted. The RM will not function. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDirectoryNotRm)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DIRECTORY_NOT_RM)).c_str(), L"[0x1a93] The specified directory does not contain a resource manager. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionsUnsupportedRemote)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTIONS_UNSUPPORTED_REMOTE)).c_str(), L"[0x1a95] The remote server or share does not support transacted file operations. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogResizeInvalidSize)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_RESIZE_INVALID_SIZE)).c_str(), L"[0x1a96] The requested log size is invalid. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorObjectNoLongerExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_OBJECT_NO_LONGER_EXISTS)).c_str(), L"[0x1a97] The object (file, stream, link) corresponding to the handle has been deleted by a Transaction Savepoint Rollback. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorStreamMiniversionNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STREAM_MINIVERSION_NOT_FOUND)).c_str(), L"[0x1a98] The specified file miniversion was not found for this transacted file open. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorStreamMiniversionNotValid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STREAM_MINIVERSION_NOT_VALID)).c_str(), L"[0x1a99] The specified file miniversion was found but has been invalidated. Most likely cause is a transaction savepoint rollback. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorMiniversionInaccessibleFromSpecifiedTransaction)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MINIVERSION_INACCESSIBLE_FROM_SPECIFIED_TRANSACTION)).c_str(), L"[0x1a9a] A miniversion may only be opened in the context of the transaction that created it. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCantOpenMiniversionWithModifyIntent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CANT_OPEN_MINIVERSION_WITH_MODIFY_INTENT)).c_str(), L"[0x1a9b] It is not possible to open a miniversion with modify access. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCantCreateMoreStreamMiniversions)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CANT_CREATE_MORE_STREAM_MINIVERSIONS)).c_str(), L"[0x1a9c] It is not possible to create any more miniversions for this stream. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorRemoteFileVersionMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_REMOTE_FILE_VERSION_MISMATCH)).c_str(), L"[0x1a9e] The remote server sent mismatching version number or Fid for a file opened with transactions. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorHandleNoLongerValid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_HANDLE_NO_LONGER_VALID)).c_str(), L"[0x1a9f] The handle has been invalidated by a transaction. The most likely cause is the presence of memory mapping on a file or an open handle when the transaction ended or rolled back to savepoint. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorNoTxfMetadata)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NO_TXF_METADATA)).c_str(), L"[0x1aa0] There is no transaction metadata on the file. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogCorruptionDetected)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_CORRUPTION_DETECTED)).c_str(), L"[0x1aa1] The log data is corrupt. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCantRecoverWithHandleOpen)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CANT_RECOVER_WITH_HANDLE_OPEN)).c_str(), L"[0x1aa2] The file can't be recovered because there is a handle still open on it. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorRmDisconnected)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RM_DISCONNECTED)).c_str(), L"[0x1aa3] The transaction outcome is unavailable because the resource manager responsible for it has disconnected. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorEnlistmentNotSuperior)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_ENLISTMENT_NOT_SUPERIOR)).c_str(), L"[0x1aa4] The request was rejected because the enlistment in question is not a superior enlistment. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorRecoveryNotNeeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RECOVERY_NOT_NEEDED)).c_str(), L"[0x1aa5] The transactional resource manager is already consistent. Recovery is not needed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorRmAlreadyStarted)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RM_ALREADY_STARTED)).c_str(), L"[0x1aa6] The transactional resource manager has already been started. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorFileIdentityNotPersistent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_FILE_IDENTITY_NOT_PERSISTENT)).c_str(), L"[0x1aa7] The file cannot be opened transactionally, because its identity depends on the outcome of an unresolved transaction. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCantBreakTransactionalDependency)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CANT_BREAK_TRANSACTIONAL_DEPENDENCY)).c_str(), L"[0x1aa8] The operation cannot be performed because another transaction is depending on the fact that this property will not change. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCantCrossRmBoundary)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CANT_CROSS_RM_BOUNDARY)).c_str(), L"[0x1aa9] The operation would involve a single file with two transactional resource managers and is therefore not allowed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTxfDirNotEmpty)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TXF_DIR_NOT_EMPTY)).c_str(), L"[0x1aaa] The $Txf directory must be empty for this operation to succeed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorIndoubtTransactionsExist)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INDOUBT_TRANSACTIONS_EXIST)).c_str(), L"[0x1aab] The operation would leave a transactional resource manager in an inconsistent state and is therefore not allowed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTmVolatile)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TM_VOLATILE)).c_str(), L"[0x1aac] The operation could not be completed because the transaction manager does not have a log. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorRollbackTimerExpired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_ROLLBACK_TIMER_EXPIRED)).c_str(), L"[0x1aad] A rollback could not be scheduled because a previously scheduled rollback has already executed or been queued for execution. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTxfAttributeCorrupt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TXF_ATTRIBUTE_CORRUPT)).c_str(), L"[0x1aae] The transactional metadata attribute on the file or directory is corrupt and unreadable. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorEfsNotAllowedInTransaction)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EFS_NOT_ALLOWED_IN_TRANSACTION)).c_str(), L"[0x1aaf] The encryption operation could not be completed because a transaction is active. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionalOpenNotAllowed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTIONAL_OPEN_NOT_ALLOWED)).c_str(), L"[0x1ab0] This object is not allowed to be opened in a transaction. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorLogGrowthFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOG_GROWTH_FAILED)).c_str(), L"[0x1ab1] An attempt to create space in the transactional resource manager's log failed. The failure status has been recorded in the event log. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactedMappingUnsupportedRemote)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTED_MAPPING_UNSUPPORTED_REMOTE)).c_str(), L"[0x1ab2] Memory mapping (creating a mapped section) a remote file under a transaction is not supported. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTxfMetadataAlreadyPresent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TXF_METADATA_ALREADY_PRESENT)).c_str(), L"[0x1ab3] Transaction metadata is already present on this file and cannot be superseded. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionScopeCallbacksNotSet)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_SCOPE_CALLBACKS_NOT_SET)).c_str(), L"[0x1ab4] A transaction scope could not be entered because the scope handler has not been initialized. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionRequiredPromotion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_REQUIRED_PROMOTION)).c_str(), L"[0x1ab5] Promotion was required in order to allow the resource manager to enlist, but the transaction was set to disallow it. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCannotExecuteFileInTransaction)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CANNOT_EXECUTE_FILE_IN_TRANSACTION)).c_str(), L"[0x1ab6] This file is open for modification in an unresolved transaction and may be opened for execute only by a transacted reader. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionsNotFrozen)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTIONS_NOT_FROZEN)).c_str(), L"[0x1ab7] The request to thaw frozen transactions was ignored because transactions had not previously been frozen. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionFreezeInProgress)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_FREEZE_IN_PROGRESS)).c_str(), L"[0x1ab8] Transactions cannot be frozen because a freeze is already in progress. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorNotSnapshotVolume)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NOT_SNAPSHOT_VOLUME)).c_str(), L"[0x1ab9] The target volume is not a snapshot volume. This operation is only valid on a volume mounted as a snapshot. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorNoSavepointWithOpenFiles)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NO_SAVEPOINT_WITH_OPEN_FILES)).c_str(), L"[0x1aba] The savepoint operation failed because files are open on the transaction. This is not permitted. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDataLostRepair)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DATA_LOST_REPAIR)).c_str(), L"[0x1abb] Windows has discovered corruption in a file, and that file has since been repaired. Data loss may have occurred. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorSparseNotAllowedInTransaction)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SPARSE_NOT_ALLOWED_IN_TRANSACTION)).c_str(), L"[0x1abc] The sparse operation could not be completed because a transaction is active on the file. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTmIdentityMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TM_IDENTITY_MISMATCH)).c_str(), L"[0x1abd] The call to create a TransactionManager object failed because the Tm Identity stored in the logfile does not match the Tm Identity that was passed in as an argument. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorFloatedSection)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_FLOATED_SECTION)).c_str(), L"[0x1abe] I/O was attempted on a section object that has been floated as a result of a transaction ending. There is no valid data. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCannotAcceptTransactedWork)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CANNOT_ACCEPT_TRANSACTED_WORK)).c_str(), L"[0x1abf] The transactional resource manager cannot currently accept transacted work due to a transient condition such as low resources. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCannotAbortTransactions)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CANNOT_ABORT_TRANSACTIONS)).c_str(), L"[0x1ac0] The transactional resource manager had too many transactions outstanding that could not be aborted. The transactional resource manger has been shut down. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorBadClusters)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_BAD_CLUSTERS)).c_str(), L"[0x1ac1] The operation could not be completed due to bad clusters on disk. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCompressionNotAllowedInTransaction)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_COMPRESSION_NOT_ALLOWED_IN_TRANSACTION)).c_str(), L"[0x1ac2] The compression operation could not be completed because a transaction is active on the file. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorVolumeDirty)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_VOLUME_DIRTY)).c_str(), L"[0x1ac3] The operation could not be completed because the volume is dirty. Please run chkdsk and try again. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorNoLinkTrackingInTransaction)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NO_LINK_TRACKING_IN_TRANSACTION)).c_str(), L"[0x1ac4] The link tracking operation could not be completed because a transaction is active. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorOperationNotSupportedInTransaction)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_OPERATION_NOT_SUPPORTED_IN_TRANSACTION)).c_str(), L"[0x1ac5] This operation cannot be performed in a transaction. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorExpiredHandle)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EXPIRED_HANDLE)).c_str(), L"[0x1ac6] The handle is no longer properly associated with its transaction.  It may have been opened in a transactional resource manager that was subsequently forced to restart.  Please close the handle and open a new one. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTransactionNotEnlisted)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSACTION_NOT_ENLISTED)).c_str(), L"[0x1ac7] The specified operation could not be performed because the resource manager is not enlisted in the transaction. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorEnlistmentNotInitialized)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_ENLISTMENT_NOT_INITIALIZED)).c_str(), L"[0x1ac8] The transaction is linked to an enlistment that is not fully initialized yet. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxWinstationNameInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_WINSTATION_NAME_INVALID)).c_str(), L"[0x1b59] The specified session name is invalid. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxInvalidPd)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_INVALID_PD)).c_str(), L"[0x1b5a] The specified protocol driver is invalid. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxPdNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_PD_NOT_FOUND)).c_str(), L"[0x1b5b] The specified protocol driver was not found in the system path. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxWdNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_WD_NOT_FOUND)).c_str(), L"[0x1b5c] The specified terminal connection driver was not found in the system path. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxCannotMakeEventlogEntry)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_CANNOT_MAKE_EVENTLOG_ENTRY)).c_str(), L"[0x1b5d] A registry key for event logging could not be created for this session. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxServiceNameCollision)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_SERVICE_NAME_COLLISION)).c_str(), L"[0x1b5e] A service with the same name already exists on the system. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxClosePending)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_CLOSE_PENDING)).c_str(), L"[0x1b5f] A close operation is pending on the session. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxNoOutbuf)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_NO_OUTBUF)).c_str(), L"[0x1b60] There are no free output buffers available. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxModemInfNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_MODEM_INF_NOT_FOUND)).c_str(), L"[0x1b61] The MODEM.INF file was not found. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxInvalidModemname)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_INVALID_MODEMNAME)).c_str(), L"[0x1b62] The modem name was not found in MODEM.INF. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxModemResponseError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_MODEM_RESPONSE_ERROR)).c_str(), L"[0x1b63] The modem did not accept the command sent to it. Verify that the configured modem name matches the attached modem. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxModemResponseTimeout)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_MODEM_RESPONSE_TIMEOUT)).c_str(), L"[0x1b64] The modem did not respond to the command sent to it. Verify that the modem is properly cabled and powered on. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxModemResponseNoCarrier)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_MODEM_RESPONSE_NO_CARRIER)).c_str(), L"[0x1b65] Carrier detect has failed or carrier has been dropped due to disconnect. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxModemResponseNoDialtone)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_MODEM_RESPONSE_NO_DIALTONE)).c_str(), L"[0x1b66] Dial tone not detected within the required time. Verify that the phone cable is properly attached and functional. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxModemResponseBusy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_MODEM_RESPONSE_BUSY)).c_str(), L"[0x1b67] Busy signal detected at remote site on callback. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxModemResponseVoice)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_MODEM_RESPONSE_VOICE)).c_str(), L"[0x1b68] Voice detected at remote site on callback. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxTdError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_TD_ERROR)).c_str(), L"[0x1b69] Transport driver error ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxWinstationNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_WINSTATION_NOT_FOUND)).c_str(), L"[0x1b6e] The specified session cannot be found. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxWinstationAlreadyExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_WINSTATION_ALREADY_EXISTS)).c_str(), L"[0x1b6f] The specified session name is already in use. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxWinstationBusy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_WINSTATION_BUSY)).c_str(), L"[0x1b70] The task you are trying to do can't be completed because Remote Desktop Services is currently busy. Please try again in a few minutes. Other users should still be able to log on. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxBadVideoMode)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_BAD_VIDEO_MODE)).c_str(), L"[0x1b71] An attempt has been made to connect to a session whose video mode is not supported by the current client. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxGraphicsInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_GRAPHICS_INVALID)).c_str(), L"[0x1b7b] The application attempted to enable DOS graphics mode. DOS graphics mode is not supported. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxLogonDisabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_LOGON_DISABLED)).c_str(), L"[0x1b7d] Your interactive logon privilege has been disabled. Please contact your administrator. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxNotConsole)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_NOT_CONSOLE)).c_str(), L"[0x1b7e] The requested operation can be performed only on the system console. This is most often the result of a driver or system DLL requiring direct console access. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxClientQueryTimeout)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_CLIENT_QUERY_TIMEOUT)).c_str(), L"[0x1b80] The client failed to respond to the server connect message. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxConsoleDisconnect)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_CONSOLE_DISCONNECT)).c_str(), L"[0x1b81] Disconnecting the console session is not supported. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxConsoleConnect)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_CONSOLE_CONNECT)).c_str(), L"[0x1b82] Reconnecting a disconnected session to the console is not supported. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxShadowDenied)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_SHADOW_DENIED)).c_str(), L"[0x1b84] The request to control another session remotely was denied. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxWinstationAccessDenied)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_WINSTATION_ACCESS_DENIED)).c_str(), L"[0x1b85] The requested session access is denied. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxInvalidWd)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_INVALID_WD)).c_str(), L"[0x1b89] The specified terminal connection driver is invalid. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxShadowInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_SHADOW_INVALID)).c_str(), L"[0x1b8a] The requested session cannot be controlled remotely. This may be because the session is disconnected or does not currently have a user logged on. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxShadowDisabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_SHADOW_DISABLED)).c_str(), L"[0x1b8b] The requested session is not configured to allow remote control. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxClientLicenseInUse)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_CLIENT_LICENSE_IN_USE)).c_str(), L"[0x1b8c] Your request to connect to this Terminal Server has been rejected. Your Terminal Server client license number is currently being used by another user. Please call your system administrator to obtain a unique license number. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxClientLicenseNotSet)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_CLIENT_LICENSE_NOT_SET)).c_str(), L"[0x1b8d] Your request to connect to this Terminal Server has been rejected. Your Terminal Server client license number has not been entered for this copy of the Terminal Server client. Please contact your system administrator. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxLicenseNotAvailable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_LICENSE_NOT_AVAILABLE)).c_str(), L"[0x1b8e] The number of connections to this computer is limited and all connections are in use right now. Try connecting later or contact your system administrator. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxLicenseClientInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_LICENSE_CLIENT_INVALID)).c_str(), L"[0x1b8f] The client you are using is not licensed to use this system. Your logon request is denied. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxLicenseExpired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_LICENSE_EXPIRED)).c_str(), L"[0x1b90] The system license has expired. Your logon request is denied. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxShadowNotRunning)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_SHADOW_NOT_RUNNING)).c_str(), L"[0x1b91] Remote control could not be terminated because the specified session is not currently being remotely controlled. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxShadowEndedByModeChange)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_SHADOW_ENDED_BY_MODE_CHANGE)).c_str(), L"[0x1b92] The remote control of the console was terminated because the display mode was changed. Changing the display mode in a remote control session is not supported. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorActivationCountExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_ACTIVATION_COUNT_EXCEEDED)).c_str(), L"[0x1b93] Activation has already been reset the maximum number of times for this installation. Your activation timer will not be cleared. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxWinstationsDisabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_WINSTATIONS_DISABLED)).c_str(), L"[0x1b94] Remote logins are currently disabled. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxEncryptionLevelRequired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_ENCRYPTION_LEVEL_REQUIRED)).c_str(), L"[0x1b95] You do not have the proper encryption level to access this Session. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxSessionInUse)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_SESSION_IN_USE)).c_str(), L"[0x1b96] The user %s\\\\%s is currently logged on to this computer. Only the current user or an administrator can log on to this computer. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxNoForceLogoff)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_NO_FORCE_LOGOFF)).c_str(), L"[0x1b97] The user %s\\\\%s is already logged on to the console of this computer. You do not have permission to log in at this time. To resolve this issue, contact %s\\\\%s and have them log off. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxAccountRestriction)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_ACCOUNT_RESTRICTION)).c_str(), L"[0x1b98] Unable to log you on because of an account restriction. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorRdpProtocolError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RDP_PROTOCOL_ERROR)).c_str(), L"[0x1b99] The RDP protocol component %2 detected an error in the protocol stream and has disconnected the client. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxCdmConnect)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_CDM_CONNECT)).c_str(), L"[0x1b9a] The Client Drive Mapping Service Has Connected on Terminal Connection. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxCdmDisconnect)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_CDM_DISCONNECT)).c_str(), L"[0x1b9b] The Client Drive Mapping Service Has Disconnected on Terminal Connection. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorCtxSecurityLayerError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CTX_SECURITY_LAYER_ERROR)).c_str(), L"[0x1b9c] The Terminal Server security layer detected an error in the protocol stream and has disconnected the client. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTsIncompatibleSessions)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TS_INCOMPATIBLE_SESSIONS)).c_str(), L"[0x1b9d] The target session is incompatible with the current session. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorTsVideoSubsystemError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TS_VIDEO_SUBSYSTEM_ERROR)).c_str(), L"[0x1b9e] Windows can't connect to your session because a problem occurred in the Windows video subsystem. Try connecting again later, or contact the server administrator for assistance. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNotInstalled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NOT_INSTALLED)).c_str(), L"[0x2008] An error occurred while installing the directory service. For more information, see the event log. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsMembershipEvaluatedLocally)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_MEMBERSHIP_EVALUATED_LOCALLY)).c_str(), L"[0x2009] The directory service evaluated group memberships locally. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNoAttributeOrValue)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_ATTRIBUTE_OR_VALUE)).c_str(), L"[0x200a] The specified directory service attribute or value does not exist. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsInvalidAttributeSyntax)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INVALID_ATTRIBUTE_SYNTAX)).c_str(), L"[0x200b] The attribute syntax specified to the directory service is invalid. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAttributeTypeUndefined)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ATTRIBUTE_TYPE_UNDEFINED)).c_str(), L"[0x200c] The attribute type specified to the directory service is not defined. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAttributeOrValueExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ATTRIBUTE_OR_VALUE_EXISTS)).c_str(), L"[0x200d] The specified directory service attribute or value already exists. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsBusy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_BUSY)).c_str(), L"[0x200e] The directory service is busy. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsUnavailable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_UNAVAILABLE)).c_str(), L"[0x200f] The directory service is unavailable. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNoRidsAllocated)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_RIDS_ALLOCATED)).c_str(), L"[0x2010] The directory service was unable to allocate a relative identifier. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNoMoreRids)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_MORE_RIDS)).c_str(), L"[0x2011] The directory service has exhausted the pool of relative identifiers. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsIncorrectRoleOwner)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INCORRECT_ROLE_OWNER)).c_str(), L"[0x2012] The requested operation could not be performed because the directory service is not the master for that type of operation. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsRidmgrInitError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_RIDMGR_INIT_ERROR)).c_str(), L"[0x2013] The directory service was unable to initialize the subsystem that allocates relative identifiers. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsObjClassViolation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_OBJ_CLASS_VIOLATION)).c_str(), L"[0x2014] The requested operation did not satisfy one or more constraints associated with the class of the object. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantOnNonLeaf)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_ON_NON_LEAF)).c_str(), L"[0x2015] The directory service can perform the requested operation only on a leaf object. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantOnRdn)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_ON_RDN)).c_str(), L"[0x2016] The directory service cannot perform the requested operation on the RDN attribute of an object. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantModObjClass)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_MOD_OBJ_CLASS)).c_str(), L"[0x2017] The directory service detected an attempt to modify the object class of an object. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCrossDomMoveError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CROSS_DOM_MOVE_ERROR)).c_str(), L"[0x2018] The requested cross-domain move operation could not be performed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsGcNotAvailable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_GC_NOT_AVAILABLE)).c_str(), L"[0x2019] Unable to contact the global catalog server. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorSharedPolicy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SHARED_POLICY)).c_str(), L"[0x201a] The policy object is shared and can only be modified at the root. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorPolicyObjectNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_POLICY_OBJECT_NOT_FOUND)).c_str(), L"[0x201b] The policy object does not exist. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorPolicyOnlyInDs)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_POLICY_ONLY_IN_DS)).c_str(), L"[0x201c] The requested policy information is only in the directory service. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorPromotionActive)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PROMOTION_ACTIVE)).c_str(), L"[0x201d] A domain controller promotion is currently active. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorNoPromotionActive)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NO_PROMOTION_ACTIVE)).c_str(), L"[0x201e] A domain controller promotion is not currently active ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsOperationsError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_OPERATIONS_ERROR)).c_str(), L"[0x2020] An operations error occurred. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsProtocolError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_PROTOCOL_ERROR)).c_str(), L"[0x2021] A protocol error occurred. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsTimelimitExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_TIMELIMIT_EXCEEDED)).c_str(), L"[0x2022] The time limit for this request was exceeded. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSizelimitExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SIZELIMIT_EXCEEDED)).c_str(), L"[0x2023] The size limit for this request was exceeded. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAdminLimitExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ADMIN_LIMIT_EXCEEDED)).c_str(), L"[0x2024] The administrative limit for this request was exceeded. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCompareFalse)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_COMPARE_FALSE)).c_str(), L"[0x2025] The compare response was false. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCompareTrue)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_COMPARE_TRUE)).c_str(), L"[0x2026] The compare response was true. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAuthMethodNotSupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_AUTH_METHOD_NOT_SUPPORTED)).c_str(), L"[0x2027] The requested authentication method is not supported by the server. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsStrongAuthRequired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_STRONG_AUTH_REQUIRED)).c_str(), L"[0x2028] A more secure authentication method is required for this server. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsInappropriateAuth)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INAPPROPRIATE_AUTH)).c_str(), L"[0x2029] Inappropriate authentication. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAuthUnknown)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_AUTH_UNKNOWN)).c_str(), L"[0x202a] The authentication mechanism is unknown. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsReferral)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_REFERRAL)).c_str(), L"[0x202b] A referral was returned from the server. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsUnavailableCritExtension)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_UNAVAILABLE_CRIT_EXTENSION)).c_str(), L"[0x202c] The server does not support the requested critical extension. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsConfidentialityRequired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CONFIDENTIALITY_REQUIRED)).c_str(), L"[0x202d] This request requires a secure connection. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsInappropriateMatching)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INAPPROPRIATE_MATCHING)).c_str(), L"[0x202e] Inappropriate matching. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsConstraintViolation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CONSTRAINT_VIOLATION)).c_str(), L"[0x202f] A constraint violation occurred. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNoSuchObject)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_SUCH_OBJECT)).c_str(), L"[0x2030] There is no such object on the server. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAliasProblem)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ALIAS_PROBLEM)).c_str(), L"[0x2031] There is an alias problem. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsInvalidDnSyntax)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INVALID_DN_SYNTAX)).c_str(), L"[0x2032] An invalid dn syntax has been specified. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsIsLeaf)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_IS_LEAF)).c_str(), L"[0x2033] The object is a leaf object. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAliasDerefProblem)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ALIAS_DEREF_PROBLEM)).c_str(), L"[0x2034] There is an alias dereferencing problem. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsUnwillingToPerform)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_UNWILLING_TO_PERFORM)).c_str(), L"[0x2035] The server is unwilling to process the request. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsLoopDetect)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_LOOP_DETECT)).c_str(), L"[0x2036] A loop has been detected. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNamingViolation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NAMING_VIOLATION)).c_str(), L"[0x2037] There is a naming violation. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsObjectResultsTooLarge)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_OBJECT_RESULTS_TOO_LARGE)).c_str(), L"[0x2038] The result set is too large. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAffectsMultipleDsas)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_AFFECTS_MULTIPLE_DSAS)).c_str(), L"[0x2039] The operation affects multiple DSAs ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsServerDown)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SERVER_DOWN)).c_str(), L"[0x203a] The server is not operational. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsLocalError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_LOCAL_ERROR)).c_str(), L"[0x203b] A local error has occurred. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsEncodingError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ENCODING_ERROR)).c_str(), L"[0x203c] An encoding error has occurred. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDecodingError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DECODING_ERROR)).c_str(), L"[0x203d] A decoding error has occurred. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsFilterUnknown)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_FILTER_UNKNOWN)).c_str(), L"[0x203e] The search filter cannot be recognized. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsParamError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_PARAM_ERROR)).c_str(), L"[0x203f] One or more parameters are illegal. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNotSupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NOT_SUPPORTED)).c_str(), L"[0x2040] The specified method is not supported. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNoResultsReturned)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_RESULTS_RETURNED)).c_str(), L"[0x2041] No results were returned. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsControlNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CONTROL_NOT_FOUND)).c_str(), L"[0x2042] The specified control is not supported by the server. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsClientLoop)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CLIENT_LOOP)).c_str(), L"[0x2043] A referral loop was detected by the client. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsReferralLimitExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_REFERRAL_LIMIT_EXCEEDED)).c_str(), L"[0x2044] The preset referral limit was exceeded. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSortControlMissing)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SORT_CONTROL_MISSING)).c_str(), L"[0x2045] The search requires a SORT control. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsOffsetRangeError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_OFFSET_RANGE_ERROR)).c_str(), L"[0x2046] The search results exceed the offset range specified. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsRidmgrDisabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_RIDMGR_DISABLED)).c_str(), L"[0x2047] The directory service detected the subsystem that allocates relative identifiers is disabled. This can occur as a protective mechanism when the system determines a significant portion of relative identifiers (RIDs) have been exhausted. Please see http://go.microsoft.com/fwlink/?LinkId=228610 for recommended diagnostic steps and the procedure to re-enable account creation. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsRootMustBeNc)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ROOT_MUST_BE_NC)).c_str(), L"[0x206d] The root object must be the head of a naming context. The root object cannot have an instantiated parent. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAddReplicaInhibited)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ADD_REPLICA_INHIBITED)).c_str(), L"[0x206e] The add replica operation cannot be performed. The naming context must be writeable in order to create the replica. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAttNotDefInSchema)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ATT_NOT_DEF_IN_SCHEMA)).c_str(), L"[0x206f] A reference to an attribute that is not defined in the schema occurred. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsMaxObjSizeExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_MAX_OBJ_SIZE_EXCEEDED)).c_str(), L"[0x2070] The maximum size of an object has been exceeded. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsObjStringNameExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_OBJ_STRING_NAME_EXISTS)).c_str(), L"[0x2071] An attempt was made to add an object to the directory with a name that is already in use. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNoRdnDefinedInSchema)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_RDN_DEFINED_IN_SCHEMA)).c_str(), L"[0x2072] An attempt was made to add an object of a class that does not have an RDN defined in the schema. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsRdnDoesntMatchSchema)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_RDN_DOESNT_MATCH_SCHEMA)).c_str(), L"[0x2073] An attempt was made to add an object using an RDN that is not the RDN defined in the schema. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNoRequestedAttsFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_REQUESTED_ATTS_FOUND)).c_str(), L"[0x2074] None of the requested attributes were found on the objects. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsUserBufferToSmall)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_USER_BUFFER_TO_SMALL)).c_str(), L"[0x2075] The user buffer is too small. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAttIsNotOnObj)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ATT_IS_NOT_ON_OBJ)).c_str(), L"[0x2076] The attribute specified in the operation is not present on the object. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsIllegalModOperation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ILLEGAL_MOD_OPERATION)).c_str(), L"[0x2077] Illegal modify operation. Some aspect of the modification is not permitted. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsObjTooLarge)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_OBJ_TOO_LARGE)).c_str(), L"[0x2078] The specified object is too large. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsBadInstanceType)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_BAD_INSTANCE_TYPE)).c_str(), L"[0x2079] The specified instance type is not valid. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsMasterdsaRequired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_MASTERDSA_REQUIRED)).c_str(), L"[0x207a] The operation must be performed at a master DSA. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsObjectClassRequired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_OBJECT_CLASS_REQUIRED)).c_str(), L"[0x207b] The object class attribute must be specified. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsMissingRequiredAtt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_MISSING_REQUIRED_ATT)).c_str(), L"[0x207c] A required attribute is missing. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAttNotDefForClass)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ATT_NOT_DEF_FOR_CLASS)).c_str(), L"[0x207d] An attempt was made to modify an object to include an attribute that is not legal for its class. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAttAlreadyExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ATT_ALREADY_EXISTS)).c_str(), L"[0x207e] The specified attribute is already present on the object. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantAddAttValues)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_ADD_ATT_VALUES)).c_str(), L"[0x2080] The specified attribute is not present, or has no values. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSingleValueConstraint)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SINGLE_VALUE_CONSTRAINT)).c_str(), L"[0x2081] Multiple values were specified for an attribute that can have only one value. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsRangeConstraint)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_RANGE_CONSTRAINT)).c_str(), L"[0x2082] A value for the attribute was not in the acceptable range of values. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAttValAlreadyExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ATT_VAL_ALREADY_EXISTS)).c_str(), L"[0x2083] The specified value already exists. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantRemMissingAtt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_REM_MISSING_ATT)).c_str(), L"[0x2084] The attribute cannot be removed because it is not present on the object. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantRemMissingAttVal)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_REM_MISSING_ATT_VAL)).c_str(), L"[0x2085] The attribute value cannot be removed because it is not present on the object. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsRootCantBeSubref)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ROOT_CANT_BE_SUBREF)).c_str(), L"[0x2086] The specified root object cannot be a subref. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNoChaining)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_CHAINING)).c_str(), L"[0x2087] Chaining is not permitted. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNoChainedEval)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_CHAINED_EVAL)).c_str(), L"[0x2088] Chained evaluation is not permitted. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNoParentObject)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_PARENT_OBJECT)).c_str(), L"[0x2089] The operation could not be performed because the object's parent is either uninstantiated or deleted. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsParentIsAnAlias)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_PARENT_IS_AN_ALIAS)).c_str(), L"[0x208a] Having a parent that is an alias is not permitted. Aliases are leaf objects. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantMixMasterAndReps)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_MIX_MASTER_AND_REPS)).c_str(), L"[0x208b] The object and parent must be of the same type, either both masters or both replicas. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsChildrenExist)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CHILDREN_EXIST)).c_str(), L"[0x208c] The operation cannot be performed because child objects exist. This operation can only be performed on a leaf object. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsObjNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_OBJ_NOT_FOUND)).c_str(), L"[0x208d] Directory object not found. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAliasedObjMissing)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ALIASED_OBJ_MISSING)).c_str(), L"[0x208e] The aliased object is missing. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsBadNameSyntax)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_BAD_NAME_SYNTAX)).c_str(), L"[0x208f] The object name has bad syntax. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAliasPointsToAlias)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ALIAS_POINTS_TO_ALIAS)).c_str(), L"[0x2090] It is not permitted for an alias to refer to another alias. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantDerefAlias)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_DEREF_ALIAS)).c_str(), L"[0x2091] The alias cannot be dereferenced. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsOutOfScope)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_OUT_OF_SCOPE)).c_str(), L"[0x2092] The operation is out of scope. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsObjectBeingRemoved)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_OBJECT_BEING_REMOVED)).c_str(), L"[0x2093] The operation cannot continue because the object is in the process of being removed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantDeleteDsaObj)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_DELETE_DSA_OBJ)).c_str(), L"[0x2094] The DSA object cannot be deleted. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsGenericError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_GENERIC_ERROR)).c_str(), L"[0x2095] A directory service error has occurred. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDsaMustBeIntMaster)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DSA_MUST_BE_INT_MASTER)).c_str(), L"[0x2096] The operation can only be performed on an internal master DSA object. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsClassNotDsa)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CLASS_NOT_DSA)).c_str(), L"[0x2097] The object must be of class DSA. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsInsuffAccessRights)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INSUFF_ACCESS_RIGHTS)).c_str(), L"[0x2098] Insufficient access rights to perform the operation. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsIllegalSuperior)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ILLEGAL_SUPERIOR)).c_str(), L"[0x2099] The object cannot be added because the parent is not on the list of possible superiors. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAttributeOwnedBySam)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ATTRIBUTE_OWNED_BY_SAM)).c_str(), L"[0x209a] Access to the attribute is not permitted because the attribute is owned by the Security Accounts Manager (SAM). ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNameTooManyParts)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NAME_TOO_MANY_PARTS)).c_str(), L"[0x209b] The name has too many parts. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNameTooLong)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NAME_TOO_LONG)).c_str(), L"[0x209c] The name is too long. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNameValueTooLong)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NAME_VALUE_TOO_LONG)).c_str(), L"[0x209d] The name value is too long. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNameUnparseable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NAME_UNPARSEABLE)).c_str(), L"[0x209e] The directory service encountered an error parsing a name. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNameTypeUnknown)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NAME_TYPE_UNKNOWN)).c_str(), L"[0x209f] The directory service cannot get the attribute type for a name. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNotAnObject)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NOT_AN_OBJECT)).c_str(), L"[0x20a0] The name does not identify an object; the name identifies a phantom. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSecDescTooShort)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SEC_DESC_TOO_SHORT)).c_str(), L"[0x20a1] The security descriptor is too short. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSecDescInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SEC_DESC_INVALID)).c_str(), L"[0x20a2] The security descriptor is invalid. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNoDeletedName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_DELETED_NAME)).c_str(), L"[0x20a3] Failed to create name for deleted object. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSubrefMustHaveParent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SUBREF_MUST_HAVE_PARENT)).c_str(), L"[0x20a4] The parent of a new subref must exist. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNcnameMustBeNc)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NCNAME_MUST_BE_NC)).c_str(), L"[0x20a5] The object must be a naming context. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantAddSystemOnly)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_ADD_SYSTEM_ONLY)).c_str(), L"[0x20a6] It is not permitted to add an attribute which is owned by the system. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsClassMustBeConcrete)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CLASS_MUST_BE_CONCRETE)).c_str(), L"[0x20a7] The class of the object must be structural; you cannot instantiate an abstract class. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsInvalidDmd)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INVALID_DMD)).c_str(), L"[0x20a8] The schema object could not be found. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsObjGuidExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_OBJ_GUID_EXISTS)).c_str(), L"[0x20a9] A local object with this GUID (dead or alive) already exists. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNotOnBacklink)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NOT_ON_BACKLINK)).c_str(), L"[0x20aa] The operation cannot be performed on a back link. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNoCrossrefForNc)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_CROSSREF_FOR_NC)).c_str(), L"[0x20ab] The cross reference for the specified naming context could not be found. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsShuttingDown)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SHUTTING_DOWN)).c_str(), L"[0x20ac] The operation could not be performed because the directory service is shutting down. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsUnknownOperation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_UNKNOWN_OPERATION)).c_str(), L"[0x20ad] The directory service request is invalid. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsInvalidRoleOwner)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INVALID_ROLE_OWNER)).c_str(), L"[0x20ae] The role owner attribute could not be read. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCouldntContactFsmo)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_COULDNT_CONTACT_FSMO)).c_str(), L"[0x20af] The requested FSMO operation failed. The current FSMO holder could not be contacted. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCrossNcDnRename)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CROSS_NC_DN_RENAME)).c_str(), L"[0x20b0] Modification of a DN across a naming context is not permitted. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantModSystemOnly)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_MOD_SYSTEM_ONLY)).c_str(), L"[0x20b1] The attribute cannot be modified because it is owned by the system. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsReplicatorOnly)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_REPLICATOR_ONLY)).c_str(), L"[0x20b2] Only the replicator can perform this function. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsObjClassNotDefined)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_OBJ_CLASS_NOT_DEFINED)).c_str(), L"[0x20b3] The specified class is not defined. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsObjClassNotSubclass)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_OBJ_CLASS_NOT_SUBCLASS)).c_str(), L"[0x20b4] The specified class is not a subclass. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNameReferenceInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NAME_REFERENCE_INVALID)).c_str(), L"[0x20b5] The name reference is invalid. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCrossRefExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CROSS_REF_EXISTS)).c_str(), L"[0x20b6] A cross reference already exists. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantDelMasterCrossref)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_DEL_MASTER_CROSSREF)).c_str(), L"[0x20b7] It is not permitted to delete a master cross reference. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSubtreeNotifyNotNcHead)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SUBTREE_NOTIFY_NOT_NC_HEAD)).c_str(), L"[0x20b8] Subtree notifications are only supported on NC heads. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNotifyFilterTooComplex)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NOTIFY_FILTER_TOO_COMPLEX)).c_str(), L"[0x20b9] Notification filter is too complex. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDupRdn)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DUP_RDN)).c_str(), L"[0x20ba] Schema update failed: duplicate RDN. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDupOid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DUP_OID)).c_str(), L"[0x20bb] Schema update failed: duplicate OID. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDupMapiId)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DUP_MAPI_ID)).c_str(), L"[0x20bc] Schema update failed: duplicate MAPI identifier. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDupSchemaIdGuid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DUP_SCHEMA_ID_GUID)).c_str(), L"[0x20bd] Schema update failed: duplicate schema-id GUID. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDupLdapDisplayName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DUP_LDAP_DISPLAY_NAME)).c_str(), L"[0x20be] Schema update failed: duplicate LDAP display name. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSemanticAttTest)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SEMANTIC_ATT_TEST)).c_str(), L"[0x20bf] Schema update failed: range-lower less than range upper. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSyntaxMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SYNTAX_MISMATCH)).c_str(), L"[0x20c0] Schema update failed: syntax mismatch. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsExistsInMustHave)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_EXISTS_IN_MUST_HAVE)).c_str(), L"[0x20c1] Schema deletion failed: attribute is used in must-contain. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsExistsInMayHave)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_EXISTS_IN_MAY_HAVE)).c_str(), L"[0x20c2] Schema deletion failed: attribute is used in may-contain. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNonexistentMayHave)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NONEXISTENT_MAY_HAVE)).c_str(), L"[0x20c3] Schema update failed: attribute in may-contain does not exist. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNonexistentMustHave)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NONEXISTENT_MUST_HAVE)).c_str(), L"[0x20c4] Schema update failed: attribute in must-contain does not exist. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAuxClsTestFail)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_AUX_CLS_TEST_FAIL)).c_str(), L"[0x20c5] Schema update failed: class in aux-class list does not exist or is not an auxiliary class. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNonexistentPossSup)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NONEXISTENT_POSS_SUP)).c_str(), L"[0x20c6] Schema update failed: class in poss-superiors does not exist. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSubClsTestFail)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SUB_CLS_TEST_FAIL)).c_str(), L"[0x20c7] Schema update failed: class in subclassof list does not exist or does not satisfy hierarchy rules. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsBadRdnAttIdSyntax)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_BAD_RDN_ATT_ID_SYNTAX)).c_str(), L"[0x20c8] Schema update failed: Rdn-Att-Id has wrong syntax. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsExistsInAuxCls)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_EXISTS_IN_AUX_CLS)).c_str(), L"[0x20c9] Schema deletion failed: class is used as auxiliary class. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsExistsInSubCls)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_EXISTS_IN_SUB_CLS)).c_str(), L"[0x20ca] Schema deletion failed: class is used as sub class. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsExistsInPossSup)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_EXISTS_IN_POSS_SUP)).c_str(), L"[0x20cb] Schema deletion failed: class is used as poss superior. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsRecalcschemaFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_RECALCSCHEMA_FAILED)).c_str(), L"[0x20cc] Schema update failed in recalculating validation cache. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsTreeDeleteNotFinished)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_TREE_DELETE_NOT_FINISHED)).c_str(), L"[0x20cd] The tree deletion is not finished. The request must be made again to continue deleting the tree. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantDelete)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_DELETE)).c_str(), L"[0x20ce] The requested delete operation could not be performed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAttSchemaReqId)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ATT_SCHEMA_REQ_ID)).c_str(), L"[0x20cf] Cannot read the governs class identifier for the schema record. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsBadAttSchemaSyntax)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_BAD_ATT_SCHEMA_SYNTAX)).c_str(), L"[0x20d0] The attribute schema has bad syntax. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantCacheAtt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_CACHE_ATT)).c_str(), L"[0x20d1] The attribute could not be cached. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantCacheClass)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_CACHE_CLASS)).c_str(), L"[0x20d2] The class could not be cached. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantRemoveAttCache)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_REMOVE_ATT_CACHE)).c_str(), L"[0x20d3] The attribute could not be removed from the cache. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantRemoveClassCache)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_REMOVE_CLASS_CACHE)).c_str(), L"[0x20d4] The class could not be removed from the cache. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantRetrieveDn)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_RETRIEVE_DN)).c_str(), L"[0x20d5] The distinguished name attribute could not be read. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsMissingSupref)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_MISSING_SUPREF)).c_str(), L"[0x20d6] No superior reference has been configured for the directory service. The directory service is therefore unable to issue referrals to objects outside this forest. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantRetrieveInstance)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_RETRIEVE_INSTANCE)).c_str(), L"[0x20d7] The instance type attribute could not be retrieved. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCodeInconsistency)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CODE_INCONSISTENCY)).c_str(), L"[0x20d8] An internal error has occurred. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDatabaseError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DATABASE_ERROR)).c_str(), L"[0x20d9] A database error has occurred. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsGovernsidMissing)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_GOVERNSID_MISSING)).c_str(), L"[0x20da] The attribute GOVERNSID is missing. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsMissingExpectedAtt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_MISSING_EXPECTED_ATT)).c_str(), L"[0x20db] An expected attribute is missing. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNcnameMissingCrRef)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NCNAME_MISSING_CR_REF)).c_str(), L"[0x20dc] The specified naming context is missing a cross reference. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSecurityCheckingError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SECURITY_CHECKING_ERROR)).c_str(), L"[0x20dd] A security checking error has occurred. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSchemaNotLoaded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SCHEMA_NOT_LOADED)).c_str(), L"[0x20de] The schema is not loaded. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSchemaAllocFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SCHEMA_ALLOC_FAILED)).c_str(), L"[0x20df] Schema allocation failed. Please check if the machine is running low on memory. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsAttSchemaReqSyntax)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ATT_SCHEMA_REQ_SYNTAX)).c_str(), L"[0x20e0] Failed to obtain the required syntax for the attribute schema. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsGcverifyError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_GCVERIFY_ERROR)).c_str(), L"[0x20e1] The global catalog verification failed. The global catalog is not available or does not support the operation. Some part of the directory is currently not available. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraSchemaMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_SCHEMA_MISMATCH)).c_str(), L"[0x20e2] The replication operation failed because of a schema mismatch between the servers involved. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantFindDsaObj)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_FIND_DSA_OBJ)).c_str(), L"[0x20e3] The DSA object could not be found. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantFindExpectedNc)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_FIND_EXPECTED_NC)).c_str(), L"[0x20e4] The naming context could not be found. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantFindNcInCache)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_FIND_NC_IN_CACHE)).c_str(), L"[0x20e5] The naming context could not be found in the cache. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantRetrieveChild)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_RETRIEVE_CHILD)).c_str(), L"[0x20e6] The child object could not be retrieved. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSecurityIllegalModify)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SECURITY_ILLEGAL_MODIFY)).c_str(), L"[0x20e7] The modification was not permitted for security reasons. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantReplaceHiddenRec)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_REPLACE_HIDDEN_REC)).c_str(), L"[0x20e8] The operation cannot replace the hidden record. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsBadHierarchyFile)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_BAD_HIERARCHY_FILE)).c_str(), L"[0x20e9] The hierarchy file is invalid. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsBuildHierarchyTableFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_BUILD_HIERARCHY_TABLE_FAILED)).c_str(), L"[0x20ea] The attempt to build the hierarchy table failed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsConfigParamMissing)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CONFIG_PARAM_MISSING)).c_str(), L"[0x20eb] The directory configuration parameter is missing from the registry. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCountingAbIndicesFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_COUNTING_AB_INDICES_FAILED)).c_str(), L"[0x20ec] The attempt to count the address book indices failed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsHierarchyTableMallocFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_HIERARCHY_TABLE_MALLOC_FAILED)).c_str(), L"[0x20ed] The allocation of the hierarchy table failed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsInternalFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INTERNAL_FAILURE)).c_str(), L"[0x20ee] The directory service encountered an internal failure. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsUnknownError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_UNKNOWN_ERROR)).c_str(), L"[0x20ef] The directory service encountered an unknown failure. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsRootRequiresClassTop)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ROOT_REQUIRES_CLASS_TOP)).c_str(), L"[0x20f0] A root object requires a class of 'top'. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsRefusingFsmoRoles)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_REFUSING_FSMO_ROLES)).c_str(), L"[0x20f1] This directory server is shutting down, and cannot take ownership of new floating single-master operation roles. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsMissingFsmoSettings)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_MISSING_FSMO_SETTINGS)).c_str(), L"[0x20f2] The directory service is missing mandatory configuration information, and is unable to determine the ownership of floating single-master operation roles. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsUnableToSurrenderRoles)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_UNABLE_TO_SURRENDER_ROLES)).c_str(), L"[0x20f3] The directory service was unable to transfer ownership of one or more floating single-master operation roles to other servers. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraGeneric)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_GENERIC)).c_str(), L"[0x20f4] The replication operation failed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraInvalidParameter)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_INVALID_PARAMETER)).c_str(), L"[0x20f5] An invalid parameter was specified for this replication operation. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraBusy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_BUSY)).c_str(), L"[0x20f6] The directory service is too busy to complete the replication operation at this time. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraBadDn)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_BAD_DN)).c_str(), L"[0x20f7] The distinguished name specified for this replication operation is invalid. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraBadNc)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_BAD_NC)).c_str(), L"[0x20f8] The naming context specified for this replication operation is invalid. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraDnExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_DN_EXISTS)).c_str(), L"[0x20f9] The distinguished name specified for this replication operation already exists. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraInternalError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_INTERNAL_ERROR)).c_str(), L"[0x20fa] The replication system encountered an internal error. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraInconsistentDit)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_INCONSISTENT_DIT)).c_str(), L"[0x20fb] The replication operation encountered a database inconsistency. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraConnectionFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_CONNECTION_FAILED)).c_str(), L"[0x20fc] The server specified for this replication operation could not be contacted. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraBadInstanceType)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_BAD_INSTANCE_TYPE)).c_str(), L"[0x20fd] The replication operation encountered an object with an invalid instance type. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraOutOfMem)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_OUT_OF_MEM)).c_str(), L"[0x20fe] The replication operation failed to allocate memory. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraMailProblem)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_MAIL_PROBLEM)).c_str(), L"[0x20ff] The replication operation encountered an error with the mail system. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraRefAlreadyExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_REF_ALREADY_EXISTS)).c_str(), L"[0x2100] The replication reference information for the target server already exists. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraRefNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_REF_NOT_FOUND)).c_str(), L"[0x2101] The replication reference information for the target server does not exist. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraObjIsRepSource)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_OBJ_IS_REP_SOURCE)).c_str(), L"[0x2102] The naming context cannot be removed because it is replicated to another server. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraDbError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_DB_ERROR)).c_str(), L"[0x2103] The replication operation encountered a database error. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraNoReplica)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_NO_REPLICA)).c_str(), L"[0x2104] The naming context is in the process of being removed or is not replicated from the specified server. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraAccessDenied)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_ACCESS_DENIED)).c_str(), L"[0x2105] Replication access was denied. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraNotSupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_NOT_SUPPORTED)).c_str(), L"[0x2106] The requested operation is not supported by this version of the directory service. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraRpcCancelled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_RPC_CANCELLED)).c_str(), L"[0x2107] The replication remote procedure call was cancelled. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraSourceDisabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_SOURCE_DISABLED)).c_str(), L"[0x2108] The source server is currently rejecting replication requests. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraSinkDisabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_SINK_DISABLED)).c_str(), L"[0x2109] The destination server is currently rejecting replication requests. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraNameCollision)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_NAME_COLLISION)).c_str(), L"[0x210a] The replication operation failed due to a collision of object names. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraSourceReinstalled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_SOURCE_REINSTALLED)).c_str(), L"[0x210b] The replication source has been reinstalled. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraMissingParent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_MISSING_PARENT)).c_str(), L"[0x210c] The replication operation failed because a required parent object is missing. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraPreempted)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_PREEMPTED)).c_str(), L"[0x210d] The replication operation was preempted. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraAbandonSync)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_ABANDON_SYNC)).c_str(), L"[0x210e] The replication synchronization attempt was abandoned because of a lack of updates. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraShutdown)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_SHUTDOWN)).c_str(), L"[0x210f] The replication operation was terminated because the system is shutting down. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraIncompatiblePartialSet)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_INCOMPATIBLE_PARTIAL_SET)).c_str(), L"[0x2110] Synchronization attempt failed because the destination DC is currently waiting to synchronize new partial attributes from source. This condition is normal if a recent schema change modified the partial attribute set. The destination partial attribute set is not a subset of source partial attribute set. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraSourceIsPartialReplica)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_SOURCE_IS_PARTIAL_REPLICA)).c_str(), L"[0x2111] The replication synchronization attempt failed because a master replica attempted to sync from a partial replica. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraExtnConnectionFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_EXTN_CONNECTION_FAILED)).c_str(), L"[0x2112] The server specified for this replication operation was contacted, but that server was unable to contact an additional server needed to complete the operation. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsInstallSchemaMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INSTALL_SCHEMA_MISMATCH)).c_str(), L"[0x2113] The version of the directory service schema of the source forest is not compatible with the version of directory service on this computer. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDupLinkId)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DUP_LINK_ID)).c_str(), L"[0x2114] Schema update failed: An attribute with the same link identifier already exists. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNameErrorResolving)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NAME_ERROR_RESOLVING)).c_str(), L"[0x2115] Name translation: Generic processing error. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNameErrorNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NAME_ERROR_NOT_FOUND)).c_str(), L"[0x2116] Name translation: Could not find the name or insufficient right to see name. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNameErrorNotUnique)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NAME_ERROR_NOT_UNIQUE)).c_str(), L"[0x2117] Name translation: Input name mapped to more than one output name. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNameErrorNoMapping)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NAME_ERROR_NO_MAPPING)).c_str(), L"[0x2118] Name translation: Input name found, but not the associated output format. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNameErrorDomainOnly)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NAME_ERROR_DOMAIN_ONLY)).c_str(), L"[0x2119] Name translation: Unable to resolve completely, only the domain was found. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNameErrorNoSyntacticalMapping)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NAME_ERROR_NO_SYNTACTICAL_MAPPING)).c_str(), L"[0x211a] Name translation: Unable to perform purely syntactical mapping at the client without going out to the wire. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsConstructedAttMod)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CONSTRUCTED_ATT_MOD)).c_str(), L"[0x211b] Modification of a constructed attribute is not allowed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsWrongOmObjClass)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_WRONG_OM_OBJ_CLASS)).c_str(), L"[0x211c] The OM-Object-Class specified is incorrect for an attribute with the specified syntax. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDraReplPending)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_REPL_PENDING)).c_str(), L"[0x211d] The replication request has been posted; waiting for reply. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDsRequired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DS_REQUIRED)).c_str(), L"[0x211e] The requested operation requires a directory service, and none was available. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsInvalidLdapDisplayName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INVALID_LDAP_DISPLAY_NAME)).c_str(), L"[0x211f] The LDAP display name of the class or attribute contains non-ASCII characters. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNonBaseSearch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NON_BASE_SEARCH)).c_str(), L"[0x2120] The requested search operation is only supported for base searches. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantRetrieveAtts)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_RETRIEVE_ATTS)).c_str(), L"[0x2121] The search failed to retrieve attributes from the database. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsBacklinkWithoutLink)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_BACKLINK_WITHOUT_LINK)).c_str(), L"[0x2122] The schema update operation tried to add a backward link attribute that has no corresponding forward link. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsEpochMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_EPOCH_MISMATCH)).c_str(), L"[0x2123] Source and destination of a cross-domain move do not agree on the object's epoch number. Either source or destination does not have the latest version of the object. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSrcNameMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SRC_NAME_MISMATCH)).c_str(), L"[0x2124] Source and destination of a cross-domain move do not agree on the object's current name. Either source or destination does not have the latest version of the object. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSrcAndDstNcIdentical)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SRC_AND_DST_NC_IDENTICAL)).c_str(), L"[0x2125] Source and destination for the cross-domain move operation are identical. Caller should use local move operation instead of cross-domain move operation. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDstNcMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DST_NC_MISMATCH)).c_str(), L"[0x2126] Source and destination for a cross-domain move are not in agreement on the naming contexts in the forest. Either source or destination does not have the latest version of the Partitions container. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNotAuthoritiveForDstNc)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NOT_AUTHORITIVE_FOR_DST_NC)).c_str(), L"[0x2127] Destination of a cross-domain move is not authoritative for the destination naming context. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSrcGuidMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SRC_GUID_MISMATCH)).c_str(), L"[0x2128] Source and destination of a cross-domain move do not agree on the identity of the source object. Either source or destination does not have the latest version of the source object. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantMoveDeletedObject)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_MOVE_DELETED_OBJECT)).c_str(), L"[0x2129] Object being moved across-domains is already known to be deleted by the destination server. The source server does not have the latest version of the source object. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsPdcOperationInProgress)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_PDC_OPERATION_IN_PROGRESS)).c_str(), L"[0x212a] Another operation which requires exclusive access to the PDC FSMO is already in progress. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCrossDomainCleanupReqd)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CROSS_DOMAIN_CLEANUP_REQD)).c_str(), L"[0x212b] A cross-domain move operation failed such that two versions of the moved object exist - one each in the source and destination domains. The destination object needs to be removed to restore the system to a consistent state. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsIllegalXdomMoveOperation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ILLEGAL_XDOM_MOVE_OPERATION)).c_str(), L"[0x212c] This object may not be moved across domain boundaries either because cross-domain moves for this class are disallowed, or the object has some special characteristics, e.g.: trust account or restricted RID, which prevent its move. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantWithAcctGroupMembershps)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_WITH_ACCT_GROUP_MEMBERSHPS)).c_str(), L"[0x212d] Can't move objects with memberships across domain boundaries as once moved, this would violate the membership conditions of the account group. Remove the object from any account group memberships and retry. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNcMustHaveNcParent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NC_MUST_HAVE_NC_PARENT)).c_str(), L"[0x212e] A naming context head must be the immediate child of another naming context head, not of an interior node. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCrImpossibleToValidate)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CR_IMPOSSIBLE_TO_VALIDATE)).c_str(), L"[0x212f] The directory cannot validate the proposed naming context name because it does not hold a replica of the naming context above the proposed naming context. Please ensure that the domain naming master role is held by a server that is configured as a global catalog server, and that the server is up to date with its replication partners. (Applies only to Windows 2000 Domain Naming masters) ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsDstDomainNotNative)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DST_DOMAIN_NOT_NATIVE)).c_str(), L"[0x2130] Destination domain must be in native mode. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsMissingInfrastructureContainer)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_MISSING_INFRASTRUCTURE_CONTAINER)).c_str(), L"[0x2131] The operation cannot be performed because the server does not have an infrastructure container in the domain of interest. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantMoveAccountGroup)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_MOVE_ACCOUNT_GROUP)).c_str(), L"[0x2132] Cross-domain move of non-empty account groups is not allowed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantMoveResourceGroup)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_MOVE_RESOURCE_GROUP)).c_str(), L"[0x2133] Cross-domain move of non-empty resource groups is not allowed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsInvalidSearchFlag)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INVALID_SEARCH_FLAG)).c_str(), L"[0x2134] The search flags for the attribute are invalid. The ANR bit is valid only on attributes of Unicode or Teletex strings. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNoTreeDeleteAboveNc)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_TREE_DELETE_ABOVE_NC)).c_str(), L"[0x2135] Tree deletions starting at an object which has an NC head as a descendant are not allowed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCouldntLockTreeForDelete)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_COULDNT_LOCK_TREE_FOR_DELETE)).c_str(), L"[0x2136] The directory service failed to lock a tree in preparation for a tree deletion because the tree was in use. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCouldntIdentifyObjectsForTreeDelete)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_COULDNT_IDENTIFY_OBJECTS_FOR_TREE_DELETE)).c_str(), L"[0x2137] The directory service failed to identify the list of objects to delete while attempting a tree deletion. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSamInitFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SAM_INIT_FAILURE)).c_str(), L"[0x2138] Security Accounts Manager initialization failed because of the following error: %1. Error Status: 0x%2. Please shutdown this system and reboot into Directory Services Restore Mode, check the event log for more detailed information. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSensitiveGroupViolation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SENSITIVE_GROUP_VIOLATION)).c_str(), L"[0x2139] Only an administrator can modify the membership list of an administrative group. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantModPrimarygroupid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_MOD_PRIMARYGROUPID)).c_str(), L"[0x213a] Cannot change the primary group ID of a domain controller account. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsIllegalBaseSchemaMod)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ILLEGAL_BASE_SCHEMA_MOD)).c_str(), L"[0x213b] An attempt is made to modify the base schema. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNonsafeSchemaChange)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NONSAFE_SCHEMA_CHANGE)).c_str(), L"[0x213c] Adding a new mandatory attribute to an existing class, deleting a mandatory attribute from an existing class, or adding an optional attribute to the special class Top that is not a backlink attribute (directly or through inheritance, for example, by adding or deleting an auxiliary class) is not allowed. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsSchemaUpdateDisallowed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SCHEMA_UPDATE_DISALLOWED)).c_str(), L"[0x213d] Schema update is not allowed on this DC because the DC is not the schema FSMO Role Owner. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsCantCreateUnderSchema)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_CREATE_UNDER_SCHEMA)).c_str(), L"[0x213e] An object of this class cannot be created under the schema container. You can only create attribute-schema and class-schema objects under the schema container. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsInstallNoSrcSchVersion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INSTALL_NO_SRC_SCH_VERSION)).c_str(), L"[0x213f] The replica/child install failed to get the objectVersion attribute on the schema container on the source DC. Either the attribute is missing on the schema container or the credentials supplied do not have permission to read it. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsInstallNoSchVersionInInifile)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INSTALL_NO_SCH_VERSION_IN_INIFILE)).c_str(), L"[0x2140] The replica/child install failed to read the objectVersion attribute in the SCHEMA section of the file schema.ini in the system32 directory. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsInvalidGroupType)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INVALID_GROUP_TYPE)).c_str(), L"[0x2141] The specified group type is invalid. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNoNestGlobalgroupInMixeddomain)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_NEST_GLOBALGROUP_IN_MIXEDDOMAIN)).c_str(), L"[0x2142] You cannot nest global groups in a mixed domain if the group is security-enabled. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsNoNestLocalgroupInMixeddomain)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_NEST_LOCALGROUP_IN_MIXEDDOMAIN)).c_str(), L"[0x2143] You cannot nest local groups in a mixed domain if the group is security-enabled. ");
}

TEST(SystemErrorsTest2000, SystemMessageErrorDsGlobalCantHaveLocalMember)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_GLOBAL_CANT_HAVE_LOCAL_MEMBER)).c_str(), L"[0x2144] A global group cannot have a local group as a member. ");
}
