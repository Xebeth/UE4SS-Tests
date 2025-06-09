#include <format>
#include <windows.h>
#include <gtest/gtest.h>

#include <Helpers/String.hpp>
#include <Helpers/Win32Error.hpp>

using namespace RC;

TEST(SystemErrorsTest2500, SystemMessageErrorDsGlobalCantHaveUniversalMember)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_GLOBAL_CANT_HAVE_UNIVERSAL_MEMBER)).c_str(), L"[0x2145] A global group cannot have a universal group as a member. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsUniversalCantHaveLocalMember)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_UNIVERSAL_CANT_HAVE_LOCAL_MEMBER)).c_str(), L"[0x2146] A universal group cannot have a local group as a member. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsGlobalCantHaveCrossdomainMember)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_GLOBAL_CANT_HAVE_CROSSDOMAIN_MEMBER)).c_str(), L"[0x2147] A global group cannot have a cross-domain member. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsLocalCantHaveCrossdomainLocalMember)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_LOCAL_CANT_HAVE_CROSSDOMAIN_LOCAL_MEMBER)).c_str(), L"[0x2148] A local group cannot have another cross domain local group as a member. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsHavePrimaryMembers)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_HAVE_PRIMARY_MEMBERS)).c_str(), L"[0x2149] A group with primary members cannot change to a security-disabled group. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsStringSdConversionFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_STRING_SD_CONVERSION_FAILED)).c_str(), L"[0x214a] The schema cache load failed to convert the string default SD on a class-schema object. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsNamingMasterGc)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NAMING_MASTER_GC)).c_str(), L"[0x214b] Only DSAs configured to be Global Catalog servers should be allowed to hold the Domain Naming Master FSMO role. (Applies only to Windows 2000 servers) ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDnsLookupFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DNS_LOOKUP_FAILURE)).c_str(), L"[0x214c] The DSA operation is unable to proceed because of a DNS lookup failure. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsCouldntUpdateSpns)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_COULDNT_UPDATE_SPNS)).c_str(), L"[0x214d] While processing a change to the DNS Host Name for an object, the Service Principal Name values could not be kept in sync. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsCantRetrieveSd)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_RETRIEVE_SD)).c_str(), L"[0x214e] The Security Descriptor attribute could not be read. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsKeyNotUnique)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_KEY_NOT_UNIQUE)).c_str(), L"[0x214f] The object requested was not found, but an object with that key was found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsWrongLinkedAttSyntax)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_WRONG_LINKED_ATT_SYNTAX)).c_str(), L"[0x2150] The syntax of the linked attribute being added is incorrect. Forward links can only have syntax 2.5.5.1, 2.5.5.7, and 2.5.5.14, and backlinks can only have syntax 2.5.5.1 ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsSamNeedBootkeyPassword)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SAM_NEED_BOOTKEY_PASSWORD)).c_str(), L"[0x2151] Security Account Manager needs to get the boot password. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsSamNeedBootkeyFloppy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SAM_NEED_BOOTKEY_FLOPPY)).c_str(), L"[0x2152] Security Account Manager needs to get the boot key from floppy disk. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsCantStart)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_START)).c_str(), L"[0x2153] Directory Service cannot start. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsInitFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INIT_FAILURE)).c_str(), L"[0x2154] Directory Services could not start. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsNoPktPrivacyOnConnection)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_PKT_PRIVACY_ON_CONNECTION)).c_str(), L"[0x2155] The connection between client and server requires packet privacy or better. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsSourceDomainInForest)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SOURCE_DOMAIN_IN_FOREST)).c_str(), L"[0x2156] The source domain may not be in the same forest as destination. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDestinationDomainNotInForest)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DESTINATION_DOMAIN_NOT_IN_FOREST)).c_str(), L"[0x2157] The destination domain must be in the forest. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDestinationAuditingNotEnabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DESTINATION_AUDITING_NOT_ENABLED)).c_str(), L"[0x2158] The operation requires that destination domain auditing be enabled. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsCantFindDcForSrcDomain)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_FIND_DC_FOR_SRC_DOMAIN)).c_str(), L"[0x2159] The operation couldn't locate a DC for the source domain. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsSrcObjNotGroupOrUser)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SRC_OBJ_NOT_GROUP_OR_USER)).c_str(), L"[0x215a] The source object must be a group or user. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsSrcSidExistsInForest)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SRC_SID_EXISTS_IN_FOREST)).c_str(), L"[0x215b] The source object's SID already exists in destination forest. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsSrcAndDstObjectClassMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SRC_AND_DST_OBJECT_CLASS_MISMATCH)).c_str(), L"[0x215c] The source and destination object must be of the same type. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSamInitFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SAM_INIT_FAILURE)).c_str(), L"[0x215d] Security Accounts Manager initialization failed because of the following error: %1. Error Status: 0x%2. Click OK to shut down the system and reboot into Safe Mode. Check the event log for detailed information. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDraSchemaInfoShip)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_SCHEMA_INFO_SHIP)).c_str(), L"[0x215e] Schema information could not be included in the replication request. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDraSchemaConflict)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_SCHEMA_CONFLICT)).c_str(), L"[0x215f] The replication operation could not be completed due to a schema incompatibility. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDraEarlierSchemaConflict)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_EARLIER_SCHEMA_CONFLICT)).c_str(), L"[0x2160] The replication operation could not be completed due to a previous schema incompatibility. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDraObjNcMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_OBJ_NC_MISMATCH)).c_str(), L"[0x2161] The replication update could not be applied because either the source or the destination has not yet received information regarding a recent cross-domain move operation. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsNcStillHasDsas)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NC_STILL_HAS_DSAS)).c_str(), L"[0x2162] The requested domain could not be deleted because there exist domain controllers that still host this domain. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsGcRequired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_GC_REQUIRED)).c_str(), L"[0x2163] The requested operation can be performed only on a global catalog server. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsLocalMemberOfLocalOnly)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_LOCAL_MEMBER_OF_LOCAL_ONLY)).c_str(), L"[0x2164] A local group can only be a member of other local groups in the same domain. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsNoFpoInUniversalGroups)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_FPO_IN_UNIVERSAL_GROUPS)).c_str(), L"[0x2165] Foreign security principals cannot be members of universal groups. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsCantAddToGc)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_ADD_TO_GC)).c_str(), L"[0x2166] The attribute is not allowed to be replicated to the GC because of security reasons. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsNoCheckpointWithPdc)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_CHECKPOINT_WITH_PDC)).c_str(), L"[0x2167] The checkpoint with the PDC could not be taken because there too many modifications being processed currently. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsSourceAuditingNotEnabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SOURCE_AUDITING_NOT_ENABLED)).c_str(), L"[0x2168] The operation requires that source domain auditing be enabled. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsCantCreateInNondomainNc)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_CREATE_IN_NONDOMAIN_NC)).c_str(), L"[0x2169] Security principal objects can only be created inside domain naming contexts. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsInvalidNameForSpn)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INVALID_NAME_FOR_SPN)).c_str(), L"[0x216a] A Service Principal Name (SPN) could not be constructed because the provided hostname is not in the necessary format. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsFilterUsesContructedAttrs)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_FILTER_USES_CONTRUCTED_ATTRS)).c_str(), L"[0x216b] A Filter was passed that uses constructed attributes. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsUnicodepwdNotInQuotes)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_UNICODEPWD_NOT_IN_QUOTES)).c_str(), L"[0x216c] The unicodePwd attribute value must be enclosed in double quotes. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsMachineAccountQuotaExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED)).c_str(), L"[0x216d] Your computer could not be joined to the domain. You have exceeded the maximum number of computer accounts you are allowed to create in this domain. Contact your system administrator to have this limit reset or increased. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsMustBeRunOnDstDc)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_MUST_BE_RUN_ON_DST_DC)).c_str(), L"[0x216e] For security reasons, the operation must be run on the destination DC. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsSrcDcMustBeSp4OrGreater)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SRC_DC_MUST_BE_SP4_OR_GREATER)).c_str(), L"[0x216f] For security reasons, the source DC must be NT4SP4 or greater. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsCantTreeDeleteCriticalObj)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_TREE_DELETE_CRITICAL_OBJ)).c_str(), L"[0x2170] Critical Directory Service System objects cannot be deleted during tree delete operations. The tree delete may have been partially performed. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsInitFailureConsole)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INIT_FAILURE_CONSOLE)).c_str(), L"[0x2171] Directory Services could not start because of the following error: %1. Error Status: 0x%2. Please click OK to shutdown the system. You can use the recovery console to diagnose the system further. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsSamInitFailureConsole)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SAM_INIT_FAILURE_CONSOLE)).c_str(), L"[0x2172] Security Accounts Manager initialization failed because of the following error: %1. Error Status: 0x%2. Please click OK to shutdown the system. You can use the recovery console to diagnose the system further. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsForestVersionTooHigh)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_FOREST_VERSION_TOO_HIGH)).c_str(), L"[0x2173] The version of the operating system is incompatible with the current AD DS forest functional level or AD LDS Configuration Set functional level. You must upgrade to a new version of the operating system before this server can become an AD DS Domain Controller or add an AD LDS Instance in this AD DS Forest or AD LDS Configuration Set. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDomainVersionTooHigh)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DOMAIN_VERSION_TOO_HIGH)).c_str(), L"[0x2174] The version of the operating system installed is incompatible with the current domain functional level. You must upgrade to a new version of the operating system before this server can become a domain controller in this domain. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsForestVersionTooLow)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_FOREST_VERSION_TOO_LOW)).c_str(), L"[0x2175] The version of the operating system installed on this server no longer supports the current AD DS Forest functional level or AD LDS Configuration Set functional level. You must raise the AD DS Forest functional level or AD LDS Configuration Set functional level before this server can become an AD DS Domain Controller or an AD LDS Instance in this Forest or Configuration Set. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDomainVersionTooLow)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DOMAIN_VERSION_TOO_LOW)).c_str(), L"[0x2176] The version of the operating system installed on this server no longer supports the current domain functional level. You must raise the domain functional level before this server can become a domain controller in this domain. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsIncompatibleVersion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INCOMPATIBLE_VERSION)).c_str(), L"[0x2177] The version of the operating system installed on this server is incompatible with the functional level of the domain or forest. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsLowDsaVersion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_LOW_DSA_VERSION)).c_str(), L"[0x2178] The functional level of the domain (or forest) cannot be raised to the requested value, because there exist one or more domain controllers in the domain (or forest) that are at a lower incompatible functional level. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsNoBehaviorVersionInMixeddomain)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_BEHAVIOR_VERSION_IN_MIXEDDOMAIN)).c_str(), L"[0x2179] The forest functional level cannot be raised to the requested value since one or more domains are still in mixed domain mode. All domains in the forest must be in native mode, for you to raise the forest functional level. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsNotSupportedSortOrder)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NOT_SUPPORTED_SORT_ORDER)).c_str(), L"[0x217a] The sort order requested is not supported. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsNameNotUnique)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NAME_NOT_UNIQUE)).c_str(), L"[0x217b] The requested name already exists as a unique identifier. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsMachineAccountCreatedPrent4)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_MACHINE_ACCOUNT_CREATED_PRENT4)).c_str(), L"[0x217c] The machine account was created pre-NT4. The account needs to be recreated. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsOutOfVersionStore)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_OUT_OF_VERSION_STORE)).c_str(), L"[0x217d] The database is out of version store. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsIncompatibleControlsUsed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INCOMPATIBLE_CONTROLS_USED)).c_str(), L"[0x217e] Unable to continue operation because multiple conflicting controls were used. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsNoRefDomain)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_REF_DOMAIN)).c_str(), L"[0x217f] Unable to find a valid security descriptor reference domain for this partition. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsReservedLinkId)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_RESERVED_LINK_ID)).c_str(), L"[0x2180] Schema update failed: The link identifier is reserved. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsLinkIdNotAvailable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_LINK_ID_NOT_AVAILABLE)).c_str(), L"[0x2181] Schema update failed: There are no link identifiers available. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsAgCantHaveUniversalMember)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_AG_CANT_HAVE_UNIVERSAL_MEMBER)).c_str(), L"[0x2182] An account group cannot have a universal group as a member. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsModifydnDisallowedByInstanceType)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_MODIFYDN_DISALLOWED_BY_INSTANCE_TYPE)).c_str(), L"[0x2183] Rename or move operations on naming context heads or read-only objects are not allowed. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsNoObjectMoveInSchemaNc)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_OBJECT_MOVE_IN_SCHEMA_NC)).c_str(), L"[0x2184] Move operations on objects in the schema naming context are not allowed. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsModifydnDisallowedByFlag)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_MODIFYDN_DISALLOWED_BY_FLAG)).c_str(), L"[0x2185] A system flag has been set on the object and does not allow the object to be moved or renamed. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsModifydnWrongGrandparent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_MODIFYDN_WRONG_GRANDPARENT)).c_str(), L"[0x2186] This object is not allowed to change its grandparent container. Moves are not forbidden on this object, but are restricted to sibling containers. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsNameErrorTrustReferral)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NAME_ERROR_TRUST_REFERRAL)).c_str(), L"[0x2187] Unable to resolve completely, a referral to another forest is generated. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorNotSupportedOnStandardServer)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NOT_SUPPORTED_ON_STANDARD_SERVER)).c_str(), L"[0x2188] The requested action is not supported on standard server. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsCantAccessRemotePartOfAd)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_ACCESS_REMOTE_PART_OF_AD)).c_str(), L"[0x2189] Could not access a partition of the directory service located on a remote server. Make sure at least one server is running for the partition in question. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsCrImpossibleToValidateV2)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CR_IMPOSSIBLE_TO_VALIDATE_V2)).c_str(), L"[0x218a] The directory cannot validate the proposed naming context (or partition) name because it does not hold a replica nor can it contact a replica of the naming context above the proposed naming context. Please ensure that the parent naming context is properly registered in DNS, and at least one replica of this naming context is reachable by the Domain Naming master. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsThreadLimitExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_THREAD_LIMIT_EXCEEDED)).c_str(), L"[0x218b] The thread limit for this request was exceeded. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsNotClosest)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NOT_CLOSEST)).c_str(), L"[0x218c] The Global catalog server is not in the closest site. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsCantDeriveSpnWithoutServerRef)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_DERIVE_SPN_WITHOUT_SERVER_REF)).c_str(), L"[0x218d] The DS cannot derive a service principal name (SPN) with which to mutually authenticate the target server because the corresponding server object in the local DS database has no serverReference attribute. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsSingleUserModeFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SINGLE_USER_MODE_FAILED)).c_str(), L"[0x218e] The Directory Service failed to enter single user mode. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsNtdscriptSyntaxError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NTDSCRIPT_SYNTAX_ERROR)).c_str(), L"[0x218f] The Directory Service cannot parse the script because of a syntax error. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsNtdscriptProcessError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NTDSCRIPT_PROCESS_ERROR)).c_str(), L"[0x2190] The Directory Service cannot process the script because of an error. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDifferentReplEpochs)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DIFFERENT_REPL_EPOCHS)).c_str(), L"[0x2191] The directory service cannot perform the requested operation because the servers involved are of different replication epochs (which is usually related to a domain rename that is in progress). ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDrsExtensionsChanged)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRS_EXTENSIONS_CHANGED)).c_str(), L"[0x2192] The directory service binding must be renegotiated due to a change in the server extensions information. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsReplicaSetChangeNotAllowedOnDisabledCr)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_REPLICA_SET_CHANGE_NOT_ALLOWED_ON_DISABLED_CR)).c_str(), L"[0x2193] Operation not allowed on a disabled cross ref. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsNoMsdsIntid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_MSDS_INTID)).c_str(), L"[0x2194] Schema update failed: No values for msDS-IntId are available. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDupMsdsIntid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DUP_MSDS_INTID)).c_str(), L"[0x2195] Schema update failed: Duplicate msDS-INtId. Retry the operation. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsExistsInRdnattid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_EXISTS_IN_RDNATTID)).c_str(), L"[0x2196] Schema deletion failed: attribute is used in rDNAttID. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsAuthorizationFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_AUTHORIZATION_FAILED)).c_str(), L"[0x2197] The directory service failed to authorize the request. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsInvalidScript)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INVALID_SCRIPT)).c_str(), L"[0x2198] The Directory Service cannot process the script because it is invalid. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsRemoteCrossrefOpFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_REMOTE_CROSSREF_OP_FAILED)).c_str(), L"[0x2199] The remote create cross reference operation failed on the Domain Naming Master FSMO. The operation's error is in the extended data. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsCrossRefBusy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CROSS_REF_BUSY)).c_str(), L"[0x219a] A cross reference is in use locally with the same name. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsCantDeriveSpnForDeletedDomain)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_DERIVE_SPN_FOR_DELETED_DOMAIN)).c_str(), L"[0x219b] The DS cannot derive a service principal name (SPN) with which to mutually authenticate the target server because the server's domain has been deleted from the forest. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsCantDemoteWithWriteableNc)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_DEMOTE_WITH_WRITEABLE_NC)).c_str(), L"[0x219c] Writeable NCs prevent this DC from demoting. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDuplicateIdFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DUPLICATE_ID_FOUND)).c_str(), L"[0x219d] The requested object has a non-unique identifier and cannot be retrieved. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsInsufficientAttrToCreateObject)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INSUFFICIENT_ATTR_TO_CREATE_OBJECT)).c_str(), L"[0x219e] Insufficient attributes were given to create an object. This object may not exist because it may have been deleted and already garbage collected. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsGroupConversionError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_GROUP_CONVERSION_ERROR)).c_str(), L"[0x219f] The group cannot be converted due to attribute restrictions on the requested group type. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsCantMoveAppBasicGroup)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_MOVE_APP_BASIC_GROUP)).c_str(), L"[0x21a0] Cross-domain move of non-empty basic application groups is not allowed. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsCantMoveAppQueryGroup)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_CANT_MOVE_APP_QUERY_GROUP)).c_str(), L"[0x21a1] Cross-domain move of non-empty query based application groups is not allowed. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsRoleNotVerified)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_ROLE_NOT_VERIFIED)).c_str(), L"[0x21a2] The FSMO role ownership could not be verified because its directory partition has not replicated successfully with at least one replication partner. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsWkoContainerCannotBeSpecial)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_WKO_CONTAINER_CANNOT_BE_SPECIAL)).c_str(), L"[0x21a3] The target container for a redirection of a well known object container cannot already be a special container. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDomainRenameInProgress)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DOMAIN_RENAME_IN_PROGRESS)).c_str(), L"[0x21a4] The Directory Service cannot perform the requested operation because a domain rename operation is in progress. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsExistingAdChildNc)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_EXISTING_AD_CHILD_NC)).c_str(), L"[0x21a5] The directory service detected a child partition below the requested partition name. The partition hierarchy must be created in a top down method. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsReplLifetimeExceeded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_REPL_LIFETIME_EXCEEDED)).c_str(), L"[0x21a6] The directory service cannot replicate with this server because the time since the last replication with this server has exceeded the tombstone lifetime. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDisallowedInSystemContainer)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DISALLOWED_IN_SYSTEM_CONTAINER)).c_str(), L"[0x21a7] The requested operation is not allowed on an object under the system container. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsLdapSendQueueFull)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_LDAP_SEND_QUEUE_FULL)).c_str(), L"[0x21a8] The LDAP servers network send queue has filled up because the client is not processing the results of its requests fast enough. No more requests will be processed until the client catches up. If the client does not catch up then it will be disconnected. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDraOutScheduleWindow)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_OUT_SCHEDULE_WINDOW)).c_str(), L"[0x21a9] The scheduled replication did not take place because the system was too busy to execute the request within the schedule window. The replication queue is overloaded. Consider reducing the number of partners or decreasing the scheduled replication frequency. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsPolicyNotKnown)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_POLICY_NOT_KNOWN)).c_str(), L"[0x21aa] At this time, it cannot be determined if the branch replication policy is available on the hub domain controller. Please retry at a later time to account for replication latencies. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorNoSiteSettingsObject)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NO_SITE_SETTINGS_OBJECT)).c_str(), L"[0x21ab] The site settings object for the specified site does not exist. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorNoSecrets)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NO_SECRETS)).c_str(), L"[0x21ac] The local account store does not contain secret material for the specified account. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorNoWritableDcFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_NO_WRITABLE_DC_FOUND)).c_str(), L"[0x21ad] Could not find a writable domain controller in the domain. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsNoServerObject)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_SERVER_OBJECT)).c_str(), L"[0x21ae] The server object for the domain controller does not exist. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsNoNtdsaObject)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NO_NTDSA_OBJECT)).c_str(), L"[0x21af] The NTDS Settings object for the domain controller does not exist. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsNonAsqSearch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_NON_ASQ_SEARCH)).c_str(), L"[0x21b0] The requested search operation is not supported for ASQ searches. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsAuditFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_AUDIT_FAILURE)).c_str(), L"[0x21b1] A required audit event could not be generated for the operation. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsInvalidSearchFlagSubtree)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INVALID_SEARCH_FLAG_SUBTREE)).c_str(), L"[0x21b2] The search flags for the attribute are invalid. The subtree index bit is valid only on single valued attributes. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsInvalidSearchFlagTuple)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_INVALID_SEARCH_FLAG_TUPLE)).c_str(), L"[0x21b3] The search flags for the attribute are invalid. The tuple index bit is valid only on attributes of Unicode strings. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsHierarchyTableTooDeep)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_HIERARCHY_TABLE_TOO_DEEP)).c_str(), L"[0x21b4] The address books are nested too deeply. Failed to build the hierarchy table. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDraCorruptUtdVector)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_CORRUPT_UTD_VECTOR)).c_str(), L"[0x21b5] The specified up-to-date-ness vector is corrupt. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDraSecretsDenied)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_SECRETS_DENIED)).c_str(), L"[0x21b6] The request to replicate secrets is denied. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsReservedMapiId)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_RESERVED_MAPI_ID)).c_str(), L"[0x21b7] Schema update failed: The MAPI identifier is reserved. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsMapiIdNotAvailable)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_MAPI_ID_NOT_AVAILABLE)).c_str(), L"[0x21b8] Schema update failed: There are no MAPI identifiers available. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDraMissingKrbtgtSecret)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_MISSING_KRBTGT_SECRET)).c_str(), L"[0x21b9] The replication operation failed because the required attributes of the local krbtgt object are missing. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDomainNameExistsInForest)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DOMAIN_NAME_EXISTS_IN_FOREST)).c_str(), L"[0x21ba] The domain name of the trusted domain already exists in the forest. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsFlatNameExistsInForest)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_FLAT_NAME_EXISTS_IN_FOREST)).c_str(), L"[0x21bb] The flat name of the trusted domain already exists in the forest. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorInvalidUserPrincipalName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INVALID_USER_PRINCIPAL_NAME)).c_str(), L"[0x21bc] The User Principal Name (UPN) is invalid. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsOidMappedGroupCantHaveMembers)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_OID_MAPPED_GROUP_CANT_HAVE_MEMBERS)).c_str(), L"[0x21bd] OID mapped groups cannot have members. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsOidNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_OID_NOT_FOUND)).c_str(), L"[0x21be] The specified OID cannot be found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDraRecycledTarget)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DRA_RECYCLED_TARGET)).c_str(), L"[0x21bf] The replication operation failed because the target object referred by a link value is recycled. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsDisallowedNcRedirect)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_DISALLOWED_NC_REDIRECT)).c_str(), L"[0x21c0] The redirect operation failed because the target object is in a NC different from the domain NC of the current domain controller. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsHighAdldsFfl)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_HIGH_ADLDS_FFL)).c_str(), L"[0x21c1] The functional level of the AD LDS configuration set cannot be lowered to the requested value. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsHighDsaVersion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_HIGH_DSA_VERSION)).c_str(), L"[0x21c2] The functional level of the domain (or forest) cannot be set to the requested value. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsLowAdldsFfl)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_LOW_ADLDS_FFL)).c_str(), L"[0x21c3] The functional level of the AD LDS configuration set cannot be raised to the requested value, because there exist one or more ADLDS instances that are at a lower incompatible functional level. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDomainSidSameAsLocalWorkstation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DOMAIN_SID_SAME_AS_LOCAL_WORKSTATION)).c_str(), L"[0x21c4] The domain join cannot be completed because the SID of the domain you attempted to join was identical to the SID of this machine. This is a symptom of an improperly cloned operating system install.  You should run sysprep on this machine in order to generate a new machine SID. Please see http://go.microsoft.com/fwlink/?LinkId=168895 for more information. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsUndeleteSamValidationFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_UNDELETE_SAM_VALIDATION_FAILED)).c_str(), L"[0x21c5] The undelete operation failed because the Sam Account Name or Additional Sam Account Name of the object being undeleted conflicts with an existing live object. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIncorrectAccountType)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_INCORRECT_ACCOUNT_TYPE)).c_str(), L"[0x21c6] The system is not authoritative for the specified account and therefore cannot complete the operation. Please retry the operation using the provider associated with this account. If this is an online provider please use the provider's online site. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsSpnValueNotUniqueInForest)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_SPN_VALUE_NOT_UNIQUE_IN_FOREST)).c_str(), L"[0x21c7] The operation failed because SPN value provided for addition/modification is not unique forest-wide. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsUpnValueNotUniqueInForest)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_UPN_VALUE_NOT_UNIQUE_IN_FOREST)).c_str(), L"[0x21c8] The operation failed because UPN value provided for addition/modification is not unique forest-wide. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsMissingForestTrust)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_MISSING_FOREST_TRUST)).c_str(), L"[0x21c9] The operation failed because the addition/modification referenced an inbound forest-wide trust that is not present. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsValueKeyNotUnique)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_VALUE_KEY_NOT_UNIQUE)).c_str(), L"[0x21ca] The link value specified was not found, but a link value with that key was found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorWeakWhfbkeyBlocked)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_WEAK_WHFBKEY_BLOCKED)).c_str(), L"[0x21cb] The Security Account Manager blocked the use of a weak Windows Hello for Business key. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsPerAttributeAuthzFailedDuringAdd)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_PER_ATTRIBUTE_AUTHZ_FAILED_DURING_ADD)).c_str(), L"[0x21cc] The add object operation failed because the caller was not authorized to add one or more attributes included in the request. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorLocalPolicyModificationNotSupported)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LOCAL_POLICY_MODIFICATION_NOT_SUPPORTED)).c_str(), L"[0x21cd] The local account policy modification request was rejected because the policy is controlled by a regional authority. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorPolicyControlledAccount)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_POLICY_CONTROLLED_ACCOUNT)).c_str(), L"[0x21ce] The account is controlled by external policy and cannot be modified. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorLapsLegacySchemaMissing)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LAPS_LEGACY_SCHEMA_MISSING)).c_str(), L"[0x21cf] The Local Administrator Password Solution password update operation failed because the legacy LAPS schema needs to be added to Active Directory. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorLapsSchemaMissing)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LAPS_SCHEMA_MISSING)).c_str(), L"[0x21d0] The Local Administrator Password Solution password update operation failed because the Windows LAPS schema needs to be added to Active Directory. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorLapsEncryptionRequires2016Dfl)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LAPS_ENCRYPTION_REQUIRES_2016_DFL)).c_str(), L"[0x21d1] The Local Administrator Password Solution encrypted password update operation failed because Active Directory is not yet running at the minimum required domain functional level (2016). ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorLapsProcessTerminated)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_LAPS_PROCESS_TERMINATED)).c_str(), L"[0x21d2] The process was terminated by Windows Local Administrator Password Solution per the configured post-authentication-action policy. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsJetRecordTooBig)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_JET_RECORD_TOO_BIG)).c_str(), L"[0x21d3] The Active Directory JET database page size limit for this request was exceeded. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDsReplicaPageSizeMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DS_REPLICA_PAGE_SIZE_MISMATCH)).c_str(), L"[0x21d4] The Active Directory JET database page size does not match on all Domain Controllers in this forest. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecQmPolicyExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_QM_POLICY_EXISTS)).c_str(), L"[0x32c8] The specified quick mode policy already exists. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecQmPolicyNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_QM_POLICY_NOT_FOUND)).c_str(), L"[0x32c9] The specified quick mode policy was not found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecQmPolicyInUse)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_QM_POLICY_IN_USE)).c_str(), L"[0x32ca] The specified quick mode policy is being used. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecMmPolicyExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_MM_POLICY_EXISTS)).c_str(), L"[0x32cb] The specified main mode policy already exists. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecMmPolicyNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_MM_POLICY_NOT_FOUND)).c_str(), L"[0x32cc] The specified main mode policy was not found ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecMmPolicyInUse)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_MM_POLICY_IN_USE)).c_str(), L"[0x32cd] The specified main mode policy is being used. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecMmFilterExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_MM_FILTER_EXISTS)).c_str(), L"[0x32ce] The specified main mode filter already exists. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecMmFilterNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_MM_FILTER_NOT_FOUND)).c_str(), L"[0x32cf] The specified main mode filter was not found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecTransportFilterExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_TRANSPORT_FILTER_EXISTS)).c_str(), L"[0x32d0] The specified transport mode filter already exists. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecTransportFilterNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_TRANSPORT_FILTER_NOT_FOUND)).c_str(), L"[0x32d1] The specified transport mode filter does not exist. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecMmAuthExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_MM_AUTH_EXISTS)).c_str(), L"[0x32d2] The specified main mode authentication list exists. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecMmAuthNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_MM_AUTH_NOT_FOUND)).c_str(), L"[0x32d3] The specified main mode authentication list was not found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecMmAuthInUse)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_MM_AUTH_IN_USE)).c_str(), L"[0x32d4] The specified main mode authentication list is being used. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecDefaultMmPolicyNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_DEFAULT_MM_POLICY_NOT_FOUND)).c_str(), L"[0x32d5] The specified default main mode policy was not found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecDefaultMmAuthNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_DEFAULT_MM_AUTH_NOT_FOUND)).c_str(), L"[0x32d6] The specified default main mode authentication list was not found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecDefaultQmPolicyNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_DEFAULT_QM_POLICY_NOT_FOUND)).c_str(), L"[0x32d7] The specified default quick mode policy was not found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecTunnelFilterExists)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_TUNNEL_FILTER_EXISTS)).c_str(), L"[0x32d8] The specified tunnel mode filter exists. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecTunnelFilterNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_TUNNEL_FILTER_NOT_FOUND)).c_str(), L"[0x32d9] The specified tunnel mode filter was not found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecMmFilterPendingDeletion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_MM_FILTER_PENDING_DELETION)).c_str(), L"[0x32da] The Main Mode filter is pending deletion. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecTransportFilterPendingDeletion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_TRANSPORT_FILTER_PENDING_DELETION)).c_str(), L"[0x32db] The transport filter is pending deletion. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecTunnelFilterPendingDeletion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_TUNNEL_FILTER_PENDING_DELETION)).c_str(), L"[0x32dc] The tunnel filter is pending deletion. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecMmPolicyPendingDeletion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_MM_POLICY_PENDING_DELETION)).c_str(), L"[0x32dd] The Main Mode policy is pending deletion. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecMmAuthPendingDeletion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_MM_AUTH_PENDING_DELETION)).c_str(), L"[0x32de] The Main Mode authentication bundle is pending deletion. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecQmPolicyPendingDeletion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_QM_POLICY_PENDING_DELETION)).c_str(), L"[0x32df] The Quick Mode policy is pending deletion. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeNegStatusBegin)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_NEG_STATUS_BEGIN)).c_str(), L"[0x35e8] ERROR_IPSEC_IKE_NEG_STATUS_BEGIN ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeAuthFail)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_AUTH_FAIL)).c_str(), L"[0x35e9] IKE authentication credentials are unacceptable ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeAttribFail)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_ATTRIB_FAIL)).c_str(), L"[0x35ea] IKE security attributes are unacceptable ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeNegotiationPending)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_NEGOTIATION_PENDING)).c_str(), L"[0x35eb] IKE Negotiation in progress ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeGeneralProcessingError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_GENERAL_PROCESSING_ERROR)).c_str(), L"[0x35ec] General processing error ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeTimedOut)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_TIMED_OUT)).c_str(), L"[0x35ed] Negotiation timed out ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeNoCert)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_NO_CERT)).c_str(), L"[0x35ee] IKE failed to find valid machine certificate. Contact your Network Security Administrator about installing a valid certificate in the appropriate Certificate Store. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeSaDeleted)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_SA_DELETED)).c_str(), L"[0x35ef] IKE SA deleted by peer before establishment completed ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeSaReaped)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_SA_REAPED)).c_str(), L"[0x35f0] IKE SA deleted before establishment completed ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeMmAcquireDrop)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_MM_ACQUIRE_DROP)).c_str(), L"[0x35f1] Negotiation request sat in Queue too long ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeQmAcquireDrop)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_QM_ACQUIRE_DROP)).c_str(), L"[0x35f2] Negotiation request sat in Queue too long ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeQueueDropMm)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_QUEUE_DROP_MM)).c_str(), L"[0x35f3] Negotiation request sat in Queue too long ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeQueueDropNoMm)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_QUEUE_DROP_NO_MM)).c_str(), L"[0x35f4] Negotiation request sat in Queue too long ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeDropNoResponse)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_DROP_NO_RESPONSE)).c_str(), L"[0x35f5] No response from peer ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeMmDelayDrop)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_MM_DELAY_DROP)).c_str(), L"[0x35f6] Negotiation took too long ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeQmDelayDrop)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_QM_DELAY_DROP)).c_str(), L"[0x35f7] Negotiation took too long ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_ERROR)).c_str(), L"[0x35f8] Unknown error occurred ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeCrlFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_CRL_FAILED)).c_str(), L"[0x35f9] Certificate Revocation Check failed ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidKeyUsage)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_KEY_USAGE)).c_str(), L"[0x35fa] Invalid certificate key usage ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidCertType)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_CERT_TYPE)).c_str(), L"[0x35fb] Invalid certificate type ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeNoPrivateKey)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_NO_PRIVATE_KEY)).c_str(), L"[0x35fc] IKE negotiation failed because the machine certificate used does not have a private key. IPsec certificates require a private key. Contact your Network Security administrator about replacing with a certificate that has a private key. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeSimultaneousRekey)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_SIMULTANEOUS_REKEY)).c_str(), L"[0x35fd] Simultaneous rekeys were detected. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeDhFail)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_DH_FAIL)).c_str(), L"[0x35fe] Failure in Diffie-Hellman computation ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeCriticalPayloadNotRecognized)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_CRITICAL_PAYLOAD_NOT_RECOGNIZED)).c_str(), L"[0x35ff] Don't know how to process critical payload ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidHeader)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_HEADER)).c_str(), L"[0x3600] Invalid header ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeNoPolicy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_NO_POLICY)).c_str(), L"[0x3601] No policy configured ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidSignature)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_SIGNATURE)).c_str(), L"[0x3602] Failed to verify signature ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeKerberosError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_KERBEROS_ERROR)).c_str(), L"[0x3603] Failed to authenticate using Kerberos ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeNoPublicKey)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_NO_PUBLIC_KEY)).c_str(), L"[0x3604] Peer's certificate did not have a public key ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeProcessErr)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR)).c_str(), L"[0x3605] Error processing error payload ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeProcessErrSa)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_SA)).c_str(), L"[0x3606] Error processing SA payload ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeProcessErrProp)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_PROP)).c_str(), L"[0x3607] Error processing Proposal payload ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeProcessErrTrans)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_TRANS)).c_str(), L"[0x3608] Error processing Transform payload ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeProcessErrKe)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_KE)).c_str(), L"[0x3609] Error processing KE payload ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeProcessErrId)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_ID)).c_str(), L"[0x360a] Error processing ID payload ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeProcessErrCert)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_CERT)).c_str(), L"[0x360b] Error processing Cert payload ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeProcessErrCertReq)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_CERT_REQ)).c_str(), L"[0x360c] Error processing Certificate Request payload ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeProcessErrHash)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_HASH)).c_str(), L"[0x360d] Error processing Hash payload ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeProcessErrSig)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_SIG)).c_str(), L"[0x360e] Error processing Signature payload ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeProcessErrNonce)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_NONCE)).c_str(), L"[0x360f] Error processing Nonce payload ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeProcessErrNotify)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_NOTIFY)).c_str(), L"[0x3610] Error processing Notify payload ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeProcessErrDelete)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_DELETE)).c_str(), L"[0x3611] Error processing Delete Payload ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeProcessErrVendor)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_VENDOR)).c_str(), L"[0x3612] Error processing VendorId payload ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidPayload)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_PAYLOAD)).c_str(), L"[0x3613] Invalid payload received ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeLoadSoftSa)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_LOAD_SOFT_SA)).c_str(), L"[0x3614] Soft SA loaded ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeSoftSaTornDown)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_SOFT_SA_TORN_DOWN)).c_str(), L"[0x3615] Soft SA torn down ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidCookie)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_COOKIE)).c_str(), L"[0x3616] Invalid cookie received. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeNoPeerCert)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_NO_PEER_CERT)).c_str(), L"[0x3617] Peer failed to send valid machine certificate ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkePeerCrlFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_PEER_CRL_FAILED)).c_str(), L"[0x3618] Certification Revocation check of peer's certificate failed ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkePolicyChange)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_POLICY_CHANGE)).c_str(), L"[0x3619] New policy invalidated SAs formed with old policy ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeNoMmPolicy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_NO_MM_POLICY)).c_str(), L"[0x361a] There is no available Main Mode IKE policy. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeNotcbpriv)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_NOTCBPRIV)).c_str(), L"[0x361b] Failed to enabled TCB privilege. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeSecloadfail)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_SECLOADFAIL)).c_str(), L"[0x361c] Failed to load SECURITY.DLL. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeFailsspinit)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_FAILSSPINIT)).c_str(), L"[0x361d] Failed to obtain security function table dispatch address from SSPI. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeFailqueryssp)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_FAILQUERYSSP)).c_str(), L"[0x361e] Failed to query Kerberos package to obtain max token size. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeSrvacqfail)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_SRVACQFAIL)).c_str(), L"[0x361f] Failed to obtain Kerberos server credentials for ISAKMP/ERROR_IPSEC_IKE service. Kerberos authentication will not function. The most likely reason for this is lack of domain membership. This is normal if your computer is a member of a workgroup. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeSrvquerycred)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_SRVQUERYCRED)).c_str(), L"[0x3620] Failed to determine SSPI principal name for ISAKMP/ERROR_IPSEC_IKE service (QueryCredentialsAttributes). ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeGetspifail)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_GETSPIFAIL)).c_str(), L"[0x3621] Failed to obtain new SPI for the inbound SA from IPsec driver. The most common cause for this is that the driver does not have the correct filter. Check your policy to verify the filters. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidFilter)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_FILTER)).c_str(), L"[0x3622] Given filter is invalid ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeOutOfMemory)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_OUT_OF_MEMORY)).c_str(), L"[0x3623] Memory allocation failed. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeAddUpdateKeyFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_ADD_UPDATE_KEY_FAILED)).c_str(), L"[0x3624] Failed to add Security Association to IPsec Driver. The most common cause for this is if the IKE negotiation took too long to complete. If the problem persists, reduce the load on the faulting machine. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidPolicy)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_POLICY)).c_str(), L"[0x3625] Invalid policy ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeUnknownDoi)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_UNKNOWN_DOI)).c_str(), L"[0x3626] Invalid DOI ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidSituation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_SITUATION)).c_str(), L"[0x3627] Invalid situation ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeDhFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_DH_FAILURE)).c_str(), L"[0x3628] Diffie-Hellman failure ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidGroup)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_GROUP)).c_str(), L"[0x3629] Invalid Diffie-Hellman group ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeEncrypt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_ENCRYPT)).c_str(), L"[0x362a] Error encrypting payload ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeDecrypt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_DECRYPT)).c_str(), L"[0x362b] Error decrypting payload ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkePolicyMatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_POLICY_MATCH)).c_str(), L"[0x362c] Policy match error ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeUnsupportedId)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_UNSUPPORTED_ID)).c_str(), L"[0x362d] Unsupported ID ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidHash)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_HASH)).c_str(), L"[0x362e] Hash verification failed ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidHashAlg)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_HASH_ALG)).c_str(), L"[0x362f] Invalid hash algorithm ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidHashSize)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_HASH_SIZE)).c_str(), L"[0x3630] Invalid hash size ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidEncryptAlg)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_ENCRYPT_ALG)).c_str(), L"[0x3631] Invalid encryption algorithm ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidAuthAlg)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_AUTH_ALG)).c_str(), L"[0x3632] Invalid authentication algorithm ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidSig)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_SIG)).c_str(), L"[0x3633] Invalid certificate signature ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeLoadFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_LOAD_FAILED)).c_str(), L"[0x3634] Load failed ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeRpcDelete)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_RPC_DELETE)).c_str(), L"[0x3635] Deleted via RPC call ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeBenignReinit)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_BENIGN_REINIT)).c_str(), L"[0x3636] Temporary state created to perform reinitialization. This is not a real failure. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidResponderLifetimeNotify)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_RESPONDER_LIFETIME_NOTIFY)).c_str(), L"[0x3637] The lifetime value received in the Responder Lifetime Notify is below the Windows 2000 configured minimum value. Please fix the policy on the peer machine. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidMajorVersion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_MAJOR_VERSION)).c_str(), L"[0x3638] The recipient cannot handle version of IKE specified in the header. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidCertKeylen)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_CERT_KEYLEN)).c_str(), L"[0x3639] Key length in certificate is too small for configured security requirements. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeMmLimit)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_MM_LIMIT)).c_str(), L"[0x363a] Max number of established MM SAs to peer exceeded. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeNegotiationDisabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_NEGOTIATION_DISABLED)).c_str(), L"[0x363b] IKE received a policy that disables negotiation. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeQmLimit)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_QM_LIMIT)).c_str(), L"[0x363c] Reached maximum quick mode limit for the main mode. New main mode will be started. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeMmExpired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_MM_EXPIRED)).c_str(), L"[0x363d] Main mode SA lifetime expired or peer sent a main mode delete. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkePeerMmAssumedInvalid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_PEER_MM_ASSUMED_INVALID)).c_str(), L"[0x363e] Main mode SA assumed to be invalid because peer stopped responding. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeCertChainPolicyMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_CERT_CHAIN_POLICY_MISMATCH)).c_str(), L"[0x363f] Certificate doesn't chain to a trusted root in IPsec policy. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeUnexpectedMessageId)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_UNEXPECTED_MESSAGE_ID)).c_str(), L"[0x3640] Received unexpected message ID. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidAuthPayload)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_AUTH_PAYLOAD)).c_str(), L"[0x3641] Received invalid authentication offers. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeDosCookieSent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_DOS_COOKIE_SENT)).c_str(), L"[0x3642] Sent DoS cookie notify to initiator. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeShuttingDown)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_SHUTTING_DOWN)).c_str(), L"[0x3643] IKE service is shutting down. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeCgaAuthFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_CGA_AUTH_FAILED)).c_str(), L"[0x3644] Could not verify binding between CGA address and certificate. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeProcessErrNatoa)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_PROCESS_ERR_NATOA)).c_str(), L"[0x3645] Error processing NatOA payload. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInvalidMmForQm)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INVALID_MM_FOR_QM)).c_str(), L"[0x3646] Parameters of the main mode are invalid for this quick mode. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeQmExpired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_QM_EXPIRED)).c_str(), L"[0x3647] Quick mode SA was expired by IPsec driver. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeTooManyFilters)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_TOO_MANY_FILTERS)).c_str(), L"[0x3648] Too many dynamically added IKEEXT filters were detected. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeNegStatusEnd)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_NEG_STATUS_END)).c_str(), L"[0x3649] ERROR_IPSEC_IKE_NEG_STATUS_END ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeKillDummyNapTunnel)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_KILL_DUMMY_NAP_TUNNEL)).c_str(), L"[0x364a] NAP reauth succeeded and must delete the dummy NAP IKEv2 tunnel. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeInnerIpAssignmentFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_INNER_IP_ASSIGNMENT_FAILURE)).c_str(), L"[0x364b] Error in assigning inner IP address to initiator in tunnel mode. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeRequireCpPayloadMissing)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_REQUIRE_CP_PAYLOAD_MISSING)).c_str(), L"[0x364c] Require configuration payload missing. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecKeyModuleImpersonationNegotiationPending)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_KEY_MODULE_IMPERSONATION_NEGOTIATION_PENDING)).c_str(), L"[0x364d] A negotiation running as the security principle who issued the connection is in progress ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeCoexistenceSuppress)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_COEXISTENCE_SUPPRESS)).c_str(), L"[0x364e] SA was deleted due to IKEv1/AuthIP co-existence suppress check. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeRatelimitDrop)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_RATELIMIT_DROP)).c_str(), L"[0x364f] Incoming SA request was dropped due to peer IP address rate limiting. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkePeerDoesntSupportMobike)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_PEER_DOESNT_SUPPORT_MOBIKE)).c_str(), L"[0x3650] Peer does not support MOBIKE. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeAuthorizationFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_AUTHORIZATION_FAILURE)).c_str(), L"[0x3651] SA establishment is not authorized. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeStrongCredAuthorizationFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_STRONG_CRED_AUTHORIZATION_FAILURE)).c_str(), L"[0x3652] SA establishment is not authorized because there is not a sufficiently strong PKINIT-based credential. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeAuthorizationFailureWithOptionalRetry)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_AUTHORIZATION_FAILURE_WITH_OPTIONAL_RETRY)).c_str(), L"[0x3653] SA establishment is not authorized.  You may need to enter updated or different credentials such as a smartcard. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeStrongCredAuthorizationAndCertmapFailure)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_STRONG_CRED_AUTHORIZATION_AND_CERTMAP_FAILURE)).c_str(), L"[0x3654] SA establishment is not authorized because there is not a sufficiently strong PKINIT-based credential. This might be related to certificate-to-account mapping failure for the SA. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIkeNegStatusExtendedEnd)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_IKE_NEG_STATUS_EXTENDED_END)).c_str(), L"[0x3655] ERROR_IPSEC_IKE_NEG_STATUS_EXTENDED_END ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecBadSpi)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_BAD_SPI)).c_str(), L"[0x3656] The SPI in the packet does not match a valid IPsec SA. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecSaLifetimeExpired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_SA_LIFETIME_EXPIRED)).c_str(), L"[0x3657] Packet was received on an IPsec SA whose lifetime has expired. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecWrongSa)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_WRONG_SA)).c_str(), L"[0x3658] Packet was received on an IPsec SA that does not match the packet characteristics. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecReplayCheckFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_REPLAY_CHECK_FAILED)).c_str(), L"[0x3659] Packet sequence number replay check failed. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecInvalidPacket)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_INVALID_PACKET)).c_str(), L"[0x365a] IPsec header and/or trailer in the packet is invalid. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecIntegrityCheckFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_INTEGRITY_CHECK_FAILED)).c_str(), L"[0x365b] IPsec integrity check failed. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecClearTextDrop)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_CLEAR_TEXT_DROP)).c_str(), L"[0x365c] IPsec dropped a clear text packet. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecAuthFirewallDrop)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_AUTH_FIREWALL_DROP)).c_str(), L"[0x365d] IPsec dropped an incoming ESP packet in authenticated firewall mode. This drop is benign. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecThrottleDrop)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_THROTTLE_DROP)).c_str(), L"[0x365e] IPsec dropped a packet due to DoS throttling. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecDospBlock)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_DOSP_BLOCK)).c_str(), L"[0x3665] IPsec DoS Protection matched an explicit block rule. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecDospReceivedMulticast)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_DOSP_RECEIVED_MULTICAST)).c_str(), L"[0x3666] IPsec DoS Protection received an IPsec specific multicast packet which is not allowed. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecDospInvalidPacket)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_DOSP_INVALID_PACKET)).c_str(), L"[0x3667] IPsec DoS Protection received an incorrectly formatted packet. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecDospStateLookupFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_DOSP_STATE_LOOKUP_FAILED)).c_str(), L"[0x3668] IPsec DoS Protection failed to look up state. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecDospMaxEntries)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_DOSP_MAX_ENTRIES)).c_str(), L"[0x3669] IPsec DoS Protection failed to create state because the maximum number of entries allowed by policy has been reached. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecDospKeymodNotAllowed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_DOSP_KEYMOD_NOT_ALLOWED)).c_str(), L"[0x366a] IPsec DoS Protection received an IPsec negotiation packet for a keying module which is not allowed by policy. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecDospNotInstalled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_DOSP_NOT_INSTALLED)).c_str(), L"[0x366b] IPsec DoS Protection has not been enabled. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorIpsecDospMaxPerIpRatelimitQueues)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_IPSEC_DOSP_MAX_PER_IP_RATELIMIT_QUEUES)).c_str(), L"[0x366c] IPsec DoS Protection failed to create a per internal IP rate limit queue because the maximum number of queues allowed by policy has been reached. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsSectionNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_SECTION_NOT_FOUND)).c_str(), L"[0x36b0] The requested section was not present in the activation context. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsCantGenActctx)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_CANT_GEN_ACTCTX)).c_str(), L"[0x36b1] The application has failed to start because its side-by-side configuration is incorrect. Please see the application event log or use the command-line sxstrace.exe tool for more detail. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsInvalidActctxdataFormat)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_INVALID_ACTCTXDATA_FORMAT)).c_str(), L"[0x36b2] The application binding data format is invalid. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsAssemblyNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_ASSEMBLY_NOT_FOUND)).c_str(), L"[0x36b3] The referenced assembly is not installed on your system. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsManifestFormatError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_MANIFEST_FORMAT_ERROR)).c_str(), L"[0x36b4] The manifest file does not begin with the required tag and format information. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsManifestParseError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_MANIFEST_PARSE_ERROR)).c_str(), L"[0x36b5] The manifest file contains one or more syntax errors. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsActivationContextDisabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_ACTIVATION_CONTEXT_DISABLED)).c_str(), L"[0x36b6] The application attempted to activate a disabled activation context. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsKeyNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_KEY_NOT_FOUND)).c_str(), L"[0x36b7] The requested lookup key was not found in any active activation context. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsVersionConflict)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_VERSION_CONFLICT)).c_str(), L"[0x36b8] A component version required by the application conflicts with another component version already active. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsWrongSectionType)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_WRONG_SECTION_TYPE)).c_str(), L"[0x36b9] The type requested activation context section does not match the query API used. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsThreadQueriesDisabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_THREAD_QUERIES_DISABLED)).c_str(), L"[0x36ba] Lack of system resources has required isolated activation to be disabled for the current thread of execution. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsProcessDefaultAlreadySet)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_PROCESS_DEFAULT_ALREADY_SET)).c_str(), L"[0x36bb] An attempt to set the process default activation context failed because the process default activation context was already set. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsUnknownEncodingGroup)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_UNKNOWN_ENCODING_GROUP)).c_str(), L"[0x36bc] The encoding group identifier specified is not recognized. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsUnknownEncoding)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_UNKNOWN_ENCODING)).c_str(), L"[0x36bd] The encoding requested is not recognized. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsInvalidXmlNamespaceUri)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_INVALID_XML_NAMESPACE_URI)).c_str(), L"[0x36be] The manifest contains a reference to an invalid URI. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsRootManifestDependencyNotInstalled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_ROOT_MANIFEST_DEPENDENCY_NOT_INSTALLED)).c_str(), L"[0x36bf] The application manifest contains a reference to a dependent assembly which is not installed ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsLeafManifestDependencyNotInstalled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_LEAF_MANIFEST_DEPENDENCY_NOT_INSTALLED)).c_str(), L"[0x36c0] The manifest for an assembly used by the application has a reference to a dependent assembly which is not installed ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsInvalidAssemblyIdentityAttribute)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_INVALID_ASSEMBLY_IDENTITY_ATTRIBUTE)).c_str(), L"[0x36c1] The manifest contains an attribute for the assembly identity which is not valid. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsManifestMissingRequiredDefaultNamespace)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_MANIFEST_MISSING_REQUIRED_DEFAULT_NAMESPACE)).c_str(), L"[0x36c2] The manifest is missing the required default namespace specification on the assembly element. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsManifestInvalidRequiredDefaultNamespace)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_MANIFEST_INVALID_REQUIRED_DEFAULT_NAMESPACE)).c_str(), L"[0x36c3] The manifest has a default namespace specified on the assembly element but its value is not \"urn:schemas-microsoft-com:asm.v1\". ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsPrivateManifestCrossPathWithReparsePoint)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_PRIVATE_MANIFEST_CROSS_PATH_WITH_REPARSE_POINT)).c_str(), L"[0x36c4] The private manifest probed has crossed a path with an unsupported reparse point. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsDuplicateDllName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_DUPLICATE_DLL_NAME)).c_str(), L"[0x36c5] Two or more components referenced directly or indirectly by the application manifest have files by the same name. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsDuplicateWindowclassName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_DUPLICATE_WINDOWCLASS_NAME)).c_str(), L"[0x36c6] Two or more components referenced directly or indirectly by the application manifest have window classes with the same name. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsDuplicateClsid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_DUPLICATE_CLSID)).c_str(), L"[0x36c7] Two or more components referenced directly or indirectly by the application manifest have the same COM server CLSIDs. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsDuplicateIid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_DUPLICATE_IID)).c_str(), L"[0x36c8] Two or more components referenced directly or indirectly by the application manifest have proxies for the same COM interface IIDs. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsDuplicateTlbid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_DUPLICATE_TLBID)).c_str(), L"[0x36c9] Two or more components referenced directly or indirectly by the application manifest have the same COM type library TLBIDs. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsDuplicateProgid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_DUPLICATE_PROGID)).c_str(), L"[0x36ca] Two or more components referenced directly or indirectly by the application manifest have the same COM ProgIDs. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsDuplicateAssemblyName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_DUPLICATE_ASSEMBLY_NAME)).c_str(), L"[0x36cb] Two or more components referenced directly or indirectly by the application manifest are different versions of the same component which is not permitted. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsFileHashMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_FILE_HASH_MISMATCH)).c_str(), L"[0x36cc] A component's file does not match the verification information present in the component manifest. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsPolicyParseError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_POLICY_PARSE_ERROR)).c_str(), L"[0x36cd] The policy manifest contains one or more syntax errors. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEMissingquote)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_MISSINGQUOTE)).c_str(), L"[0x36ce] Manifest Parse Error : A string literal was expected, but no opening quote character was found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlECommentsyntax)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_COMMENTSYNTAX)).c_str(), L"[0x36cf] Manifest Parse Error : Incorrect syntax was used in a comment. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEBadstartnamechar)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_BADSTARTNAMECHAR)).c_str(), L"[0x36d0] Manifest Parse Error : A name was started with an invalid character. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEBadnamechar)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_BADNAMECHAR)).c_str(), L"[0x36d1] Manifest Parse Error : A name contained an invalid character. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEBadcharinstring)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_BADCHARINSTRING)).c_str(), L"[0x36d2] Manifest Parse Error : A string literal contained an invalid character. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEXmldeclsyntax)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_XMLDECLSYNTAX)).c_str(), L"[0x36d3] Manifest Parse Error : Invalid syntax for an xml declaration. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEBadchardata)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_BADCHARDATA)).c_str(), L"[0x36d4] Manifest Parse Error : An Invalid character was found in text content. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEMissingwhitespace)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_MISSINGWHITESPACE)).c_str(), L"[0x36d5] Manifest Parse Error : Required white space was missing. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEExpectingtagend)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_EXPECTINGTAGEND)).c_str(), L"[0x36d6] Manifest Parse Error : The character '>' was expected. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEMissingsemicolon)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_MISSINGSEMICOLON)).c_str(), L"[0x36d7] Manifest Parse Error : A semi colon character was expected. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEUnbalancedparen)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_UNBALANCEDPAREN)).c_str(), L"[0x36d8] Manifest Parse Error : Unbalanced parentheses. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEInternalerror)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_INTERNALERROR)).c_str(), L"[0x36d9] Manifest Parse Error : Internal error. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEUnexpectedWhitespace)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_UNEXPECTED_WHITESPACE)).c_str(), L"[0x36da] Manifest Parse Error : Whitespace is not allowed at this location. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEIncompleteEncoding)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_INCOMPLETE_ENCODING)).c_str(), L"[0x36db] Manifest Parse Error : End of file reached in invalid state for current encoding. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEMissingParen)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_MISSING_PAREN)).c_str(), L"[0x36dc] Manifest Parse Error : Missing parenthesis. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEExpectingclosequote)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_EXPECTINGCLOSEQUOTE)).c_str(), L"[0x36dd] Manifest Parse Error : A single or double closing quote character (\\' or \\\") is missing. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEMultipleColons)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_MULTIPLE_COLONS)).c_str(), L"[0x36de] Manifest Parse Error : Multiple colons are not allowed in a name. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEInvalidDecimal)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_INVALID_DECIMAL)).c_str(), L"[0x36df] Manifest Parse Error : Invalid character for decimal digit. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEInvalidHexidecimal)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_INVALID_HEXIDECIMAL)).c_str(), L"[0x36e0] Manifest Parse Error : Invalid character for hexadecimal digit. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEInvalidUnicode)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_INVALID_UNICODE)).c_str(), L"[0x36e1] Manifest Parse Error : Invalid unicode character value for this platform. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEWhitespaceorquestionmark)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_WHITESPACEORQUESTIONMARK)).c_str(), L"[0x36e2] Manifest Parse Error : Expecting whitespace or '?'. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEUnexpectedendtag)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_UNEXPECTEDENDTAG)).c_str(), L"[0x36e3] Manifest Parse Error : End tag was not expected at this location. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEUnclosedtag)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_UNCLOSEDTAG)).c_str(), L"[0x36e4] Manifest Parse Error : The following tags were not closed: %1. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEDuplicateattribute)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_DUPLICATEATTRIBUTE)).c_str(), L"[0x36e5] Manifest Parse Error : Duplicate attribute. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEMultipleroots)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_MULTIPLEROOTS)).c_str(), L"[0x36e6] Manifest Parse Error : Only one top level element is allowed in an XML document. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEInvalidatrootlevel)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_INVALIDATROOTLEVEL)).c_str(), L"[0x36e7] Manifest Parse Error : Invalid at the top level of the document. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEBadxmldecl)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_BADXMLDECL)).c_str(), L"[0x36e8] Manifest Parse Error : Invalid xml declaration. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEMissingroot)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_MISSINGROOT)).c_str(), L"[0x36e9] Manifest Parse Error : XML document must have a top level element. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEUnexpectedeof)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_UNEXPECTEDEOF)).c_str(), L"[0x36ea] Manifest Parse Error : Unexpected end of file. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEBadperefinsubset)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_BADPEREFINSUBSET)).c_str(), L"[0x36eb] Manifest Parse Error : Parameter entities cannot be used inside markup declarations in an internal subset. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEUnclosedstarttag)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_UNCLOSEDSTARTTAG)).c_str(), L"[0x36ec] Manifest Parse Error : Element was not closed. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEUnclosedendtag)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_UNCLOSEDENDTAG)).c_str(), L"[0x36ed] Manifest Parse Error : End element was missing the character '>'. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEUnclosedstring)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_UNCLOSEDSTRING)).c_str(), L"[0x36ee] Manifest Parse Error : A string literal was not closed. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEUnclosedcomment)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_UNCLOSEDCOMMENT)).c_str(), L"[0x36ef] Manifest Parse Error : A comment was not closed. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEUncloseddecl)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_UNCLOSEDDECL)).c_str(), L"[0x36f0] Manifest Parse Error : A declaration was not closed. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEUnclosedcdata)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_UNCLOSEDCDATA)).c_str(), L"[0x36f1] Manifest Parse Error : A CDATA section was not closed. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEReservednamespace)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_RESERVEDNAMESPACE)).c_str(), L"[0x36f2] Manifest Parse Error : The namespace prefix is not allowed to start with the reserved string \"xml\". ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEInvalidencoding)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_INVALIDENCODING)).c_str(), L"[0x36f3] Manifest Parse Error : System does not support the specified encoding. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEInvalidswitch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_INVALIDSWITCH)).c_str(), L"[0x36f4] Manifest Parse Error : Switch from current encoding to specified encoding not supported. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEBadxmlcase)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_BADXMLCASE)).c_str(), L"[0x36f5] Manifest Parse Error : The name 'xml' is reserved and must be lower case. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEInvalidStandalone)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_INVALID_STANDALONE)).c_str(), L"[0x36f6] Manifest Parse Error : The standalone attribute must have the value 'yes' or 'no'. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEUnexpectedStandalone)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_UNEXPECTED_STANDALONE)).c_str(), L"[0x36f7] Manifest Parse Error : The standalone attribute cannot be used in external entities. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEInvalidVersion)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_INVALID_VERSION)).c_str(), L"[0x36f8] Manifest Parse Error : Invalid version number. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsXmlEMissingequals)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_XML_E_MISSINGEQUALS)).c_str(), L"[0x36f9] Manifest Parse Error : Missing equals sign between attribute and attribute value. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsProtectionRecoveryFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_PROTECTION_RECOVERY_FAILED)).c_str(), L"[0x36fa] Assembly Protection Error : Unable to recover the specified assembly. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsProtectionPublicKeyTooShort)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_PROTECTION_PUBLIC_KEY_TOO_SHORT)).c_str(), L"[0x36fb] Assembly Protection Error : The public key for an assembly was too short to be allowed. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsProtectionCatalogNotValid)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_PROTECTION_CATALOG_NOT_VALID)).c_str(), L"[0x36fc] Assembly Protection Error : The catalog for an assembly is not valid, or does not match the assembly's manifest. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsUntranslatableHresult)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_UNTRANSLATABLE_HRESULT)).c_str(), L"[0x36fd] An HRESULT could not be translated to a corresponding Win32 error code. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsProtectionCatalogFileMissing)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_PROTECTION_CATALOG_FILE_MISSING)).c_str(), L"[0x36fe] Assembly Protection Error : The catalog for an assembly is missing. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsMissingAssemblyIdentityAttribute)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_MISSING_ASSEMBLY_IDENTITY_ATTRIBUTE)).c_str(), L"[0x36ff] The supplied assembly identity is missing one or more attributes which must be present in this context. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsInvalidAssemblyIdentityAttributeName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_INVALID_ASSEMBLY_IDENTITY_ATTRIBUTE_NAME)).c_str(), L"[0x3700] The supplied assembly identity has one or more attribute names that contain characters not permitted in XML names. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsAssemblyMissing)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_ASSEMBLY_MISSING)).c_str(), L"[0x3701] The referenced assembly could not be found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsCorruptActivationStack)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_CORRUPT_ACTIVATION_STACK)).c_str(), L"[0x3702] The activation context activation stack for the running thread of execution is corrupt. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsCorruption)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_CORRUPTION)).c_str(), L"[0x3703] The application isolation metadata for this process or thread has become corrupt. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsEarlyDeactivation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_EARLY_DEACTIVATION)).c_str(), L"[0x3704] The activation context being deactivated is not the most recently activated one. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsInvalidDeactivation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_INVALID_DEACTIVATION)).c_str(), L"[0x3705] The activation context being deactivated is not active for the current thread of execution. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsMultipleDeactivation)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_MULTIPLE_DEACTIVATION)).c_str(), L"[0x3706] The activation context being deactivated has already been deactivated. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsProcessTerminationRequested)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_PROCESS_TERMINATION_REQUESTED)).c_str(), L"[0x3707] A component used by the isolation facility has requested to terminate the process. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsReleaseActivationContext)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_RELEASE_ACTIVATION_CONTEXT)).c_str(), L"[0x3708] A kernel mode component is releasing a reference on an activation context. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsSystemDefaultActivationContextEmpty)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_SYSTEM_DEFAULT_ACTIVATION_CONTEXT_EMPTY)).c_str(), L"[0x3709] The activation context of system default assembly could not be generated. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsInvalidIdentityAttributeValue)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_INVALID_IDENTITY_ATTRIBUTE_VALUE)).c_str(), L"[0x370a] The value of an attribute in an identity is not within the legal range. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsInvalidIdentityAttributeName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_INVALID_IDENTITY_ATTRIBUTE_NAME)).c_str(), L"[0x370b] The name of an attribute in an identity is not within the legal range. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsIdentityDuplicateAttribute)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_IDENTITY_DUPLICATE_ATTRIBUTE)).c_str(), L"[0x370c] An identity contains two definitions for the same attribute. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsIdentityParseError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_IDENTITY_PARSE_ERROR)).c_str(), L"[0x370d] The identity string is malformed. This may be due to a trailing comma, more than two unnamed attributes, missing attribute name or missing attribute value. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMalformedSubstitutionString)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MALFORMED_SUBSTITUTION_STRING)).c_str(), L"[0x370e] A string containing localized substitutable content was malformed. Either a dollar sign ($) was followed by something other than a left parenthesis or another dollar sign or an substitution's right parenthesis was not found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsIncorrectPublicKeyToken)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_INCORRECT_PUBLIC_KEY_TOKEN)).c_str(), L"[0x370f] The public key token does not correspond to the public key specified. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorUnmappedSubstitutionString)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_UNMAPPED_SUBSTITUTION_STRING)).c_str(), L"[0x3710] A substitution string had no mapping. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsAssemblyNotLocked)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_ASSEMBLY_NOT_LOCKED)).c_str(), L"[0x3711] The component must be locked before making the request. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsComponentStoreCorrupt)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_COMPONENT_STORE_CORRUPT)).c_str(), L"[0x3712] The component store has been corrupted. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorAdvancedInstallerFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_ADVANCED_INSTALLER_FAILED)).c_str(), L"[0x3713] An advanced installer failed during setup or servicing. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorXmlEncodingMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_XML_ENCODING_MISMATCH)).c_str(), L"[0x3714] The character encoding in the XML declaration did not match the encoding used in the document. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsManifestIdentitySameButContentsDifferent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_MANIFEST_IDENTITY_SAME_BUT_CONTENTS_DIFFERENT)).c_str(), L"[0x3715] The identities of the manifests are identical but their contents are different. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsIdentitiesDifferent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_IDENTITIES_DIFFERENT)).c_str(), L"[0x3716] The component identities are different. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsAssemblyIsNotADeployment)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_ASSEMBLY_IS_NOT_A_DEPLOYMENT)).c_str(), L"[0x3717] The assembly is not a deployment. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsFileNotPartOfAssembly)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_FILE_NOT_PART_OF_ASSEMBLY)).c_str(), L"[0x3718] The file is not a part of the assembly. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsManifestTooBig)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_MANIFEST_TOO_BIG)).c_str(), L"[0x3719] The size of the manifest exceeds the maximum allowed. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsSettingNotRegistered)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_SETTING_NOT_REGISTERED)).c_str(), L"[0x371a] The setting is not registered. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsTransactionClosureIncomplete)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_TRANSACTION_CLOSURE_INCOMPLETE)).c_str(), L"[0x371b] One or more required members of the transaction are not present. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSmiPrimitiveInstallerFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SMI_PRIMITIVE_INSTALLER_FAILED)).c_str(), L"[0x371c] The SMI primitive installer failed during setup or servicing. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorGenericCommandFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_GENERIC_COMMAND_FAILED)).c_str(), L"[0x371d] A generic command executable returned a result that indicates failure. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsFileHashMissing)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_FILE_HASH_MISSING)).c_str(), L"[0x371e] A component is missing file verification information in its manifest. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorSxsDuplicateActivatableClass)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_SXS_DUPLICATE_ACTIVATABLE_CLASS)).c_str(), L"[0x371f] Two or more components referenced directly or indirectly by the application manifest have the same WinRT ActivatableClass IDs. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtInvalidChannelPath)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_INVALID_CHANNEL_PATH)).c_str(), L"[0x3a98] The specified channel path is invalid. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtInvalidQuery)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_INVALID_QUERY)).c_str(), L"[0x3a99] The specified query is invalid. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtPublisherMetadataNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_PUBLISHER_METADATA_NOT_FOUND)).c_str(), L"[0x3a9a] The publisher metadata cannot be found in the resource. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtEventTemplateNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_EVENT_TEMPLATE_NOT_FOUND)).c_str(), L"[0x3a9b] The template for an event definition cannot be found in the resource (error = %1). ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtInvalidPublisherName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_INVALID_PUBLISHER_NAME)).c_str(), L"[0x3a9c] The specified publisher name is invalid. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtInvalidEventData)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_INVALID_EVENT_DATA)).c_str(), L"[0x3a9d] The event data raised by the publisher is not compatible with the event template definition in the publisher's manifest. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtChannelNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_CHANNEL_NOT_FOUND)).c_str(), L"[0x3a9f] The specified channel could not be found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtMalformedXmlText)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_MALFORMED_XML_TEXT)).c_str(), L"[0x3aa0] The specified XML text was not well-formed. See Extended Error for more details. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtSubscriptionToDirectChannel)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_SUBSCRIPTION_TO_DIRECT_CHANNEL)).c_str(), L"[0x3aa1] The events for a direct channel go directly to a log file and cannot be subscribed to. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtConfigurationError)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_CONFIGURATION_ERROR)).c_str(), L"[0x3aa2] Configuration error. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtQueryResultStale)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_QUERY_RESULT_STALE)).c_str(), L"[0x3aa3] The query result is stale or invalid and must be recreated. This may be due to the log being cleared or rolling over after the query result was created. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtQueryResultInvalidPosition)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_QUERY_RESULT_INVALID_POSITION)).c_str(), L"[0x3aa4] The query result is currently at an invalid position. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtNonValidatingMsxml)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_NON_VALIDATING_MSXML)).c_str(), L"[0x3aa5] Registered MSXML doesn't support validation. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtFilterAlreadyscoped)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_FILTER_ALREADYSCOPED)).c_str(), L"[0x3aa6] An expression can only be followed by a change-of-scope operation if the expression evaluates to a node set and is not already part of another change-of-scope operation. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtFilterNoteltset)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_FILTER_NOTELTSET)).c_str(), L"[0x3aa7] Cannot perform a step operation from a term that does not represent an element set. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtFilterInvarg)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_FILTER_INVARG)).c_str(), L"[0x3aa8] Left-hand side arguments to binary operators must be either attributes, nodes or variables. Right-hand side arguments must be constants. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtFilterInvtest)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_FILTER_INVTEST)).c_str(), L"[0x3aa9] A step operation must involve a node test or, in the case of a predicate, an algebraic expression against which to test each node in the preceeding node set. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtFilterInvtype)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_FILTER_INVTYPE)).c_str(), L"[0x3aaa] This data type is currently unsupported. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtFilterParseerr)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_FILTER_PARSEERR)).c_str(), L"[0x3aab] A syntax error occurred at position %1!d! ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtFilterUnsupportedop)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_FILTER_UNSUPPORTEDOP)).c_str(), L"[0x3aac] This operator is unsupported by this implementation of the filter. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtFilterUnexpectedtoken)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_FILTER_UNEXPECTEDTOKEN)).c_str(), L"[0x3aad] An unexpected token was encountered. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtInvalidOperationOverEnabledDirectChannel)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_INVALID_OPERATION_OVER_ENABLED_DIRECT_CHANNEL)).c_str(), L"[0x3aae] The requested operation cannot be performed over an enabled direct channel. The channel must first be disabled. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtInvalidChannelPropertyValue)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_INVALID_CHANNEL_PROPERTY_VALUE)).c_str(), L"[0x3aaf] Channel property %1 contains an invalid value. The value has an invalid type, is outside of its valid range, cannot be changed, or is not supported by this type of channel. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtInvalidPublisherPropertyValue)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_INVALID_PUBLISHER_PROPERTY_VALUE)).c_str(), L"[0x3ab0] Publisher property %1 contains an invalid value. The value has an invalid type, is outside of its valid range, cannot be changed, or is not supported by this type of publisher. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtChannelCannotActivate)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_CHANNEL_CANNOT_ACTIVATE)).c_str(), L"[0x3ab1] The channel failed to activate. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtFilterTooComplex)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_FILTER_TOO_COMPLEX)).c_str(), L"[0x3ab2] The XPath expression exceeded the supported complexity. Simplify the expression or split it into multiple expressions. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtMessageNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_MESSAGE_NOT_FOUND)).c_str(), L"[0x3ab3] The message resource is present but the message was not found in the message table. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtMessageIdNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_MESSAGE_ID_NOT_FOUND)).c_str(), L"[0x3ab4] The message ID for the desired message could not be found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtUnresolvedValueInsert)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_UNRESOLVED_VALUE_INSERT)).c_str(), L"[0x3ab5] The substitution string for insert index (%1) could not be found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtUnresolvedParameterInsert)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_UNRESOLVED_PARAMETER_INSERT)).c_str(), L"[0x3ab6] The description string for parameter reference (%1) could not be found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtMaxInsertsReached)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_MAX_INSERTS_REACHED)).c_str(), L"[0x3ab7] The maximum number of replacements has been reached. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtEventDefinitionNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_EVENT_DEFINITION_NOT_FOUND)).c_str(), L"[0x3ab8] The event definition could not be found for event ID (%1). ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtMessageLocaleNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_MESSAGE_LOCALE_NOT_FOUND)).c_str(), L"[0x3ab9] The locale specific resource for the desired message is not present. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtVersionTooOld)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_VERSION_TOO_OLD)).c_str(), L"[0x3aba] The resource is too old and is not supported. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtVersionTooNew)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_VERSION_TOO_NEW)).c_str(), L"[0x3abb] The resource is too new and is not supported. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtCannotOpenChannelOfQuery)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_CANNOT_OPEN_CHANNEL_OF_QUERY)).c_str(), L"[0x3abc] The channel at index %1!d! of the query can't be opened. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtPublisherDisabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_PUBLISHER_DISABLED)).c_str(), L"[0x3abd] The publisher has been disabled and its resource is not available. This usually occurs when the publisher is in the process of being uninstalled or upgraded. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEvtFilterOutOfRange)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EVT_FILTER_OUT_OF_RANGE)).c_str(), L"[0x3abe] Attempted to create a numeric type that is outside of its valid range. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEcSubscriptionCannotActivate)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EC_SUBSCRIPTION_CANNOT_ACTIVATE)).c_str(), L"[0x3ae8] The subscription fails to activate. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEcLogDisabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EC_LOG_DISABLED)).c_str(), L"[0x3ae9] The log of the subscription is in disabled state, and can not be used to forward events to. The log must first be enabled before the subscription can be activated. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEcCircularForwarding)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EC_CIRCULAR_FORWARDING)).c_str(), L"[0x3aea] When forwarding events from local machine to itself, the query of the subscription can't contain target log of the subscription. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEcCredstoreFull)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EC_CREDSTORE_FULL)).c_str(), L"[0x3aeb] The credential store that is used to save credentials is full. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEcCredNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EC_CRED_NOT_FOUND)).c_str(), L"[0x3aec] The credential used by this subscription can't be found in credential store. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorEcNoActiveChannel)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_EC_NO_ACTIVE_CHANNEL)).c_str(), L"[0x3aed] No active channel is found for the query. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMuiFileNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MUI_FILE_NOT_FOUND)).c_str(), L"[0x3afc] The resource loader failed to find MUI file. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMuiInvalidFile)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MUI_INVALID_FILE)).c_str(), L"[0x3afd] The resource loader failed to load MUI file because the file fail to pass validation. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMuiInvalidRcConfig)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MUI_INVALID_RC_CONFIG)).c_str(), L"[0x3afe] The RC Manifest is corrupted with garbage data or unsupported version or missing required item. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMuiInvalidLocaleName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MUI_INVALID_LOCALE_NAME)).c_str(), L"[0x3aff] The RC Manifest has invalid culture name. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMuiInvalidUltimatefallbackName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MUI_INVALID_ULTIMATEFALLBACK_NAME)).c_str(), L"[0x3b00] The RC Manifest has invalid ultimatefallback name. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMuiFileNotLoaded)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MUI_FILE_NOT_LOADED)).c_str(), L"[0x3b01] The resource loader cache doesn't have loaded MUI entry. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorResourceEnumUserStop)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_RESOURCE_ENUM_USER_STOP)).c_str(), L"[0x3b02] User stopped resource enumeration. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMuiIntlsettingsUilangNotInstalled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MUI_INTLSETTINGS_UILANG_NOT_INSTALLED)).c_str(), L"[0x3b03] UI language installation failed. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMuiIntlsettingsInvalidLocaleName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MUI_INTLSETTINGS_INVALID_LOCALE_NAME)).c_str(), L"[0x3b04] Locale installation failed. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmRuntimeNoDefaultOrNeutralResource)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_RUNTIME_NO_DEFAULT_OR_NEUTRAL_RESOURCE)).c_str(), L"[0x3b06] A resource does not have default or neutral value. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmInvalidPriconfig)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_INVALID_PRICONFIG)).c_str(), L"[0x3b07] Invalid PRI config file. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmInvalidFileType)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_INVALID_FILE_TYPE)).c_str(), L"[0x3b08] Invalid file type. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmUnknownQualifier)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_UNKNOWN_QUALIFIER)).c_str(), L"[0x3b09] Unknown qualifier. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmInvalidQualifierValue)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_INVALID_QUALIFIER_VALUE)).c_str(), L"[0x3b0a] Invalid qualifier value. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmNoCandidate)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_NO_CANDIDATE)).c_str(), L"[0x3b0b] No Candidate found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmNoMatchOrDefaultCandidate)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_NO_MATCH_OR_DEFAULT_CANDIDATE)).c_str(), L"[0x3b0c] The ResourceMap or NamedResource has an item that does not have default or neutral resource.. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmResourceTypeMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_RESOURCE_TYPE_MISMATCH)).c_str(), L"[0x3b0d] Invalid ResourceCandidate type. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmDuplicateMapName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_DUPLICATE_MAP_NAME)).c_str(), L"[0x3b0e] Duplicate Resource Map. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmDuplicateEntry)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_DUPLICATE_ENTRY)).c_str(), L"[0x3b0f] Duplicate Entry. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmInvalidResourceIdentifier)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_INVALID_RESOURCE_IDENTIFIER)).c_str(), L"[0x3b10] Invalid Resource Identifier. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmFilepathTooLong)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_FILEPATH_TOO_LONG)).c_str(), L"[0x3b11] Filepath too long. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmUnsupportedDirectoryType)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_UNSUPPORTED_DIRECTORY_TYPE)).c_str(), L"[0x3b12] Unsupported directory type. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmInvalidPriFile)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_INVALID_PRI_FILE)).c_str(), L"[0x3b16] Invalid PRI File. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmNamedResourceNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_NAMED_RESOURCE_NOT_FOUND)).c_str(), L"[0x3b17] NamedResource Not Found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmMapNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_MAP_NOT_FOUND)).c_str(), L"[0x3b1f] ResourceMap Not Found. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmUnsupportedProfileType)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_UNSUPPORTED_PROFILE_TYPE)).c_str(), L"[0x3b20] Unsupported MRT profile type. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmInvalidQualifierOperator)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_INVALID_QUALIFIER_OPERATOR)).c_str(), L"[0x3b21] Invalid qualifier operator. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmIndeterminateQualifierValue)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_INDETERMINATE_QUALIFIER_VALUE)).c_str(), L"[0x3b22] Unable to determine qualifier value or qualifier value has not been set. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmAutomergeEnabled)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_AUTOMERGE_ENABLED)).c_str(), L"[0x3b23] Automerge is enabled in the PRI file. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmTooManyResources)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_TOO_MANY_RESOURCES)).c_str(), L"[0x3b24] Too many resources defined for package. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmUnsupportedFileTypeForMerge)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_UNSUPPORTED_FILE_TYPE_FOR_MERGE)).c_str(), L"[0x3b25] Resource File can not be used for merge operation. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmUnsupportedFileTypeForLoadUnloadPriFile)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_UNSUPPORTED_FILE_TYPE_FOR_LOAD_UNLOAD_PRI_FILE)).c_str(), L"[0x3b26] Load/UnloadPriFiles cannot be used with resource packages. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmNoCurrentViewOnThread)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_NO_CURRENT_VIEW_ON_THREAD)).c_str(), L"[0x3b27] Resource Contexts may not be created on threads that do not have a CoreWindow. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorDifferentProfileResourceManagerExist)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_DIFFERENT_PROFILE_RESOURCE_MANAGER_EXIST)).c_str(), L"[0x3b28] The singleton Resource Manager with different profile is already created. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorOperationNotAllowedFromSystemComponent)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_OPERATION_NOT_ALLOWED_FROM_SYSTEM_COMPONENT)).c_str(), L"[0x3b29] The system component cannot operate given API operation ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmDirectRefToNonDefaultResource)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_DIRECT_REF_TO_NON_DEFAULT_RESOURCE)).c_str(), L"[0x3b2a] The resource is a direct reference to a non-default resource candidate. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmGenerationCountMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_GENERATION_COUNT_MISMATCH)).c_str(), L"[0x3b2b] Resource Map has been re-generated and the query string is not valid anymore. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorPriMergeVersionMismatch)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRI_MERGE_VERSION_MISMATCH)).c_str(), L"[0x3b2c] The PRI files to be merged have incompatible versions. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorPriMergeMissingSchema)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRI_MERGE_MISSING_SCHEMA)).c_str(), L"[0x3b2d] The primary PRI files to be merged does not contain a schema. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorPriMergeLoadFileFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRI_MERGE_LOAD_FILE_FAILED)).c_str(), L"[0x3b2e] Unable to load one of the PRI files to be merged. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorPriMergeAddFileFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRI_MERGE_ADD_FILE_FAILED)).c_str(), L"[0x3b2f] Unable to add one of the PRI files to the merged file. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorPriMergeWriteFileFailed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRI_MERGE_WRITE_FILE_FAILED)).c_str(), L"[0x3b30] Unable to create the merged PRI file. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorPriMergeMultiplePackageFamiliesNotAllowed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRI_MERGE_MULTIPLE_PACKAGE_FAMILIES_NOT_ALLOWED)).c_str(), L"[0x3b31] Packages for a PRI file merge must all be from the same package family. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorPriMergeMultipleMainPackagesNotAllowed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRI_MERGE_MULTIPLE_MAIN_PACKAGES_NOT_ALLOWED)).c_str(), L"[0x3b32] Packages for a PRI file merge must not include multiple main packages. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorPriMergeBundlePackagesNotAllowed)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRI_MERGE_BUNDLE_PACKAGES_NOT_ALLOWED)).c_str(), L"[0x3b33] Packages for a PRI file merge must not include bundle packages. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorPriMergeMainPackageRequired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRI_MERGE_MAIN_PACKAGE_REQUIRED)).c_str(), L"[0x3b34] Packages for a PRI file merge must include one main package. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorPriMergeResourcePackageRequired)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRI_MERGE_RESOURCE_PACKAGE_REQUIRED)).c_str(), L"[0x3b35] Packages for a PRI file merge must include at least one resource package. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorPriMergeInvalidFileName)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_PRI_MERGE_INVALID_FILE_NAME)).c_str(), L"[0x3b36] Invalid name supplied for a canonical merged PRI file. ");
}

TEST(SystemErrorsTest2500, SystemMessageErrorMrmPackageNotFound)
{
	EXPECT_STREQ(Win32Error(static_cast<DWORD>(ERROR_MRM_PACKAGE_NOT_FOUND)).c_str(), L"[0x3b37] Unable to find the specified package. ");
}
