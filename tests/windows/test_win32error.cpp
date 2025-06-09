#include <format>
#include <windows.h>
#include <gtest/gtest.h>

#include <Helpers/String.hpp>
#include <Helpers/Win32Error.hpp>

using namespace RC;

TEST(SystemErrorsTest, BogusErrorFailure)
{
    constexpr auto errorCode = 0xfefefefeUL;
    const auto formatErrorText = std::wstring(L"The system cannot find message text for message number 0x%1 in the message file for %2. \n");
    const auto expectedMessage = std::format(L"Failed to format the error message for code 0x{:x}: error {}", errorCode, formatErrorText);

    EXPECT_STREQ(Win32Error(errorCode).c_str(), expectedMessage.c_str());
}

TEST(SystemErrorsTest, BogusHResultFailure)
{
    constexpr auto errorCode = 0x0000fefeL;
    const auto expectedMessage = L"Failed to format the error message: HRESULT 0xfefe is not a WIN32 error code\n";

    EXPECT_STREQ(Win32Error(errorCode).c_str(), expectedMessage);
}

TEST(SystemErrorsTest, AssignErrorCode)
{
    auto win32Error = Win32Error(static_cast<DWORD>(ERROR_SUCCESS));

    EXPECT_STREQ(win32Error.c_str(), L"[0x0] The operation completed successfully. ");

    win32Error.assign(static_cast<DWORD>(ERROR_FILE_NOT_FOUND), MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT));

    EXPECT_STREQ(win32Error.c_str(), L"[0x2] The system cannot find the file specified. ");
}

TEST(SystemErrorsTest, HResultMessageAccessDenied)
{
    EXPECT_STREQ(Win32Error(E_ACCESSDENIED).c_str(), L"[0x80070005] Access is denied. ");
}

TEST(SystemErrorsTest, HResultMessageInvalidHandle)
{
    EXPECT_STREQ(Win32Error(E_HANDLE).c_str(), L"[0x80070006] The handle is invalid. ");
}

TEST(SystemErrorsTest, HResultMessageInvalidArgument)
{
    EXPECT_STREQ(Win32Error(E_INVALIDARG).c_str(), L"[0x80070057] The parameter is incorrect. ");
}

TEST(SystemErrorsTest, HResultMessageOutOfMemory)
{
    EXPECT_STREQ(Win32Error(E_OUTOFMEMORY).c_str(), L"[0x8007000e] Not enough memory resources are available to complete this operation. ");
}

TEST(SystemErrorsTest, AssignHResult)
{
    auto win32Error = Win32Error(E_ACCESSDENIED);

    EXPECT_STREQ(win32Error.c_str(), L"[0x80070005] Access is denied. ");

    win32Error.assign(E_INVALIDARG, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT));

    EXPECT_STREQ(win32Error.c_str(), L"[0x80070057] The parameter is incorrect. ");
}
