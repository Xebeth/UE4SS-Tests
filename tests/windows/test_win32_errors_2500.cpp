#include <format>
#include <windows.h>
#include <gtest/gtest.h>

#include <Helpers/String.hpp>
#include <Helpers/SysError.hpp>

using namespace RC;

TEST(Win32SystemErrorsTest2500, Win32ErrorDsGlobalCantHaveUniversalMember)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_GLOBAL_CANT_HAVE_UNIVERSAL_MEMBER)).c_str(), L"[0x2145] A global group cannot have a universal group as a member.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsUniversalCantHaveLocalMember)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_UNIVERSAL_CANT_HAVE_LOCAL_MEMBER)).c_str(), L"[0x2146] A universal group cannot have a local group as a member.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsGlobalCantHaveCrossdomainMember)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_GLOBAL_CANT_HAVE_CROSSDOMAIN_MEMBER)).c_str(), L"[0x2147] A global group cannot have a cross-domain member.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsLocalCantHaveCrossdomainLocalMember)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_LOCAL_CANT_HAVE_CROSSDOMAIN_LOCAL_MEMBER)).c_str(), L"[0x2148] A local group cannot have another cross domain local group as a member.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsHavePrimaryMembers)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_HAVE_PRIMARY_MEMBERS)).c_str(), L"[0x2149] A group with primary members cannot change to a security-disabled group.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsStringSdConversionFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_STRING_SD_CONVERSION_FAILED)).c_str(), L"[0x214a] The schema cache load failed to convert the string default SD on a class-schema object.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsNamingMasterGc)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NAMING_MASTER_GC)).c_str(), L"[0x214b] Only DSAs configured to be Global Catalog servers should be allowed to hold the Domain Naming Master FSMO role. (Applies only to Windows 2000 servers)");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDnsLookupFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DNS_LOOKUP_FAILURE)).c_str(), L"[0x214c] The DSA operation is unable to proceed because of a DNS lookup failure.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsCouldntUpdateSpns)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_COULDNT_UPDATE_SPNS)).c_str(), L"[0x214d] While processing a change to the DNS Host Name for an object, the Service Principal Name values could not be kept in sync.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsCantRetrieveSd)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_RETRIEVE_SD)).c_str(), L"[0x214e] The Security Descriptor attribute could not be read.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsKeyNotUnique)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_KEY_NOT_UNIQUE)).c_str(), L"[0x214f] The object requested was not found, but an object with that key was found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsWrongLinkedAttSyntax)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_WRONG_LINKED_ATT_SYNTAX)).c_str(), L"[0x2150] The syntax of the linked attribute being added is incorrect. Forward links can only have syntax 2.5.5.1, 2.5.5.7, and 2.5.5.14, and backlinks can only have syntax 2.5.5.1");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsSamNeedBootkeyPassword)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SAM_NEED_BOOTKEY_PASSWORD)).c_str(), L"[0x2151] Security Account Manager needs to get the boot password.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsSamNeedBootkeyFloppy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SAM_NEED_BOOTKEY_FLOPPY)).c_str(), L"[0x2152] Security Account Manager needs to get the boot key from floppy disk.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsCantStart)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_START)).c_str(), L"[0x2153] Directory Service cannot start.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsInitFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INIT_FAILURE)).c_str(), L"[0x2154] Directory Services could not start.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsNoPktPrivacyOnConnection)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_PKT_PRIVACY_ON_CONNECTION)).c_str(), L"[0x2155] The connection between client and server requires packet privacy or better.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsSourceDomainInForest)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SOURCE_DOMAIN_IN_FOREST)).c_str(), L"[0x2156] The source domain may not be in the same forest as destination.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDestinationDomainNotInForest)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DESTINATION_DOMAIN_NOT_IN_FOREST)).c_str(), L"[0x2157] The destination domain must be in the forest.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDestinationAuditingNotEnabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DESTINATION_AUDITING_NOT_ENABLED)).c_str(), L"[0x2158] The operation requires that destination domain auditing be enabled.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsCantFindDcForSrcDomain)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_FIND_DC_FOR_SRC_DOMAIN)).c_str(), L"[0x2159] The operation couldn't locate a DC for the source domain.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsSrcObjNotGroupOrUser)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SRC_OBJ_NOT_GROUP_OR_USER)).c_str(), L"[0x215a] The source object must be a group or user.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsSrcSidExistsInForest)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SRC_SID_EXISTS_IN_FOREST)).c_str(), L"[0x215b] The source object's SID already exists in destination forest.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsSrcAndDstObjectClassMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SRC_AND_DST_OBJECT_CLASS_MISMATCH)).c_str(), L"[0x215c] The source and destination object must be of the same type.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSamInitFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SAM_INIT_FAILURE)).c_str(), L"[0x215d] Security Accounts Manager initialization failed because of the following error: %1. Error Status: 0x%2. Click OK to shut down the system and reboot into Safe Mode. Check the event log for detailed information.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDraSchemaInfoShip)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_SCHEMA_INFO_SHIP)).c_str(), L"[0x215e] Schema information could not be included in the replication request.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDraSchemaConflict)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_SCHEMA_CONFLICT)).c_str(), L"[0x215f] The replication operation could not be completed due to a schema incompatibility.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDraEarlierSchemaConflict)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_EARLIER_SCHEMA_CONFLICT)).c_str(), L"[0x2160] The replication operation could not be completed due to a previous schema incompatibility.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDraObjNcMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_OBJ_NC_MISMATCH)).c_str(), L"[0x2161] The replication update could not be applied because either the source or the destination has not yet received information regarding a recent cross-domain move operation.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsNcStillHasDsas)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NC_STILL_HAS_DSAS)).c_str(), L"[0x2162] The requested domain could not be deleted because there exist domain controllers that still host this domain.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsGcRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_GC_REQUIRED)).c_str(), L"[0x2163] The requested operation can be performed only on a global catalog server.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsLocalMemberOfLocalOnly)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_LOCAL_MEMBER_OF_LOCAL_ONLY)).c_str(), L"[0x2164] A local group can only be a member of other local groups in the same domain.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsNoFpoInUniversalGroups)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_FPO_IN_UNIVERSAL_GROUPS)).c_str(), L"[0x2165] Foreign security principals cannot be members of universal groups.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsCantAddToGc)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_ADD_TO_GC)).c_str(), L"[0x2166] The attribute is not allowed to be replicated to the GC because of security reasons.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsNoCheckpointWithPdc)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_CHECKPOINT_WITH_PDC)).c_str(), L"[0x2167] The checkpoint with the PDC could not be taken because there too many modifications being processed currently.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsSourceAuditingNotEnabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SOURCE_AUDITING_NOT_ENABLED)).c_str(), L"[0x2168] The operation requires that source domain auditing be enabled.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsCantCreateInNondomainNc)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_CREATE_IN_NONDOMAIN_NC)).c_str(), L"[0x2169] Security principal objects can only be created inside domain naming contexts.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsInvalidNameForSpn)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INVALID_NAME_FOR_SPN)).c_str(), L"[0x216a] A Service Principal Name (SPN) could not be constructed because the provided hostname is not in the necessary format.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsFilterUsesContructedAttrs)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_FILTER_USES_CONTRUCTED_ATTRS)).c_str(), L"[0x216b] A Filter was passed that uses constructed attributes.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsUnicodepwdNotInQuotes)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_UNICODEPWD_NOT_IN_QUOTES)).c_str(), L"[0x216c] The unicodePwd attribute value must be enclosed in double quotes.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsMachineAccountQuotaExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED)).c_str(), L"[0x216d] Your computer could not be joined to the domain. You have exceeded the maximum number of computer accounts you are allowed to create in this domain. Contact your system administrator to have this limit reset or increased.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsMustBeRunOnDstDc)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_MUST_BE_RUN_ON_DST_DC)).c_str(), L"[0x216e] For security reasons, the operation must be run on the destination DC.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsSrcDcMustBeSp4OrGreater)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SRC_DC_MUST_BE_SP4_OR_GREATER)).c_str(), L"[0x216f] For security reasons, the source DC must be NT4SP4 or greater.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsCantTreeDeleteCriticalObj)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_TREE_DELETE_CRITICAL_OBJ)).c_str(), L"[0x2170] Critical Directory Service System objects cannot be deleted during tree delete operations. The tree delete may have been partially performed.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsInitFailureConsole)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INIT_FAILURE_CONSOLE)).c_str(), L"[0x2171] Directory Services could not start because of the following error: %1. Error Status: 0x%2. Please click OK to shutdown the system. You can use the recovery console to diagnose the system further.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsSamInitFailureConsole)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SAM_INIT_FAILURE_CONSOLE)).c_str(), L"[0x2172] Security Accounts Manager initialization failed because of the following error: %1. Error Status: 0x%2. Please click OK to shutdown the system. You can use the recovery console to diagnose the system further.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsForestVersionTooHigh)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_FOREST_VERSION_TOO_HIGH)).c_str(), L"[0x2173] The version of the operating system is incompatible with the current AD DS forest functional level or AD LDS Configuration Set functional level. You must upgrade to a new version of the operating system before this server can become an AD DS Domain Controller or add an AD LDS Instance in this AD DS Forest or AD LDS Configuration Set.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDomainVersionTooHigh)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DOMAIN_VERSION_TOO_HIGH)).c_str(), L"[0x2174] The version of the operating system installed is incompatible with the current domain functional level. You must upgrade to a new version of the operating system before this server can become a domain controller in this domain.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsForestVersionTooLow)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_FOREST_VERSION_TOO_LOW)).c_str(), L"[0x2175] The version of the operating system installed on this server no longer supports the current AD DS Forest functional level or AD LDS Configuration Set functional level. You must raise the AD DS Forest functional level or AD LDS Configuration Set functional level before this server can become an AD DS Domain Controller or an AD LDS Instance in this Forest or Configuration Set.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDomainVersionTooLow)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DOMAIN_VERSION_TOO_LOW)).c_str(), L"[0x2176] The version of the operating system installed on this server no longer supports the current domain functional level. You must raise the domain functional level before this server can become a domain controller in this domain.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsIncompatibleVersion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INCOMPATIBLE_VERSION)).c_str(), L"[0x2177] The version of the operating system installed on this server is incompatible with the functional level of the domain or forest.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsLowDsaVersion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_LOW_DSA_VERSION)).c_str(), L"[0x2178] The functional level of the domain (or forest) cannot be raised to the requested value, because there exist one or more domain controllers in the domain (or forest) that are at a lower incompatible functional level.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsNoBehaviorVersionInMixeddomain)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_BEHAVIOR_VERSION_IN_MIXEDDOMAIN)).c_str(), L"[0x2179] The forest functional level cannot be raised to the requested value since one or more domains are still in mixed domain mode. All domains in the forest must be in native mode, for you to raise the forest functional level.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsNotSupportedSortOrder)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NOT_SUPPORTED_SORT_ORDER)).c_str(), L"[0x217a] The sort order requested is not supported.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsNameNotUnique)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NAME_NOT_UNIQUE)).c_str(), L"[0x217b] The requested name already exists as a unique identifier.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsMachineAccountCreatedPrent4)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_MACHINE_ACCOUNT_CREATED_PRENT4)).c_str(), L"[0x217c] The machine account was created pre-NT4. The account needs to be recreated.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsOutOfVersionStore)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_OUT_OF_VERSION_STORE)).c_str(), L"[0x217d] The database is out of version store.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsIncompatibleControlsUsed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INCOMPATIBLE_CONTROLS_USED)).c_str(), L"[0x217e] Unable to continue operation because multiple conflicting controls were used.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsNoRefDomain)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_REF_DOMAIN)).c_str(), L"[0x217f] Unable to find a valid security descriptor reference domain for this partition.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsReservedLinkId)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_RESERVED_LINK_ID)).c_str(), L"[0x2180] Schema update failed: The link identifier is reserved.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsLinkIdNotAvailable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_LINK_ID_NOT_AVAILABLE)).c_str(), L"[0x2181] Schema update failed: There are no link identifiers available.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsAgCantHaveUniversalMember)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_AG_CANT_HAVE_UNIVERSAL_MEMBER)).c_str(), L"[0x2182] An account group cannot have a universal group as a member.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsModifydnDisallowedByInstanceType)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_MODIFYDN_DISALLOWED_BY_INSTANCE_TYPE)).c_str(), L"[0x2183] Rename or move operations on naming context heads or read-only objects are not allowed.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsNoObjectMoveInSchemaNc)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_OBJECT_MOVE_IN_SCHEMA_NC)).c_str(), L"[0x2184] Move operations on objects in the schema naming context are not allowed.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsModifydnDisallowedByFlag)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_MODIFYDN_DISALLOWED_BY_FLAG)).c_str(), L"[0x2185] A system flag has been set on the object and does not allow the object to be moved or renamed.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsModifydnWrongGrandparent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_MODIFYDN_WRONG_GRANDPARENT)).c_str(), L"[0x2186] This object is not allowed to change its grandparent container. Moves are not forbidden on this object, but are restricted to sibling containers.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsNameErrorTrustReferral)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NAME_ERROR_TRUST_REFERRAL)).c_str(), L"[0x2187] Unable to resolve completely, a referral to another forest is generated.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorNotSupportedOnStandardServer)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NOT_SUPPORTED_ON_STANDARD_SERVER)).c_str(), L"[0x2188] The requested action is not supported on standard server.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsCantAccessRemotePartOfAd)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_ACCESS_REMOTE_PART_OF_AD)).c_str(), L"[0x2189] Could not access a partition of the directory service located on a remote server. Make sure at least one server is running for the partition in question.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsCrImpossibleToValidateV2)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CR_IMPOSSIBLE_TO_VALIDATE_V2)).c_str(), L"[0x218a] The directory cannot validate the proposed naming context (or partition) name because it does not hold a replica nor can it contact a replica of the naming context above the proposed naming context. Please ensure that the parent naming context is properly registered in DNS, and at least one replica of this naming context is reachable by the Domain Naming master.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsThreadLimitExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_THREAD_LIMIT_EXCEEDED)).c_str(), L"[0x218b] The thread limit for this request was exceeded.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsNotClosest)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NOT_CLOSEST)).c_str(), L"[0x218c] The Global catalog server is not in the closest site.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsCantDeriveSpnWithoutServerRef)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_DERIVE_SPN_WITHOUT_SERVER_REF)).c_str(), L"[0x218d] The DS cannot derive a service principal name (SPN) with which to mutually authenticate the target server because the corresponding server object in the local DS database has no serverReference attribute.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsSingleUserModeFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SINGLE_USER_MODE_FAILED)).c_str(), L"[0x218e] The Directory Service failed to enter single user mode.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsNtdscriptSyntaxError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NTDSCRIPT_SYNTAX_ERROR)).c_str(), L"[0x218f] The Directory Service cannot parse the script because of a syntax error.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsNtdscriptProcessError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NTDSCRIPT_PROCESS_ERROR)).c_str(), L"[0x2190] The Directory Service cannot process the script because of an error.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDifferentReplEpochs)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DIFFERENT_REPL_EPOCHS)).c_str(), L"[0x2191] The directory service cannot perform the requested operation because the servers involved are of different replication epochs (which is usually related to a domain rename that is in progress).");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDrsExtensionsChanged)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRS_EXTENSIONS_CHANGED)).c_str(), L"[0x2192] The directory service binding must be renegotiated due to a change in the server extensions information.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsReplicaSetChangeNotAllowedOnDisabledCr)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_REPLICA_SET_CHANGE_NOT_ALLOWED_ON_DISABLED_CR)).c_str(), L"[0x2193] Operation not allowed on a disabled cross ref.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsNoMsdsIntid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_MSDS_INTID)).c_str(), L"[0x2194] Schema update failed: No values for msDS-IntId are available.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDupMsdsIntid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DUP_MSDS_INTID)).c_str(), L"[0x2195] Schema update failed: Duplicate msDS-INtId. Retry the operation.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsExistsInRdnattid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_EXISTS_IN_RDNATTID)).c_str(), L"[0x2196] Schema deletion failed: attribute is used in rDNAttID.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsAuthorizationFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_AUTHORIZATION_FAILED)).c_str(), L"[0x2197] The directory service failed to authorize the request.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsInvalidScript)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INVALID_SCRIPT)).c_str(), L"[0x2198] The Directory Service cannot process the script because it is invalid.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsRemoteCrossrefOpFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_REMOTE_CROSSREF_OP_FAILED)).c_str(), L"[0x2199] The remote create cross reference operation failed on the Domain Naming Master FSMO. The operation's error is in the extended data.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsCrossRefBusy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CROSS_REF_BUSY)).c_str(), L"[0x219a] A cross reference is in use locally with the same name.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsCantDeriveSpnForDeletedDomain)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_DERIVE_SPN_FOR_DELETED_DOMAIN)).c_str(), L"[0x219b] The DS cannot derive a service principal name (SPN) with which to mutually authenticate the target server because the server's domain has been deleted from the forest.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsCantDemoteWithWriteableNc)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_DEMOTE_WITH_WRITEABLE_NC)).c_str(), L"[0x219c] Writeable NCs prevent this DC from demoting.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDuplicateIdFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DUPLICATE_ID_FOUND)).c_str(), L"[0x219d] The requested object has a non-unique identifier and cannot be retrieved.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsInsufficientAttrToCreateObject)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INSUFFICIENT_ATTR_TO_CREATE_OBJECT)).c_str(), L"[0x219e] Insufficient attributes were given to create an object. This object may not exist because it may have been deleted and already garbage collected.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsGroupConversionError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_GROUP_CONVERSION_ERROR)).c_str(), L"[0x219f] The group cannot be converted due to attribute restrictions on the requested group type.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsCantMoveAppBasicGroup)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_MOVE_APP_BASIC_GROUP)).c_str(), L"[0x21a0] Cross-domain move of non-empty basic application groups is not allowed.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsCantMoveAppQueryGroup)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_CANT_MOVE_APP_QUERY_GROUP)).c_str(), L"[0x21a1] Cross-domain move of non-empty query based application groups is not allowed.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsRoleNotVerified)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_ROLE_NOT_VERIFIED)).c_str(), L"[0x21a2] The FSMO role ownership could not be verified because its directory partition has not replicated successfully with at least one replication partner.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsWkoContainerCannotBeSpecial)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_WKO_CONTAINER_CANNOT_BE_SPECIAL)).c_str(), L"[0x21a3] The target container for a redirection of a well known object container cannot already be a special container.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDomainRenameInProgress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DOMAIN_RENAME_IN_PROGRESS)).c_str(), L"[0x21a4] The Directory Service cannot perform the requested operation because a domain rename operation is in progress.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsExistingAdChildNc)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_EXISTING_AD_CHILD_NC)).c_str(), L"[0x21a5] The directory service detected a child partition below the requested partition name. The partition hierarchy must be created in a top down method.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsReplLifetimeExceeded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_REPL_LIFETIME_EXCEEDED)).c_str(), L"[0x21a6] The directory service cannot replicate with this server because the time since the last replication with this server has exceeded the tombstone lifetime.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDisallowedInSystemContainer)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DISALLOWED_IN_SYSTEM_CONTAINER)).c_str(), L"[0x21a7] The requested operation is not allowed on an object under the system container.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsLdapSendQueueFull)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_LDAP_SEND_QUEUE_FULL)).c_str(), L"[0x21a8] The LDAP servers network send queue has filled up because the client is not processing the results of its requests fast enough. No more requests will be processed until the client catches up. If the client does not catch up then it will be disconnected.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDraOutScheduleWindow)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_OUT_SCHEDULE_WINDOW)).c_str(), L"[0x21a9] The scheduled replication did not take place because the system was too busy to execute the request within the schedule window. The replication queue is overloaded. Consider reducing the number of partners or decreasing the scheduled replication frequency.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsPolicyNotKnown)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_POLICY_NOT_KNOWN)).c_str(), L"[0x21aa] At this time, it cannot be determined if the branch replication policy is available on the hub domain controller. Please retry at a later time to account for replication latencies.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorNoSiteSettingsObject)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_SITE_SETTINGS_OBJECT)).c_str(), L"[0x21ab] The site settings object for the specified site does not exist.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorNoSecrets)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_SECRETS)).c_str(), L"[0x21ac] The local account store does not contain secret material for the specified account.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorNoWritableDcFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_NO_WRITABLE_DC_FOUND)).c_str(), L"[0x21ad] Could not find a writable domain controller in the domain.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsNoServerObject)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_SERVER_OBJECT)).c_str(), L"[0x21ae] The server object for the domain controller does not exist.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsNoNtdsaObject)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NO_NTDSA_OBJECT)).c_str(), L"[0x21af] The NTDS Settings object for the domain controller does not exist.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsNonAsqSearch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_NON_ASQ_SEARCH)).c_str(), L"[0x21b0] The requested search operation is not supported for ASQ searches.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsAuditFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_AUDIT_FAILURE)).c_str(), L"[0x21b1] A required audit event could not be generated for the operation.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsInvalidSearchFlagSubtree)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INVALID_SEARCH_FLAG_SUBTREE)).c_str(), L"[0x21b2] The search flags for the attribute are invalid. The subtree index bit is valid only on single valued attributes.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsInvalidSearchFlagTuple)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_INVALID_SEARCH_FLAG_TUPLE)).c_str(), L"[0x21b3] The search flags for the attribute are invalid. The tuple index bit is valid only on attributes of Unicode strings.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsHierarchyTableTooDeep)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_HIERARCHY_TABLE_TOO_DEEP)).c_str(), L"[0x21b4] The address books are nested too deeply. Failed to build the hierarchy table.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDraCorruptUtdVector)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_CORRUPT_UTD_VECTOR)).c_str(), L"[0x21b5] The specified up-to-date-ness vector is corrupt.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDraSecretsDenied)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_SECRETS_DENIED)).c_str(), L"[0x21b6] The request to replicate secrets is denied.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsReservedMapiId)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_RESERVED_MAPI_ID)).c_str(), L"[0x21b7] Schema update failed: The MAPI identifier is reserved.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsMapiIdNotAvailable)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_MAPI_ID_NOT_AVAILABLE)).c_str(), L"[0x21b8] Schema update failed: There are no MAPI identifiers available.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDraMissingKrbtgtSecret)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_MISSING_KRBTGT_SECRET)).c_str(), L"[0x21b9] The replication operation failed because the required attributes of the local krbtgt object are missing.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDomainNameExistsInForest)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DOMAIN_NAME_EXISTS_IN_FOREST)).c_str(), L"[0x21ba] The domain name of the trusted domain already exists in the forest.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsFlatNameExistsInForest)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_FLAT_NAME_EXISTS_IN_FOREST)).c_str(), L"[0x21bb] The flat name of the trusted domain already exists in the forest.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorInvalidUserPrincipalName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INVALID_USER_PRINCIPAL_NAME)).c_str(), L"[0x21bc] The User Principal Name (UPN) is invalid.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsOidMappedGroupCantHaveMembers)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_OID_MAPPED_GROUP_CANT_HAVE_MEMBERS)).c_str(), L"[0x21bd] OID mapped groups cannot have members.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsOidNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_OID_NOT_FOUND)).c_str(), L"[0x21be] The specified OID cannot be found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDraRecycledTarget)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DRA_RECYCLED_TARGET)).c_str(), L"[0x21bf] The replication operation failed because the target object referred by a link value is recycled.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsDisallowedNcRedirect)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_DISALLOWED_NC_REDIRECT)).c_str(), L"[0x21c0] The redirect operation failed because the target object is in a NC different from the domain NC of the current domain controller.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsHighAdldsFfl)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_HIGH_ADLDS_FFL)).c_str(), L"[0x21c1] The functional level of the AD LDS configuration set cannot be lowered to the requested value.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsHighDsaVersion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_HIGH_DSA_VERSION)).c_str(), L"[0x21c2] The functional level of the domain (or forest) cannot be set to the requested value.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsLowAdldsFfl)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_LOW_ADLDS_FFL)).c_str(), L"[0x21c3] The functional level of the AD LDS configuration set cannot be raised to the requested value, because there exist one or more ADLDS instances that are at a lower incompatible functional level.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDomainSidSameAsLocalWorkstation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DOMAIN_SID_SAME_AS_LOCAL_WORKSTATION)).c_str(), L"[0x21c4] The domain join cannot be completed because the SID of the domain you attempted to join was identical to the SID of this machine. This is a symptom of an improperly cloned operating system install.  You should run sysprep on this machine in order to generate a new machine SID. Please see http://go.microsoft.com/fwlink/?LinkId=168895 for more information.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsUndeleteSamValidationFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_UNDELETE_SAM_VALIDATION_FAILED)).c_str(), L"[0x21c5] The undelete operation failed because the Sam Account Name or Additional Sam Account Name of the object being undeleted conflicts with an existing live object.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIncorrectAccountType)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_INCORRECT_ACCOUNT_TYPE)).c_str(), L"[0x21c6] The system is not authoritative for the specified account and therefore cannot complete the operation. Please retry the operation using the provider associated with this account. If this is an online provider please use the provider's online site.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsSpnValueNotUniqueInForest)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_SPN_VALUE_NOT_UNIQUE_IN_FOREST)).c_str(), L"[0x21c7] The operation failed because SPN value provided for addition/modification is not unique forest-wide.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsUpnValueNotUniqueInForest)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_UPN_VALUE_NOT_UNIQUE_IN_FOREST)).c_str(), L"[0x21c8] The operation failed because UPN value provided for addition/modification is not unique forest-wide.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsMissingForestTrust)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_MISSING_FOREST_TRUST)).c_str(), L"[0x21c9] The operation failed because the addition/modification referenced an inbound forest-wide trust that is not present.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsValueKeyNotUnique)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_VALUE_KEY_NOT_UNIQUE)).c_str(), L"[0x21ca] The link value specified was not found, but a link value with that key was found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorWeakWhfbkeyBlocked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_WEAK_WHFBKEY_BLOCKED)).c_str(), L"[0x21cb] The Security Account Manager blocked the use of a weak Windows Hello for Business key.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsPerAttributeAuthzFailedDuringAdd)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_PER_ATTRIBUTE_AUTHZ_FAILED_DURING_ADD)).c_str(), L"[0x21cc] The add object operation failed because the caller was not authorized to add one or more attributes included in the request.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorLocalPolicyModificationNotSupported)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LOCAL_POLICY_MODIFICATION_NOT_SUPPORTED)).c_str(), L"[0x21cd] The local account policy modification request was rejected because the policy is controlled by a regional authority.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorPolicyControlledAccount)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_POLICY_CONTROLLED_ACCOUNT)).c_str(), L"[0x21ce] The account is controlled by external policy and cannot be modified.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorLapsLegacySchemaMissing)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LAPS_LEGACY_SCHEMA_MISSING)).c_str(), L"[0x21cf] The Local Administrator Password Solution password update operation failed because the legacy LAPS schema needs to be added to Active Directory.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorLapsSchemaMissing)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LAPS_SCHEMA_MISSING)).c_str(), L"[0x21d0] The Local Administrator Password Solution password update operation failed because the Windows LAPS schema needs to be added to Active Directory.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorLapsEncryptionRequires2016Dfl)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LAPS_ENCRYPTION_REQUIRES_2016_DFL)).c_str(), L"[0x21d1] The Local Administrator Password Solution encrypted password update operation failed because Active Directory is not yet running at the minimum required domain functional level (2016).");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorLapsProcessTerminated)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_LAPS_PROCESS_TERMINATED)).c_str(), L"[0x21d2] The process was terminated by Windows Local Administrator Password Solution per the configured post-authentication-action policy.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsJetRecordTooBig)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_JET_RECORD_TOO_BIG)).c_str(), L"[0x21d3] The Active Directory JET database page size limit for this request was exceeded.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDsReplicaPageSizeMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DS_REPLICA_PAGE_SIZE_MISMATCH)).c_str(), L"[0x21d4] The Active Directory JET database page size does not match on all Domain Controllers in this forest.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecQmPolicyExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_QM_POLICY_EXISTS)).c_str(), L"[0x32c8] The specified quick mode policy already exists.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecQmPolicyNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_QM_POLICY_NOT_FOUND)).c_str(), L"[0x32c9] The specified quick mode policy was not found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecQmPolicyInUse)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_QM_POLICY_IN_USE)).c_str(), L"[0x32ca] The specified quick mode policy is being used.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecMmPolicyExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_MM_POLICY_EXISTS)).c_str(), L"[0x32cb] The specified main mode policy already exists.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecMmPolicyNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_MM_POLICY_NOT_FOUND)).c_str(), L"[0x32cc] The specified main mode policy was not found");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecMmPolicyInUse)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_MM_POLICY_IN_USE)).c_str(), L"[0x32cd] The specified main mode policy is being used.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecMmFilterExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_MM_FILTER_EXISTS)).c_str(), L"[0x32ce] The specified main mode filter already exists.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecMmFilterNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_MM_FILTER_NOT_FOUND)).c_str(), L"[0x32cf] The specified main mode filter was not found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecTransportFilterExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_TRANSPORT_FILTER_EXISTS)).c_str(), L"[0x32d0] The specified transport mode filter already exists.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecTransportFilterNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_TRANSPORT_FILTER_NOT_FOUND)).c_str(), L"[0x32d1] The specified transport mode filter does not exist.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecMmAuthExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_MM_AUTH_EXISTS)).c_str(), L"[0x32d2] The specified main mode authentication list exists.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecMmAuthNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_MM_AUTH_NOT_FOUND)).c_str(), L"[0x32d3] The specified main mode authentication list was not found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecMmAuthInUse)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_MM_AUTH_IN_USE)).c_str(), L"[0x32d4] The specified main mode authentication list is being used.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecDefaultMmPolicyNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_DEFAULT_MM_POLICY_NOT_FOUND)).c_str(), L"[0x32d5] The specified default main mode policy was not found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecDefaultMmAuthNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_DEFAULT_MM_AUTH_NOT_FOUND)).c_str(), L"[0x32d6] The specified default main mode authentication list was not found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecDefaultQmPolicyNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_DEFAULT_QM_POLICY_NOT_FOUND)).c_str(), L"[0x32d7] The specified default quick mode policy was not found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecTunnelFilterExists)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_TUNNEL_FILTER_EXISTS)).c_str(), L"[0x32d8] The specified tunnel mode filter exists.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecTunnelFilterNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_TUNNEL_FILTER_NOT_FOUND)).c_str(), L"[0x32d9] The specified tunnel mode filter was not found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecMmFilterPendingDeletion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_MM_FILTER_PENDING_DELETION)).c_str(), L"[0x32da] The Main Mode filter is pending deletion.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecTransportFilterPendingDeletion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_TRANSPORT_FILTER_PENDING_DELETION)).c_str(), L"[0x32db] The transport filter is pending deletion.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecTunnelFilterPendingDeletion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_TUNNEL_FILTER_PENDING_DELETION)).c_str(), L"[0x32dc] The tunnel filter is pending deletion.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecMmPolicyPendingDeletion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_MM_POLICY_PENDING_DELETION)).c_str(), L"[0x32dd] The Main Mode policy is pending deletion.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecMmAuthPendingDeletion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_MM_AUTH_PENDING_DELETION)).c_str(), L"[0x32de] The Main Mode authentication bundle is pending deletion.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecQmPolicyPendingDeletion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_QM_POLICY_PENDING_DELETION)).c_str(), L"[0x32df] The Quick Mode policy is pending deletion.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeNegStatusBegin)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_NEG_STATUS_BEGIN)).c_str(), L"[0x35e8] ERROR_IPSEC_IKE_NEG_STATUS_BEGIN");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeAuthFail)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_AUTH_FAIL)).c_str(), L"[0x35e9] IKE authentication credentials are unacceptable");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeAttribFail)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_ATTRIB_FAIL)).c_str(), L"[0x35ea] IKE security attributes are unacceptable");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeNegotiationPending)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_NEGOTIATION_PENDING)).c_str(), L"[0x35eb] IKE Negotiation in progress");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeGeneralProcessingError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_GENERAL_PROCESSING_ERROR)).c_str(), L"[0x35ec] General processing error");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeTimedOut)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_TIMED_OUT)).c_str(), L"[0x35ed] Negotiation timed out");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeNoCert)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_NO_CERT)).c_str(), L"[0x35ee] IKE failed to find valid machine certificate. Contact your Network Security Administrator about installing a valid certificate in the appropriate Certificate Store.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeSaDeleted)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_SA_DELETED)).c_str(), L"[0x35ef] IKE SA deleted by peer before establishment completed");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeSaReaped)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_SA_REAPED)).c_str(), L"[0x35f0] IKE SA deleted before establishment completed");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeMmAcquireDrop)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_MM_ACQUIRE_DROP)).c_str(), L"[0x35f1] Negotiation request sat in Queue too long");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeQmAcquireDrop)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_QM_ACQUIRE_DROP)).c_str(), L"[0x35f2] Negotiation request sat in Queue too long");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeQueueDropMm)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_QUEUE_DROP_MM)).c_str(), L"[0x35f3] Negotiation request sat in Queue too long");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeQueueDropNoMm)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_QUEUE_DROP_NO_MM)).c_str(), L"[0x35f4] Negotiation request sat in Queue too long");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeDropNoResponse)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_DROP_NO_RESPONSE)).c_str(), L"[0x35f5] No response from peer");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeMmDelayDrop)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_MM_DELAY_DROP)).c_str(), L"[0x35f6] Negotiation took too long");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeQmDelayDrop)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_QM_DELAY_DROP)).c_str(), L"[0x35f7] Negotiation took too long");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_ERROR)).c_str(), L"[0x35f8] Unknown error occurred");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeCrlFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_CRL_FAILED)).c_str(), L"[0x35f9] Certificate Revocation Check failed");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidKeyUsage)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_KEY_USAGE)).c_str(), L"[0x35fa] Invalid certificate key usage");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidCertType)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_CERT_TYPE)).c_str(), L"[0x35fb] Invalid certificate type");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeNoPrivateKey)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_NO_PRIVATE_KEY)).c_str(), L"[0x35fc] IKE negotiation failed because the machine certificate used does not have a private key. IPsec certificates require a private key. Contact your Network Security administrator about replacing with a certificate that has a private key.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeSimultaneousRekey)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_SIMULTANEOUS_REKEY)).c_str(), L"[0x35fd] Simultaneous rekeys were detected.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeDhFail)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_DH_FAIL)).c_str(), L"[0x35fe] Failure in Diffie-Hellman computation");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeCriticalPayloadNotRecognized)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_CRITICAL_PAYLOAD_NOT_RECOGNIZED)).c_str(), L"[0x35ff] Don't know how to process critical payload");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidHeader)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_HEADER)).c_str(), L"[0x3600] Invalid header");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeNoPolicy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_NO_POLICY)).c_str(), L"[0x3601] No policy configured");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidSignature)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_SIGNATURE)).c_str(), L"[0x3602] Failed to verify signature");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeKerberosError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_KERBEROS_ERROR)).c_str(), L"[0x3603] Failed to authenticate using Kerberos");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeNoPublicKey)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_NO_PUBLIC_KEY)).c_str(), L"[0x3604] Peer's certificate did not have a public key");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeProcessErr)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR)).c_str(), L"[0x3605] Error processing error payload");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeProcessErrSa)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_SA)).c_str(), L"[0x3606] Error processing SA payload");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeProcessErrProp)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_PROP)).c_str(), L"[0x3607] Error processing Proposal payload");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeProcessErrTrans)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_TRANS)).c_str(), L"[0x3608] Error processing Transform payload");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeProcessErrKe)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_KE)).c_str(), L"[0x3609] Error processing KE payload");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeProcessErrId)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_ID)).c_str(), L"[0x360a] Error processing ID payload");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeProcessErrCert)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_CERT)).c_str(), L"[0x360b] Error processing Cert payload");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeProcessErrCertReq)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_CERT_REQ)).c_str(), L"[0x360c] Error processing Certificate Request payload");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeProcessErrHash)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_HASH)).c_str(), L"[0x360d] Error processing Hash payload");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeProcessErrSig)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_SIG)).c_str(), L"[0x360e] Error processing Signature payload");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeProcessErrNonce)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_NONCE)).c_str(), L"[0x360f] Error processing Nonce payload");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeProcessErrNotify)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_NOTIFY)).c_str(), L"[0x3610] Error processing Notify payload");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeProcessErrDelete)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_DELETE)).c_str(), L"[0x3611] Error processing Delete Payload");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeProcessErrVendor)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_VENDOR)).c_str(), L"[0x3612] Error processing VendorId payload");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidPayload)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_PAYLOAD)).c_str(), L"[0x3613] Invalid payload received");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeLoadSoftSa)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_LOAD_SOFT_SA)).c_str(), L"[0x3614] Soft SA loaded");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeSoftSaTornDown)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_SOFT_SA_TORN_DOWN)).c_str(), L"[0x3615] Soft SA torn down");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidCookie)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_COOKIE)).c_str(), L"[0x3616] Invalid cookie received.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeNoPeerCert)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_NO_PEER_CERT)).c_str(), L"[0x3617] Peer failed to send valid machine certificate");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkePeerCrlFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_PEER_CRL_FAILED)).c_str(), L"[0x3618] Certification Revocation check of peer's certificate failed");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkePolicyChange)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_POLICY_CHANGE)).c_str(), L"[0x3619] New policy invalidated SAs formed with old policy");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeNoMmPolicy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_NO_MM_POLICY)).c_str(), L"[0x361a] There is no available Main Mode IKE policy.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeNotcbpriv)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_NOTCBPRIV)).c_str(), L"[0x361b] Failed to enabled TCB privilege.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeSecloadfail)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_SECLOADFAIL)).c_str(), L"[0x361c] Failed to load SECURITY.DLL.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeFailsspinit)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_FAILSSPINIT)).c_str(), L"[0x361d] Failed to obtain security function table dispatch address from SSPI.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeFailqueryssp)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_FAILQUERYSSP)).c_str(), L"[0x361e] Failed to query Kerberos package to obtain max token size.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeSrvacqfail)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_SRVACQFAIL)).c_str(), L"[0x361f] Failed to obtain Kerberos server credentials for ISAKMP/ERROR_IPSEC_IKE service. Kerberos authentication will not function. The most likely reason for this is lack of domain membership. This is normal if your computer is a member of a workgroup.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeSrvquerycred)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_SRVQUERYCRED)).c_str(), L"[0x3620] Failed to determine SSPI principal name for ISAKMP/ERROR_IPSEC_IKE service (QueryCredentialsAttributes).");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeGetspifail)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_GETSPIFAIL)).c_str(), L"[0x3621] Failed to obtain new SPI for the inbound SA from IPsec driver. The most common cause for this is that the driver does not have the correct filter. Check your policy to verify the filters.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidFilter)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_FILTER)).c_str(), L"[0x3622] Given filter is invalid");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeOutOfMemory)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_OUT_OF_MEMORY)).c_str(), L"[0x3623] Memory allocation failed.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeAddUpdateKeyFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_ADD_UPDATE_KEY_FAILED)).c_str(), L"[0x3624] Failed to add Security Association to IPsec Driver. The most common cause for this is if the IKE negotiation took too long to complete. If the problem persists, reduce the load on the faulting machine.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidPolicy)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_POLICY)).c_str(), L"[0x3625] Invalid policy");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeUnknownDoi)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_UNKNOWN_DOI)).c_str(), L"[0x3626] Invalid DOI");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidSituation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_SITUATION)).c_str(), L"[0x3627] Invalid situation");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeDhFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_DH_FAILURE)).c_str(), L"[0x3628] Diffie-Hellman failure");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidGroup)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_GROUP)).c_str(), L"[0x3629] Invalid Diffie-Hellman group");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeEncrypt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_ENCRYPT)).c_str(), L"[0x362a] Error encrypting payload");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeDecrypt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_DECRYPT)).c_str(), L"[0x362b] Error decrypting payload");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkePolicyMatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_POLICY_MATCH)).c_str(), L"[0x362c] Policy match error");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeUnsupportedId)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_UNSUPPORTED_ID)).c_str(), L"[0x362d] Unsupported ID");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidHash)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_HASH)).c_str(), L"[0x362e] Hash verification failed");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidHashAlg)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_HASH_ALG)).c_str(), L"[0x362f] Invalid hash algorithm");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidHashSize)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_HASH_SIZE)).c_str(), L"[0x3630] Invalid hash size");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidEncryptAlg)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_ENCRYPT_ALG)).c_str(), L"[0x3631] Invalid encryption algorithm");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidAuthAlg)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_AUTH_ALG)).c_str(), L"[0x3632] Invalid authentication algorithm");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidSig)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_SIG)).c_str(), L"[0x3633] Invalid certificate signature");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeLoadFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_LOAD_FAILED)).c_str(), L"[0x3634] Load failed");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeRpcDelete)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_RPC_DELETE)).c_str(), L"[0x3635] Deleted via RPC call");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeBenignReinit)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_BENIGN_REINIT)).c_str(), L"[0x3636] Temporary state created to perform reinitialization. This is not a real failure.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidResponderLifetimeNotify)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_RESPONDER_LIFETIME_NOTIFY)).c_str(), L"[0x3637] The lifetime value received in the Responder Lifetime Notify is below the Windows 2000 configured minimum value. Please fix the policy on the peer machine.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidMajorVersion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_MAJOR_VERSION)).c_str(), L"[0x3638] The recipient cannot handle version of IKE specified in the header.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidCertKeylen)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_CERT_KEYLEN)).c_str(), L"[0x3639] Key length in certificate is too small for configured security requirements.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeMmLimit)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_MM_LIMIT)).c_str(), L"[0x363a] Max number of established MM SAs to peer exceeded.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeNegotiationDisabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_NEGOTIATION_DISABLED)).c_str(), L"[0x363b] IKE received a policy that disables negotiation.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeQmLimit)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_QM_LIMIT)).c_str(), L"[0x363c] Reached maximum quick mode limit for the main mode. New main mode will be started.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeMmExpired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_MM_EXPIRED)).c_str(), L"[0x363d] Main mode SA lifetime expired or peer sent a main mode delete.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkePeerMmAssumedInvalid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_PEER_MM_ASSUMED_INVALID)).c_str(), L"[0x363e] Main mode SA assumed to be invalid because peer stopped responding.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeCertChainPolicyMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_CERT_CHAIN_POLICY_MISMATCH)).c_str(), L"[0x363f] Certificate doesn't chain to a trusted root in IPsec policy.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeUnexpectedMessageId)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_UNEXPECTED_MESSAGE_ID)).c_str(), L"[0x3640] Received unexpected message ID.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidAuthPayload)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_AUTH_PAYLOAD)).c_str(), L"[0x3641] Received invalid authentication offers.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeDosCookieSent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_DOS_COOKIE_SENT)).c_str(), L"[0x3642] Sent DoS cookie notify to initiator.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeShuttingDown)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_SHUTTING_DOWN)).c_str(), L"[0x3643] IKE service is shutting down.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeCgaAuthFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_CGA_AUTH_FAILED)).c_str(), L"[0x3644] Could not verify binding between CGA address and certificate.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeProcessErrNatoa)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_NATOA)).c_str(), L"[0x3645] Error processing NatOA payload.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInvalidMmForQm)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_MM_FOR_QM)).c_str(), L"[0x3646] Parameters of the main mode are invalid for this quick mode.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeQmExpired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_QM_EXPIRED)).c_str(), L"[0x3647] Quick mode SA was expired by IPsec driver.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeTooManyFilters)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_TOO_MANY_FILTERS)).c_str(), L"[0x3648] Too many dynamically added IKEEXT filters were detected.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeNegStatusEnd)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_NEG_STATUS_END)).c_str(), L"[0x3649] ERROR_IPSEC_IKE_NEG_STATUS_END");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeKillDummyNapTunnel)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_KILL_DUMMY_NAP_TUNNEL)).c_str(), L"[0x364a] NAP reauth succeeded and must delete the dummy NAP IKEv2 tunnel.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeInnerIpAssignmentFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_INNER_IP_ASSIGNMENT_FAILURE)).c_str(), L"[0x364b] Error in assigning inner IP address to initiator in tunnel mode.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeRequireCpPayloadMissing)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_REQUIRE_CP_PAYLOAD_MISSING)).c_str(), L"[0x364c] Require configuration payload missing.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecKeyModuleImpersonationNegotiationPending)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_KEY_MODULE_IMPERSONATION_NEGOTIATION_PENDING)).c_str(), L"[0x364d] A negotiation running as the security principle who issued the connection is in progress");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeCoexistenceSuppress)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_COEXISTENCE_SUPPRESS)).c_str(), L"[0x364e] SA was deleted due to IKEv1/AuthIP co-existence suppress check.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeRatelimitDrop)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_RATELIMIT_DROP)).c_str(), L"[0x364f] Incoming SA request was dropped due to peer IP address rate limiting.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkePeerDoesntSupportMobike)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_PEER_DOESNT_SUPPORT_MOBIKE)).c_str(), L"[0x3650] Peer does not support MOBIKE.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeAuthorizationFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_AUTHORIZATION_FAILURE)).c_str(), L"[0x3651] SA establishment is not authorized.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeStrongCredAuthorizationFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_STRONG_CRED_AUTHORIZATION_FAILURE)).c_str(), L"[0x3652] SA establishment is not authorized because there is not a sufficiently strong PKINIT-based credential.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeAuthorizationFailureWithOptionalRetry)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_AUTHORIZATION_FAILURE_WITH_OPTIONAL_RETRY)).c_str(), L"[0x3653] SA establishment is not authorized.  You may need to enter updated or different credentials such as a smartcard.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeStrongCredAuthorizationAndCertmapFailure)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_STRONG_CRED_AUTHORIZATION_AND_CERTMAP_FAILURE)).c_str(), L"[0x3654] SA establishment is not authorized because there is not a sufficiently strong PKINIT-based credential. This might be related to certificate-to-account mapping failure for the SA.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIkeNegStatusExtendedEnd)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_IKE_NEG_STATUS_EXTENDED_END)).c_str(), L"[0x3655] ERROR_IPSEC_IKE_NEG_STATUS_EXTENDED_END");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecBadSpi)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_BAD_SPI)).c_str(), L"[0x3656] The SPI in the packet does not match a valid IPsec SA.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecSaLifetimeExpired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_SA_LIFETIME_EXPIRED)).c_str(), L"[0x3657] Packet was received on an IPsec SA whose lifetime has expired.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecWrongSa)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_WRONG_SA)).c_str(), L"[0x3658] Packet was received on an IPsec SA that does not match the packet characteristics.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecReplayCheckFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_REPLAY_CHECK_FAILED)).c_str(), L"[0x3659] Packet sequence number replay check failed.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecInvalidPacket)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_INVALID_PACKET)).c_str(), L"[0x365a] IPsec header and/or trailer in the packet is invalid.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecIntegrityCheckFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_INTEGRITY_CHECK_FAILED)).c_str(), L"[0x365b] IPsec integrity check failed.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecClearTextDrop)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_CLEAR_TEXT_DROP)).c_str(), L"[0x365c] IPsec dropped a clear text packet.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecAuthFirewallDrop)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_AUTH_FIREWALL_DROP)).c_str(), L"[0x365d] IPsec dropped an incoming ESP packet in authenticated firewall mode. This drop is benign.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecThrottleDrop)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_THROTTLE_DROP)).c_str(), L"[0x365e] IPsec dropped a packet due to DoS throttling.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecDospBlock)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_DOSP_BLOCK)).c_str(), L"[0x3665] IPsec DoS Protection matched an explicit block rule.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecDospReceivedMulticast)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_DOSP_RECEIVED_MULTICAST)).c_str(), L"[0x3666] IPsec DoS Protection received an IPsec specific multicast packet which is not allowed.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecDospInvalidPacket)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_DOSP_INVALID_PACKET)).c_str(), L"[0x3667] IPsec DoS Protection received an incorrectly formatted packet.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecDospStateLookupFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_DOSP_STATE_LOOKUP_FAILED)).c_str(), L"[0x3668] IPsec DoS Protection failed to look up state.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecDospMaxEntries)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_DOSP_MAX_ENTRIES)).c_str(), L"[0x3669] IPsec DoS Protection failed to create state because the maximum number of entries allowed by policy has been reached.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecDospKeymodNotAllowed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_DOSP_KEYMOD_NOT_ALLOWED)).c_str(), L"[0x366a] IPsec DoS Protection received an IPsec negotiation packet for a keying module which is not allowed by policy.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecDospNotInstalled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_DOSP_NOT_INSTALLED)).c_str(), L"[0x366b] IPsec DoS Protection has not been enabled.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorIpsecDospMaxPerIpRatelimitQueues)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_IPSEC_DOSP_MAX_PER_IP_RATELIMIT_QUEUES)).c_str(), L"[0x366c] IPsec DoS Protection failed to create a per internal IP rate limit queue because the maximum number of queues allowed by policy has been reached.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsSectionNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_SECTION_NOT_FOUND)).c_str(), L"[0x36b0] The requested section was not present in the activation context.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsCantGenActctx)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_CANT_GEN_ACTCTX)).c_str(), L"[0x36b1] The application has failed to start because its side-by-side configuration is incorrect. Please see the application event log or use the command-line sxstrace.exe tool for more detail.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsInvalidActctxdataFormat)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_INVALID_ACTCTXDATA_FORMAT)).c_str(), L"[0x36b2] The application binding data format is invalid.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsAssemblyNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_ASSEMBLY_NOT_FOUND)).c_str(), L"[0x36b3] The referenced assembly is not installed on your system.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsManifestFormatError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_MANIFEST_FORMAT_ERROR)).c_str(), L"[0x36b4] The manifest file does not begin with the required tag and format information.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsManifestParseError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_MANIFEST_PARSE_ERROR)).c_str(), L"[0x36b5] The manifest file contains one or more syntax errors.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsActivationContextDisabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_ACTIVATION_CONTEXT_DISABLED)).c_str(), L"[0x36b6] The application attempted to activate a disabled activation context.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsKeyNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_KEY_NOT_FOUND)).c_str(), L"[0x36b7] The requested lookup key was not found in any active activation context.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsVersionConflict)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_VERSION_CONFLICT)).c_str(), L"[0x36b8] A component version required by the application conflicts with another component version already active.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsWrongSectionType)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_WRONG_SECTION_TYPE)).c_str(), L"[0x36b9] The type requested activation context section does not match the query API used.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsThreadQueriesDisabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_THREAD_QUERIES_DISABLED)).c_str(), L"[0x36ba] Lack of system resources has required isolated activation to be disabled for the current thread of execution.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsProcessDefaultAlreadySet)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_PROCESS_DEFAULT_ALREADY_SET)).c_str(), L"[0x36bb] An attempt to set the process default activation context failed because the process default activation context was already set.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsUnknownEncodingGroup)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_UNKNOWN_ENCODING_GROUP)).c_str(), L"[0x36bc] The encoding group identifier specified is not recognized.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsUnknownEncoding)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_UNKNOWN_ENCODING)).c_str(), L"[0x36bd] The encoding requested is not recognized.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsInvalidXmlNamespaceUri)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_INVALID_XML_NAMESPACE_URI)).c_str(), L"[0x36be] The manifest contains a reference to an invalid URI.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsRootManifestDependencyNotInstalled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_ROOT_MANIFEST_DEPENDENCY_NOT_INSTALLED)).c_str(), L"[0x36bf] The application manifest contains a reference to a dependent assembly which is not installed");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsLeafManifestDependencyNotInstalled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_LEAF_MANIFEST_DEPENDENCY_NOT_INSTALLED)).c_str(), L"[0x36c0] The manifest for an assembly used by the application has a reference to a dependent assembly which is not installed");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsInvalidAssemblyIdentityAttribute)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_INVALID_ASSEMBLY_IDENTITY_ATTRIBUTE)).c_str(), L"[0x36c1] The manifest contains an attribute for the assembly identity which is not valid.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsManifestMissingRequiredDefaultNamespace)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_MANIFEST_MISSING_REQUIRED_DEFAULT_NAMESPACE)).c_str(), L"[0x36c2] The manifest is missing the required default namespace specification on the assembly element.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsManifestInvalidRequiredDefaultNamespace)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_MANIFEST_INVALID_REQUIRED_DEFAULT_NAMESPACE)).c_str(), L"[0x36c3] The manifest has a default namespace specified on the assembly element but its value is not \"urn:schemas-microsoft-com:asm.v1\".");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsPrivateManifestCrossPathWithReparsePoint)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_PRIVATE_MANIFEST_CROSS_PATH_WITH_REPARSE_POINT)).c_str(), L"[0x36c4] The private manifest probed has crossed a path with an unsupported reparse point.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsDuplicateDllName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_DUPLICATE_DLL_NAME)).c_str(), L"[0x36c5] Two or more components referenced directly or indirectly by the application manifest have files by the same name.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsDuplicateWindowclassName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_DUPLICATE_WINDOWCLASS_NAME)).c_str(), L"[0x36c6] Two or more components referenced directly or indirectly by the application manifest have window classes with the same name.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsDuplicateClsid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_DUPLICATE_CLSID)).c_str(), L"[0x36c7] Two or more components referenced directly or indirectly by the application manifest have the same COM server CLSIDs.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsDuplicateIid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_DUPLICATE_IID)).c_str(), L"[0x36c8] Two or more components referenced directly or indirectly by the application manifest have proxies for the same COM interface IIDs.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsDuplicateTlbid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_DUPLICATE_TLBID)).c_str(), L"[0x36c9] Two or more components referenced directly or indirectly by the application manifest have the same COM type library TLBIDs.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsDuplicateProgid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_DUPLICATE_PROGID)).c_str(), L"[0x36ca] Two or more components referenced directly or indirectly by the application manifest have the same COM ProgIDs.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsDuplicateAssemblyName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_DUPLICATE_ASSEMBLY_NAME)).c_str(), L"[0x36cb] Two or more components referenced directly or indirectly by the application manifest are different versions of the same component which is not permitted.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsFileHashMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_FILE_HASH_MISMATCH)).c_str(), L"[0x36cc] A component's file does not match the verification information present in the component manifest.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsPolicyParseError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_POLICY_PARSE_ERROR)).c_str(), L"[0x36cd] The policy manifest contains one or more syntax errors.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEMissingquote)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_MISSINGQUOTE)).c_str(), L"[0x36ce] Manifest Parse Error : A string literal was expected, but no opening quote character was found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlECommentsyntax)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_COMMENTSYNTAX)).c_str(), L"[0x36cf] Manifest Parse Error : Incorrect syntax was used in a comment.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEBadstartnamechar)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_BADSTARTNAMECHAR)).c_str(), L"[0x36d0] Manifest Parse Error : A name was started with an invalid character.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEBadnamechar)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_BADNAMECHAR)).c_str(), L"[0x36d1] Manifest Parse Error : A name contained an invalid character.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEBadcharinstring)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_BADCHARINSTRING)).c_str(), L"[0x36d2] Manifest Parse Error : A string literal contained an invalid character.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEXmldeclsyntax)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_XMLDECLSYNTAX)).c_str(), L"[0x36d3] Manifest Parse Error : Invalid syntax for an xml declaration.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEBadchardata)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_BADCHARDATA)).c_str(), L"[0x36d4] Manifest Parse Error : An Invalid character was found in text content.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEMissingwhitespace)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_MISSINGWHITESPACE)).c_str(), L"[0x36d5] Manifest Parse Error : Required white space was missing.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEExpectingtagend)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_EXPECTINGTAGEND)).c_str(), L"[0x36d6] Manifest Parse Error : The character '>' was expected.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEMissingsemicolon)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_MISSINGSEMICOLON)).c_str(), L"[0x36d7] Manifest Parse Error : A semi colon character was expected.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEUnbalancedparen)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_UNBALANCEDPAREN)).c_str(), L"[0x36d8] Manifest Parse Error : Unbalanced parentheses.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEInternalerror)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_INTERNALERROR)).c_str(), L"[0x36d9] Manifest Parse Error : Internal error.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEUnexpectedWhitespace)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_UNEXPECTED_WHITESPACE)).c_str(), L"[0x36da] Manifest Parse Error : Whitespace is not allowed at this location.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEIncompleteEncoding)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_INCOMPLETE_ENCODING)).c_str(), L"[0x36db] Manifest Parse Error : End of file reached in invalid state for current encoding.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEMissingParen)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_MISSING_PAREN)).c_str(), L"[0x36dc] Manifest Parse Error : Missing parenthesis.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEExpectingclosequote)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_EXPECTINGCLOSEQUOTE)).c_str(), L"[0x36dd] Manifest Parse Error : A single or double closing quote character (\\' or \\\") is missing.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEMultipleColons)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_MULTIPLE_COLONS)).c_str(), L"[0x36de] Manifest Parse Error : Multiple colons are not allowed in a name.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEInvalidDecimal)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_INVALID_DECIMAL)).c_str(), L"[0x36df] Manifest Parse Error : Invalid character for decimal digit.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEInvalidHexidecimal)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_INVALID_HEXIDECIMAL)).c_str(), L"[0x36e0] Manifest Parse Error : Invalid character for hexadecimal digit.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEInvalidUnicode)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_INVALID_UNICODE)).c_str(), L"[0x36e1] Manifest Parse Error : Invalid unicode character value for this platform.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEWhitespaceorquestionmark)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_WHITESPACEORQUESTIONMARK)).c_str(), L"[0x36e2] Manifest Parse Error : Expecting whitespace or '?'.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEUnexpectedendtag)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_UNEXPECTEDENDTAG)).c_str(), L"[0x36e3] Manifest Parse Error : End tag was not expected at this location.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEUnclosedtag)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_UNCLOSEDTAG)).c_str(), L"[0x36e4] Manifest Parse Error : The following tags were not closed: %1.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEDuplicateattribute)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_DUPLICATEATTRIBUTE)).c_str(), L"[0x36e5] Manifest Parse Error : Duplicate attribute.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEMultipleroots)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_MULTIPLEROOTS)).c_str(), L"[0x36e6] Manifest Parse Error : Only one top level element is allowed in an XML document.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEInvalidatrootlevel)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_INVALIDATROOTLEVEL)).c_str(), L"[0x36e7] Manifest Parse Error : Invalid at the top level of the document.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEBadxmldecl)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_BADXMLDECL)).c_str(), L"[0x36e8] Manifest Parse Error : Invalid xml declaration.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEMissingroot)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_MISSINGROOT)).c_str(), L"[0x36e9] Manifest Parse Error : XML document must have a top level element.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEUnexpectedeof)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_UNEXPECTEDEOF)).c_str(), L"[0x36ea] Manifest Parse Error : Unexpected end of file.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEBadperefinsubset)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_BADPEREFINSUBSET)).c_str(), L"[0x36eb] Manifest Parse Error : Parameter entities cannot be used inside markup declarations in an internal subset.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEUnclosedstarttag)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_UNCLOSEDSTARTTAG)).c_str(), L"[0x36ec] Manifest Parse Error : Element was not closed.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEUnclosedendtag)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_UNCLOSEDENDTAG)).c_str(), L"[0x36ed] Manifest Parse Error : End element was missing the character '>'.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEUnclosedstring)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_UNCLOSEDSTRING)).c_str(), L"[0x36ee] Manifest Parse Error : A string literal was not closed.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEUnclosedcomment)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_UNCLOSEDCOMMENT)).c_str(), L"[0x36ef] Manifest Parse Error : A comment was not closed.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEUncloseddecl)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_UNCLOSEDDECL)).c_str(), L"[0x36f0] Manifest Parse Error : A declaration was not closed.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEUnclosedcdata)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_UNCLOSEDCDATA)).c_str(), L"[0x36f1] Manifest Parse Error : A CDATA section was not closed.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEReservednamespace)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_RESERVEDNAMESPACE)).c_str(), L"[0x36f2] Manifest Parse Error : The namespace prefix is not allowed to start with the reserved string \"xml\".");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEInvalidencoding)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_INVALIDENCODING)).c_str(), L"[0x36f3] Manifest Parse Error : System does not support the specified encoding.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEInvalidswitch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_INVALIDSWITCH)).c_str(), L"[0x36f4] Manifest Parse Error : Switch from current encoding to specified encoding not supported.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEBadxmlcase)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_BADXMLCASE)).c_str(), L"[0x36f5] Manifest Parse Error : The name 'xml' is reserved and must be lower case.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEInvalidStandalone)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_INVALID_STANDALONE)).c_str(), L"[0x36f6] Manifest Parse Error : The standalone attribute must have the value 'yes' or 'no'.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEUnexpectedStandalone)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_UNEXPECTED_STANDALONE)).c_str(), L"[0x36f7] Manifest Parse Error : The standalone attribute cannot be used in external entities.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEInvalidVersion)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_INVALID_VERSION)).c_str(), L"[0x36f8] Manifest Parse Error : Invalid version number.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsXmlEMissingequals)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_XML_E_MISSINGEQUALS)).c_str(), L"[0x36f9] Manifest Parse Error : Missing equals sign between attribute and attribute value.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsProtectionRecoveryFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_PROTECTION_RECOVERY_FAILED)).c_str(), L"[0x36fa] Assembly Protection Error : Unable to recover the specified assembly.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsProtectionPublicKeyTooShort)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_PROTECTION_PUBLIC_KEY_TOO_SHORT)).c_str(), L"[0x36fb] Assembly Protection Error : The public key for an assembly was too short to be allowed.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsProtectionCatalogNotValid)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_PROTECTION_CATALOG_NOT_VALID)).c_str(), L"[0x36fc] Assembly Protection Error : The catalog for an assembly is not valid, or does not match the assembly's manifest.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsUntranslatableHresult)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_UNTRANSLATABLE_HRESULT)).c_str(), L"[0x36fd] An HRESULT could not be translated to a corresponding Win32 error code.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsProtectionCatalogFileMissing)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_PROTECTION_CATALOG_FILE_MISSING)).c_str(), L"[0x36fe] Assembly Protection Error : The catalog for an assembly is missing.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsMissingAssemblyIdentityAttribute)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_MISSING_ASSEMBLY_IDENTITY_ATTRIBUTE)).c_str(), L"[0x36ff] The supplied assembly identity is missing one or more attributes which must be present in this context.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsInvalidAssemblyIdentityAttributeName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_INVALID_ASSEMBLY_IDENTITY_ATTRIBUTE_NAME)).c_str(), L"[0x3700] The supplied assembly identity has one or more attribute names that contain characters not permitted in XML names.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsAssemblyMissing)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_ASSEMBLY_MISSING)).c_str(), L"[0x3701] The referenced assembly could not be found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsCorruptActivationStack)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_CORRUPT_ACTIVATION_STACK)).c_str(), L"[0x3702] The activation context activation stack for the running thread of execution is corrupt.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsCorruption)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_CORRUPTION)).c_str(), L"[0x3703] The application isolation metadata for this process or thread has become corrupt.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsEarlyDeactivation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_EARLY_DEACTIVATION)).c_str(), L"[0x3704] The activation context being deactivated is not the most recently activated one.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsInvalidDeactivation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_INVALID_DEACTIVATION)).c_str(), L"[0x3705] The activation context being deactivated is not active for the current thread of execution.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsMultipleDeactivation)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_MULTIPLE_DEACTIVATION)).c_str(), L"[0x3706] The activation context being deactivated has already been deactivated.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsProcessTerminationRequested)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_PROCESS_TERMINATION_REQUESTED)).c_str(), L"[0x3707] A component used by the isolation facility has requested to terminate the process.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsReleaseActivationContext)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_RELEASE_ACTIVATION_CONTEXT)).c_str(), L"[0x3708] A kernel mode component is releasing a reference on an activation context.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsSystemDefaultActivationContextEmpty)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_SYSTEM_DEFAULT_ACTIVATION_CONTEXT_EMPTY)).c_str(), L"[0x3709] The activation context of system default assembly could not be generated.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsInvalidIdentityAttributeValue)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_INVALID_IDENTITY_ATTRIBUTE_VALUE)).c_str(), L"[0x370a] The value of an attribute in an identity is not within the legal range.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsInvalidIdentityAttributeName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_INVALID_IDENTITY_ATTRIBUTE_NAME)).c_str(), L"[0x370b] The name of an attribute in an identity is not within the legal range.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsIdentityDuplicateAttribute)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_IDENTITY_DUPLICATE_ATTRIBUTE)).c_str(), L"[0x370c] An identity contains two definitions for the same attribute.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsIdentityParseError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_IDENTITY_PARSE_ERROR)).c_str(), L"[0x370d] The identity string is malformed. This may be due to a trailing comma, more than two unnamed attributes, missing attribute name or missing attribute value.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMalformedSubstitutionString)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MALFORMED_SUBSTITUTION_STRING)).c_str(), L"[0x370e] A string containing localized substitutable content was malformed. Either a dollar sign ($) was followed by something other than a left parenthesis or another dollar sign or an substitution's right parenthesis was not found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsIncorrectPublicKeyToken)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_INCORRECT_PUBLIC_KEY_TOKEN)).c_str(), L"[0x370f] The public key token does not correspond to the public key specified.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorUnmappedSubstitutionString)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_UNMAPPED_SUBSTITUTION_STRING)).c_str(), L"[0x3710] A substitution string had no mapping.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsAssemblyNotLocked)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_ASSEMBLY_NOT_LOCKED)).c_str(), L"[0x3711] The component must be locked before making the request.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsComponentStoreCorrupt)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_COMPONENT_STORE_CORRUPT)).c_str(), L"[0x3712] The component store has been corrupted.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorAdvancedInstallerFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_ADVANCED_INSTALLER_FAILED)).c_str(), L"[0x3713] An advanced installer failed during setup or servicing.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorXmlEncodingMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_XML_ENCODING_MISMATCH)).c_str(), L"[0x3714] The character encoding in the XML declaration did not match the encoding used in the document.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsManifestIdentitySameButContentsDifferent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_MANIFEST_IDENTITY_SAME_BUT_CONTENTS_DIFFERENT)).c_str(), L"[0x3715] The identities of the manifests are identical but their contents are different.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsIdentitiesDifferent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_IDENTITIES_DIFFERENT)).c_str(), L"[0x3716] The component identities are different.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsAssemblyIsNotADeployment)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_ASSEMBLY_IS_NOT_A_DEPLOYMENT)).c_str(), L"[0x3717] The assembly is not a deployment.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsFileNotPartOfAssembly)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_FILE_NOT_PART_OF_ASSEMBLY)).c_str(), L"[0x3718] The file is not a part of the assembly.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsManifestTooBig)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_MANIFEST_TOO_BIG)).c_str(), L"[0x3719] The size of the manifest exceeds the maximum allowed.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsSettingNotRegistered)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_SETTING_NOT_REGISTERED)).c_str(), L"[0x371a] The setting is not registered.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsTransactionClosureIncomplete)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_TRANSACTION_CLOSURE_INCOMPLETE)).c_str(), L"[0x371b] One or more required members of the transaction are not present.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSmiPrimitiveInstallerFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SMI_PRIMITIVE_INSTALLER_FAILED)).c_str(), L"[0x371c] The SMI primitive installer failed during setup or servicing.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorGenericCommandFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_GENERIC_COMMAND_FAILED)).c_str(), L"[0x371d] A generic command executable returned a result that indicates failure.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsFileHashMissing)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_FILE_HASH_MISSING)).c_str(), L"[0x371e] A component is missing file verification information in its manifest.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorSxsDuplicateActivatableClass)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_SXS_DUPLICATE_ACTIVATABLE_CLASS)).c_str(), L"[0x371f] Two or more components referenced directly or indirectly by the application manifest have the same WinRT ActivatableClass IDs.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtInvalidChannelPath)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_INVALID_CHANNEL_PATH)).c_str(), L"[0x3a98] The specified channel path is invalid.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtInvalidQuery)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_INVALID_QUERY)).c_str(), L"[0x3a99] The specified query is invalid.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtPublisherMetadataNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_PUBLISHER_METADATA_NOT_FOUND)).c_str(), L"[0x3a9a] The publisher metadata cannot be found in the resource.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtEventTemplateNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_EVENT_TEMPLATE_NOT_FOUND)).c_str(), L"[0x3a9b] The template for an event definition cannot be found in the resource (error = %1).");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtInvalidPublisherName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_INVALID_PUBLISHER_NAME)).c_str(), L"[0x3a9c] The specified publisher name is invalid.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtInvalidEventData)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_INVALID_EVENT_DATA)).c_str(), L"[0x3a9d] The event data raised by the publisher is not compatible with the event template definition in the publisher's manifest.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtChannelNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_CHANNEL_NOT_FOUND)).c_str(), L"[0x3a9f] The specified channel could not be found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtMalformedXmlText)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_MALFORMED_XML_TEXT)).c_str(), L"[0x3aa0] The specified XML text was not well-formed. See Extended Error for more details.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtSubscriptionToDirectChannel)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_SUBSCRIPTION_TO_DIRECT_CHANNEL)).c_str(), L"[0x3aa1] The events for a direct channel go directly to a log file and cannot be subscribed to.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtConfigurationError)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_CONFIGURATION_ERROR)).c_str(), L"[0x3aa2] Configuration error.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtQueryResultStale)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_QUERY_RESULT_STALE)).c_str(), L"[0x3aa3] The query result is stale or invalid and must be recreated. This may be due to the log being cleared or rolling over after the query result was created.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtQueryResultInvalidPosition)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_QUERY_RESULT_INVALID_POSITION)).c_str(), L"[0x3aa4] The query result is currently at an invalid position.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtNonValidatingMsxml)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_NON_VALIDATING_MSXML)).c_str(), L"[0x3aa5] Registered MSXML doesn't support validation.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtFilterAlreadyscoped)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_FILTER_ALREADYSCOPED)).c_str(), L"[0x3aa6] An expression can only be followed by a change-of-scope operation if the expression evaluates to a node set and is not already part of another change-of-scope operation.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtFilterNoteltset)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_FILTER_NOTELTSET)).c_str(), L"[0x3aa7] Cannot perform a step operation from a term that does not represent an element set.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtFilterInvarg)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_FILTER_INVARG)).c_str(), L"[0x3aa8] Left-hand side arguments to binary operators must be either attributes, nodes or variables. Right-hand side arguments must be constants.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtFilterInvtest)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_FILTER_INVTEST)).c_str(), L"[0x3aa9] A step operation must involve a node test or, in the case of a predicate, an algebraic expression against which to test each node in the preceeding node set.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtFilterInvtype)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_FILTER_INVTYPE)).c_str(), L"[0x3aaa] This data type is currently unsupported.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtFilterParseerr)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_FILTER_PARSEERR)).c_str(), L"[0x3aab] A syntax error occurred at position %1!d!");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtFilterUnsupportedop)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_FILTER_UNSUPPORTEDOP)).c_str(), L"[0x3aac] This operator is unsupported by this implementation of the filter.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtFilterUnexpectedtoken)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_FILTER_UNEXPECTEDTOKEN)).c_str(), L"[0x3aad] An unexpected token was encountered.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtInvalidOperationOverEnabledDirectChannel)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_INVALID_OPERATION_OVER_ENABLED_DIRECT_CHANNEL)).c_str(), L"[0x3aae] The requested operation cannot be performed over an enabled direct channel. The channel must first be disabled.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtInvalidChannelPropertyValue)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_INVALID_CHANNEL_PROPERTY_VALUE)).c_str(), L"[0x3aaf] Channel property %1 contains an invalid value. The value has an invalid type, is outside of its valid range, cannot be changed, or is not supported by this type of channel.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtInvalidPublisherPropertyValue)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_INVALID_PUBLISHER_PROPERTY_VALUE)).c_str(), L"[0x3ab0] Publisher property %1 contains an invalid value. The value has an invalid type, is outside of its valid range, cannot be changed, or is not supported by this type of publisher.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtChannelCannotActivate)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_CHANNEL_CANNOT_ACTIVATE)).c_str(), L"[0x3ab1] The channel failed to activate.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtFilterTooComplex)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_FILTER_TOO_COMPLEX)).c_str(), L"[0x3ab2] The XPath expression exceeded the supported complexity. Simplify the expression or split it into multiple expressions.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtMessageNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_MESSAGE_NOT_FOUND)).c_str(), L"[0x3ab3] The message resource is present but the message was not found in the message table.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtMessageIdNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_MESSAGE_ID_NOT_FOUND)).c_str(), L"[0x3ab4] The message ID for the desired message could not be found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtUnresolvedValueInsert)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_UNRESOLVED_VALUE_INSERT)).c_str(), L"[0x3ab5] The substitution string for insert index (%1) could not be found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtUnresolvedParameterInsert)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_UNRESOLVED_PARAMETER_INSERT)).c_str(), L"[0x3ab6] The description string for parameter reference (%1) could not be found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtMaxInsertsReached)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_MAX_INSERTS_REACHED)).c_str(), L"[0x3ab7] The maximum number of replacements has been reached.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtEventDefinitionNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_EVENT_DEFINITION_NOT_FOUND)).c_str(), L"[0x3ab8] The event definition could not be found for event ID (%1).");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtMessageLocaleNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_MESSAGE_LOCALE_NOT_FOUND)).c_str(), L"[0x3ab9] The locale specific resource for the desired message is not present.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtVersionTooOld)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_VERSION_TOO_OLD)).c_str(), L"[0x3aba] The resource is too old and is not supported.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtVersionTooNew)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_VERSION_TOO_NEW)).c_str(), L"[0x3abb] The resource is too new and is not supported.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtCannotOpenChannelOfQuery)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_CANNOT_OPEN_CHANNEL_OF_QUERY)).c_str(), L"[0x3abc] The channel at index %1!d! of the query can't be opened.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtPublisherDisabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_PUBLISHER_DISABLED)).c_str(), L"[0x3abd] The publisher has been disabled and its resource is not available. This usually occurs when the publisher is in the process of being uninstalled or upgraded.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEvtFilterOutOfRange)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EVT_FILTER_OUT_OF_RANGE)).c_str(), L"[0x3abe] Attempted to create a numeric type that is outside of its valid range.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEcSubscriptionCannotActivate)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EC_SUBSCRIPTION_CANNOT_ACTIVATE)).c_str(), L"[0x3ae8] The subscription fails to activate.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEcLogDisabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EC_LOG_DISABLED)).c_str(), L"[0x3ae9] The log of the subscription is in disabled state, and can not be used to forward events to. The log must first be enabled before the subscription can be activated.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEcCircularForwarding)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EC_CIRCULAR_FORWARDING)).c_str(), L"[0x3aea] When forwarding events from local machine to itself, the query of the subscription can't contain target log of the subscription.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEcCredstoreFull)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EC_CREDSTORE_FULL)).c_str(), L"[0x3aeb] The credential store that is used to save credentials is full.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEcCredNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EC_CRED_NOT_FOUND)).c_str(), L"[0x3aec] The credential used by this subscription can't be found in credential store.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorEcNoActiveChannel)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_EC_NO_ACTIVE_CHANNEL)).c_str(), L"[0x3aed] No active channel is found for the query.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMuiFileNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MUI_FILE_NOT_FOUND)).c_str(), L"[0x3afc] The resource loader failed to find MUI file.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMuiInvalidFile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MUI_INVALID_FILE)).c_str(), L"[0x3afd] The resource loader failed to load MUI file because the file fail to pass validation.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMuiInvalidRcConfig)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MUI_INVALID_RC_CONFIG)).c_str(), L"[0x3afe] The RC Manifest is corrupted with garbage data or unsupported version or missing required item.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMuiInvalidLocaleName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MUI_INVALID_LOCALE_NAME)).c_str(), L"[0x3aff] The RC Manifest has invalid culture name.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMuiInvalidUltimatefallbackName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MUI_INVALID_ULTIMATEFALLBACK_NAME)).c_str(), L"[0x3b00] The RC Manifest has invalid ultimatefallback name.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMuiFileNotLoaded)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MUI_FILE_NOT_LOADED)).c_str(), L"[0x3b01] The resource loader cache doesn't have loaded MUI entry.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorResourceEnumUserStop)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_RESOURCE_ENUM_USER_STOP)).c_str(), L"[0x3b02] User stopped resource enumeration.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMuiIntlsettingsUilangNotInstalled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MUI_INTLSETTINGS_UILANG_NOT_INSTALLED)).c_str(), L"[0x3b03] UI language installation failed.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMuiIntlsettingsInvalidLocaleName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MUI_INTLSETTINGS_INVALID_LOCALE_NAME)).c_str(), L"[0x3b04] Locale installation failed.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmRuntimeNoDefaultOrNeutralResource)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_RUNTIME_NO_DEFAULT_OR_NEUTRAL_RESOURCE)).c_str(), L"[0x3b06] A resource does not have default or neutral value.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmInvalidPriconfig)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_INVALID_PRICONFIG)).c_str(), L"[0x3b07] Invalid PRI config file.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmInvalidFileType)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_INVALID_FILE_TYPE)).c_str(), L"[0x3b08] Invalid file type.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmUnknownQualifier)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_UNKNOWN_QUALIFIER)).c_str(), L"[0x3b09] Unknown qualifier.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmInvalidQualifierValue)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_INVALID_QUALIFIER_VALUE)).c_str(), L"[0x3b0a] Invalid qualifier value.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmNoCandidate)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_NO_CANDIDATE)).c_str(), L"[0x3b0b] No Candidate found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmNoMatchOrDefaultCandidate)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_NO_MATCH_OR_DEFAULT_CANDIDATE)).c_str(), L"[0x3b0c] The ResourceMap or NamedResource has an item that does not have default or neutral resource..");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmResourceTypeMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_RESOURCE_TYPE_MISMATCH)).c_str(), L"[0x3b0d] Invalid ResourceCandidate type.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmDuplicateMapName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_DUPLICATE_MAP_NAME)).c_str(), L"[0x3b0e] Duplicate Resource Map.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmDuplicateEntry)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_DUPLICATE_ENTRY)).c_str(), L"[0x3b0f] Duplicate Entry.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmInvalidResourceIdentifier)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_INVALID_RESOURCE_IDENTIFIER)).c_str(), L"[0x3b10] Invalid Resource Identifier.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmFilepathTooLong)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_FILEPATH_TOO_LONG)).c_str(), L"[0x3b11] Filepath too long.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmUnsupportedDirectoryType)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_UNSUPPORTED_DIRECTORY_TYPE)).c_str(), L"[0x3b12] Unsupported directory type.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmInvalidPriFile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_INVALID_PRI_FILE)).c_str(), L"[0x3b16] Invalid PRI File.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmNamedResourceNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_NAMED_RESOURCE_NOT_FOUND)).c_str(), L"[0x3b17] NamedResource Not Found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmMapNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_MAP_NOT_FOUND)).c_str(), L"[0x3b1f] ResourceMap Not Found.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmUnsupportedProfileType)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_UNSUPPORTED_PROFILE_TYPE)).c_str(), L"[0x3b20] Unsupported MRT profile type.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmInvalidQualifierOperator)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_INVALID_QUALIFIER_OPERATOR)).c_str(), L"[0x3b21] Invalid qualifier operator.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmIndeterminateQualifierValue)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_INDETERMINATE_QUALIFIER_VALUE)).c_str(), L"[0x3b22] Unable to determine qualifier value or qualifier value has not been set.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmAutomergeEnabled)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_AUTOMERGE_ENABLED)).c_str(), L"[0x3b23] Automerge is enabled in the PRI file.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmTooManyResources)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_TOO_MANY_RESOURCES)).c_str(), L"[0x3b24] Too many resources defined for package.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmUnsupportedFileTypeForMerge)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_UNSUPPORTED_FILE_TYPE_FOR_MERGE)).c_str(), L"[0x3b25] Resource File can not be used for merge operation.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmUnsupportedFileTypeForLoadUnloadPriFile)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_UNSUPPORTED_FILE_TYPE_FOR_LOAD_UNLOAD_PRI_FILE)).c_str(), L"[0x3b26] Load/UnloadPriFiles cannot be used with resource packages.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmNoCurrentViewOnThread)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_NO_CURRENT_VIEW_ON_THREAD)).c_str(), L"[0x3b27] Resource Contexts may not be created on threads that do not have a CoreWindow.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorDifferentProfileResourceManagerExist)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_DIFFERENT_PROFILE_RESOURCE_MANAGER_EXIST)).c_str(), L"[0x3b28] The singleton Resource Manager with different profile is already created.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorOperationNotAllowedFromSystemComponent)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_OPERATION_NOT_ALLOWED_FROM_SYSTEM_COMPONENT)).c_str(), L"[0x3b29] The system component cannot operate given API operation");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmDirectRefToNonDefaultResource)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_DIRECT_REF_TO_NON_DEFAULT_RESOURCE)).c_str(), L"[0x3b2a] The resource is a direct reference to a non-default resource candidate.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmGenerationCountMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_GENERATION_COUNT_MISMATCH)).c_str(), L"[0x3b2b] Resource Map has been re-generated and the query string is not valid anymore.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorPriMergeVersionMismatch)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PRI_MERGE_VERSION_MISMATCH)).c_str(), L"[0x3b2c] The PRI files to be merged have incompatible versions.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorPriMergeMissingSchema)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PRI_MERGE_MISSING_SCHEMA)).c_str(), L"[0x3b2d] The primary PRI files to be merged does not contain a schema.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorPriMergeLoadFileFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PRI_MERGE_LOAD_FILE_FAILED)).c_str(), L"[0x3b2e] Unable to load one of the PRI files to be merged.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorPriMergeAddFileFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PRI_MERGE_ADD_FILE_FAILED)).c_str(), L"[0x3b2f] Unable to add one of the PRI files to the merged file.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorPriMergeWriteFileFailed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PRI_MERGE_WRITE_FILE_FAILED)).c_str(), L"[0x3b30] Unable to create the merged PRI file.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorPriMergeMultiplePackageFamiliesNotAllowed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PRI_MERGE_MULTIPLE_PACKAGE_FAMILIES_NOT_ALLOWED)).c_str(), L"[0x3b31] Packages for a PRI file merge must all be from the same package family.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorPriMergeMultipleMainPackagesNotAllowed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PRI_MERGE_MULTIPLE_MAIN_PACKAGES_NOT_ALLOWED)).c_str(), L"[0x3b32] Packages for a PRI file merge must not include multiple main packages.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorPriMergeBundlePackagesNotAllowed)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PRI_MERGE_BUNDLE_PACKAGES_NOT_ALLOWED)).c_str(), L"[0x3b33] Packages for a PRI file merge must not include bundle packages.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorPriMergeMainPackageRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PRI_MERGE_MAIN_PACKAGE_REQUIRED)).c_str(), L"[0x3b34] Packages for a PRI file merge must include one main package.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorPriMergeResourcePackageRequired)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PRI_MERGE_RESOURCE_PACKAGE_REQUIRED)).c_str(), L"[0x3b35] Packages for a PRI file merge must include at least one resource package.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorPriMergeInvalidFileName)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_PRI_MERGE_INVALID_FILE_NAME)).c_str(), L"[0x3b36] Invalid name supplied for a canonical merged PRI file.");
}

TEST(Win32SystemErrorsTest2500, Win32ErrorMrmPackageNotFound)
{
	EXPECT_STREQ(SysError(static_cast<DWORD>(ERROR_MRM_PACKAGE_NOT_FOUND)).c_str(), L"[0x3b37] Unable to find the specified package.");
}
