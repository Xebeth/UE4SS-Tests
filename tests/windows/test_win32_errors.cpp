#include <format>
#include <windows.h>
#include <gtest/gtest.h>

#include <Helpers/String.hpp>
#include <Helpers/SysError.hpp>

using namespace RC;

TEST(Win32SystemErrorsTest, Win32ErrorCategory)
{
    EXPECT_STREQ(SysError(0UL).category().c_str(), L"system");
}

TEST(Win32SystemErrorsTest, BogusErrorFailure)
{
    constexpr auto errorCode = 0xfefefefeUL;

    EXPECT_STREQ(SysError(errorCode).c_str(), L"[0xfefefefe] unknown error");
}

TEST(Win32SystemErrorsTest, BogusHResultFailure)
{
    constexpr HRESULT errorCode = 0x0000fefeL;
    const auto expectedMessage = L"Failed to format the error message: HRESULT 0xfefe is not a WIN32 error code";

    EXPECT_STREQ(SysError(errorCode).c_str(), expectedMessage);
}

TEST(Win32SystemErrorsTest, CorrectCategory)
{
    const auto sysError = SysError(static_cast<DWORD>(ERROR_SUCCESS), std::system_category());

    EXPECT_STREQ(sysError.c_str(), L"[0x0] The operation completed successfully.");
}

TEST(Win32SystemErrorsTest, WrongCategory)
{
    const auto sysError = SysError(static_cast<DWORD>(ERROR_SUCCESS), std::generic_category());

    EXPECT_STRNE(sysError.c_str(), L"[0x0] The operation completed successfully.");
}

TEST(Win32SystemErrorsTest, AssignErrorCode)
{
    auto sysError = SysError(static_cast<DWORD>(ERROR_SUCCESS));

    EXPECT_STREQ(sysError.c_str(), L"[0x0] The operation completed successfully.");

    sysError.assign(static_cast<DWORD>(ERROR_FILE_NOT_FOUND));

    EXPECT_STREQ(sysError.c_str(), L"[0x2] The system cannot find the file specified.");
}

TEST(Win32SystemErrorsTest, HResultMessageAccessDenied)
{
    EXPECT_STREQ(SysError(E_ACCESSDENIED).c_str(), L"[0x80070005] Access is denied.");
}

TEST(Win32SystemErrorsTest, HResultMessageInvalidHandle)
{
    EXPECT_STREQ(SysError(E_HANDLE).c_str(), L"[0x80070006] The handle is invalid.");
}

TEST(Win32SystemErrorsTest, HResultMessageInvalidArgument)
{
    EXPECT_STREQ(SysError(E_INVALIDARG).c_str(), L"[0x80070057] The parameter is incorrect.");
}

TEST(Win32SystemErrorsTest, HResultMessageOutOfMemory)
{
    EXPECT_STREQ(SysError(E_OUTOFMEMORY).c_str(), L"[0x8007000e] Not enough memory resources are available to complete this operation.");
}

TEST(Win32SystemErrorsTest, AssignHResult)
{
    auto sysError = SysError(E_ACCESSDENIED);

    EXPECT_STREQ(sysError.c_str(), L"[0x80070005] Access is denied.");

    sysError.assign(E_INVALIDARG);

    EXPECT_STREQ(sysError.c_str(), L"[0x80070057] The parameter is incorrect.");
}
