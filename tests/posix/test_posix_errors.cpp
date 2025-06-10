#include <format>
#include <cerrno>
#include <gtest/gtest.h>

#undef _WIN32  // NOLINT(clang-diagnostic-reserved-macro-identifier)

#include <Helpers/String.hpp>
#include <Helpers/SysError.hpp>

using namespace RC;

TEST(PosixSystemErrorsTest, ErrorCategory)
{
    EXPECT_STREQ(SysError(0UL).category().c_str(), L"generic");
}

TEST(PosixSystemErrorsTest, BogusErrorFailure)
{
    constexpr auto errorCode = 0xfefefefeUL;

    EXPECT_STREQ(SysError(errorCode).c_str(), L"[0xfefefefe] unknown error");
}

TEST(PosixSystemErrorsTest, CorrectCategory)
{
    const auto sysError = SysError(EPERM, std::generic_category());

    EXPECT_STREQ(sysError.c_str(), L"[0x1] operation not permitted");
}

TEST(PosixSystemErrorsTest, WrongCategory)
{
    const auto sysError = SysError(EPERM, std::system_category());

    EXPECT_STRNE(sysError.c_str(), L"[0x1] operation not permitted");
}

TEST(PosixSystemErrorsTest, AssignErrorCode)
{
    auto sysError = SysError(EPERM);

    EXPECT_STREQ(sysError.c_str(), L"[0x1] operation not permitted");

    sysError.assign(ENOENT);

    EXPECT_STREQ(sysError.c_str(), L"[0x2] no such file or directory");
}

TEST(PosixSystemErrorsTest, PosixEperm)
{
    EXPECT_STREQ(SysError(EPERM).c_str(), L"[0x1] operation not permitted");
}

TEST(PosixSystemErrorsTest, PosixEnoent)
{
    EXPECT_STREQ(SysError(ENOENT).c_str(), L"[0x2] no such file or directory");
}

TEST(PosixSystemErrorsTest, PosixEsrch)
{
    EXPECT_STREQ(SysError(ESRCH).c_str(), L"[0x3] no such process");
}

TEST(PosixSystemErrorsTest, PosixEintr)
{
    EXPECT_STREQ(SysError(EINTR).c_str(), L"[0x4] interrupted");
}

TEST(PosixSystemErrorsTest, PosixEio)
{
    EXPECT_STREQ(SysError(EIO).c_str(), L"[0x5] io error");
}

TEST(PosixSystemErrorsTest, PosixEnxio)
{
    EXPECT_STREQ(SysError(ENXIO).c_str(), L"[0x6] no such device or address");
}

TEST(PosixSystemErrorsTest, PosixE2big)
{
    EXPECT_STREQ(SysError(E2BIG).c_str(), L"[0x7] argument list too long");
}

TEST(PosixSystemErrorsTest, PosixEnoexec)
{
    EXPECT_STREQ(SysError(ENOEXEC).c_str(), L"[0x8] executable format error");
}

TEST(PosixSystemErrorsTest, PosixEbadf)
{
    EXPECT_STREQ(SysError(EBADF).c_str(), L"[0x9] bad file descriptor");
}

TEST(PosixSystemErrorsTest, PosixEchild)
{
    EXPECT_STREQ(SysError(ECHILD).c_str(), L"[0xa] no child process");
}

TEST(PosixSystemErrorsTest, PosixEagain)
{
    EXPECT_STREQ(SysError(EAGAIN).c_str(), L"[0xb] resource unavailable try again");
}

TEST(PosixSystemErrorsTest, PosixEnomem)
{
    EXPECT_STREQ(SysError(ENOMEM).c_str(), L"[0xc] not enough memory");
}

TEST(PosixSystemErrorsTest, PosixEacces)
{
    EXPECT_STREQ(SysError(EACCES).c_str(), L"[0xd] permission denied");
}

TEST(PosixSystemErrorsTest, PosixEfault)
{
    EXPECT_STREQ(SysError(EFAULT).c_str(), L"[0xe] bad address");
}

TEST(PosixSystemErrorsTest, PosixEbusy)
{
    EXPECT_STREQ(SysError(EBUSY).c_str(), L"[0x10] device or resource busy");
}

TEST(PosixSystemErrorsTest, PosixEexist)
{
    EXPECT_STREQ(SysError(EEXIST).c_str(), L"[0x11] file exists");
}

TEST(PosixSystemErrorsTest, PosixExdev)
{
    EXPECT_STREQ(SysError(EXDEV).c_str(), L"[0x12] cross device link");
}

TEST(PosixSystemErrorsTest, PosixEnodev)
{
    EXPECT_STREQ(SysError(ENODEV).c_str(), L"[0x13] no such device");
}

TEST(PosixSystemErrorsTest, PosixEnotdir)
{
    EXPECT_STREQ(SysError(ENOTDIR).c_str(), L"[0x14] not a directory");
}

TEST(PosixSystemErrorsTest, PosixEisdir)
{
    EXPECT_STREQ(SysError(EISDIR).c_str(), L"[0x15] is a directory");
}

TEST(PosixSystemErrorsTest, PosixEnfile)
{
    EXPECT_STREQ(SysError(ENFILE).c_str(), L"[0x17] too many files open in system");
}

TEST(PosixSystemErrorsTest, PosixEmfile)
{
    EXPECT_STREQ(SysError(EMFILE).c_str(), L"[0x18] too many files open");
}

TEST(PosixSystemErrorsTest, PosixEnotty)
{
    EXPECT_STREQ(SysError(ENOTTY).c_str(), L"[0x19] inappropriate io control operation");
}

TEST(PosixSystemErrorsTest, PosixEfbig)
{
    EXPECT_STREQ(SysError(EFBIG).c_str(), L"[0x1b] file too large");
}

TEST(PosixSystemErrorsTest, PosixEnospc)
{
    EXPECT_STREQ(SysError(ENOSPC).c_str(), L"[0x1c] no space on device");
}

TEST(PosixSystemErrorsTest, PosixEspipe)
{
    EXPECT_STREQ(SysError(ESPIPE).c_str(), L"[0x1d] invalid seek");
}

TEST(PosixSystemErrorsTest, PosixErofs)
{
    EXPECT_STREQ(SysError(EROFS).c_str(), L"[0x1e] read only file system");
}

TEST(PosixSystemErrorsTest, PosixEmlink)
{
    EXPECT_STREQ(SysError(EMLINK).c_str(), L"[0x1f] too many links");
}

TEST(PosixSystemErrorsTest, PosixEpipe)
{
    EXPECT_STREQ(SysError(EPIPE).c_str(), L"[0x20] broken pipe");
}

TEST(PosixSystemErrorsTest, PosixEdom)
{
    EXPECT_STREQ(SysError(EDOM).c_str(), L"[0x21] argument out of domain");
}

TEST(PosixSystemErrorsTest, PosixEdeadlk)
{
    EXPECT_STREQ(SysError(EDEADLK).c_str(), L"[0x24] resource deadlock would occur");
}

TEST(PosixSystemErrorsTest, PosixEnametoolong)
{
    EXPECT_STREQ(SysError(ENAMETOOLONG).c_str(), L"[0x26] filename too long");
}

TEST(PosixSystemErrorsTest, PosixEnolck)
{
    EXPECT_STREQ(SysError(ENOLCK).c_str(), L"[0x27] no lock available");
}

TEST(PosixSystemErrorsTest, PosixEnosys)
{
    EXPECT_STREQ(SysError(ENOSYS).c_str(), L"[0x28] function not supported");
}

TEST(PosixSystemErrorsTest, PosixEnotempty)
{
    EXPECT_STREQ(SysError(ENOTEMPTY).c_str(), L"[0x29] directory not empty");
}

TEST(PosixSystemErrorsTest, PosixEinval)
{
    EXPECT_STREQ(SysError(EINVAL).c_str(), L"[0x16] invalid argument");
}

TEST(PosixSystemErrorsTest, PosixErange)
{
    EXPECT_STREQ(SysError(ERANGE).c_str(), L"[0x22] result out of range");
}

TEST(PosixSystemErrorsTest, PosixEilseq)
{
    EXPECT_STREQ(SysError(EILSEQ).c_str(), L"[0x2a] illegal byte sequence");
}

TEST(PosixSystemErrorsTest, PosixStruncate)
{
    EXPECT_STREQ(SysError(STRUNCATE).c_str(), L"[0x50] unknown error");
}

TEST(PosixSystemErrorsTest, PosixEaddrinuse)
{
    EXPECT_STREQ(SysError(EADDRINUSE).c_str(), L"[0x64] address in use");
}

TEST(PosixSystemErrorsTest, PosixEaddrnotavail)
{
    EXPECT_STREQ(SysError(EADDRNOTAVAIL).c_str(), L"[0x65] address not available");
}

TEST(PosixSystemErrorsTest, PosixEafnosupport)
{
    EXPECT_STREQ(SysError(EAFNOSUPPORT).c_str(), L"[0x66] address family not supported");
}

TEST(PosixSystemErrorsTest, PosixEalready)
{
    EXPECT_STREQ(SysError(EALREADY).c_str(), L"[0x67] connection already in progress");
}

TEST(PosixSystemErrorsTest, PosixEbadmsg)
{
    EXPECT_STREQ(SysError(EBADMSG).c_str(), L"[0x68] bad message");
}

TEST(PosixSystemErrorsTest, PosixEcanceled)
{
    EXPECT_STREQ(SysError(ECANCELED).c_str(), L"[0x69] operation canceled");
}

TEST(PosixSystemErrorsTest, PosixEconnaborted)
{
    EXPECT_STREQ(SysError(ECONNABORTED).c_str(), L"[0x6a] connection aborted");
}

TEST(PosixSystemErrorsTest, PosixEconnrefused)
{
    EXPECT_STREQ(SysError(ECONNREFUSED).c_str(), L"[0x6b] connection refused");
}

TEST(PosixSystemErrorsTest, PosixEconnreset)
{
    EXPECT_STREQ(SysError(ECONNRESET).c_str(), L"[0x6c] connection reset");
}

TEST(PosixSystemErrorsTest, PosixEdestaddrreq)
{
    EXPECT_STREQ(SysError(EDESTADDRREQ).c_str(), L"[0x6d] destination address required");
}

TEST(PosixSystemErrorsTest, PosixEhostunreach)
{
    EXPECT_STREQ(SysError(EHOSTUNREACH).c_str(), L"[0x6e] host unreachable");
}

TEST(PosixSystemErrorsTest, PosixEidrm)
{
    EXPECT_STREQ(SysError(EIDRM).c_str(), L"[0x6f] identifier removed");
}

TEST(PosixSystemErrorsTest, PosixEinprogress)
{
    EXPECT_STREQ(SysError(EINPROGRESS).c_str(), L"[0x70] operation in progress");
}

TEST(PosixSystemErrorsTest, PosixEisconn)
{
    EXPECT_STREQ(SysError(EISCONN).c_str(), L"[0x71] already connected");
}

TEST(PosixSystemErrorsTest, PosixEloop)
{
    EXPECT_STREQ(SysError(ELOOP).c_str(), L"[0x72] too many symbolic link levels");
}

TEST(PosixSystemErrorsTest, PosixEmsgsize)
{
    EXPECT_STREQ(SysError(EMSGSIZE).c_str(), L"[0x73] message size");
}

TEST(PosixSystemErrorsTest, PosixEnetdown)
{
    EXPECT_STREQ(SysError(ENETDOWN).c_str(), L"[0x74] network down");
}

TEST(PosixSystemErrorsTest, PosixEnetreset)
{
    EXPECT_STREQ(SysError(ENETRESET).c_str(), L"[0x75] network reset");
}

TEST(PosixSystemErrorsTest, PosixEnetunreach)
{
    EXPECT_STREQ(SysError(ENETUNREACH).c_str(), L"[0x76] network unreachable");
}

TEST(PosixSystemErrorsTest, PosixEnobufs)
{
    EXPECT_STREQ(SysError(ENOBUFS).c_str(), L"[0x77] no buffer space");
}

TEST(PosixSystemErrorsTest, PosixEnodata)
{
    EXPECT_STREQ(SysError(ENODATA).c_str(), L"[0x78] no message available");
}

TEST(PosixSystemErrorsTest, PosixEnolink)
{
    EXPECT_STREQ(SysError(ENOLINK).c_str(), L"[0x79] no link");
}

TEST(PosixSystemErrorsTest, PosixEnomsg)
{
    EXPECT_STREQ(SysError(ENOMSG).c_str(), L"[0x7a] no message");
}

TEST(PosixSystemErrorsTest, PosixEnoprotoopt)
{
    EXPECT_STREQ(SysError(ENOPROTOOPT).c_str(), L"[0x7b] no protocol option");
}

TEST(PosixSystemErrorsTest, PosixEnosr)
{
    EXPECT_STREQ(SysError(ENOSR).c_str(), L"[0x7c] no stream resources");
}

TEST(PosixSystemErrorsTest, PosixEnostr)
{
    EXPECT_STREQ(SysError(ENOSTR).c_str(), L"[0x7d] not a stream");
}

TEST(PosixSystemErrorsTest, PosixEnotconn)
{
    EXPECT_STREQ(SysError(ENOTCONN).c_str(), L"[0x7e] not connected");
}

TEST(PosixSystemErrorsTest, PosixEnotrecoverable)
{
    EXPECT_STREQ(SysError(ENOTRECOVERABLE).c_str(), L"[0x7f] state not recoverable");
}

TEST(PosixSystemErrorsTest, PosixEnotsock)
{
    EXPECT_STREQ(SysError(ENOTSOCK).c_str(), L"[0x80] not a socket");
}

TEST(PosixSystemErrorsTest, PosixEnotsup)
{
    EXPECT_STREQ(SysError(ENOTSUP).c_str(), L"[0x81] not supported");
}

TEST(PosixSystemErrorsTest, PosixEopnotsupp)
{
    EXPECT_STREQ(SysError(EOPNOTSUPP).c_str(), L"[0x82] operation not supported");
}

TEST(PosixSystemErrorsTest, PosixEother)
{
    EXPECT_STREQ(SysError(EOTHER).c_str(), L"[0x83] unknown error");
}

TEST(PosixSystemErrorsTest, PosixEoverflow)
{
    EXPECT_STREQ(SysError(EOVERFLOW).c_str(), L"[0x84] value too large");
}

TEST(PosixSystemErrorsTest, PosixEownerdead)
{
    EXPECT_STREQ(SysError(EOWNERDEAD).c_str(), L"[0x85] owner dead");
}

TEST(PosixSystemErrorsTest, PosixEproto)
{
    EXPECT_STREQ(SysError(EPROTO).c_str(), L"[0x86] protocol error");
}

TEST(PosixSystemErrorsTest, PosixEprotonosupport)
{
    EXPECT_STREQ(SysError(EPROTONOSUPPORT).c_str(), L"[0x87] protocol not supported");
}

TEST(PosixSystemErrorsTest, PosixEprototype)
{
    EXPECT_STREQ(SysError(EPROTOTYPE).c_str(), L"[0x88] wrong protocol type");
}

TEST(PosixSystemErrorsTest, PosixEtime)
{
    EXPECT_STREQ(SysError(ETIME).c_str(), L"[0x89] stream timeout");
}

TEST(PosixSystemErrorsTest, PosixEtimedout)
{
    EXPECT_STREQ(SysError(ETIMEDOUT).c_str(), L"[0x8a] timed out");
}

TEST(PosixSystemErrorsTest, PosixEtxtbsy)
{
    EXPECT_STREQ(SysError(ETXTBSY).c_str(), L"[0x8b] text file busy");
}

TEST(PosixSystemErrorsTest, PosixEwouldblock)
{
    EXPECT_STREQ(SysError(EWOULDBLOCK).c_str(), L"[0x8c] operation would block");
}
