#pragma once
/* some code and/or ideas are from trustedsec SA Github repo -- thankyou trustedsec! */
#include <windows.h>
#include <process.h>
#include <winternl.h>
#include <imagehlp.h>
#include <iphlpapi.h>
#include <stdio.h>
#include <tlhelp32.h>
#include <windns.h>
//#include <dbghelp.h>
#include <winldap.h>
#include <winnetwk.h>
#include <wtsapi32.h>
#include <shlwapi.h>

//struct define
#include "kernel32.h"
#include "mcvcrt.h"
#include "advapi32.h"
#include "user32.h"
#include "netapi32.h"
#include "wldap32.h"
#include "ws2_32.h"
#include "others.h"

#ifdef BOF

#ifdef __cplusplus
extern "C" {
#endif

#include "beacon.h"

void go(char* buff, int len);

#ifdef __cplusplus
}
#endif


/* helper macros */

#define malloc(size) KERNEL32$HeapAlloc(KERNEL32$GetProcessHeap(), HEAP_ZERO_MEMORY, size)	/* trustedsec */
#define free(addr) KERNEL32$HeapFree(KERNEL32$GetProcessHeap(), 0, (LPVOID)addr)	/* trustedsec */
#define ZeroMemory(address, size) memset(address, 0, size);


/* ----------------------------------- DEFINITIONS ------------------------------------------*/

/* KERNEL32 */
#define HeapFree				KERNEL32$HeapFree
#define HeapAlloc				KERNEL32$HeapAlloc
#define HeapReAlloc				KERNEL32$HeapReAlloc
#define OpenProcess				KERNEL32$OpenProcess
#define VirtualQueryEx			KERNEL32$VirtualQueryEx
#define GetProcessId			KERNEL32$GetProcessId
#define	ReadProcessMemory		KERNEL32$ReadProcessMemory
#define GetCurrentProcess		KERNEL32$GetCurrentProcess
#define Sleep					KERNEL32$Sleep
#define GetProcessHeap			KERNEL32$GetProcessHeap
#define CreateFileA				KERNEL32$CreateFileA
#define SetFilePointer			KERNEL32$SetFilePointer
#define SetFilePointerEx		KERNEL32$SetFilePointerEx
#define WriteFile				KERNEL32$WriteFile
#define GetFileSizeEx			KERNEL32$GetFileSizeEx
#define GetLastError			KERNEL32$GetLastError 
#define RemoveDirectoryA		KERNEL32$RemoveDirectoryA
#define CreateDirectoryA		KERNEL32$CreateDirectoryA
#define MoveFileA				KERNEL32$MoveFileA
#define lstrcpyA				Kernel32$lstrcpyA
#define	lstrcatA				Kernel32$lstrcatA
#define	lstrcpynA				Kernel32$lstrcpynA
#define lstrlenW				KERNEL32$lstrlenW
#define lstrcpyW				KERNEL32$lstrcpyW
#define lstrlenW				KERNEL32$lstrlenW
#define lstrcpyW				KERNEL32$lstrcpyW
#define IsProcessorFeaturePresent	KERNEL32$IsProcessorFeaturePresent
#define GetSystemInfo			KERNEL32$GetSystemInfo

/* ADVAPI32 */
#define CreateProcessWithLogonW ADVAPI32$CreateProcessWithLogonW
#define LookupPrivilegeValueW	ADVAPI32$LookupPrivilegeValueW
#define RegOpenKeyExA			ADVAPI32$RegOpenKeyExA
#define RegDeleteTreeA			ADVAPI32$RegDeleteTreeA
#define RegCreateKeyExA			ADVAPI32$RegCreateKeyExA
#define RegSetValueExA			ADVAPI32$RegSetValueExA
#define GetUserNameW			ADVAPI32$GetUserNameW

/* MSVCRT */
#define memcpy					MSVCRT$memcpy
#define memset					MSVCRT$memset
#define strchr					MSVCRT$strchr
#define strcat_s				MSVCRT$strcat_s
#define strcpy_s				MSVCRT$strcpy_s
#define strncpy_s				MSVCRT$strncpy_s
#define snprintf				MSVCRT$_snprintf	/*beacon can't find snprintf without the preceeding '_' */
#define wcslen					MSVCRT$wcslen
#define vsnprintf				MSVCRT$vsnprintf
#define strcmp					MSVCRT$strcmp
#define sprintf					MSVCRT$sprintf
#define srand					MSVCRT$srand
#define rand					MSVCRT$rand
#define time					MSVCRT$time

/* COM */
#define	CLSIDFromString			OLE32$CLSIDFromString
#define	CoCreateInstance		OLE32$CoCreateInstance
#define CoInitializeEx			OLE32$CoInitializeEx
#define CoUninitialize			OLE32$CoUninitialize
#define IIDFromString			OLE32$IIDFromString
#define CoInitialize			OLE32$CoInitialize
#define CoCreateInstanceEx		OLE32$CoCreateInstanceEx
#define SysAllocString			OleAut32$SysAllocString
#define	VariantInit				OLEAUT32$VariantInit
#define CoInitialize			OLE32$CoInitialize
#define CoInitializeSecurity	OLE32$CoInitializeSecurity

/* RPC */
#define RpcStringFreeA			Rpcrt4$RpcStringFreeA 
#define UuidCreate				Rpcrt4$UuidCreate
#define UuidToStringA			Rpcrt4$UuidToStringA


/* filesystem */
#define GetFileVersionInfoSizeW	VERSION$GetFileVersionInfoSizeW
#define GetFileVersionInfoW		VERSION$GetFileVersionInfoW
#define	VerQueryValueW			VERSION$VerQueryValueW

/* directory */
#define PathIsDirectoryA		SHLWAPI$PathIsDirectoryA
#define PathFileExistsA			SHLWAPI$PathFileExistsA

#else

#endif
