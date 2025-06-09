#include <format>
#include <windows.h>
#include <gtest/gtest.h>

#include <Helpers/String.hpp>
#include <Helpers/Win32Error.hpp>

using namespace RC;

TEST(SystemErrorsTest1500, SystemMessageErrorPatchPackageUnsupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PATCH_PACKAGE_UNSUPPORTED)).c_str(), L"[0x665] This update package cannot be processed by the Windows Installer service. You must install a Windows service pack that contains a newer version of the Windows Installer service. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorProductVersion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRODUCT_VERSION)).c_str(), L"[0x666] Another version of this product is already installed. Installation of this version cannot continue. To configure or remove the existing version of this product, use Add/Remove Programs on the Control Panel. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidCommandLine)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_COMMAND_LINE)).c_str(), L"[0x667] Invalid command line argument. Consult the Windows Installer SDK for detailed command line help. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInstallRemoteDisallowed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_REMOTE_DISALLOWED)).c_str(), L"[0x668] Only administrators have permission to add, remove, or configure server software during a Terminal services remote session. If you want to install or configure software on the server, contact your network administrator. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSuccessRebootInitiated)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SUCCESS_REBOOT_INITIATED)).c_str(), L"[0x669] The requested operation completed successfully. The system will be restarted so the changes can take effect. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPatchTargetNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PATCH_TARGET_NOT_FOUND)).c_str(), L"[0x66a] The upgrade cannot be installed by the Windows Installer service because the program to be upgraded may be missing, or the upgrade may update a different version of the program. Verify that the program to be upgraded exists on your computer and that you have the correct upgrade. "   );
}

TEST(SystemErrorsTest1500, SystemMessageErrorPatchPackageRejected)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PATCH_PACKAGE_REJECTED)).c_str(), L"[0x66b] The update package is not permitted by software restriction policy. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInstallTransformRejected)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_TRANSFORM_REJECTED)).c_str(), L"[0x66c] One or more customizations are not permitted by software restriction policy. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInstallRemoteProhibited)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_REMOTE_PROHIBITED)).c_str(), L"[0x66d] The Windows Installer does not permit installation from a Remote Desktop Connection. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPatchRemovalUnsupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PATCH_REMOVAL_UNSUPPORTED)).c_str(), L"[0x66e] Uninstallation of the update package is not supported. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorUnknownPatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_UNKNOWN_PATCH)).c_str(), L"[0x66f] The update is not applied to this product. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPatchNoSequence)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PATCH_NO_SEQUENCE)).c_str(), L"[0x670] No valid sequence could be found for the set of updates. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPatchRemovalDisallowed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PATCH_REMOVAL_DISALLOWED)).c_str(), L"[0x671] Update removal was disallowed by policy. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidPatchXml)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_PATCH_XML)).c_str(), L"[0x672] The XML update data is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPatchManagedAdvertisedProduct)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PATCH_MANAGED_ADVERTISED_PRODUCT)).c_str(), L"[0x673] Windows Installer does not permit updating of managed advertised products. At least one feature of the product must be installed before applying the update. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInstallServiceSafeboot)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_SERVICE_SAFEBOOT)).c_str(), L"[0x674] The Windows Installer service is not accessible in Safe Mode. Please try again when your computer is not in Safe Mode or you can use System Restore to return your machine to a previous good state. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorFailFastException)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_FAIL_FAST_EXCEPTION)).c_str(), L"[0x675] A fail fast exception occurred. Exception handlers will not be invoked and the process will be terminated immediately. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInstallRejected)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INSTALL_REJECTED)).c_str(), L"[0x676] The app that you are trying to run is not supported on this version of Windows. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDynamicCodeBlocked)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DYNAMIC_CODE_BLOCKED)).c_str(), L"[0x677] The operation was blocked as the process prohibits dynamic code generation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNotSameObject)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NOT_SAME_OBJECT)).c_str(), L"[0x678] The objects are not identical. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorStrictCfgViolation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STRICT_CFG_VIOLATION)).c_str(), L"[0x679] The specified image file was blocked from loading because it does not enable a feature required by the process: Control Flow Guard. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSetContextDenied)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SET_CONTEXT_DENIED)).c_str(), L"[0x67c] The thread context could not be updated because this has been restricted for the process. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorCrossPartitionViolation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CROSS_PARTITION_VIOLATION)).c_str(), L"[0x67d] An invalid cross-partition private file/section access was attempted. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorReturnAddressHijackAttempt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RETURN_ADDRESS_HIJACK_ATTEMPT)).c_str(), L"[0x67e] A return address hijack is being attempted. This is supported by the operating system when user-mode shadow stacks are enabled. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidUserBuffer)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_USER_BUFFER)).c_str(), L"[0x6f8] The supplied user buffer is not valid for the requested operation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorUnrecognizedMedia)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_UNRECOGNIZED_MEDIA)).c_str(), L"[0x6f9] The disk media is not recognized. It may not be formatted. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNoTrustLsaSecret)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NO_TRUST_LSA_SECRET)).c_str(), L"[0x6fa] The workstation does not have a trust secret. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNoTrustSamAccount)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NO_TRUST_SAM_ACCOUNT)).c_str(), L"[0x6fb] The security database on the server does not have a computer account for this workstation trust relationship. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorTrustedDomainFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRUSTED_DOMAIN_FAILURE)).c_str(), L"[0x6fc] The trust relationship between the primary domain and the trusted domain failed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorTrustedRelationshipFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRUSTED_RELATIONSHIP_FAILURE)).c_str(), L"[0x6fd] The trust relationship between this workstation and the primary domain failed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorTrustFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRUST_FAILURE)).c_str(), L"[0x6fe] The network logon failed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNetlogonNotStarted)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NETLOGON_NOT_STARTED)).c_str(), L"[0x700] An attempt was made to logon, but the network logon service was not started. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAccountExpired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_ACCOUNT_EXPIRED)).c_str(), L"[0x701] The user's account has expired. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorRedirectorHasOpenHandles)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_REDIRECTOR_HAS_OPEN_HANDLES)).c_str(), L"[0x702] The redirector is in use and cannot be unloaded. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPrinterDriverAlreadyInstalled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRINTER_DRIVER_ALREADY_INSTALLED)).c_str(), L"[0x703] The specified printer driver is already installed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorUnknownPort)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_UNKNOWN_PORT)).c_str(), L"[0x704] The specified port is unknown. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorUnknownPrinterDriver)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_UNKNOWN_PRINTER_DRIVER)).c_str(), L"[0x705] The printer driver is unknown. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorUnknownPrintprocessor)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_UNKNOWN_PRINTPROCESSOR)).c_str(), L"[0x706] The print processor is unknown. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidSeparatorFile)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_SEPARATOR_FILE)).c_str(), L"[0x707] The specified separator file is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidPriority)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_PRIORITY)).c_str(), L"[0x708] The specified priority is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidPrinterName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_PRINTER_NAME)).c_str(), L"[0x709] The printer name is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPrinterAlreadyExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRINTER_ALREADY_EXISTS)).c_str(), L"[0x70a] The printer already exists. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidPrinterCommand)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_PRINTER_COMMAND)).c_str(), L"[0x70b] The printer command is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidDatatype)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_DATATYPE)).c_str(), L"[0x70c] The specified datatype is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidEnvironment)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_ENVIRONMENT)).c_str(), L"[0x70d] The environment specified is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNologonInterdomainTrustAccount)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NOLOGON_INTERDOMAIN_TRUST_ACCOUNT)).c_str(), L"[0x70f] The account used is an interdomain trust account. Use your global user account or local user account to access this server. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNologonWorkstationTrustAccount)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NOLOGON_WORKSTATION_TRUST_ACCOUNT)).c_str(), L"[0x710] The account used is a computer account. Use your global user account or local user account to access this server. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNologonServerTrustAccount)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NOLOGON_SERVER_TRUST_ACCOUNT)).c_str(), L"[0x711] The account used is a server trust account. Use your global user account or local user account to access this server. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDomainTrustInconsistent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DOMAIN_TRUST_INCONSISTENT)).c_str(), L"[0x712] The name or security ID (SID) of the domain specified is inconsistent with the trust information for that domain. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorServerHasOpenHandles)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SERVER_HAS_OPEN_HANDLES)).c_str(), L"[0x713] The server is in use and cannot be unloaded. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorResourceDataNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESOURCE_DATA_NOT_FOUND)).c_str(), L"[0x714] The specified image file did not contain a resource section. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorResourceTypeNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESOURCE_TYPE_NOT_FOUND)).c_str(), L"[0x715] The specified resource type cannot be found in the image file. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorResourceNameNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESOURCE_NAME_NOT_FOUND)).c_str(), L"[0x716] The specified resource name cannot be found in the image file. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorResourceLangNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESOURCE_LANG_NOT_FOUND)).c_str(), L"[0x717] The specified resource language ID cannot be found in the image file. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNotEnoughQuota)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NOT_ENOUGH_QUOTA)).c_str(), L"[0x718] Not enough quota is available to process this command. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidTime)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_TIME)).c_str(), L"[0x76d] The specified time is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidFormName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_FORM_NAME)).c_str(), L"[0x76e] The specified form name is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidFormSize)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_FORM_SIZE)).c_str(), L"[0x76f] The specified form size is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAlreadyWaiting)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_ALREADY_WAITING)).c_str(), L"[0x770] The specified printer handle is already being waited on ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPrinterDeleted)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRINTER_DELETED)).c_str(), L"[0x771] The specified printer has been deleted. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidPrinterState)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_PRINTER_STATE)).c_str(), L"[0x772] The state of the printer is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPasswordMustChange)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PASSWORD_MUST_CHANGE)).c_str(), L"[0x773] The user's password must be changed before signing in. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDomainControllerNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DOMAIN_CONTROLLER_NOT_FOUND)).c_str(), L"[0x774] Could not find the domain controller for this domain. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAccountLockedOut)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_ACCOUNT_LOCKED_OUT)).c_str(), L"[0x775] The referenced account is currently locked out and may not be logged on to. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNoSitename)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NO_SITENAME)).c_str(), L"[0x77f] No site name is available for this machine. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorCantAccessFile)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CANT_ACCESS_FILE)).c_str(), L"[0x780] The file cannot be accessed by the system. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorCantResolveFilename)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CANT_RESOLVE_FILENAME)).c_str(), L"[0x781] The name of the file cannot be resolved by the system. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorKmDriverBlocked)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_KM_DRIVER_BLOCKED)).c_str(), L"[0x78a] The printer driver is not compatible with a policy enabled on your computer that blocks NT 4.0 drivers. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorContextExpired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CONTEXT_EXPIRED)).c_str(), L"[0x78b] The context has expired and can no longer be used. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPerUserTrustQuotaExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PER_USER_TRUST_QUOTA_EXCEEDED)).c_str(), L"[0x78c] The current user's delegated trust creation quota has been exceeded. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAllUserTrustQuotaExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_ALL_USER_TRUST_QUOTA_EXCEEDED)).c_str(), L"[0x78d] The total delegated trust creation quota has been exceeded. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorUserDeleteTrustQuotaExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_USER_DELETE_TRUST_QUOTA_EXCEEDED)).c_str(), L"[0x78e] The current user's delegated trust deletion quota has been exceeded. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAuthenticationFirewallFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_AUTHENTICATION_FIREWALL_FAILED)).c_str(), L"[0x78f] The computer you are signing into is protected by an authentication firewall. The specified account is not allowed to authenticate to the computer. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorRemotePrintConnectionsBlocked)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_REMOTE_PRINT_CONNECTIONS_BLOCKED)).c_str(), L"[0x790] Remote connections to the Print Spooler are blocked by a policy set on your machine. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNtlmBlocked)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NTLM_BLOCKED)).c_str(), L"[0x791] Authentication failed because NTLM authentication has been disabled. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPasswordChangeRequired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PASSWORD_CHANGE_REQUIRED)).c_str(), L"[0x792] Logon Failure: EAS policy requires that the user change their password before this operation can be performed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorLostModeLogonRestriction)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOST_MODE_LOGON_RESTRICTION)).c_str(), L"[0x793] An administrator has restricted sign in. To sign in, make sure your device is connected to the Internet, and have your administrator sign in first. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidPixelFormat)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_PIXEL_FORMAT)).c_str(), L"[0x7d0] The pixel format is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorBadDriver)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_BAD_DRIVER)).c_str(), L"[0x7d1] The specified driver is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidWindowStyle)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_WINDOW_STYLE)).c_str(), L"[0x7d2] The window style or class attribute is invalid for this operation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorMetafileNotSupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_METAFILE_NOT_SUPPORTED)).c_str(), L"[0x7d3] The requested metafile operation is not supported. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorTransformNotSupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSFORM_NOT_SUPPORTED)).c_str(), L"[0x7d4] The requested transformation operation is not supported. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClippingNotSupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLIPPING_NOT_SUPPORTED)).c_str(), L"[0x7d5] The requested clipping operation is not supported. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidCmm)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_CMM)).c_str(), L"[0x7da] The specified color management module is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidProfile)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_PROFILE)).c_str(), L"[0x7db] The specified color profile is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorTagNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TAG_NOT_FOUND)).c_str(), L"[0x7dc] The specified tag was not found. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorTagNotPresent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TAG_NOT_PRESENT)).c_str(), L"[0x7dd] A required tag is not present. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDuplicateTag)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DUPLICATE_TAG)).c_str(), L"[0x7de] The specified tag is already present. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorProfileNotAssociatedWithDevice)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PROFILE_NOT_ASSOCIATED_WITH_DEVICE)).c_str(), L"[0x7df] The specified color profile is not associated with the specified device. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorProfileNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PROFILE_NOT_FOUND)).c_str(), L"[0x7e0] The specified color profile was not found. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidColorspace)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_COLORSPACE)).c_str(), L"[0x7e1] The specified color space is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorIcmNotEnabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_ICM_NOT_ENABLED)).c_str(), L"[0x7e2] Image Color Management is not enabled. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDeletingIcmXform)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DELETING_ICM_XFORM)).c_str(), L"[0x7e3] There was an error while deleting the color transform. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidTransform)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_TRANSFORM)).c_str(), L"[0x7e4] The specified color transform is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorColorspaceMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_COLORSPACE_MISMATCH)).c_str(), L"[0x7e5] The specified transform does not match the bitmap's color space. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidColorindex)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_COLORINDEX)).c_str(), L"[0x7e6] The specified named color index is not present in the profile. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorProfileDoesNotMatchDevice)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PROFILE_DOES_NOT_MATCH_DEVICE)).c_str(), L"[0x7e7] The specified profile is intended for a device of a different type than the specified device. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorConnectedOtherPassword)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CONNECTED_OTHER_PASSWORD)).c_str(), L"[0x83c] The network connection was made successfully, but the user had to be prompted for a password other than the one originally specified. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorConnectedOtherPasswordDefault)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CONNECTED_OTHER_PASSWORD_DEFAULT)).c_str(), L"[0x83d] The network connection was made successfully using default credentials. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorBadUsername)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_BAD_USERNAME)).c_str(), L"[0x89a] The specified username is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNotConnected)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NOT_CONNECTED)).c_str(), L"[0x8ca] This network connection does not exist. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorOpenFiles)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_OPEN_FILES)).c_str(), L"[0x961] This network connection has files open or requests pending. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorActiveConnections)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_ACTIVE_CONNECTIONS)).c_str(), L"[0x962] Active connections still exist. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDeviceInUse)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DEVICE_IN_USE)).c_str(), L"[0x964] The device is in use by an active process and cannot be disconnected. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorUnknownPrintMonitor)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_UNKNOWN_PRINT_MONITOR)).c_str(), L"[0xbb8] The specified print monitor is unknown. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPrinterDriverInUse)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRINTER_DRIVER_IN_USE)).c_str(), L"[0xbb9] The specified printer driver is currently in use. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSpoolFileNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SPOOL_FILE_NOT_FOUND)).c_str(), L"[0xbba] The spool file was not found. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSplNoStartdoc)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SPL_NO_STARTDOC)).c_str(), L"[0xbbb] A StartDocPrinter call was not issued. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSplNoAddjob)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SPL_NO_ADDJOB)).c_str(), L"[0xbbc] An AddJob call was not issued. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPrintProcessorAlreadyInstalled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRINT_PROCESSOR_ALREADY_INSTALLED)).c_str(), L"[0xbbd] The specified print processor has already been installed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPrintMonitorAlreadyInstalled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRINT_MONITOR_ALREADY_INSTALLED)).c_str(), L"[0xbbe] The specified print monitor has already been installed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidPrintMonitor)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_PRINT_MONITOR)).c_str(), L"[0xbbf] The specified print monitor does not have the required functions. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPrintMonitorInUse)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRINT_MONITOR_IN_USE)).c_str(), L"[0xbc0] The specified print monitor is currently in use. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPrinterHasJobsQueued)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRINTER_HAS_JOBS_QUEUED)).c_str(), L"[0xbc1] The requested operation is not allowed when there are jobs queued to the printer. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSuccessRebootRequired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SUCCESS_REBOOT_REQUIRED)).c_str(), L"[0xbc2] The requested operation is successful. Changes will not be effective until the system is rebooted. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSuccessRestartRequired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SUCCESS_RESTART_REQUIRED)).c_str(), L"[0xbc3] The requested operation is successful. Changes will not be effective until the service is restarted. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPrinterNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRINTER_NOT_FOUND)).c_str(), L"[0xbc4] No printers were found. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPrinterDriverWarned)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRINTER_DRIVER_WARNED)).c_str(), L"[0xbc5] The printer driver is known to be unreliable. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPrinterDriverBlocked)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRINTER_DRIVER_BLOCKED)).c_str(), L"[0xbc6] The printer driver is known to harm the system. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPrinterDriverPackageInUse)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRINTER_DRIVER_PACKAGE_IN_USE)).c_str(), L"[0xbc7] The specified printer driver package is currently in use. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorCoreDriverPackageNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CORE_DRIVER_PACKAGE_NOT_FOUND)).c_str(), L"[0xbc8] Unable to find a core driver package that is required by the printer driver package. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorFailRebootRequired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_FAIL_REBOOT_REQUIRED)).c_str(), L"[0xbc9] The requested operation failed. A system reboot is required to roll back changes made. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorFailRebootInitiated)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_FAIL_REBOOT_INITIATED)).c_str(), L"[0xbca] The requested operation failed. A system reboot has been initiated to roll back changes made. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPrinterDriverDownloadNeeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRINTER_DRIVER_DOWNLOAD_NEEDED)).c_str(), L"[0xbcb] The specified printer driver was not found on the system and needs to be downloaded. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPrintJobRestartRequired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRINT_JOB_RESTART_REQUIRED)).c_str(), L"[0xbcc] The requested print job has failed to print. A print system update requires the job to be resubmitted. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidPrinterDriverManifest)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_PRINTER_DRIVER_MANIFEST)).c_str(), L"[0xbcd] The printer driver does not contain a valid manifest, or contains too many manifests. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPrinterNotShareable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRINTER_NOT_SHAREABLE)).c_str(), L"[0xbce] The specified printer cannot be shared. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorServerServiceCallRequiresSmb1)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SERVER_SERVICE_CALL_REQUIRES_SMB1)).c_str(), L"[0xbcf] The requested function requires SMB1 to be present and enabled. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNetworkAuthenticationPromptCanceled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NETWORK_AUTHENTICATION_PROMPT_CANCELED)).c_str(), L"[0xbd0] The user canceled the authentication prompt to a remote server. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorRemoteMailslotsDeprecated)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_REMOTE_MAILSLOTS_DEPRECATED)).c_str(), L"[0xbd1] The requested operation failed. Remote mailslots have been deprecated. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorRequestPaused)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_REQUEST_PAUSED)).c_str(), L"[0xbea] The operation was paused. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAppexecConditionNotSatisfied)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APPEXEC_CONDITION_NOT_SATISFIED)).c_str(), L"[0xbf4] The condition supplied for the app execution request was not satisfied, so the request was not performed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAppexecHandleInvalidated)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APPEXEC_HANDLE_INVALIDATED)).c_str(), L"[0xbf5] The supplied handle has been invalidated and may not be used for the requested operation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAppexecInvalidHostGeneration)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APPEXEC_INVALID_HOST_GENERATION)).c_str(), L"[0xbf6] The supplied host generation has been invalidated and may not be used for the requested operation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAppexecUnexpectedProcessRegistration)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APPEXEC_UNEXPECTED_PROCESS_REGISTRATION)).c_str(), L"[0xbf7] An attempt to register a process failed because the target host was not in a valid state to receive process registrations. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAppexecInvalidHostState)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APPEXEC_INVALID_HOST_STATE)).c_str(), L"[0xbf8] The host is not in a valid state to support the execution request. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAppexecNoDonor)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APPEXEC_NO_DONOR)).c_str(), L"[0xbf9] The operation was not completed because a required resource donor was not found for the host. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAppexecHostIdMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APPEXEC_HOST_ID_MISMATCH)).c_str(), L"[0xbfa] The operation was not completed because an unexpected host ID was encountered. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAppexecUnknownUser)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APPEXEC_UNKNOWN_USER)).c_str(), L"[0xbfb] The operation was not completed because the specified user was not known to the service. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAppexecAppCompatBlock)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APPEXEC_APP_COMPAT_BLOCK)).c_str(), L"[0xbfc] The application is blocked by app compat policy. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAppexecCallerWaitTimeout)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APPEXEC_CALLER_WAIT_TIMEOUT)).c_str(), L"[0xbfd] The caller specified wait timed out before the operation completed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAppexecCallerWaitTimeoutTermination)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APPEXEC_CALLER_WAIT_TIMEOUT_TERMINATION)).c_str(), L"[0xbfe] The caller specified wait timed out before the operation completed because a host termination is in queued. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAppexecCallerWaitTimeoutLicensing)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APPEXEC_CALLER_WAIT_TIMEOUT_LICENSING)).c_str(), L"[0xbff] The caller specified wait timed out before the operation completed because a licensing operation is being performed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAppexecCallerWaitTimeoutResources)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APPEXEC_CALLER_WAIT_TIMEOUT_RESOURCES)).c_str(), L"[0xc00] The caller specified wait timed out before the operation completed because resources are being acquired. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorVrfVolatileCfgAndIoEnabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_VRF_VOLATILE_CFG_AND_IO_ENABLED)).c_str(), L"[0xc08] Enabling driver verification from volatile command is currently not supported when both CFG and IO are enabled. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorVrfVolatileNotStoppable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_VRF_VOLATILE_NOT_STOPPABLE)).c_str(), L"[0xc09] Removal of current driver verification is not supported from volatile command. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorVrfVolatileSafeMode)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_VRF_VOLATILE_SAFE_MODE)).c_str(), L"[0xc0a] Enabling driver verification is not supported in safe mode. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorVrfVolatileNotRunnableSystem)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_VRF_VOLATILE_NOT_RUNNABLE_SYSTEM)).c_str(), L"[0xc0b] Enabling driver verification is not supported from volatile mode in current system. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorVrfVolatileNotSupportedRuleclass)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_VRF_VOLATILE_NOT_SUPPORTED_RULECLASS)).c_str(), L"[0xc0c] The specified rule class (a.k.a. flag) is not supported from volatile mode. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorVrfVolatileProtectedDriver)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_VRF_VOLATILE_PROTECTED_DRIVER)).c_str(), L"[0xc0d] The specified driver is protected and volatile verification is currently not supported. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorVrfVolatileNmiRegistered)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_VRF_VOLATILE_NMI_REGISTERED)).c_str(), L"[0xc0e] Enabling driver verification is not supported for a driver with  NMI callback(s) registered. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorVrfVolatileSettingsConflict)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_VRF_VOLATILE_SETTINGS_CONFLICT)).c_str(), L"[0xc0f] Volatile verification settings cannot be changed when verification is enabled from boot or DIF volatile verification is enabled. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorCarLkdInProgress)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CAR_LKD_IN_PROGRESS)).c_str(), L"[0xc10] Live memory dump generation is in progress. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDifZeroSizeInformation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DIF_ZERO_SIZE_INFORMATION)).c_str(), L"[0xc73] There is no captured information. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDifDriverPluginMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DIF_DRIVER_PLUGIN_MISMATCH)).c_str(), L"[0xc74] The given rule class ID is not registered by the caller. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDifDriverThunksNotAllowed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DIF_DRIVER_THUNKS_NOT_ALLOWED)).c_str(), L"[0xc75] Driver thunks are not added when kernel verification is in effect. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDifIocallbackNotReplaced)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DIF_IOCALLBACK_NOT_REPLACED)).c_str(), L"[0xc76] The specified driver is not associated with driver object or driver extension. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDifLivedumpLimitExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DIF_LIVEDUMP_LIMIT_EXCEEDED)).c_str(), L"[0xc77] Verifier's internal data size exceeds the limit of live dump secondary data. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDifVolatileSectionNotLocked)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DIF_VOLATILE_SECTION_NOT_LOCKED)).c_str(), L"[0xc78] Verification cannot start because an attempt to lock code or data section failed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDifVolatileDriverHotpatched)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DIF_VOLATILE_DRIVER_HOTPATCHED)).c_str(), L"[0xc79] DIF volatile verification is not supported for hotpatched driver. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDifVolatileInvalidInfo)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DIF_VOLATILE_INVALID_INFO)).c_str(), L"[0xc7a] The passed system DIF information is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDifVolatileDriverIsNotRunning)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DIF_VOLATILE_DRIVER_IS_NOT_RUNNING)).c_str(), L"[0xc7b] DIF volatile verification only supports on loaded drivers. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDifVolatilePluginIsNotRunning)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DIF_VOLATILE_PLUGIN_IS_NOT_RUNNING)).c_str(), L"[0xc7c] Currently no plugin is running. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDifVolatilePluginChangeNotAllowed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DIF_VOLATILE_PLUGIN_CHANGE_NOT_ALLOWED)).c_str(), L"[0xc7d] Currently running plugin must be removed before applying a new plugin. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDifVolatileNotAllowed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DIF_VOLATILE_NOT_ALLOWED)).c_str(), L"[0xc7e] The plugin is not allowed to run in volatile mode. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDifBindingApiNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DIF_BINDING_API_NOT_FOUND)).c_str(), L"[0xc7f] One or more DDI is not yet supported by DIF. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorIoReissueAsCached)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IO_REISSUE_AS_CACHED)).c_str(), L"[0xf6e] Reissue the given operation as a cached IO operation ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorWinsInternal)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WINS_INTERNAL)).c_str(), L"[0xfa0] WINS encountered an error while processing the command. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorCanNotDelLocalWins)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CAN_NOT_DEL_LOCAL_WINS)).c_str(), L"[0xfa1] The local WINS cannot be deleted. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorStaticInit)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_STATIC_INIT)).c_str(), L"[0xfa2] The importation from the file failed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorIncBackup)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INC_BACKUP)).c_str(), L"[0xfa3] The backup failed. Was a full backup done before? ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorFullBackup)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_FULL_BACKUP)).c_str(), L"[0xfa4] The backup failed. Check the directory to which you are backing the database. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorRecNonExistent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_REC_NON_EXISTENT)).c_str(), L"[0xfa5] The name does not exist in the WINS database. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorRplNotAllowed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RPL_NOT_ALLOWED)).c_str(), L"[0xfa6] Replication with a nonconfigured partner is not allowed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDhcpAddressConflict)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DHCP_ADDRESS_CONFLICT)).c_str(), L"[0x1004] The DHCP client has obtained an IP address that is already in use on the network. The local interface will be disabled until the DHCP client can obtain a new address. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorWmiGuidNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WMI_GUID_NOT_FOUND)).c_str(), L"[0x1068] The GUID passed was not recognized as valid by a WMI data provider. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorWmiInstanceNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WMI_INSTANCE_NOT_FOUND)).c_str(), L"[0x1069] The instance name passed was not recognized as valid by a WMI data provider. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorWmiItemidNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WMI_ITEMID_NOT_FOUND)).c_str(), L"[0x106a] The data item ID passed was not recognized as valid by a WMI data provider. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorWmiTryAgain)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WMI_TRY_AGAIN)).c_str(), L"[0x106b] The WMI request could not be completed and should be retried. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorWmiDpNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WMI_DP_NOT_FOUND)).c_str(), L"[0x106c] The WMI data provider could not be located. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorWmiUnresolvedInstanceRef)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WMI_UNRESOLVED_INSTANCE_REF)).c_str(), L"[0x106d] The WMI data provider references an instance set that has not been registered. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorWmiAlreadyEnabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WMI_ALREADY_ENABLED)).c_str(), L"[0x106e] The WMI data block or event notification has already been enabled. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorWmiGuidDisconnected)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WMI_GUID_DISCONNECTED)).c_str(), L"[0x106f] The WMI data block is no longer available. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorWmiServerUnavailable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WMI_SERVER_UNAVAILABLE)).c_str(), L"[0x1070] The WMI data service is not available. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorWmiDpFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WMI_DP_FAILED)).c_str(), L"[0x1071] The WMI data provider failed to carry out the request. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorWmiInvalidMof)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WMI_INVALID_MOF)).c_str(), L"[0x1072] The WMI MOF information is not valid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorWmiInvalidReginfo)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WMI_INVALID_REGINFO)).c_str(), L"[0x1073] The WMI registration information is not valid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorWmiAlreadyDisabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WMI_ALREADY_DISABLED)).c_str(), L"[0x1074] The WMI data block or event notification has already been disabled. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorWmiReadOnly)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WMI_READ_ONLY)).c_str(), L"[0x1075] The WMI data item or data block is read only. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorWmiSetFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WMI_SET_FAILURE)).c_str(), L"[0x1076] The WMI data item or data block could not be changed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNotAppcontainer)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NOT_APPCONTAINER)).c_str(), L"[0x109a] This operation is only valid in the context of an app container. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAppcontainerRequired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APPCONTAINER_REQUIRED)).c_str(), L"[0x109b] This application can only run in the context of an app container. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNotSupportedInAppcontainer)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NOT_SUPPORTED_IN_APPCONTAINER)).c_str(), L"[0x109c] This functionality is not supported in the context of an app container. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidPackageSidLength)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_PACKAGE_SID_LENGTH)).c_str(), L"[0x109d] The length of the SID supplied is not a valid length for app container SIDs. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidMedia)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_MEDIA)).c_str(), L"[0x10cc] The media identifier does not represent a valid medium. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidLibrary)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_LIBRARY)).c_str(), L"[0x10cd] The library identifier does not represent a valid library. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidMediaPool)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_MEDIA_POOL)).c_str(), L"[0x10ce] The media pool identifier does not represent a valid media pool. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDriveMediaMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DRIVE_MEDIA_MISMATCH)).c_str(), L"[0x10cf] The drive and medium are not compatible or exist in different libraries. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorMediaOffline)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MEDIA_OFFLINE)).c_str(), L"[0x10d0] The medium currently exists in an offline library and must be online to perform this operation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorLibraryOffline)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LIBRARY_OFFLINE)).c_str(), L"[0x10d1] The operation cannot be performed on an offline library. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorEmpty)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EMPTY)).c_str(), L"[0x10d2] The library, drive, or media pool is empty. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNotEmpty)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NOT_EMPTY)).c_str(), L"[0x10d3] The library, drive, or media pool must be empty to perform this operation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorMediaUnavailable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MEDIA_UNAVAILABLE)).c_str(), L"[0x10d4] No media is currently available in this media pool or library. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorResourceDisabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESOURCE_DISABLED)).c_str(), L"[0x10d5] A resource required for this operation is disabled. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidCleaner)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_CLEANER)).c_str(), L"[0x10d6] The media identifier does not represent a valid cleaner. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorUnableToClean)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_UNABLE_TO_CLEAN)).c_str(), L"[0x10d7] The drive cannot be cleaned or does not support cleaning. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorObjectNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_OBJECT_NOT_FOUND)).c_str(), L"[0x10d8] The object identifier does not represent a valid object. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDatabaseFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DATABASE_FAILURE)).c_str(), L"[0x10d9] Unable to read from or write to the database. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDatabaseFull)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DATABASE_FULL)).c_str(), L"[0x10da] The database is full. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorMediaIncompatible)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MEDIA_INCOMPATIBLE)).c_str(), L"[0x10db] The medium is not compatible with the device or media pool. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorResourceNotPresent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESOURCE_NOT_PRESENT)).c_str(), L"[0x10dc] The resource required for this operation does not exist. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidOperation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_OPERATION)).c_str(), L"[0x10dd] The operation identifier is not valid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorMediaNotAvailable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MEDIA_NOT_AVAILABLE)).c_str(), L"[0x10de] The media is not mounted or ready for use. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDeviceNotAvailable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DEVICE_NOT_AVAILABLE)).c_str(), L"[0x10df] The device is not ready for use. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorRequestRefused)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_REQUEST_REFUSED)).c_str(), L"[0x10e0] The operator or administrator has refused the request. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidDriveObject)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_DRIVE_OBJECT)).c_str(), L"[0x10e1] The drive identifier does not represent a valid drive. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorLibraryFull)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LIBRARY_FULL)).c_str(), L"[0x10e2] Library is full. No slot is available for use. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorMediumNotAccessible)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MEDIUM_NOT_ACCESSIBLE)).c_str(), L"[0x10e3] The transport cannot access the medium. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorUnableToLoadMedium)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_UNABLE_TO_LOAD_MEDIUM)).c_str(), L"[0x10e4] Unable to load the medium into the drive. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorUnableToInventoryDrive)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_UNABLE_TO_INVENTORY_DRIVE)).c_str(), L"[0x10e5] Unable to retrieve the drive status. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorUnableToInventorySlot)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_UNABLE_TO_INVENTORY_SLOT)).c_str(), L"[0x10e6] Unable to retrieve the slot status. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorUnableToInventoryTransport)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_UNABLE_TO_INVENTORY_TRANSPORT)).c_str(), L"[0x10e7] Unable to retrieve status about the transport. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorTransportFull)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_TRANSPORT_FULL)).c_str(), L"[0x10e8] Cannot use the transport because it is already in use. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorControllingIeport)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CONTROLLING_IEPORT)).c_str(), L"[0x10e9] Unable to open or close the inject/eject port. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorUnableToEjectMountedMedia)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_UNABLE_TO_EJECT_MOUNTED_MEDIA)).c_str(), L"[0x10ea] Unable to eject the medium because it is in a drive. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorCleanerSlotSet)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLEANER_SLOT_SET)).c_str(), L"[0x10eb] A cleaner slot is already reserved. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorCleanerSlotNotSet)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLEANER_SLOT_NOT_SET)).c_str(), L"[0x10ec] A cleaner slot is not reserved. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorCleanerCartridgeSpent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLEANER_CARTRIDGE_SPENT)).c_str(), L"[0x10ed] The cleaner cartridge has performed the maximum number of drive cleanings. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorUnexpectedOmid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_UNEXPECTED_OMID)).c_str(), L"[0x10ee] Unexpected on-medium identifier. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorCantDeleteLastItem)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CANT_DELETE_LAST_ITEM)).c_str(), L"[0x10ef] The last remaining item in this group or resource cannot be deleted. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorMessageExceedsMaxSize)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MESSAGE_EXCEEDS_MAX_SIZE)).c_str(), L"[0x10f0] The message provided exceeds the maximum size allowed for this parameter. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorVolumeContainsSysFiles)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_VOLUME_CONTAINS_SYS_FILES)).c_str(), L"[0x10f1] The volume contains system or paging files. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorIndigenousType)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INDIGENOUS_TYPE)).c_str(), L"[0x10f2] The media type cannot be removed from this library since at least one drive in the library reports it can support this media type. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNoSupportingDrives)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NO_SUPPORTING_DRIVES)).c_str(), L"[0x10f3] This offline media cannot be mounted on this system since no enabled drives are present which can be used. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorCleanerCartridgeInstalled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLEANER_CARTRIDGE_INSTALLED)).c_str(), L"[0x10f4] A cleaner cartridge is present in the tape library. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorIeportFull)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IEPORT_FULL)).c_str(), L"[0x10f5] Cannot use the inject/eject port because it is not empty. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorFileOffline)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_FILE_OFFLINE)).c_str(), L"[0x10fe] This file is currently not available for use on this computer. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorRemoteStorageNotActive)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_REMOTE_STORAGE_NOT_ACTIVE)).c_str(), L"[0x10ff] The remote storage service is not operational at this time. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorRemoteStorageMediaError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_REMOTE_STORAGE_MEDIA_ERROR)).c_str(), L"[0x1100] The remote storage service encountered a media error. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNotAReparsePoint)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NOT_A_REPARSE_POINT)).c_str(), L"[0x1126] The file or directory is not a reparse point. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorReparseAttributeConflict)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_REPARSE_ATTRIBUTE_CONFLICT)).c_str(), L"[0x1127] The reparse point attribute cannot be set because it conflicts with an existing attribute. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidReparseData)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_REPARSE_DATA)).c_str(), L"[0x1128] The data present in the reparse point buffer is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorReparseTagInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_REPARSE_TAG_INVALID)).c_str(), L"[0x1129] The tag present in the reparse point buffer is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorReparseTagMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_REPARSE_TAG_MISMATCH)).c_str(), L"[0x112a] There is a mismatch between the tag specified in the request and the tag present in the reparse point. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorReparsePointEncountered)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_REPARSE_POINT_ENCOUNTERED)).c_str(), L"[0x112b] The object manager encountered a reparse point while retrieving an object. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAppDataNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APP_DATA_NOT_FOUND)).c_str(), L"[0x1130] Fast Cache data not found. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAppDataExpired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APP_DATA_EXPIRED)).c_str(), L"[0x1131] Fast Cache data expired. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAppDataCorrupt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APP_DATA_CORRUPT)).c_str(), L"[0x1132] Fast Cache data corrupt. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAppDataLimitExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APP_DATA_LIMIT_EXCEEDED)).c_str(), L"[0x1133] Fast Cache data has exceeded its max size and cannot be updated. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAppDataRebootRequired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_APP_DATA_REBOOT_REQUIRED)).c_str(), L"[0x1134] Fast Cache has been ReArmed and requires a reboot until it can be updated. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSecurebootRollbackDetected)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SECUREBOOT_ROLLBACK_DETECTED)).c_str(), L"[0x1144] Secure Boot detected that rollback of protected data has been attempted. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSecurebootPolicyViolation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SECUREBOOT_POLICY_VIOLATION)).c_str(), L"[0x1145] The value is protected by Secure Boot policy and cannot be modified or deleted. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSecurebootInvalidPolicy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SECUREBOOT_INVALID_POLICY)).c_str(), L"[0x1146] The Secure Boot policy is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSecurebootPolicyPublisherNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SECUREBOOT_POLICY_PUBLISHER_NOT_FOUND)).c_str(), L"[0x1147] A new Secure Boot policy did not contain the current publisher on its update list. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSecurebootPolicyNotSigned)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SECUREBOOT_POLICY_NOT_SIGNED)).c_str(), L"[0x1148] The Secure Boot policy is either not signed or is signed by a non-trusted signer. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSecurebootNotEnabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SECUREBOOT_NOT_ENABLED)).c_str(), L"[0x1149] Secure Boot is not enabled on this machine. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSecurebootFileReplaced)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SECUREBOOT_FILE_REPLACED)).c_str(), L"[0x114a] Secure Boot requires that certain files and drivers are not replaced by other files or drivers. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSecurebootPolicyNotAuthorized)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SECUREBOOT_POLICY_NOT_AUTHORIZED)).c_str(), L"[0x114b] The Secure Boot Supplemental Policy file was not authorized on this machine. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSecurebootPolicyUnknown)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SECUREBOOT_POLICY_UNKNOWN)).c_str(), L"[0x114c] The Supplemental Policy is not recognized on this device. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSecurebootPolicyMissingAntirollbackversion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SECUREBOOT_POLICY_MISSING_ANTIROLLBACKVERSION)).c_str(), L"[0x114d] The Antirollback version was not found in the Secure Boot Policy. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSecurebootPlatformIdMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SECUREBOOT_PLATFORM_ID_MISMATCH)).c_str(), L"[0x114e] The Platform ID specified in the Secure Boot policy does not match the Platform ID on this device. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSecurebootPolicyRollbackDetected)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SECUREBOOT_POLICY_ROLLBACK_DETECTED)).c_str(), L"[0x114f] The Secure Boot policy file has an older Antirollback Version than this device. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSecurebootPolicyUpgradeMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SECUREBOOT_POLICY_UPGRADE_MISMATCH)).c_str(), L"[0x1150] The Secure Boot policy file does not match the upgraded legacy policy. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSecurebootRequiredPolicyFileMissing)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SECUREBOOT_REQUIRED_POLICY_FILE_MISSING)).c_str(), L"[0x1151] The Secure Boot policy file is required but could not be found. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSecurebootNotBasePolicy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SECUREBOOT_NOT_BASE_POLICY)).c_str(), L"[0x1152] Supplemental Secure Boot policy file can not be loaded as a base Secure Boot policy. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSecurebootNotSupplementalPolicy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SECUREBOOT_NOT_SUPPLEMENTAL_POLICY)).c_str(), L"[0x1153] Base Secure Boot policy file can not be loaded as a Supplemental Secure Boot policy. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorOffloadReadFltNotSupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_OFFLOAD_READ_FLT_NOT_SUPPORTED)).c_str(), L"[0x1158] The copy offload read operation is not supported by a filter. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorOffloadWriteFltNotSupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_OFFLOAD_WRITE_FLT_NOT_SUPPORTED)).c_str(), L"[0x1159] The copy offload write operation is not supported by a filter. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorOffloadReadFileNotSupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_OFFLOAD_READ_FILE_NOT_SUPPORTED)).c_str(), L"[0x115a] The copy offload read operation is not supported for the file. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorOffloadWriteFileNotSupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_OFFLOAD_WRITE_FILE_NOT_SUPPORTED)).c_str(), L"[0x115b] The copy offload write operation is not supported for the file. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAlreadyHasStreamId)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_ALREADY_HAS_STREAM_ID)).c_str(), L"[0x115c] This file is currently associated with a different stream id. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSmrGarbageCollectionRequired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SMR_GARBAGE_COLLECTION_REQUIRED)).c_str(), L"[0x115d] The volume must undergo garbage collection. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorWofWimHeaderCorrupt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WOF_WIM_HEADER_CORRUPT)).c_str(), L"[0x115e] The WOF driver encountered a corruption in WIM image's Header. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorWofWimResourceTableCorrupt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WOF_WIM_RESOURCE_TABLE_CORRUPT)).c_str(), L"[0x115f] The WOF driver encountered a corruption in WIM image's Resource Table. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorWofFileResourceTableCorrupt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WOF_FILE_RESOURCE_TABLE_CORRUPT)).c_str(), L"[0x1160] The WOF driver encountered a corruption in the compressed file's Resource Table. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorObjectIsImmutable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_OBJECT_IS_IMMUTABLE)).c_str(), L"[0x1161] The request cannot be completed as it requires modifying an immutable object. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorVolumeNotSisEnabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_VOLUME_NOT_SIS_ENABLED)).c_str(), L"[0x1194] Single Instance Storage is not available on this volume. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSystemIntegrityRollbackDetected)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SYSTEM_INTEGRITY_ROLLBACK_DETECTED)).c_str(), L"[0x11c6] Application Control detected that policy rollback has been attempted. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSystemIntegrityPolicyViolation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SYSTEM_INTEGRITY_POLICY_VIOLATION)).c_str(), L"[0x11c7] An Application Control policy has blocked this file. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSystemIntegrityInvalidPolicy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SYSTEM_INTEGRITY_INVALID_POLICY)).c_str(), L"[0x11c8] The Application Control policy is invalid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSystemIntegrityPolicyNotSigned)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SYSTEM_INTEGRITY_POLICY_NOT_SIGNED)).c_str(), L"[0x11c9] The Application Control policy is either not signed or is signed by a non-trusted signer. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSystemIntegrityTooManyPolicies)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SYSTEM_INTEGRITY_TOO_MANY_POLICIES)).c_str(), L"[0x11ca] The number of Application Control policies is out of limit. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSystemIntegritySupplementalPolicyNotAuthorized)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SYSTEM_INTEGRITY_SUPPLEMENTAL_POLICY_NOT_AUTHORIZED)).c_str(), L"[0x11cb] The Application Control supplemental policy is not authorized by an Application Control base policy. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSystemIntegrityReputationMalicious)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SYSTEM_INTEGRITY_REPUTATION_MALICIOUS)).c_str(), L"[0x11cc] An Application Control policy has blocked this file.  Malicious binary reputation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSystemIntegrityReputationPua)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SYSTEM_INTEGRITY_REPUTATION_PUA)).c_str(), L"[0x11cd] An Application Control policy has blocked this file.  Potentially unwanted application. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSystemIntegrityReputationDangerousExt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SYSTEM_INTEGRITY_REPUTATION_DANGEROUS_EXT)).c_str(), L"[0x11ce] An Application Control policy has blocked this file.  Dangerous file extension from the web. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSystemIntegrityReputationOffline)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SYSTEM_INTEGRITY_REPUTATION_OFFLINE)).c_str(), L"[0x11cf] An Application Control policy has blocked this file.  Unable to contact reputation service for unknown file. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorVsmNotInitialized)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_VSM_NOT_INITIALIZED)).c_str(), L"[0x11d0] Virtual Secure Mode (VSM) is not initialized. The hypervisor or VSM may not be present or enabled. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorVsmDmaProtectionNotInUse)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_VSM_DMA_PROTECTION_NOT_IN_USE)).c_str(), L"[0x11d1] The hypervisor is not protecting DMA because an IOMMU is not present or not enabled in the BIOS. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorVsmKeyCiPolicyRollbackDetected)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_VSM_KEY_CI_POLICY_ROLLBACK_DETECTED)).c_str(), L"[0x11d2] The Virtual Secure Mode (VSM) master encryption key was not provisioned due to an inadequate CI policy. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPlatformManifestNotAuthorized)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PLATFORM_MANIFEST_NOT_AUTHORIZED)).c_str(), L"[0x11da] The Platform Manifest file was not authorized on this machine. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPlatformManifestInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PLATFORM_MANIFEST_INVALID)).c_str(), L"[0x11db] The Platform Manifest file was not valid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPlatformManifestFileNotAuthorized)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PLATFORM_MANIFEST_FILE_NOT_AUTHORIZED)).c_str(), L"[0x11dc] The file is not authorized on this platform because an entry was not found in the Platform Manifest. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPlatformManifestCatalogNotAuthorized)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PLATFORM_MANIFEST_CATALOG_NOT_AUTHORIZED)).c_str(), L"[0x11dd] The catalog is not authorized on this platform because an entry was not found in the Platform Manifest. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPlatformManifestBinaryIdNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PLATFORM_MANIFEST_BINARY_ID_NOT_FOUND)).c_str(), L"[0x11de] The file is not authorized on this platform because a Binary ID was not found in the embedded signature. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPlatformManifestNotActive)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PLATFORM_MANIFEST_NOT_ACTIVE)).c_str(), L"[0x11df] No active Platform Manifest exists on this system. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorPlatformManifestNotSigned)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PLATFORM_MANIFEST_NOT_SIGNED)).c_str(), L"[0x11e0] The Platform Manifest file was not properly signed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSystemIntegrityReputationUnfriendlyFile)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SYSTEM_INTEGRITY_REPUTATION_UNFRIENDLY_FILE)).c_str(), L"[0x11e4] An Application Control policy has blocked this file.  Unfriendly file. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSystemIntegrityReputationUnattainable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SYSTEM_INTEGRITY_REPUTATION_UNATTAINABLE)).c_str(), L"[0x11e5] An Application Control policy has blocked this file.  Failed to obtain file reputation because an infrastructure issue occurred. Try again later. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSystemIntegrityReputationExplicitDenyFile)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SYSTEM_INTEGRITY_REPUTATION_EXPLICIT_DENY_FILE)).c_str(), L"[0x11e6] An Application Control policy has blocked this file.  Explicit denied file. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorSystemIntegrityWhqlNotSatisfied)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SYSTEM_INTEGRITY_WHQL_NOT_SATISFIED)).c_str(), L"[0x11e7] An Application Control policy has blocked this file.  File did not pass WHQL-only requirements. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDependentResourceExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DEPENDENT_RESOURCE_EXISTS)).c_str(), L"[0x1389] The operation cannot be completed because other resources are dependent on this resource. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDependencyNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DEPENDENCY_NOT_FOUND)).c_str(), L"[0x138a] The cluster resource dependency cannot be found. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDependencyAlreadyExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DEPENDENCY_ALREADY_EXISTS)).c_str(), L"[0x138b] The cluster resource cannot be made dependent on the specified resource because it is already dependent. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorResourceNotOnline)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESOURCE_NOT_ONLINE)).c_str(), L"[0x138c] The cluster resource is not online. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorHostNodeNotAvailable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_HOST_NODE_NOT_AVAILABLE)).c_str(), L"[0x138d] A cluster node is not available for this operation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorResourceNotAvailable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESOURCE_NOT_AVAILABLE)).c_str(), L"[0x138e] The cluster resource is not available. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorResourceNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESOURCE_NOT_FOUND)).c_str(), L"[0x138f] The cluster resource could not be found. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorShutdownCluster)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SHUTDOWN_CLUSTER)).c_str(), L"[0x1390] The cluster is being shut down. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorCantEvictActiveNode)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CANT_EVICT_ACTIVE_NODE)).c_str(), L"[0x1391] A cluster node cannot be evicted from the cluster unless the node is down or it is the last node. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorObjectAlreadyExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_OBJECT_ALREADY_EXISTS)).c_str(), L"[0x1392] The object already exists. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorObjectInList)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_OBJECT_IN_LIST)).c_str(), L"[0x1393] The object is already in the list. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorGroupNotAvailable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_GROUP_NOT_AVAILABLE)).c_str(), L"[0x1394] The cluster group is not available for any new requests. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorGroupNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_GROUP_NOT_FOUND)).c_str(), L"[0x1395] The cluster group could not be found. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorGroupNotOnline)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_GROUP_NOT_ONLINE)).c_str(), L"[0x1396] The operation could not be completed because the cluster group is not online. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorHostNodeNotResourceOwner)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_HOST_NODE_NOT_RESOURCE_OWNER)).c_str(), L"[0x1397] The operation failed because either the specified cluster node is not the owner of the resource, or the node is not a possible owner of the resource. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorHostNodeNotGroupOwner)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_HOST_NODE_NOT_GROUP_OWNER)).c_str(), L"[0x1398] The operation failed because either the specified cluster node is not the owner of the group, or the node is not a possible owner of the group. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorResmonCreateFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESMON_CREATE_FAILED)).c_str(), L"[0x1399] The cluster resource could not be created in the specified resource monitor. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorResmonOnlineFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESMON_ONLINE_FAILED)).c_str(), L"[0x139a] The cluster resource could not be brought online by the resource monitor. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorResourceOnline)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESOURCE_ONLINE)).c_str(), L"[0x139b] The operation could not be completed because the cluster resource is online. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorQuorumResource)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_QUORUM_RESOURCE)).c_str(), L"[0x139c] The cluster resource could not be deleted or brought offline because it is the quorum resource. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNotQuorumCapable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NOT_QUORUM_CAPABLE)).c_str(), L"[0x139d] The cluster could not make the specified resource a quorum resource because it is not capable of being a quorum resource. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterShuttingDown)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_SHUTTING_DOWN)).c_str(), L"[0x139e] The cluster software is shutting down. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidState)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_STATE)).c_str(), L"[0x139f] The group or resource is not in the correct state to perform the requested operation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorResourcePropertiesStored)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESOURCE_PROPERTIES_STORED)).c_str(), L"[0x13a0] The properties were stored but not all changes will take effect until the next time the resource is brought online. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNotQuorumClass)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NOT_QUORUM_CLASS)).c_str(), L"[0x13a1] The cluster could not make the specified resource a quorum resource because it does not belong to a shared storage class. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorCoreResource)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CORE_RESOURCE)).c_str(), L"[0x13a2] The cluster resource could not be deleted since it is a core resource. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorQuorumResourceOnlineFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_QUORUM_RESOURCE_ONLINE_FAILED)).c_str(), L"[0x13a3] The quorum resource failed to come online. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorQuorumlogOpenFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_QUORUMLOG_OPEN_FAILED)).c_str(), L"[0x13a4] The quorum log could not be created or mounted successfully. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterlogCorrupt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTERLOG_CORRUPT)).c_str(), L"[0x13a5] The cluster log is corrupt. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterlogRecordExceedsMaxsize)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTERLOG_RECORD_EXCEEDS_MAXSIZE)).c_str(), L"[0x13a6] The record could not be written to the cluster log since it exceeds the maximum size. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterlogExceedsMaxsize)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTERLOG_EXCEEDS_MAXSIZE)).c_str(), L"[0x13a7] The cluster log exceeds its maximum size. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterlogChkpointNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTERLOG_CHKPOINT_NOT_FOUND)).c_str(), L"[0x13a8] No checkpoint record was found in the cluster log. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterlogNotEnoughSpace)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTERLOG_NOT_ENOUGH_SPACE)).c_str(), L"[0x13a9] The minimum required disk space needed for logging is not available. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorQuorumOwnerAlive)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_QUORUM_OWNER_ALIVE)).c_str(), L"[0x13aa] The cluster node failed to take control of the quorum resource because the resource is owned by another active node. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNetworkNotAvailable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NETWORK_NOT_AVAILABLE)).c_str(), L"[0x13ab] A cluster network is not available for this operation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNodeNotAvailable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NODE_NOT_AVAILABLE)).c_str(), L"[0x13ac] A cluster node is not available for this operation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorAllNodesNotAvailable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_ALL_NODES_NOT_AVAILABLE)).c_str(), L"[0x13ad] All cluster nodes must be running to perform this operation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorResourceFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESOURCE_FAILED)).c_str(), L"[0x13ae] A cluster resource failed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterInvalidNode)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_INVALID_NODE)).c_str(), L"[0x13af] The cluster node is not valid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNodeExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NODE_EXISTS)).c_str(), L"[0x13b0] The cluster node already exists. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterJoinInProgress)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_JOIN_IN_PROGRESS)).c_str(), L"[0x13b1] A node is in the process of joining the cluster. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNodeNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NODE_NOT_FOUND)).c_str(), L"[0x13b2] The cluster node was not found. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterLocalNodeNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_LOCAL_NODE_NOT_FOUND)).c_str(), L"[0x13b3] The cluster local node information was not found. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNetworkExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NETWORK_EXISTS)).c_str(), L"[0x13b4] The cluster network already exists. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNetworkNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NETWORK_NOT_FOUND)).c_str(), L"[0x13b5] The cluster network was not found. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNetinterfaceExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NETINTERFACE_EXISTS)).c_str(), L"[0x13b6] The cluster network interface already exists. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNetinterfaceNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NETINTERFACE_NOT_FOUND)).c_str(), L"[0x13b7] The cluster network interface was not found. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterInvalidRequest)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_INVALID_REQUEST)).c_str(), L"[0x13b8] The cluster request is not valid for this object. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterInvalidNetworkProvider)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_INVALID_NETWORK_PROVIDER)).c_str(), L"[0x13b9] The cluster network provider is not valid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNodeDown)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NODE_DOWN)).c_str(), L"[0x13ba] The cluster node is down. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNodeUnreachable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NODE_UNREACHABLE)).c_str(), L"[0x13bb] The cluster node is not reachable. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNodeNotMember)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NODE_NOT_MEMBER)).c_str(), L"[0x13bc] The cluster node is not a member of the cluster. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterJoinNotInProgress)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_JOIN_NOT_IN_PROGRESS)).c_str(), L"[0x13bd] A cluster join operation is not in progress. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterInvalidNetwork)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_INVALID_NETWORK)).c_str(), L"[0x13be] The cluster network is not valid. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNodeUp)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NODE_UP)).c_str(), L"[0x13c0] The cluster node is up. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterIpaddrInUse)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_IPADDR_IN_USE)).c_str(), L"[0x13c1] The cluster IP address is already in use. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNodeNotPaused)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NODE_NOT_PAUSED)).c_str(), L"[0x13c2] The cluster node is not paused. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNoSecurityContext)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NO_SECURITY_CONTEXT)).c_str(), L"[0x13c3] No cluster security context is available. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNetworkNotInternal)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NETWORK_NOT_INTERNAL)).c_str(), L"[0x13c4] The cluster network is not configured for internal cluster communication. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNodeAlreadyUp)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NODE_ALREADY_UP)).c_str(), L"[0x13c5] The cluster node is already up. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNodeAlreadyDown)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NODE_ALREADY_DOWN)).c_str(), L"[0x13c6] The cluster node is already down. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNetworkAlreadyOnline)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NETWORK_ALREADY_ONLINE)).c_str(), L"[0x13c7] The cluster network is already online. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNetworkAlreadyOffline)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NETWORK_ALREADY_OFFLINE)).c_str(), L"[0x13c8] The cluster network is already offline. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNodeAlreadyMember)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NODE_ALREADY_MEMBER)).c_str(), L"[0x13c9] The cluster node is already a member of the cluster. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterLastInternalNetwork)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_LAST_INTERNAL_NETWORK)).c_str(), L"[0x13ca] The cluster network is the only one configured for internal cluster communication between two or more active cluster nodes. The internal communication capability cannot be removed from the network. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNetworkHasDependents)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NETWORK_HAS_DEPENDENTS)).c_str(), L"[0x13cb] One or more cluster resources depend on the network to provide service to clients. The client access capability cannot be removed from the network. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidOperationOnQuorum)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_OPERATION_ON_QUORUM)).c_str(), L"[0x13cc] This operation cannot currently be performed on the cluster group containing the quorum resource. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDependencyNotAllowed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DEPENDENCY_NOT_ALLOWED)).c_str(), L"[0x13cd] The cluster quorum resource is not allowed to have any dependencies. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNodePaused)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NODE_PAUSED)).c_str(), L"[0x13ce] The cluster node is paused. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNodeCantHostResource)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NODE_CANT_HOST_RESOURCE)).c_str(), L"[0x13cf] The cluster resource cannot be brought online. The owner node cannot run this resource. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNodeNotReady)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NODE_NOT_READY)).c_str(), L"[0x13d0] The cluster node is not ready to perform the requested operation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNodeShuttingDown)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NODE_SHUTTING_DOWN)).c_str(), L"[0x13d1] The cluster node is shutting down. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterJoinAborted)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_JOIN_ABORTED)).c_str(), L"[0x13d2] The cluster join operation was aborted. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterIncompatibleVersions)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_INCOMPATIBLE_VERSIONS)).c_str(), L"[0x13d3] The node failed to join the cluster because the joining node and other nodes in the cluster have incompatible operating system versions. To get more information about operating system versions of the cluster, run the Validate a Configuration Wizard or the Test-Cluster Windows PowerShell cmdlet. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterMaxnumOfResourcesExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_MAXNUM_OF_RESOURCES_EXCEEDED)).c_str(), L"[0x13d4] This resource cannot be created because the cluster has reached the limit on the number of resources it can monitor. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterSystemConfigChanged)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_SYSTEM_CONFIG_CHANGED)).c_str(), L"[0x13d5] The system configuration changed during the cluster join or form operation. The join or form operation was aborted. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterResourceTypeNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_RESOURCE_TYPE_NOT_FOUND)).c_str(), L"[0x13d6] The specified resource type was not found. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterRestypeNotSupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_RESTYPE_NOT_SUPPORTED)).c_str(), L"[0x13d7] The specified node does not support a resource of this type. This may be due to version inconsistencies or due to the absence of the resource DLL on this node. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterResnameNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_RESNAME_NOT_FOUND)).c_str(), L"[0x13d8] The specified resource name is not supported by this resource DLL. This may be due to a bad (or changed) name supplied to the resource DLL. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNoRpcPackagesRegistered)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NO_RPC_PACKAGES_REGISTERED)).c_str(), L"[0x13d9] No authentication package could be registered with the RPC server. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterOwnerNotInPreflist)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_OWNER_NOT_IN_PREFLIST)).c_str(), L"[0x13da] You cannot bring the group online because the owner of the group is not in the preferred list for the group. To change the owner node for the group, move the group. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterDatabaseSeqmismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_DATABASE_SEQMISMATCH)).c_str(), L"[0x13db] The join operation failed because the cluster database sequence number has changed or is incompatible with the locker node. This may happen during a join operation if the cluster database was changing during the join. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorResmonInvalidState)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESMON_INVALID_STATE)).c_str(), L"[0x13dc] The resource monitor will not allow the fail operation to be performed while the resource is in its current state. This may happen if the resource is in a pending state. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterGumNotLocker)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_GUM_NOT_LOCKER)).c_str(), L"[0x13dd] A non locker code got a request to reserve the lock for making global updates. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorQuorumDiskNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_QUORUM_DISK_NOT_FOUND)).c_str(), L"[0x13de] The quorum disk could not be located by the cluster service. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDatabaseBackupCorrupt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DATABASE_BACKUP_CORRUPT)).c_str(), L"[0x13df] The backed up cluster database is possibly corrupt. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNodeAlreadyHasDfsRoot)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NODE_ALREADY_HAS_DFS_ROOT)).c_str(), L"[0x13e0] A DFS root already exists in this cluster node. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorResourcePropertyUnchangeable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESOURCE_PROPERTY_UNCHANGEABLE)).c_str(), L"[0x13e1] An attempt to modify a resource property failed because it conflicts with another existing property. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNoAdminAccessPoint)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NO_ADMIN_ACCESS_POINT)).c_str(), L"[0x13e2] This operation is not supported on a cluster without an Administrator Access Point. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterMembershipInvalidState)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_MEMBERSHIP_INVALID_STATE)).c_str(), L"[0x1702] An operation was attempted that is incompatible with the current membership state of the node. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterQuorumlogNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_QUORUMLOG_NOT_FOUND)).c_str(), L"[0x1703] The quorum resource does not contain the quorum log. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterMembershipHalt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_MEMBERSHIP_HALT)).c_str(), L"[0x1704] The membership engine requested shutdown of the cluster service on this node. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterInstanceIdMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_INSTANCE_ID_MISMATCH)).c_str(), L"[0x1705] The join operation failed because the cluster instance ID of the joining node does not match the cluster instance ID of the sponsor node. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNetworkNotFoundForIp)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NETWORK_NOT_FOUND_FOR_IP)).c_str(), L"[0x1706] A matching cluster network for the specified IP address could not be found. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterPropertyDataTypeMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_PROPERTY_DATA_TYPE_MISMATCH)).c_str(), L"[0x1707] The actual data type of the property did not match the expected data type of the property. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterEvictWithoutCleanup)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_EVICT_WITHOUT_CLEANUP)).c_str(), L"[0x1708] The cluster node was evicted from the cluster successfully, but the node was not cleaned up. To determine what cleanup steps failed and how to recover, see the Failover Clustering application event log using Event Viewer. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterParameterMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_PARAMETER_MISMATCH)).c_str(), L"[0x1709] Two or more parameter values specified for a resource's properties are in conflict. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNodeCannotBeClustered)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NODE_CANNOT_BE_CLUSTERED)).c_str(), L"[0x170a] This computer cannot be made a member of a cluster. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterWrongOsVersion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_WRONG_OS_VERSION)).c_str(), L"[0x170b] This computer cannot be made a member of a cluster because it does not have the correct version of Windows installed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterCantCreateDupClusterName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_CANT_CREATE_DUP_CLUSTER_NAME)).c_str(), L"[0x170c] A cluster cannot be created with the specified cluster name because that cluster name is already in use. Specify a different name for the cluster. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorCluscfgAlreadyCommitted)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSCFG_ALREADY_COMMITTED)).c_str(), L"[0x170d] The cluster configuration action has already been committed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorCluscfgRollbackFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSCFG_ROLLBACK_FAILED)).c_str(), L"[0x170e] The cluster configuration action could not be rolled back. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorCluscfgSystemDiskDriveLetterConflict)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSCFG_SYSTEM_DISK_DRIVE_LETTER_CONFLICT)).c_str(), L"[0x170f] The drive letter assigned to a system disk on one node conflicted with the drive letter assigned to a disk on another node. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterOldVersion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_OLD_VERSION)).c_str(), L"[0x1710] One or more nodes in the cluster are running a version of Windows that does not support this operation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterMismatchedComputerAcctName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_MISMATCHED_COMPUTER_ACCT_NAME)).c_str(), L"[0x1711] The name of the corresponding computer account doesn't match the Network Name for this resource. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNoNetAdapters)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NO_NET_ADAPTERS)).c_str(), L"[0x1712] No network adapters are available. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterPoisoned)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_POISONED)).c_str(), L"[0x1713] The cluster node has been poisoned. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterGroupMoving)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_GROUP_MOVING)).c_str(), L"[0x1714] The group is unable to accept the request since it is moving to another node. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterResourceTypeBusy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_RESOURCE_TYPE_BUSY)).c_str(), L"[0x1715] The resource type cannot accept the request since is too busy performing another operation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorResourceCallTimedOut)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESOURCE_CALL_TIMED_OUT)).c_str(), L"[0x1716] The call to the cluster resource DLL timed out. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorInvalidClusterIpv6Address)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_CLUSTER_IPV6_ADDRESS)).c_str(), L"[0x1717] The address is not valid for an IPv6 Address resource. A global IPv6 address is required, and it must match a cluster network. Compatibility addresses are not permitted. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterInternalInvalidFunction)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_INTERNAL_INVALID_FUNCTION)).c_str(), L"[0x1718] An internal cluster error occurred. A call to an invalid function was attempted. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterParameterOutOfBounds)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_PARAMETER_OUT_OF_BOUNDS)).c_str(), L"[0x1719] A parameter value is out of acceptable range. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterPartialSend)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_PARTIAL_SEND)).c_str(), L"[0x171a] A network error occurred while sending data to another node in the cluster. The number of bytes transmitted was less than required. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterRegistryInvalidFunction)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_REGISTRY_INVALID_FUNCTION)).c_str(), L"[0x171b] An invalid cluster registry operation was attempted. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterInvalidStringTermination)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_INVALID_STRING_TERMINATION)).c_str(), L"[0x171c] An input string of characters is not properly terminated. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterInvalidStringFormat)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_INVALID_STRING_FORMAT)).c_str(), L"[0x171d] An input string of characters is not in a valid format for the data it represents. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterDatabaseTransactionInProgress)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_DATABASE_TRANSACTION_IN_PROGRESS)).c_str(), L"[0x171e] An internal cluster error occurred. A cluster database transaction was attempted while a transaction was already in progress. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterDatabaseTransactionNotInProgress)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_DATABASE_TRANSACTION_NOT_IN_PROGRESS)).c_str(), L"[0x171f] An internal cluster error occurred. There was an attempt to commit a cluster database transaction while no transaction was in progress. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNullData)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NULL_DATA)).c_str(), L"[0x1720] An internal cluster error occurred. Data was not properly initialized. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterPartialRead)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_PARTIAL_READ)).c_str(), L"[0x1721] An error occurred while reading from a stream of data. An unexpected number of bytes was returned. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterPartialWrite)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_PARTIAL_WRITE)).c_str(), L"[0x1722] An error occurred while writing to a stream of data. The required number of bytes could not be written. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterCantDeserializeData)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_CANT_DESERIALIZE_DATA)).c_str(), L"[0x1723] An error occurred while deserializing a stream of cluster data. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDependentResourcePropertyConflict)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DEPENDENT_RESOURCE_PROPERTY_CONFLICT)).c_str(), L"[0x1724] One or more property values for this resource are in conflict with one or more property values associated with its dependent resource(s). ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNoQuorum)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NO_QUORUM)).c_str(), L"[0x1725] A quorum of cluster nodes was not present to form a cluster. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterInvalidIpv6Network)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_INVALID_IPV6_NETWORK)).c_str(), L"[0x1726] The cluster network is not valid for an IPv6 Address resource, or it does not match the configured address. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterInvalidIpv6TunnelNetwork)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_INVALID_IPV6_TUNNEL_NETWORK)).c_str(), L"[0x1727] The cluster network is not valid for an IPv6 Tunnel resource. Check the configuration of the IP Address resource on which the IPv6 Tunnel resource depends. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorQuorumNotAllowedInThisGroup)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_QUORUM_NOT_ALLOWED_IN_THIS_GROUP)).c_str(), L"[0x1728] Quorum resource cannot reside in the Available Storage group. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDependencyTreeTooComplex)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DEPENDENCY_TREE_TOO_COMPLEX)).c_str(), L"[0x1729] The dependencies for this resource are nested too deeply. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorExceptionInResourceCall)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EXCEPTION_IN_RESOURCE_CALL)).c_str(), L"[0x172a] The call into the resource DLL raised an unhandled exception. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterRhsFailedInitialization)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_RHS_FAILED_INITIALIZATION)).c_str(), L"[0x172b] The RHS process failed to initialize. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNotInstalled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NOT_INSTALLED)).c_str(), L"[0x172c] The Failover Clustering feature is not installed on this node. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterResourcesMustBeOnlineOnTheSameNode)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_RESOURCES_MUST_BE_ONLINE_ON_THE_SAME_NODE)).c_str(), L"[0x172d] The resources must be online on the same node for this operation ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterMaxNodesInCluster)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_MAX_NODES_IN_CLUSTER)).c_str(), L"[0x172e] A new node can not be added since this cluster is already at its maximum number of nodes. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterTooManyNodes)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_TOO_MANY_NODES)).c_str(), L"[0x172f] This cluster can not be created since the specified number of nodes exceeds the maximum allowed limit. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterObjectAlreadyUsed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_OBJECT_ALREADY_USED)).c_str(), L"[0x1730] An attempt to use the specified cluster name failed because an enabled computer object with the given name already exists in the domain. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNoncoreGroupsFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NONCORE_GROUPS_FOUND)).c_str(), L"[0x1731] This cluster cannot be destroyed. It has non-core application groups which must be deleted before the cluster can be destroyed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorFileShareResourceConflict)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_FILE_SHARE_RESOURCE_CONFLICT)).c_str(), L"[0x1732] File share associated with file share witness resource cannot be hosted by this cluster or any of its nodes. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterEvictInvalidRequest)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_EVICT_INVALID_REQUEST)).c_str(), L"[0x1733] Eviction of this node is invalid at this time. Due to quorum requirements node eviction will result in cluster shutdown. If it is the last node in the cluster, destroy cluster command should be used. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterSingletonResource)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_SINGLETON_RESOURCE)).c_str(), L"[0x1734] Only one instance of this resource type is allowed in the cluster. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterGroupSingletonResource)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_GROUP_SINGLETON_RESOURCE)).c_str(), L"[0x1735] Only one instance of this resource type is allowed per resource group. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterResourceProviderFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_RESOURCE_PROVIDER_FAILED)).c_str(), L"[0x1736] The resource failed to come online due to the failure of one or more provider resources. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterResourceConfigurationError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_RESOURCE_CONFIGURATION_ERROR)).c_str(), L"[0x1737] The resource has indicated that it cannot come online on any node. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterGroupBusy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_GROUP_BUSY)).c_str(), L"[0x1738] The current operation cannot be performed on this group at this time. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNotSharedVolume)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NOT_SHARED_VOLUME)).c_str(), L"[0x1739] The directory or file is not located on a cluster shared volume. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterInvalidSecurityDescriptor)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_INVALID_SECURITY_DESCRIPTOR)).c_str(), L"[0x173a] The Security Descriptor does not meet the requirements for a cluster. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterSharedVolumesInUse)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_SHARED_VOLUMES_IN_USE)).c_str(), L"[0x173b] There is one or more shared volumes resources configured in the cluster. Those resources must be moved to available storage in order for operation to succeed. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterUseSharedVolumesApi)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_USE_SHARED_VOLUMES_API)).c_str(), L"[0x173c] This group or resource cannot be directly manipulated. Use shared volume APIs to perform desired operation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterBackupInProgress)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_BACKUP_IN_PROGRESS)).c_str(), L"[0x173d] Back up is in progress. Please wait for backup completion before trying this operation again. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNonCsvPath)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NON_CSV_PATH)).c_str(), L"[0x173e] The path does not belong to a cluster shared volume. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorCsvVolumeNotLocal)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CSV_VOLUME_NOT_LOCAL)).c_str(), L"[0x173f] The cluster shared volume is not locally mounted on this node. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterWatchdogTerminating)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_WATCHDOG_TERMINATING)).c_str(), L"[0x1740] The cluster watchdog is terminating. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterResourceVetoedMoveIncompatibleNodes)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_RESOURCE_VETOED_MOVE_INCOMPATIBLE_NODES)).c_str(), L"[0x1741] A resource vetoed a move between two nodes because they are incompatible. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterInvalidNodeWeight)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_INVALID_NODE_WEIGHT)).c_str(), L"[0x1742] The request is invalid either because node weight cannot be changed while the cluster is in disk-only quorum mode, or because changing the node weight would violate the minimum cluster quorum requirements. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterResourceVetoedCall)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_RESOURCE_VETOED_CALL)).c_str(), L"[0x1743] The resource vetoed the call. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorResmonSystemResourcesLacking)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESMON_SYSTEM_RESOURCES_LACKING)).c_str(), L"[0x1744] Resource could not start or run because it could not reserve sufficient system resources. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterResourceVetoedMoveNotEnoughResourcesOnDestination)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_RESOURCE_VETOED_MOVE_NOT_ENOUGH_RESOURCES_ON_DESTINATION)).c_str(), L"[0x1745] A resource vetoed a move between two nodes because the destination currently does not have enough resources to complete the operation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterResourceVetoedMoveNotEnoughResourcesOnSource)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_RESOURCE_VETOED_MOVE_NOT_ENOUGH_RESOURCES_ON_SOURCE)).c_str(), L"[0x1746]  A resource vetoed a move between two nodes because the source currently does not have enough resources to complete the operation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterGroupQueued)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_GROUP_QUEUED)).c_str(), L"[0x1747]  The requested operation can not be completed because the group is queued for an operation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterResourceLockedStatus)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_RESOURCE_LOCKED_STATUS)).c_str(), L"[0x1748]  The requested operation can not be completed because a resource has locked status. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterSharedVolumeFailoverNotAllowed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_SHARED_VOLUME_FAILOVER_NOT_ALLOWED)).c_str(), L"[0x1749]  The resource cannot move to another node because a cluster shared volume vetoed the operation. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNodeDrainInProgress)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NODE_DRAIN_IN_PROGRESS)).c_str(), L"[0x174a]  A node drain is already in progress. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterDiskNotConnected)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_DISK_NOT_CONNECTED)).c_str(), L"[0x174b]  Clustered storage is not connected to the node. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorDiskNotCsvCapable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DISK_NOT_CSV_CAPABLE)).c_str(), L"[0x174c]  The disk is not configured in a way to be used with CSV. CSV disks must have at least one partition that is formatted with NTFS or REFS. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorResourceNotInAvailableStorage)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESOURCE_NOT_IN_AVAILABLE_STORAGE)).c_str(), L"[0x174d]  The resource must be part of the Available Storage group to complete this action. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterSharedVolumeRedirected)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_SHARED_VOLUME_REDIRECTED)).c_str(), L"[0x174e]  CSVFS failed operation as volume is in redirected mode. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterSharedVolumeNotRedirected)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_SHARED_VOLUME_NOT_REDIRECTED)).c_str(), L"[0x174f]  CSVFS failed operation as volume is not in redirected mode. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterCannotReturnProperties)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_CANNOT_RETURN_PROPERTIES)).c_str(), L"[0x1750]  Cluster properties cannot be returned at this time. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterResourceContainsUnsupportedDiffAreaForSharedVolumes)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_RESOURCE_CONTAINS_UNSUPPORTED_DIFF_AREA_FOR_SHARED_VOLUMES)).c_str(), L"[0x1751]  The clustered disk resource contains software snapshot diff area that are not supported for Cluster Shared Volumes. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterResourceIsInMaintenanceMode)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_RESOURCE_IS_IN_MAINTENANCE_MODE)).c_str(), L"[0x1752]  The operation cannot be completed because the resource is in maintenance mode. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterAffinityConflict)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_AFFINITY_CONFLICT)).c_str(), L"[0x1753]  The operation cannot be completed because of cluster affinity conflicts ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterResourceIsReplicaVirtualMachine)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_RESOURCE_IS_REPLICA_VIRTUAL_MACHINE)).c_str(), L"[0x1754]  The operation cannot be completed because the resource is a replica virtual machine. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterUpgradeIncompatibleVersions)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_UPGRADE_INCOMPATIBLE_VERSIONS)).c_str(), L"[0x1755]  The Cluster Functional Level could not be increased because not all nodes in the cluster support the updated version. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterUpgradeFixQuorumNotSupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_UPGRADE_FIX_QUORUM_NOT_SUPPORTED)).c_str(), L"[0x1756]  Updating the cluster functional level failed because the cluster is running in fix quorum mode. Start additional nodes which are members of the cluster until the cluster reaches quorum and the cluster will automatically switch out of fix quorum mode, or stop and restart the cluster without the FixQuorum switch. Once the cluster is out of fix quorum mode retry the Update-ClusterFunctionalLevel PowerShell cmdlet to update the cluster functional level. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterUpgradeRestartRequired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_UPGRADE_RESTART_REQUIRED)).c_str(), L"[0x1757]  The cluster functional level has been successfully updated but not all features are available yet. Restart the cluster by using the Stop-Cluster PowerShell cmdlet followed by the Start-Cluster PowerShell cmdlet and all cluster features will be available. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterUpgradeInProgress)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_UPGRADE_IN_PROGRESS)).c_str(), L"[0x1758]  The cluster is currently performing a version upgrade. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterUpgradeIncomplete)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_UPGRADE_INCOMPLETE)).c_str(), L"[0x1759]  The cluster did not successfully complete the version upgrade. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNodeInGracePeriod)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NODE_IN_GRACE_PERIOD)).c_str(), L"[0x175a]  The cluster node is in grace period. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterCsvIoPauseTimeout)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_CSV_IO_PAUSE_TIMEOUT)).c_str(), L"[0x175b]  The operation has failed because CSV volume was not able to recover in time specified on this file object. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorNodeNotActiveClusterMember)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NODE_NOT_ACTIVE_CLUSTER_MEMBER)).c_str(), L"[0x175c]  The operation failed because the requested node is not currently part of active cluster membership. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterResourceNotMonitored)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_RESOURCE_NOT_MONITORED)).c_str(), L"[0x175d]  The operation failed because the requested cluster resource is currently unmonitored. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterResourceDoesNotSupportUnmonitored)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_RESOURCE_DOES_NOT_SUPPORT_UNMONITORED)).c_str(), L"[0x175e]  The operation failed because a resource does not support running in an unmonitored state. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterResourceIsReplicated)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_RESOURCE_IS_REPLICATED)).c_str(), L"[0x175f]  The operation cannot be completed because a resource participates in replication. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNodeIsolated)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NODE_ISOLATED)).c_str(), L"[0x1760]  The operation failed because the requested cluster node has been isolated ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterNodeQuarantined)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_NODE_QUARANTINED)).c_str(), L"[0x1761]  The operation failed because the requested cluster node has been quarantined ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterDatabaseUpdateConditionFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_DATABASE_UPDATE_CONDITION_FAILED)).c_str(), L"[0x1762]  The operation failed because the specified database update condition was not met ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterSpaceDegraded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_SPACE_DEGRADED)).c_str(), L"[0x1763]  A clustered space is in a degraded condition and the requested action cannot be completed at this time. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterTokenDelegationNotSupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_TOKEN_DELEGATION_NOT_SUPPORTED)).c_str(), L"[0x1764]  The operation failed because token delegation for this control is not supported. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterCsvInvalidHandle)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_CSV_INVALID_HANDLE)).c_str(), L"[0x1765]  The operation has failed because CSV has invalidated this file object. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterCsvSupportedOnlyOnCoordinator)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_CSV_SUPPORTED_ONLY_ON_COORDINATOR)).c_str(), L"[0x1766]  This operation is supported only on the CSV coordinator node. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorGroupsetNotAvailable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_GROUPSET_NOT_AVAILABLE)).c_str(), L"[0x1767]  The cluster group set is not available for any further requests. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorGroupsetNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_GROUPSET_NOT_FOUND)).c_str(), L"[0x1768]  The cluster group set could not be found. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorGroupsetCantProvide)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_GROUPSET_CANT_PROVIDE)).c_str(), L"[0x1769]  The action cannot be completed at this time because the cluster group set would fall below quorum and not be able to act as a provider. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterFaultDomainParentNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_FAULT_DOMAIN_PARENT_NOT_FOUND)).c_str(), L"[0x176a]  The specified parent fault domain is not found. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterFaultDomainInvalidHierarchy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_FAULT_DOMAIN_INVALID_HIERARCHY)).c_str(), L"[0x176b]  The fault domain cannot be a child of the parent specified. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterFaultDomainFailedS2DValidation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_FAULT_DOMAIN_FAILED_S2D_VALIDATION)).c_str(), L"[0x176c]  Storage Spaces Direct has rejected the proposed fault domain changes because it impacts the fault tolerance of the storage. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterFaultDomainS2DConnectivityLoss)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_FAULT_DOMAIN_S2D_CONNECTIVITY_LOSS)).c_str(), L"[0x176d]  Storage Spaces Direct has rejected the proposed fault domain changes because it reduces the storage connected to the system. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClusterInvalidInfrastructureFileserverName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTER_INVALID_INFRASTRUCTURE_FILESERVER_NAME)).c_str(), L"[0x176e]  Cluster infrastructure file server creation failed because a valid non-empty file server name was not provided. ");
}

TEST(SystemErrorsTest1500, SystemMessageErrorClustersetManagementClusterUnreachable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_CLUSTERSET_MANAGEMENT_CLUSTER_UNREACHABLE)).c_str(), L"[0x176f]  The action cannot be completed because the cluster set management cluster is unreachable. ");
}
