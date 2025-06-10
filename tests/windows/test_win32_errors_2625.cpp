#include <format>
#include <windows.h>
#include <gtest/gtest.h>

#include <Helpers/String.hpp>
#include <Helpers/SysError.hpp>

using namespace RC;

TEST(Win32SystemErrorsTest2625, Win32ErrorMrmMissingDefaultLanguage)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_MISSING_DEFAULT_LANGUAGE)).c_str(), L"[0x3b38] No default value for language was specified.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorMrmScopeItemConflict)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_SCOPE_ITEM_CONFLICT)).c_str(), L"[0x3b39] An entity was defined as both resource and scope, which is not allowed.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorMcaInvalidCapabilitiesString)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MCA_INVALID_CAPABILITIES_STRING)).c_str(), L"[0x3b60] The monitor returned a DDC/CI capabilities string that did not comply with the ACCESS.bus 3.0, DDC/CI 1.1 or MCCS 2 Revision 1 specification.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorMcaInvalidVcpVersion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MCA_INVALID_VCP_VERSION)).c_str(), L"[0x3b61] The monitor's VCP Version (0xDF) VCP code returned an invalid version value.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorMcaMonitorViolatesMccsSpecification)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MCA_MONITOR_VIOLATES_MCCS_SPECIFICATION)).c_str(), L"[0x3b62] The monitor does not comply with the MCCS specification it claims to support.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorMcaMccsVersionMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MCA_MCCS_VERSION_MISMATCH)).c_str(), L"[0x3b63] The MCCS version in a monitor's mccs_ver capability does not match the MCCS version the monitor reports when the VCP Version (0xDF) VCP code is used.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorMcaUnsupportedMccsVersion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MCA_UNSUPPORTED_MCCS_VERSION)).c_str(), L"[0x3b64] The Monitor Configuration API only works with monitors that support the MCCS 1.0 specification, MCCS 2.0 specification or the MCCS 2.0 Revision 1 specification.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorMcaInternalError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MCA_INTERNAL_ERROR)).c_str(), L"[0x3b65] An internal Monitor Configuration API error occurred.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorMcaInvalidTechnologyTypeReturned)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MCA_INVALID_TECHNOLOGY_TYPE_RETURNED)).c_str(), L"[0x3b66] The monitor returned an invalid monitor technology type. CRT, Plasma and LCD (TFT) are examples of monitor technology types. This error implies that the monitor violated the MCCS 2.0 or MCCS 2.0 Revision 1 specification.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorMcaUnsupportedColorTemperature)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MCA_UNSUPPORTED_COLOR_TEMPERATURE)).c_str(), L"[0x3b67] The caller of SetMonitorColorTemperature specified a color temperature that the current monitor did not support. This error implies that the monitor violated the MCCS 2.0 or MCCS 2.0 Revision 1 specification.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorAmbiguousSystemDevice)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_AMBIGUOUS_SYSTEM_DEVICE)).c_str(), L"[0x3b92] The requested system device cannot be identified due to multiple indistinguishable devices potentially matching the identification criteria.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorSystemDeviceNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SYSTEM_DEVICE_NOT_FOUND)).c_str(), L"[0x3bc3] The requested system device cannot be found.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorHashNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_HASH_NOT_SUPPORTED)).c_str(), L"[0x3bc4] Hash generation for the specified hash version and hash type is not enabled on the server.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorHashNotPresent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_HASH_NOT_PRESENT)).c_str(), L"[0x3bc5] The hash requested from the server is not available or no longer valid.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorSecondaryIcProviderNotRegistered)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SECONDARY_IC_PROVIDER_NOT_REGISTERED)).c_str(), L"[0x3bd9] The secondary interrupt controller instance that manages the specified interrupt is not registered.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorGpioClientInformationInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_GPIO_CLIENT_INFORMATION_INVALID)).c_str(), L"[0x3bda] The information supplied by the GPIO client driver is invalid.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorGpioVersionNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_GPIO_VERSION_NOT_SUPPORTED)).c_str(), L"[0x3bdb] The version specified by the GPIO client driver is not supported.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorGpioInvalidRegistrationPacket)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_GPIO_INVALID_REGISTRATION_PACKET)).c_str(), L"[0x3bdc] The registration packet supplied by the GPIO client driver is not valid.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorGpioOperationDenied)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_GPIO_OPERATION_DENIED)).c_str(), L"[0x3bdd] The requested operation is not supported for the specified handle.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorGpioIncompatibleConnectMode)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_GPIO_INCOMPATIBLE_CONNECT_MODE)).c_str(), L"[0x3bde] The requested connect mode conflicts with an existing mode on one or more of the specified pins.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorGpioInterruptAlreadyUnmasked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_GPIO_INTERRUPT_ALREADY_UNMASKED)).c_str(), L"[0x3bdf] The interrupt requested to be unmasked is not masked.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorCannotSwitchRunlevel)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CANNOT_SWITCH_RUNLEVEL)).c_str(), L"[0x3c28] The requested run level switch cannot be completed successfully.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInvalidRunlevelSetting)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_RUNLEVEL_SETTING)).c_str(), L"[0x3c29] The service has an invalid run level setting. The run level for a service must not be higher than the run level of its dependent services.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorRunlevelSwitchTimeout)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RUNLEVEL_SWITCH_TIMEOUT)).c_str(), L"[0x3c2a] The requested run level switch cannot be completed successfully since one or more services will not stop or restart within the specified timeout.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorRunlevelSwitchAgentTimeout)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RUNLEVEL_SWITCH_AGENT_TIMEOUT)).c_str(), L"[0x3c2b] A run level switch agent did not respond within the specified timeout.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorRunlevelSwitchInProgress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RUNLEVEL_SWITCH_IN_PROGRESS)).c_str(), L"[0x3c2c] A run level switch is currently in progress.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorServicesFailedAutostart)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICES_FAILED_AUTOSTART)).c_str(), L"[0x3c2d] One or more services failed to start during the service startup phase of a run level switch.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorComTaskStopPending)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_COM_TASK_STOP_PENDING)).c_str(), L"[0x3c8d] The task stop request cannot be completed immediately since task needs more time to shutdown.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallOpenPackageFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_OPEN_PACKAGE_FAILED)).c_str(), L"[0x3cf0] Package could not be opened.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallPackageNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_PACKAGE_NOT_FOUND)).c_str(), L"[0x3cf1] Package was not found.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallInvalidPackage)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_INVALID_PACKAGE)).c_str(), L"[0x3cf2] Package data is invalid.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallResolveDependencyFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_RESOLVE_DEPENDENCY_FAILED)).c_str(), L"[0x3cf3] Package failed updates, dependency or conflict validation.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallOutOfDiskSpace)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_OUT_OF_DISK_SPACE)).c_str(), L"[0x3cf4] There is not enough disk space on your computer. Please free up some space and try again.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallNetworkFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_NETWORK_FAILURE)).c_str(), L"[0x3cf5] There was a problem downloading your product.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallRegistrationFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_REGISTRATION_FAILURE)).c_str(), L"[0x3cf6] Package could not be registered.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallDeregistrationFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_DEREGISTRATION_FAILURE)).c_str(), L"[0x3cf7] Package could not be unregistered.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallCancel)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_CANCEL)).c_str(), L"[0x3cf8] User cancelled the install request.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_FAILED)).c_str(), L"[0x3cf9] Install failed. Please contact your software vendor.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorRemoveFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REMOVE_FAILED)).c_str(), L"[0x3cfa] Removal failed. Please contact your software vendor.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorPackageAlreadyExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PACKAGE_ALREADY_EXISTS)).c_str(), L"[0x3cfb] The provided package is already installed, and reinstallation of the package was blocked. Check the AppXDeployment-Server event log for details.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorNeedsRemediation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NEEDS_REMEDIATION)).c_str(), L"[0x3cfc] The application cannot be started. Try reinstalling the application to fix the problem.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallPrerequisiteFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_PREREQUISITE_FAILED)).c_str(), L"[0x3cfd] A Prerequisite for an install could not be satisfied.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorPackageRepositoryCorrupted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PACKAGE_REPOSITORY_CORRUPTED)).c_str(), L"[0x3cfe] The package repository is corrupted.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallPolicyFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_POLICY_FAILURE)).c_str(), L"[0x3cff] To install this application you need either a Windows developer license or a sideloading-enabled system.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorPackageUpdating)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PACKAGE_UPDATING)).c_str(), L"[0x3d00] The application cannot be started because it is currently updating.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorDeploymentBlockedByPolicy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEPLOYMENT_BLOCKED_BY_POLICY)).c_str(), L"[0x3d01] The package deployment operation is blocked by policy. Please contact your system administrator.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorPackagesInUse)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PACKAGES_IN_USE)).c_str(), L"[0x3d02] The package could not be installed because resources it modifies are currently in use.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorRecoveryFileCorrupt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RECOVERY_FILE_CORRUPT)).c_str(), L"[0x3d03] The package could not be recovered because necessary data for recovery have been corrupted.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInvalidStagedSignature)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_STAGED_SIGNATURE)).c_str(), L"[0x3d04] The signature is invalid. To register in developer mode, AppxSignature.p7x and AppxBlockMap.xml must be valid or should not be present.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorDeletingExistingApplicationdataStoreFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DELETING_EXISTING_APPLICATIONDATA_STORE_FAILED)).c_str(), L"[0x3d05] An error occurred while deleting the package's previously existing application data.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallPackageDowngrade)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_PACKAGE_DOWNGRADE)).c_str(), L"[0x3d06] The package could not be installed because a higher version of this package is already installed.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorSystemNeedsRemediation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SYSTEM_NEEDS_REMEDIATION)).c_str(), L"[0x3d07] An error in a system binary was detected. Try refreshing the PC to fix the problem.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorAppxIntegrityFailureClrNgen)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_APPX_INTEGRITY_FAILURE_CLR_NGEN)).c_str(), L"[0x3d08] A corrupted CLR NGEN binary was detected on the system.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorResiliencyFileCorrupt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RESILIENCY_FILE_CORRUPT)).c_str(), L"[0x3d09] The operation could not be resumed because necessary data for recovery have been corrupted.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallFirewallServiceNotRunning)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_FIREWALL_SERVICE_NOT_RUNNING)).c_str(), L"[0x3d0a] The package could not be installed because the Windows Firewall service is not running. Enable the Windows Firewall service and try again.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorPackageMoveFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PACKAGE_MOVE_FAILED)).c_str(), L"[0x3d0b] Package move failed.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallVolumeNotEmpty)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_VOLUME_NOT_EMPTY)).c_str(), L"[0x3d0c] The deployment operation failed because the volume is not empty.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallVolumeOffline)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_VOLUME_OFFLINE)).c_str(), L"[0x3d0d] The deployment operation failed because the volume is offline. For a package update, the volume refers to the installed volume of all package versions.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallVolumeCorrupt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_VOLUME_CORRUPT)).c_str(), L"[0x3d0e] The deployment operation failed because the specified volume is corrupt.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorNeedsRegistration)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NEEDS_REGISTRATION)).c_str(), L"[0x3d0f] The deployment operation failed because the specified application needs to be registered first.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallWrongProcessorArchitecture)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_WRONG_PROCESSOR_ARCHITECTURE)).c_str(), L"[0x3d10] The deployment operation failed because the package targets the wrong processor architecture.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorDevSideloadLimitExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEV_SIDELOAD_LIMIT_EXCEEDED)).c_str(), L"[0x3d11] You have reached the maximum number of developer sideloaded packages allowed on this device. Please uninstall a sideloaded package and try again.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallOptionalPackageRequiresMainPackage)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_OPTIONAL_PACKAGE_REQUIRES_MAIN_PACKAGE)).c_str(), L"[0x3d12] A main app package is required to install this optional package.  Install the main package first and try again.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorPackageNotSupportedOnFilesystem)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PACKAGE_NOT_SUPPORTED_ON_FILESYSTEM)).c_str(), L"[0x3d13] This app package type is not supported on this filesystem");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorPackageMoveBlockedByStreaming)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PACKAGE_MOVE_BLOCKED_BY_STREAMING)).c_str(), L"[0x3d14] Package move operation is blocked until the application has finished streaming");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallOptionalPackageApplicationidNotUnique)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_OPTIONAL_PACKAGE_APPLICATIONID_NOT_UNIQUE)).c_str(), L"[0x3d15] A main or another optional app package has the same application ID as this optional package.  Change the application ID for the optional package to avoid conflicts.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorPackageStagingOnhold)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PACKAGE_STAGING_ONHOLD)).c_str(), L"[0x3d16] This staging session has been held to allow another staging operation to be prioritized.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallInvalidRelatedSetUpdate)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_INVALID_RELATED_SET_UPDATE)).c_str(), L"[0x3d17] A related set cannot be updated because the updated set is invalid. All packages in the related set must be updated at the same time.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallOptionalPackageRequiresMainPackageFulltrustCapability)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_OPTIONAL_PACKAGE_REQUIRES_MAIN_PACKAGE_FULLTRUST_CAPABILITY)).c_str(), L"[0x3d18] An optional package with a FullTrust entry point requires the main package to have the runFullTrust capability.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorDeploymentBlockedByUserLogOff)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEPLOYMENT_BLOCKED_BY_USER_LOG_OFF)).c_str(), L"[0x3d19] An error occurred because a user was logged off.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorProvisionOptionalPackageRequiresMainPackageProvisioned)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PROVISION_OPTIONAL_PACKAGE_REQUIRES_MAIN_PACKAGE_PROVISIONED)).c_str(), L"[0x3d1a] An optional package provision requires the dependency main package to also be provisioned.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorPackagesReputationCheckFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PACKAGES_REPUTATION_CHECK_FAILED)).c_str(), L"[0x3d1b] The packages failed the SmartScreen reputation check.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorPackagesReputationCheckTimedout)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PACKAGES_REPUTATION_CHECK_TIMEDOUT)).c_str(), L"[0x3d1c] The SmartScreen reputation check operation timed out.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorDeploymentOptionNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEPLOYMENT_OPTION_NOT_SUPPORTED)).c_str(), L"[0x3d1d] The current deployment option is not supported.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorAppinstallerActivationBlocked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_APPINSTALLER_ACTIVATION_BLOCKED)).c_str(), L"[0x3d1e] Activation is blocked due to the .appinstaller update settings for this app.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorRegistrationFromRemoteDriveNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REGISTRATION_FROM_REMOTE_DRIVE_NOT_SUPPORTED)).c_str(), L"[0x3d1f] Remote drives are not supported; use \\\\server\\share to register a remote package.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorAppxRawDataWriteFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_APPX_RAW_DATA_WRITE_FAILED)).c_str(), L"[0x3d20] Failed to process and write downloaded APPX package data to disk.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorDeploymentBlockedByVolumePolicyPackage)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEPLOYMENT_BLOCKED_BY_VOLUME_POLICY_PACKAGE)).c_str(), L"[0x3d21] The deployment operation was blocked due to a per-package-family policy restricting deployments on a non-system volume. Per policy, this app must be installed to the system drive, but that's not set as the default. In Storage Settings, make the system drive the default location to save new content, then retry the install.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorDeploymentBlockedByVolumePolicyMachine)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEPLOYMENT_BLOCKED_BY_VOLUME_POLICY_MACHINE)).c_str(), L"[0x3d22] The deployment operation was blocked due to a machine-wide policy restricting deployments on a non-system volume. Per policy, this app must be installed to the system drive, but that's not set as the default. In Storage Settings, make the system drive the default location to save new content, then retry the install.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorDeploymentBlockedByProfilePolicy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEPLOYMENT_BLOCKED_BY_PROFILE_POLICY)).c_str(), L"[0x3d23] The deployment operation was blocked because Special profile deployment is not allowed. Please try logging into an account that is not a Special profile. You can try logging out and logging back into the current account, or try logging into a different account.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorDeploymentFailedConflictingMutablePackageDirectory)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DEPLOYMENT_FAILED_CONFLICTING_MUTABLE_PACKAGE_DIRECTORY)).c_str(), L"[0x3d24] The deployment operation failed due to a conflicting package's mutable package directory. To install this package remove the existing package with the conflicting mutable package directory.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorSingletonResourceInstalledInActiveUser)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SINGLETON_RESOURCE_INSTALLED_IN_ACTIVE_USER)).c_str(), L"[0x3d25] The package installation failed because a singleton resource was specified and another user with that package installed is logged in. Please make sure that all active users with the package installed are logged out and retry installation.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorDifferentVersionOfPackagedServiceInstalled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DIFFERENT_VERSION_OF_PACKAGED_SERVICE_INSTALLED)).c_str(), L"[0x3d26] The package installation failed because a different version of the service is installed. Try installing a newer version of the package.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorServiceExistsAsNonPackagedService)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_EXISTS_AS_NON_PACKAGED_SERVICE)).c_str(), L"[0x3d27] The package installation failed because a version of the service exists outside of APPX packaging. Please contact your software vendor.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorPackagedServiceRequiresAdminPrivileges)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PACKAGED_SERVICE_REQUIRES_ADMIN_PRIVILEGES)).c_str(), L"[0x3d28] The package installation failed because administrator privileges are required. Please contact an administrator to install this package.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorRedirectionToDefaultAccountNotAllowed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_REDIRECTION_TO_DEFAULT_ACCOUNT_NOT_ALLOWED)).c_str(), L"[0x3d29] The package deployment failed because the operation would have redirected to default account, when the caller said not to do so.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorPackageLacksCapabilityToDeployOnHost)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PACKAGE_LACKS_CAPABILITY_TO_DEPLOY_ON_HOST)).c_str(), L"[0x3d2a] The package deployment failed because the package requires a capability to natively target this host.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorUnsignedPackageInvalidContent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNSIGNED_PACKAGE_INVALID_CONTENT)).c_str(), L"[0x3d2b] The package deployment failed because its content is not valid for an unsigned package.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorUnsignedPackageInvalidPublisherNamespace)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNSIGNED_PACKAGE_INVALID_PUBLISHER_NAMESPACE)).c_str(), L"[0x3d2c] The package deployment failed because its publisher is not in the unsigned namespace.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorSignedPackageInvalidPublisherNamespace)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SIGNED_PACKAGE_INVALID_PUBLISHER_NAMESPACE)).c_str(), L"[0x3d2d] The package deployment failed because its publisher is not in the signed namespace.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorPackageExternalLocationNotAllowed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PACKAGE_EXTERNAL_LOCATION_NOT_ALLOWED)).c_str(), L"[0x3d2e] The package deployment failed because it must allow external content to be deployed with an external location.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallFulltrustHostruntimeRequiresMainPackageFulltrustCapability)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_FULLTRUST_HOSTRUNTIME_REQUIRES_MAIN_PACKAGE_FULLTRUST_CAPABILITY)).c_str(), L"[0x3d2f] A host runtime dependency resolving to a package with full trust content requires the main package to have the runFullTrust capability.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorPackageLacksCapabilityForMandatoryStartuptasks)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PACKAGE_LACKS_CAPABILITY_FOR_MANDATORY_STARTUPTASKS)).c_str(), L"[0x3d30] The package deployment failed because the package requires a capability for mandatory startup tasks.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorInstallResolveHostruntimeDependencyFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INSTALL_RESOLVE_HOSTRUNTIME_DEPENDENCY_FAILED)).c_str(), L"[0x3d31] Package failed host runtime dependency or conflict validation.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorMachineScopeNotAllowed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MACHINE_SCOPE_NOT_ALLOWED)).c_str(), L"[0x3d32] The package deployment failed because it uses a machine scope but doesn't have the required capability.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorClassicCompatModeNotAllowed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_CLASSIC_COMPAT_MODE_NOT_ALLOWED)).c_str(), L"[0x3d33] The package deployment failed because it uses classic compatmode but doesn't have the required capability.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStagefromupdateagentPackageNotApplicable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STAGEFROMUPDATEAGENT_PACKAGE_NOT_APPLICABLE)).c_str(), L"[0x3d34] AppxUpdateAgent attempted to stage a package that is not applicable.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorPackageNotRegisteredForUser)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PACKAGE_NOT_REGISTERED_FOR_USER)).c_str(), L"[0x3d35] The application cannot be started for the target user.  Please have the user explicitly install this package.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorPackageNameMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PACKAGE_NAME_MISMATCH)).c_str(), L"[0x3d36] The provided package name does not match the expected package name. Check the AppXDeployment-Server event log for details.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorAppinstallerUriInUse)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_APPINSTALLER_URI_IN_USE)).c_str(), L"[0x3d37] The provided .appinstaller URI is already being used by another package family. Check the AppXDeployment-Server event log for details.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorAppinstallerIsManagedBySystem)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_APPINSTALLER_IS_MANAGED_BY_SYSTEM)).c_str(), L"[0x3d38] The package family's auto update settings are being managed at system priority and cannot be changed at default priority. Please contact your system administrator for help with the error.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorServiceBlockedBySysprepInProgress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SERVICE_BLOCKED_BY_SYSPREP_IN_PROGRESS)).c_str(), L"[0x3d39] Service is not available while sysprep is running.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorUnsupportedArm32PackageRequiresRemediaiton)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNSUPPORTED_ARM32_PACKAGE_REQUIRES_REMEDIAITON)).c_str(), L"[0x3d3a] The activation failed because the package targets the arm32 architecture, which is no longer supported. Try repairing or reinstalling the application to fix the problem.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorUupProductNotApplicable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UUP_PRODUCT_NOT_APPLICABLE)).c_str(), L"[0x3d3b] The product is not applicable or cannot be found.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorBlockedByPendingPackageRemoval)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_BLOCKED_BY_PENDING_PACKAGE_REMOVAL)).c_str(), L"[0x3d3c] The deployment operation on this package is blocked because it or a package in the same family is pending removal. Please log off and log on again to finish the deferred package removal and try again.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStateLoadStoreFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STATE_LOAD_STORE_FAILED)).c_str(), L"[0x3db8] Loading the state store failed.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStateGetVersionFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STATE_GET_VERSION_FAILED)).c_str(), L"[0x3db9] Retrieving the state version for the application failed.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStateSetVersionFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STATE_SET_VERSION_FAILED)).c_str(), L"[0x3dba] Setting the state version for the application failed.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStateStructuredResetFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STATE_STRUCTURED_RESET_FAILED)).c_str(), L"[0x3dbb] Resetting the structured state of the application failed.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStateOpenContainerFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STATE_OPEN_CONTAINER_FAILED)).c_str(), L"[0x3dbc] State Manager failed to open the container.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStateCreateContainerFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STATE_CREATE_CONTAINER_FAILED)).c_str(), L"[0x3dbd] State Manager failed to create the container.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStateDeleteContainerFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STATE_DELETE_CONTAINER_FAILED)).c_str(), L"[0x3dbe] State Manager failed to delete the container.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStateReadSettingFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STATE_READ_SETTING_FAILED)).c_str(), L"[0x3dbf] State Manager failed to read the setting.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStateWriteSettingFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STATE_WRITE_SETTING_FAILED)).c_str(), L"[0x3dc0] State Manager failed to write the setting.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStateDeleteSettingFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STATE_DELETE_SETTING_FAILED)).c_str(), L"[0x3dc1] State Manager failed to delete the setting.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStateQuerySettingFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STATE_QUERY_SETTING_FAILED)).c_str(), L"[0x3dc2] State Manager failed to query the setting.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStateReadCompositeSettingFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STATE_READ_COMPOSITE_SETTING_FAILED)).c_str(), L"[0x3dc3] State Manager failed to read the composite setting.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStateWriteCompositeSettingFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STATE_WRITE_COMPOSITE_SETTING_FAILED)).c_str(), L"[0x3dc4] State Manager failed to write the composite setting.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStateEnumerateContainerFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STATE_ENUMERATE_CONTAINER_FAILED)).c_str(), L"[0x3dc5] State Manager failed to enumerate the containers.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStateEnumerateSettingsFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STATE_ENUMERATE_SETTINGS_FAILED)).c_str(), L"[0x3dc6] State Manager failed to enumerate the settings.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStateCompositeSettingValueSizeLimitExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STATE_COMPOSITE_SETTING_VALUE_SIZE_LIMIT_EXCEEDED)).c_str(), L"[0x3dc7] The size of the state manager composite setting value has exceeded the limit.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStateSettingValueSizeLimitExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STATE_SETTING_VALUE_SIZE_LIMIT_EXCEEDED)).c_str(), L"[0x3dc8] The size of the state manager setting value has exceeded the limit.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStateSettingNameSizeLimitExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STATE_SETTING_NAME_SIZE_LIMIT_EXCEEDED)).c_str(), L"[0x3dc9] The length of the state manager setting name has exceeded the limit.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorStateContainerNameSizeLimitExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_STATE_CONTAINER_NAME_SIZE_LIMIT_EXCEEDED)).c_str(), L"[0x3dca] The length of the state manager container name has exceeded the limit.");
}

TEST(Win32SystemErrorsTest2625, Win32ErrorApiUnavailable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_API_UNAVAILABLE)).c_str(), L"[0x3de1] This API cannot be used in the context of the caller's application type.");
}
