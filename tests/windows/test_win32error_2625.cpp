#include <format>
#include <windows.h>
#include <gtest/gtest.h>

#include <Helpers/String.hpp>
#include <Helpers/Win32Error.hpp>

using namespace RC;

TEST(SystemErrorsTest2625, SystemMessageErrorMrmMissingDefaultLanguage)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_MISSING_DEFAULT_LANGUAGE)).c_str(), L"[0x3b38] No default value for language was specified. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorMrmScopeItemConflict)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_SCOPE_ITEM_CONFLICT)).c_str(), L"[0x3b39] An entity was defined as both resource and scope, which is not allowed. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorMcaInvalidCapabilitiesString)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MCA_INVALID_CAPABILITIES_STRING)).c_str(), L"[0x3b60] The monitor returned a DDC/CI capabilities string that did not comply with the ACCESS.bus 3.0, DDC/CI 1.1 or MCCS 2 Revision 1 specification. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorMcaInvalidVcpVersion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MCA_INVALID_VCP_VERSION)).c_str(), L"[0x3b61] The monitor's VCP Version (0xDF) VCP code returned an invalid version value. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorMcaMonitorViolatesMccsSpecification)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MCA_MONITOR_VIOLATES_MCCS_SPECIFICATION)).c_str(), L"[0x3b62] The monitor does not comply with the MCCS specification it claims to support. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorMcaMccsVersionMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MCA_MCCS_VERSION_MISMATCH)).c_str(), L"[0x3b63] The MCCS version in a monitor's mccs_ver capability does not match the MCCS version the monitor reports when the VCP Version (0xDF) VCP code is used. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorMcaUnsupportedMccsVersion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MCA_UNSUPPORTED_MCCS_VERSION)).c_str(), L"[0x3b64] The Monitor Configuration API only works with monitors that support the MCCS 1.0 specification, MCCS 2.0 specification or the MCCS 2.0 Revision 1 specification. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorMcaInternalError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MCA_INTERNAL_ERROR)).c_str(), L"[0x3b65] An internal Monitor Configuration API error occurred. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorMcaInvalidTechnologyTypeReturned)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MCA_INVALID_TECHNOLOGY_TYPE_RETURNED)).c_str(), L"[0x3b66] The monitor returned an invalid monitor technology type. CRT, Plasma and LCD (TFT) are examples of monitor technology types. This error implies that the monitor violated the MCCS 2.0 or MCCS 2.0 Revision 1 specification. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorMcaUnsupportedColorTemperature)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MCA_UNSUPPORTED_COLOR_TEMPERATURE)).c_str(), L"[0x3b67] The caller of SetMonitorColorTemperature specified a color temperature that the current monitor did not support. This error implies that the monitor violated the MCCS 2.0 or MCCS 2.0 Revision 1 specification. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorAmbiguousSystemDevice)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_AMBIGUOUS_SYSTEM_DEVICE)).c_str(), L"[0x3b92] The requested system device cannot be identified due to multiple indistinguishable devices potentially matching the identification criteria. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorSystemDeviceNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SYSTEM_DEVICE_NOT_FOUND)).c_str(), L"[0x3bc3] The requested system device cannot be found. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorHashNotSupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_HASH_NOT_SUPPORTED)).c_str(), L"[0x3bc4] Hash generation for the specified hash version and hash type is not enabled on the server. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorHashNotPresent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_HASH_NOT_PRESENT)).c_str(), L"[0x3bc5] The hash requested from the server is not available or no longer valid. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorSecondaryIcProviderNotRegistered)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SECONDARY_IC_PROVIDER_NOT_REGISTERED)).c_str(), L"[0x3bd9] The secondary interrupt controller instance that manages the specified interrupt is not registered. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorGpioClientInformationInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_GPIO_CLIENT_INFORMATION_INVALID)).c_str(), L"[0x3bda] The information supplied by the GPIO client driver is invalid. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorGpioVersionNotSupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_GPIO_VERSION_NOT_SUPPORTED)).c_str(), L"[0x3bdb] The version specified by the GPIO client driver is not supported. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorGpioInvalidRegistrationPacket)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_GPIO_INVALID_REGISTRATION_PACKET)).c_str(), L"[0x3bdc] The registration packet supplied by the GPIO client driver is not valid. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorGpioOperationDenied)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_GPIO_OPERATION_DENIED)).c_str(), L"[0x3bdd] The requested operation is not supported for the specified handle. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorGpioIncompatibleConnectMode)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_GPIO_INCOMPATIBLE_CONNECT_MODE)).c_str(), L"[0x3bde] The requested connect mode conflicts with an existing mode on one or more of the specified pins. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorGpioInterruptAlreadyUnmasked)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_GPIO_INTERRUPT_ALREADY_UNMASKED)).c_str(), L"[0x3bdf] The interrupt requested to be unmasked is not masked. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorCannotSwitchRunlevel)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CANNOT_SWITCH_RUNLEVEL)).c_str(), L"[0x3c28] The requested run level switch cannot be completed successfully. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInvalidRunlevelSetting)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_RUNLEVEL_SETTING)).c_str(), L"[0x3c29] The service has an invalid run level setting. The run level for a service must not be higher than the run level of its dependent services. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorRunlevelSwitchTimeout)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RUNLEVEL_SWITCH_TIMEOUT)).c_str(), L"[0x3c2a] The requested run level switch cannot be completed successfully since one or more services will not stop or restart within the specified timeout. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorRunlevelSwitchAgentTimeout)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RUNLEVEL_SWITCH_AGENT_TIMEOUT)).c_str(), L"[0x3c2b] A run level switch agent did not respond within the specified timeout. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorRunlevelSwitchInProgress)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RUNLEVEL_SWITCH_IN_PROGRESS)).c_str(), L"[0x3c2c] A run level switch is currently in progress. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorServicesFailedAutostart)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SERVICES_FAILED_AUTOSTART)).c_str(), L"[0x3c2d] One or more services failed to start during the service startup phase of a run level switch. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorComTaskStopPending)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_COM_TASK_STOP_PENDING)).c_str(), L"[0x3c8d] The task stop request cannot be completed immediately since task needs more time to shutdown. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallOpenPackageFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_OPEN_PACKAGE_FAILED)).c_str(), L"[0x3cf0] Package could not be opened. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallPackageNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_PACKAGE_NOT_FOUND)).c_str(), L"[0x3cf1] Package was not found. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallInvalidPackage)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_INVALID_PACKAGE)).c_str(), L"[0x3cf2] Package data is invalid. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallResolveDependencyFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_RESOLVE_DEPENDENCY_FAILED)).c_str(), L"[0x3cf3] Package failed updates, dependency or conflict validation. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallOutOfDiskSpace)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_OUT_OF_DISK_SPACE)).c_str(), L"[0x3cf4] There is not enough disk space on your computer. Please free up some space and try again. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallNetworkFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_NETWORK_FAILURE)).c_str(), L"[0x3cf5] There was a problem downloading your product. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallRegistrationFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_REGISTRATION_FAILURE)).c_str(), L"[0x3cf6] Package could not be registered. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallDeregistrationFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_DEREGISTRATION_FAILURE)).c_str(), L"[0x3cf7] Package could not be unregistered. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallCancel)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_CANCEL)).c_str(), L"[0x3cf8] User cancelled the install request. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_FAILED)).c_str(), L"[0x3cf9] Install failed. Please contact your software vendor. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorRemoveFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_REMOVE_FAILED)).c_str(), L"[0x3cfa] Removal failed. Please contact your software vendor. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorPackageAlreadyExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PACKAGE_ALREADY_EXISTS)).c_str(), L"[0x3cfb] The provided package is already installed, and reinstallation of the package was blocked. Check the AppXDeployment-Server event log for details. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorNeedsRemediation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NEEDS_REMEDIATION)).c_str(), L"[0x3cfc] The application cannot be started. Try reinstalling the application to fix the problem. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallPrerequisiteFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_PREREQUISITE_FAILED)).c_str(), L"[0x3cfd] A Prerequisite for an install could not be satisfied. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorPackageRepositoryCorrupted)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PACKAGE_REPOSITORY_CORRUPTED)).c_str(), L"[0x3cfe] The package repository is corrupted. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallPolicyFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_POLICY_FAILURE)).c_str(), L"[0x3cff] To install this application you need either a Windows developer license or a sideloading-enabled system. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorPackageUpdating)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PACKAGE_UPDATING)).c_str(), L"[0x3d00] The application cannot be started because it is currently updating. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorDeploymentBlockedByPolicy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DEPLOYMENT_BLOCKED_BY_POLICY)).c_str(), L"[0x3d01] The package deployment operation is blocked by policy. Please contact your system administrator. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorPackagesInUse)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PACKAGES_IN_USE)).c_str(), L"[0x3d02] The package could not be installed because resources it modifies are currently in use. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorRecoveryFileCorrupt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RECOVERY_FILE_CORRUPT)).c_str(), L"[0x3d03] The package could not be recovered because necessary data for recovery have been corrupted. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInvalidStagedSignature)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_STAGED_SIGNATURE)).c_str(), L"[0x3d04] The signature is invalid. To register in developer mode, AppxSignature.p7x and AppxBlockMap.xml must be valid or should not be present. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorDeletingExistingApplicationdataStoreFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DELETING_EXISTING_APPLICATIONDATA_STORE_FAILED)).c_str(), L"[0x3d05] An error occurred while deleting the package's previously existing application data. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallPackageDowngrade)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_PACKAGE_DOWNGRADE)).c_str(), L"[0x3d06] The package could not be installed because a higher version of this package is already installed. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorSystemNeedsRemediation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SYSTEM_NEEDS_REMEDIATION)).c_str(), L"[0x3d07] An error in a system binary was detected. Try refreshing the PC to fix the problem. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorAppxIntegrityFailureClrNgen)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APPX_INTEGRITY_FAILURE_CLR_NGEN)).c_str(), L"[0x3d08] A corrupted CLR NGEN binary was detected on the system. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorResiliencyFileCorrupt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESILIENCY_FILE_CORRUPT)).c_str(), L"[0x3d09] The operation could not be resumed because necessary data for recovery have been corrupted. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallFirewallServiceNotRunning)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_FIREWALL_SERVICE_NOT_RUNNING)).c_str(), L"[0x3d0a] The package could not be installed because the Windows Firewall service is not running. Enable the Windows Firewall service and try again. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorPackageMoveFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PACKAGE_MOVE_FAILED)).c_str(), L"[0x3d0b] Package move failed. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallVolumeNotEmpty)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_VOLUME_NOT_EMPTY)).c_str(), L"[0x3d0c] The deployment operation failed because the volume is not empty. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallVolumeOffline)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_VOLUME_OFFLINE)).c_str(), L"[0x3d0d] The deployment operation failed because the volume is offline. For a package update, the volume refers to the installed volume of all package versions. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallVolumeCorrupt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_VOLUME_CORRUPT)).c_str(), L"[0x3d0e] The deployment operation failed because the specified volume is corrupt. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorNeedsRegistration)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NEEDS_REGISTRATION)).c_str(), L"[0x3d0f] The deployment operation failed because the specified application needs to be registered first. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallWrongProcessorArchitecture)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_WRONG_PROCESSOR_ARCHITECTURE)).c_str(), L"[0x3d10] The deployment operation failed because the package targets the wrong processor architecture. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorDevSideloadLimitExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DEV_SIDELOAD_LIMIT_EXCEEDED)).c_str(), L"[0x3d11] You have reached the maximum number of developer sideloaded packages allowed on this device. Please uninstall a sideloaded package and try again. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallOptionalPackageRequiresMainPackage)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_OPTIONAL_PACKAGE_REQUIRES_MAIN_PACKAGE)).c_str(), L"[0x3d12] A main app package is required to install this optional package.  Install the main package first and try again. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorPackageNotSupportedOnFilesystem)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PACKAGE_NOT_SUPPORTED_ON_FILESYSTEM)).c_str(), L"[0x3d13] This app package type is not supported on this filesystem ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorPackageMoveBlockedByStreaming)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PACKAGE_MOVE_BLOCKED_BY_STREAMING)).c_str(), L"[0x3d14] Package move operation is blocked until the application has finished streaming ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallOptionalPackageApplicationidNotUnique)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_OPTIONAL_PACKAGE_APPLICATIONID_NOT_UNIQUE)).c_str(), L"[0x3d15] A main or another optional app package has the same application ID as this optional package.  Change the application ID for the optional package to avoid conflicts. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorPackageStagingOnhold)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PACKAGE_STAGING_ONHOLD)).c_str(), L"[0x3d16] This staging session has been held to allow another staging operation to be prioritized. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallInvalidRelatedSetUpdate)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_INVALID_RELATED_SET_UPDATE)).c_str(), L"[0x3d17] A related set cannot be updated because the updated set is invalid. All packages in the related set must be updated at the same time. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallOptionalPackageRequiresMainPackageFulltrustCapability)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_OPTIONAL_PACKAGE_REQUIRES_MAIN_PACKAGE_FULLTRUST_CAPABILITY)).c_str(), L"[0x3d18] An optional package with a FullTrust entry point requires the main package to have the runFullTrust capability. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorDeploymentBlockedByUserLogOff)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DEPLOYMENT_BLOCKED_BY_USER_LOG_OFF)).c_str(), L"[0x3d19] An error occurred because a user was logged off. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorProvisionOptionalPackageRequiresMainPackageProvisioned)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PROVISION_OPTIONAL_PACKAGE_REQUIRES_MAIN_PACKAGE_PROVISIONED)).c_str(), L"[0x3d1a] An optional package provision requires the dependency main package to also be provisioned. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorPackagesReputationCheckFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PACKAGES_REPUTATION_CHECK_FAILED)).c_str(), L"[0x3d1b] The packages failed the SmartScreen reputation check. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorPackagesReputationCheckTimedout)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PACKAGES_REPUTATION_CHECK_TIMEDOUT)).c_str(), L"[0x3d1c] The SmartScreen reputation check operation timed out. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorDeploymentOptionNotSupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DEPLOYMENT_OPTION_NOT_SUPPORTED)).c_str(), L"[0x3d1d] The current deployment option is not supported. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorAppinstallerActivationBlocked)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APPINSTALLER_ACTIVATION_BLOCKED)).c_str(), L"[0x3d1e] Activation is blocked due to the .appinstaller update settings for this app. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorRegistrationFromRemoteDriveNotSupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_REGISTRATION_FROM_REMOTE_DRIVE_NOT_SUPPORTED)).c_str(), L"[0x3d1f] Remote drives are not supported; use \\\\server\\share to register a remote package. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorAppxRawDataWriteFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APPX_RAW_DATA_WRITE_FAILED)).c_str(), L"[0x3d20] Failed to process and write downloaded APPX package data to disk. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorDeploymentBlockedByVolumePolicyPackage)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DEPLOYMENT_BLOCKED_BY_VOLUME_POLICY_PACKAGE)).c_str(), L"[0x3d21] The deployment operation was blocked due to a per-package-family policy restricting deployments on a non-system volume. Per policy, this app must be installed to the system drive, but that's not set as the default. In Storage Settings, make the system drive the default location to save new content, then retry the install. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorDeploymentBlockedByVolumePolicyMachine)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DEPLOYMENT_BLOCKED_BY_VOLUME_POLICY_MACHINE)).c_str(), L"[0x3d22] The deployment operation was blocked due to a machine-wide policy restricting deployments on a non-system volume. Per policy, this app must be installed to the system drive, but that's not set as the default. In Storage Settings, make the system drive the default location to save new content, then retry the install. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorDeploymentBlockedByProfilePolicy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DEPLOYMENT_BLOCKED_BY_PROFILE_POLICY)).c_str(), L"[0x3d23] The deployment operation was blocked because Special profile deployment is not allowed. Please try logging into an account that is not a Special profile. You can try logging out and logging back into the current account, or try logging into a different account. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorDeploymentFailedConflictingMutablePackageDirectory)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DEPLOYMENT_FAILED_CONFLICTING_MUTABLE_PACKAGE_DIRECTORY)).c_str(), L"[0x3d24] The deployment operation failed due to a conflicting package's mutable package directory. To install this package remove the existing package with the conflicting mutable package directory. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorSingletonResourceInstalledInActiveUser)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SINGLETON_RESOURCE_INSTALLED_IN_ACTIVE_USER)).c_str(), L"[0x3d25] The package installation failed because a singleton resource was specified and another user with that package installed is logged in. Please make sure that all active users with the package installed are logged out and retry installation. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorDifferentVersionOfPackagedServiceInstalled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DIFFERENT_VERSION_OF_PACKAGED_SERVICE_INSTALLED)).c_str(), L"[0x3d26] The package installation failed because a different version of the service is installed. Try installing a newer version of the package. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorServiceExistsAsNonPackagedService)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SERVICE_EXISTS_AS_NON_PACKAGED_SERVICE)).c_str(), L"[0x3d27] The package installation failed because a version of the service exists outside of APPX packaging. Please contact your software vendor. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorPackagedServiceRequiresAdminPrivileges)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PACKAGED_SERVICE_REQUIRES_ADMIN_PRIVILEGES)).c_str(), L"[0x3d28] The package installation failed because administrator privileges are required. Please contact an administrator to install this package. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorRedirectionToDefaultAccountNotAllowed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_REDIRECTION_TO_DEFAULT_ACCOUNT_NOT_ALLOWED)).c_str(), L"[0x3d29] The package deployment failed because the operation would have redirected to default account, when the caller said not to do so. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorPackageLacksCapabilityToDeployOnHost)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PACKAGE_LACKS_CAPABILITY_TO_DEPLOY_ON_HOST)).c_str(), L"[0x3d2a] The package deployment failed because the package requires a capability to natively target this host. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorUnsignedPackageInvalidContent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_UNSIGNED_PACKAGE_INVALID_CONTENT)).c_str(), L"[0x3d2b] The package deployment failed because its content is not valid for an unsigned package. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorUnsignedPackageInvalidPublisherNamespace)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_UNSIGNED_PACKAGE_INVALID_PUBLISHER_NAMESPACE)).c_str(), L"[0x3d2c] The package deployment failed because its publisher is not in the unsigned namespace. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorSignedPackageInvalidPublisherNamespace)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SIGNED_PACKAGE_INVALID_PUBLISHER_NAMESPACE)).c_str(), L"[0x3d2d] The package deployment failed because its publisher is not in the signed namespace. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorPackageExternalLocationNotAllowed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PACKAGE_EXTERNAL_LOCATION_NOT_ALLOWED)).c_str(), L"[0x3d2e] The package deployment failed because it must allow external content to be deployed with an external location. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallFulltrustHostruntimeRequiresMainPackageFulltrustCapability)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_FULLTRUST_HOSTRUNTIME_REQUIRES_MAIN_PACKAGE_FULLTRUST_CAPABILITY)).c_str(), L"[0x3d2f] A host runtime dependency resolving to a package with full trust content requires the main package to have the runFullTrust capability. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorPackageLacksCapabilityForMandatoryStartuptasks)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PACKAGE_LACKS_CAPABILITY_FOR_MANDATORY_STARTUPTASKS)).c_str(), L"[0x3d30] The package deployment failed because the package requires a capability for mandatory startup tasks. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorInstallResolveHostruntimeDependencyFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_RESOLVE_HOSTRUNTIME_DEPENDENCY_FAILED)).c_str(), L"[0x3d31] Package failed host runtime dependency or conflict validation. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorMachineScopeNotAllowed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MACHINE_SCOPE_NOT_ALLOWED)).c_str(), L"[0x3d32] The package deployment failed because it uses a machine scope but doesn't have the required capability. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorClassicCompatModeNotAllowed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLASSIC_COMPAT_MODE_NOT_ALLOWED)).c_str(), L"[0x3d33] The package deployment failed because it uses classic compatmode but doesn't have the required capability. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStagefromupdateagentPackageNotApplicable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STAGEFROMUPDATEAGENT_PACKAGE_NOT_APPLICABLE)).c_str(), L"[0x3d34] AppxUpdateAgent attempted to stage a package that is not applicable. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorPackageNotRegisteredForUser)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PACKAGE_NOT_REGISTERED_FOR_USER)).c_str(), L"[0x3d35] The application cannot be started for the target user.  Please have the user explicitly install this package. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorPackageNameMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PACKAGE_NAME_MISMATCH)).c_str(), L"[0x3d36] The provided package name does not match the expected package name. Check the AppXDeployment-Server event log for details. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorAppinstallerUriInUse)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APPINSTALLER_URI_IN_USE)).c_str(), L"[0x3d37] The provided .appinstaller URI is already being used by another package family. Check the AppXDeployment-Server event log for details. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorAppinstallerIsManagedBySystem)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APPINSTALLER_IS_MANAGED_BY_SYSTEM)).c_str(), L"[0x3d38] The package family's auto update settings are being managed at system priority and cannot be changed at default priority. Please contact your system administrator for help with the error. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorServiceBlockedBySysprepInProgress)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SERVICE_BLOCKED_BY_SYSPREP_IN_PROGRESS)).c_str(), L"[0x3d39] Service is not available while sysprep is running. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorUnsupportedArm32PackageRequiresRemediaiton)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_UNSUPPORTED_ARM32_PACKAGE_REQUIRES_REMEDIAITON)).c_str(), L"[0x3d3a] The activation failed because the package targets the arm32 architecture, which is no longer supported. Try repairing or reinstalling the application to fix the problem. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorUupProductNotApplicable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_UUP_PRODUCT_NOT_APPLICABLE)).c_str(), L"[0x3d3b] The product is not applicable or cannot be found. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorBlockedByPendingPackageRemoval)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_BLOCKED_BY_PENDING_PACKAGE_REMOVAL)).c_str(), L"[0x3d3c] The deployment operation on this package is blocked because it or a package in the same family is pending removal. Please log off and log on again to finish the deferred package removal and try again. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStateLoadStoreFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATE_LOAD_STORE_FAILED)).c_str(), L"[0x3db8] Loading the state store failed. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStateGetVersionFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATE_GET_VERSION_FAILED)).c_str(), L"[0x3db9] Retrieving the state version for the application failed. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStateSetVersionFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATE_SET_VERSION_FAILED)).c_str(), L"[0x3dba] Setting the state version for the application failed. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStateStructuredResetFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATE_STRUCTURED_RESET_FAILED)).c_str(), L"[0x3dbb] Resetting the structured state of the application failed. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStateOpenContainerFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATE_OPEN_CONTAINER_FAILED)).c_str(), L"[0x3dbc] State Manager failed to open the container. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStateCreateContainerFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATE_CREATE_CONTAINER_FAILED)).c_str(), L"[0x3dbd] State Manager failed to create the container. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStateDeleteContainerFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATE_DELETE_CONTAINER_FAILED)).c_str(), L"[0x3dbe] State Manager failed to delete the container. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStateReadSettingFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATE_READ_SETTING_FAILED)).c_str(), L"[0x3dbf] State Manager failed to read the setting. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStateWriteSettingFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATE_WRITE_SETTING_FAILED)).c_str(), L"[0x3dc0] State Manager failed to write the setting. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStateDeleteSettingFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATE_DELETE_SETTING_FAILED)).c_str(), L"[0x3dc1] State Manager failed to delete the setting. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStateQuerySettingFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATE_QUERY_SETTING_FAILED)).c_str(), L"[0x3dc2] State Manager failed to query the setting. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStateReadCompositeSettingFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATE_READ_COMPOSITE_SETTING_FAILED)).c_str(), L"[0x3dc3] State Manager failed to read the composite setting. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStateWriteCompositeSettingFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATE_WRITE_COMPOSITE_SETTING_FAILED)).c_str(), L"[0x3dc4] State Manager failed to write the composite setting. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStateEnumerateContainerFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATE_ENUMERATE_CONTAINER_FAILED)).c_str(), L"[0x3dc5] State Manager failed to enumerate the containers. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStateEnumerateSettingsFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATE_ENUMERATE_SETTINGS_FAILED)).c_str(), L"[0x3dc6] State Manager failed to enumerate the settings. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStateCompositeSettingValueSizeLimitExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATE_COMPOSITE_SETTING_VALUE_SIZE_LIMIT_EXCEEDED)).c_str(), L"[0x3dc7] The size of the state manager composite setting value has exceeded the limit. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStateSettingValueSizeLimitExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATE_SETTING_VALUE_SIZE_LIMIT_EXCEEDED)).c_str(), L"[0x3dc8] The size of the state manager setting value has exceeded the limit. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStateSettingNameSizeLimitExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATE_SETTING_NAME_SIZE_LIMIT_EXCEEDED)).c_str(), L"[0x3dc9] The length of the state manager setting name has exceeded the limit. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorStateContainerNameSizeLimitExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATE_CONTAINER_NAME_SIZE_LIMIT_EXCEEDED)).c_str(), L"[0x3dca] The length of the state manager container name has exceeded the limit. ");
}

TEST(SystemErrorsTest2625, SystemMessageErrorApiUnavailable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_API_UNAVAILABLE)).c_str(), L"[0x3de1] This API cannot be used in the context of the caller's application type. ");
}
