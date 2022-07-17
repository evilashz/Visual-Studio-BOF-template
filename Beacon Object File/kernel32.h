
//KERNEL32

WINBASEAPI BOOL WINAPI KERNEL32$WriteProcessMemory(HANDLE hProcess, LPVOID lpBaseAddress, LPCVOID lpBuffer, SIZE_T nSize, SIZE_T* lpNumberOfBytesWritten);
WINBASEAPI BOOL WINAPI KERNEL32$VirtualProtectEx(HANDLE hProcess, LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect);
WINBASEAPI BOOL WINAPI KERNEL32$UpdateProcThreadAttribute(LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList, DWORD dwFlags, DWORD_PTR Attribute, PVOID lpValue, SIZE_T cbSize, PVOID lpPreviousValue, PSIZE_T lpReturnSize);
WINBASEAPI BOOL WINAPI KERNEL32$UnmapViewOfFile(LPCVOID lpBaseAddress);
WINBASEAPI BOOL WINAPI KERNEL32$SystemTimeToTzSpecificLocalTime(CONST TIME_ZONE_INFORMATION* lpTimeZoneInformation, CONST SYSTEMTIME* lpUniversalTime, LPSYSTEMTIME lpLocalTime);
WINBASEAPI BOOL WINAPI KERNEL32$SystemTimeToFileTime(CONST SYSTEMTIME* lpSystemTime, LPFILETIME lpFileTime);
WINBASEAPI BOOL WINAPI KERNEL32$SetThreadContext(HANDLE hThread, CONST LPCONTEXT lpContext);
WINBASEAPI BOOL WINAPI KERNEL32$ReadProcessMemory(HANDLE hProcess, LPCVOID lpBaseAddress, LPVOID lpBuffer, SIZE_T nSize, SIZE_T* lpNumberOfBytesRead);
WINBASEAPI BOOL WINAPI KERNEL32$ReadFile(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped);
WINBASEAPI BOOL WINAPI KERNEL32$ProcessIdToSessionId(DWORD dwProcessId, DWORD* pSessionId);
WINBASEAPI BOOL WINAPI KERNEL32$Process32Next(HANDLE hSnapshot, LPPROCESSENTRY32 lppe);
WINBASEAPI BOOL WINAPI KERNEL32$Process32First(HANDLE hSnapshot, LPPROCESSENTRY32 lppe);
WINBASEAPI BOOL WINAPI KERNEL32$Module32Next(HANDLE hSnapshot, LPMODULEENTRY32 lpme);
WINBASEAPI BOOL WINAPI KERNEL32$Module32First(HANDLE hSnapshot, LPMODULEENTRY32 lpme);
WINBASEAPI BOOL WINAPI KERNEL32$InitializeProcThreadAttributeList(LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList, DWORD dwAttributeCount, DWORD dwFlags, PSIZE_T lpSize);
WINBASEAPI BOOL WINAPI KERNEL32$GlobalMemoryStatusEx(LPMEMORYSTATUSEX lpBuffer);
WINBASEAPI BOOL WINAPI KERNEL32$GetThreadContext(HANDLE hThread, LPCONTEXT lpContext);
WINBASEAPI BOOL WINAPI KERNEL32$GetExitCodeProcess(HANDLE hProcess, LPDWORD lpExitCode);
WINBASEAPI BOOL WINAPI KERNEL32$GetDiskFreeSpaceExA(LPCSTR lpDirectoryName, PULARGE_INTEGER lpFreeBytesAvailableToCaller, PULARGE_INTEGER lpTotalNumberOfBytes, PULARGE_INTEGER lpTotalNumberOfFreeBytes);
WINBASEAPI BOOL WINAPI KERNEL32$GetComputerNameExW(COMPUTER_NAME_FORMAT NameType, LPWSTR lpBuffer, LPDWORD nSize);
WINBASEAPI BOOL WINAPI KERNEL32$FreeLibrary(HMODULE hLibModule);
WINBASEAPI BOOL WINAPI KERNEL32$FindNextFileW(HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData);
WINBASEAPI BOOL WINAPI KERNEL32$FindClose(HANDLE hFindFile);
WINBASEAPI BOOL WINAPI KERNEL32$DeleteFileW(LPCWSTR lpFileName);
WINBASEAPI BOOL WINAPI KERNEL32$CreateProcessW(LPCWSTR lpApplicationName, LPWSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCWSTR lpCurrentDirectory, LPSTARTUPINFOW lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation);
WINBASEAPI BOOL WINAPI KERNEL32$CreateProcessA(LPCSTR lpApplicationName, LPSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCSTR lpCurrentDirectory, LPSTARTUPINFOA lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation);
WINBASEAPI BOOL WINAPI KERNEL32$ConvertFiberToThread(VOID);
WINBASEAPI BOOL WINAPI KERNEL32$CloseHandle(HANDLE hObject);
WINBASEAPI VOID WINAPI KERNEL32$SwitchToFiber(LPVOID lpFiber);
WINBASEAPI VOID WINAPI KERNEL32$Sleep(DWORD dwMilliseconds);
WINBASEAPI VOID WINAPI KERNEL32$SetLastError(DWORD dwErrCode);
WINBASEAPI VOID WINAPI KERNEL32$GetSystemTimeAsFileTime(LPFILETIME lpSystemTimeAsFileTime);
WINBASEAPI VOID WINAPI KERNEL32$GetSystemInfo(LPSYSTEM_INFO lpSystemInfo);
WINBASEAPI VOID WINAPI KERNEL32$GetLocalTime(LPSYSTEMTIME lpSystemTime);
WINBASEAPI VOID WINAPI KERNEL32$DeleteProcThreadAttributeList(LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList);
WINBASEAPI VOID WINAPI KERNEL32$DeleteFiber(LPVOID lpFiber);
WINBASEAPI void* WINAPI KERNEL32$VirtualAlloc(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect);
WINBASEAPI void* WINAPI KERNEL32$HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes);
WINBASEAPI ULONGLONG WINAPI KERNEL32$GetTickCount64(VOID);
WINBASEAPI SIZE_T WINAPI KERNEL32$VirtualQueryEx(HANDLE hProcess, LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, SIZE_T dwLength);
WINBASEAPI LPWSTR WINAPI KERNEL32$lstrcpynW(LPWSTR lpString1, LPCWSTR lpString2, int iMaxLength);
WINBASEAPI LPWSTR WINAPI KERNEL32$lstrcatW(LPWSTR lpString1, LPCWSTR lpString2);
WINBASEAPI LPVOID WINAPI KERNEL32$VirtualAllocEx(HANDLE hProcess, LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect);
WINBASEAPI LPVOID WINAPI KERNEL32$MapViewOfFile(HANDLE hFileMappingObject, DWORD dwDesiredAccess, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, SIZE_T dwNumberOfBytesToMap);
WINBASEAPI LPVOID WINAPI KERNEL32$HeapReAlloc(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes);
WINBASEAPI LPVOID WINAPI KERNEL32$CreateFiber(SIZE_T dwStackSize, LPFIBER_START_ROUTINE lpStartAddress, LPVOID lpParameter);
WINBASEAPI LPVOID WINAPI KERNEL32$ConvertThreadToFiber(LPVOID lpParameter);
WINBASEAPI LPTCH WINAPI KERNEL32$GetEnvironmentStrings();
WINBASEAPI int WINAPI KERNEL32$WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCCH lpDefaultChar, LPBOOL lpUsedDefaultChar);
WINBASEAPI int WINAPI Kernel32$WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCCH lpDefaultChar, LPBOOL lpUsedDefaultChar);
WINBASEAPI int WINAPI KERNEL32$VirtualFreeEx(HANDLE hProcess, LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType);
WINBASEAPI int WINAPI KERNEL32$VirtualFree(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType);
WINBASEAPI int WINAPI KERNEL32$MultiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCCH lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar);
WINBASEAPI int WINAPI KERNEL32$lstrlenW(LPCWSTR lpString);
WINBASEAPI int WINAPI KERNEL32$lstrlenA(LPCSTR lpString);
WINBASEAPI int WINAPI KERNEL32$lstrcmpW(LPCWSTR lpString1, LPCWSTR lpString2);
WINBASEAPI int WINAPI KERNEL32$lstrcmpiW(LPCWSTR lpString1, LPCWSTR lpString2);
WINBASEAPI int WINAPI KERNEL32$lstrcmpA(LPCSTR lpString1, LPCSTR lpString2);
WINBASEAPI int WINAPI KERNEL32$GetSystemDefaultLocaleName(LPCWSTR lpLocaleName, int cchLocaleName);
WINBASEAPI int WINAPI KERNEL32$GetDateFormatW(LCID Locale, DWORD dwFlags, CONST SYSTEMTIME* lpDate, LPCWSTR lpFormat, LPWSTR lpDateStr, int cchDate);
WINBASEAPI int WINAPI KERNEL32$FileTimeToSystemTime(CONST FILETIME* lpFileTime, LPSYSTEMTIME lpSystemTime);
WINBASEAPI int WINAPI KERNEL32$FileTimeToLocalFileTime(CONST FILETIME* lpFileTime, LPFILETIME lpLocalFileTime);
WINBASEAPI HMODULE WINAPI KERNEL32$LoadLibraryA(LPCSTR lpLibFileName);
WINBASEAPI HLOCAL WINAPI KERNEL32$LocalFree(HLOCAL);
WINBASEAPI HLOCAL WINAPI KERNEL32$LocalAlloc(UINT, SIZE_T);
WINBASEAPI HGLOBAL KERNEL32$GlobalFree(HGLOBAL hMem);
WINBASEAPI HGLOBAL KERNEL32$GlobalAlloc(UINT uFlags, SIZE_T dwBytes);
WINBASEAPI HANDLE WINAPI KERNEL32$OpenThread(DWORD dwDesiredAccess, BOOL bInheritHandle, DWORD dwThreadId);
WINBASEAPI HANDLE WINAPI KERNEL32$OpenProcess(DWORD dwDesiredAccess, BOOL bInheritHandle, DWORD dwProcessId);
WINBASEAPI HANDLE WINAPI KERNEL32$GetProcessHeap();
WINBASEAPI HANDLE WINAPI KERNEL32$GetCurrentProcess(VOID);
WINBASEAPI HANDLE WINAPI KERNEL32$FindFirstFileW(LPCWSTR lpFileName, LPWIN32_FIND_DATAW lpFindFileData);
WINBASEAPI HANDLE WINAPI KERNEL32$CreateToolhelp32Snapshot(DWORD dwFlags, DWORD th32ProcessID);
WINBASEAPI HANDLE WINAPI KERNEL32$CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId);
WINBASEAPI HANDLE WINAPI KERNEL32$CreateRemoteThread(HANDLE hProcess, LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId);
WINBASEAPI HANDLE WINAPI KERNEL32$CreateFileW(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
WINBASEAPI HANDLE WINAPI KERNEL32$CreateFileMappingA(HANDLE hFile, LPSECURITY_ATTRIBUTES lpFileMappingAttributes, DWORD flProtect, DWORD dwMaximumSizeHigh, DWORD dwMaximumSizeLow, LPCSTR lpName);
WINBASEAPI HANDLE WINAPI KERNEL32$CreateFileA(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
WINBASEAPI HANDLE WINAPI KERNEL32$CreateFileA(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
WINBASEAPI FARPROC WINAPI KERNEL32$GetProcAddress(HMODULE hModule, LPCSTR lpProcName);
WINBASEAPI DWORD WINAPI KERNEL32$WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds);
WINBASEAPI DWORD WINAPI KERNEL32$SuspendThread(HANDLE hThread);
WINBASEAPI DWORD WINAPI KERNEL32$ResumeThread(HANDLE hThread);
WINBASEAPI DWORD WINAPI KERNEL32$GetTickCount(VOID);
WINBASEAPI DWORD WINAPI KERNEL32$GetTempPathW(DWORD nBufferLength, LPWSTR lpBuffer);
WINBASEAPI DWORD WINAPI KERNEL32$GetTempFileNameW(LPCWSTR lpPathName, LPCWSTR lpPrefixString, UINT uUnique, LPWSTR lpTempFileName);
WINBASEAPI DWORD WINAPI KERNEL32$GetProcessIdOfThread(HANDLE Thread);
WINBASEAPI DWORD WINAPI KERNEL32$GetLastError(VOID);
WINBASEAPI DWORD WINAPI KERNEL32$GetFullPathNameW(LPCWSTR lpFileName, DWORD nBufferLength, LPWSTR lpBuffer, LPWSTR* lpFilePart);
WINBASEAPI DWORD WINAPI KERNEL32$GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh);
WINBASEAPI DWORD WINAPI KERNEL32$GetFileAttributesW(LPCWSTR lpFileName);
WINBASEAPI DWORD WINAPI KERNEL32$GetCurrentProcessId(VOID);
WINBASEAPI DWORD WINAPI KERNEL32$GetCurrentDirectoryW(DWORD nBufferLength, LPWSTR lpBuffer);
WINBASEAPI DWORD WINAPI KERNEL32$FormatMessageA(DWORD dwFlags, LPCVOID lpSource, DWORD dwMessageId, DWORD dwLanguageId, LPSTR lpBuffer, DWORD nSize, va_list* Arguments);
WINBASEAPI DWORD WINAPI KERNEL32$ExpandEnvironmentStringsW(LPCWSTR lpSrc, LPWSTR lpDst, DWORD nSize);
WINBASEAPI DWORD WINAPI KERNEL32$ExpandEnvironmentStringsA(LPCSTR lpSrc, LPSTR lpDst, DWORD nSize);
WINBASEAPI BOOL WINAPI KERNEL32$ReadProcessMemory(HANDLE hProcess, LPCVOID lpBaseAddress, LPVOID lpBuffer, SIZE_T nSize, SIZE_T* lpNumberOfBytesRead);
WINBASEAPI BOOL WINAPI KERNEL32$HeapFree(HANDLE, DWORD, PVOID);
WINBASEAPI BOOL WINAPI KERNEL32$FreeEnvironmentStringsA(LPSTR);
DECLSPEC_IMPORT WINBASEAPI int WINAPI KERNEL32$lstrlenA(LPCSTR);
DECLSPEC_IMPORT WINBASEAPI BOOL WINAPI KERNEL32$FreeEnvironmentStringsA(LPSTR);
DECLSPEC_IMPORT void* WINAPI KERNEL32$VirtualAlloc(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect);
DECLSPEC_IMPORT void* WINAPI KERNEL32$HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes);
DECLSPEC_IMPORT VOID WINAPI KERNEL32$SwitchToFiber(LPVOID lpFiber);
DECLSPEC_IMPORT VOID WINAPI KERNEL32$Sleep(DWORD dwMilliseconds);
DECLSPEC_IMPORT VOID WINAPI KERNEL32$SetLastError(DWORD dwErrCode);
DECLSPEC_IMPORT VOID WINAPI KERNEL32$GetSystemTimeAsFileTime(LPFILETIME lpSystemTimeAsFileTime);
DECLSPEC_IMPORT VOID WINAPI KERNEL32$GetLocalTime(LPSYSTEMTIME lpSystemTime);
DECLSPEC_IMPORT void WINAPI KERNEL32$ExitProcess(UINT uExitCode);
DECLSPEC_IMPORT VOID WINAPI KERNEL32$DeleteFiber(LPVOID lpFiber);
DECLSPEC_IMPORT ULONGLONG WINAPI KERNEL32$GetTickCount64(VOID);
DECLSPEC_IMPORT UINT WINAPI KERNEL32$GetWindowsDirectoryW(LPWSTR lpBuffer, UINT uSize);
DECLSPEC_IMPORT LPWSTR WINAPI KERNEL32$lstrcpynW(LPWSTR lpString1, LPCWSTR lpString2, int iMaxLength);
DECLSPEC_IMPORT LPWSTR WINAPI KERNEL32$lstrcatW(LPWSTR lpString1, LPCWSTR lpString2);
DECLSPEC_IMPORT LPVOID WINAPI KERNEL32$HeapReAlloc(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes);
DECLSPEC_IMPORT LPVOID WINAPI KERNEL32$CreateFiber(SIZE_T dwStackSize, LPFIBER_START_ROUTINE lpStartAddress, LPVOID lpParameter);
DECLSPEC_IMPORT LPVOID WINAPI KERNEL32$ConvertThreadToFiber(LPVOID lpParameter);
DECLSPEC_IMPORT LPTCH WINAPI KERNEL32$GetEnvironmentStrings();
DECLSPEC_IMPORT LCID WINAPI KERNEL32$LocaleNameToLCID(LPCWSTR lpName, DWORD dwFlags);
DECLSPEC_IMPORT int WINAPI Kernel32$WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCCH lpDefaultChar, LPBOOL lpUsedDefaultChar);
DECLSPEC_IMPORT int WINAPI KERNEL32$VirtualFree(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType);
DECLSPEC_IMPORT int WINAPI KERNEL32$lstrlenW(LPCWSTR lpString);
DECLSPEC_IMPORT int WINAPI KERNEL32$GetSystemDefaultLocaleName(LPCWSTR lpLocaleName, int cchLocaleName);
DECLSPEC_IMPORT int WINAPI KERNEL32$GetLocaleInfoEx(LPCWSTR lpLocaleName, LCTYPE LCType, LPWSTR lpLCData, int cchData);
DECLSPEC_IMPORT int WINAPI KERNEL32$GetDateFormatW(LCID Locale, DWORD dwFlags, CONST SYSTEMTIME* lpDate, LPCWSTR lpFormat, LPWSTR lpDateStr, int cchDate);
DECLSPEC_IMPORT int WINAPI KERNEL32$GetDateFormatEx(LPCWSTR lpLocaleName, DWORD dwFlags, const SYSTEMTIME* lpData, LPCWSTR lpFormat, LPWSTR lpDateStr, int cchDate, LPCWSTR lpCalendar);
DECLSPEC_IMPORT int WINAPI KERNEL32$GetDateFormatEx(LPCWSTR lpLocaleName, DWORD dwFlags, const SYSTEMTIME* lpData, LPCWSTR lpFormat, LPWSTR lpDateStr, int cchDate, LPCWSTR lpCalendar);
DECLSPEC_IMPORT int WINAPI KERNEL32$FileTimeToSystemTime(CONST FILETIME* lpFileTime, LPSYSTEMTIME lpSystemTime);
DECLSPEC_IMPORT int WINAPI KERNEL32$FileTimeToLocalFileTime(CONST FILETIME* lpFileTime, LPFILETIME lpLocalFileTime);
DECLSPEC_IMPORT HMODULE WINAPI KERNEL32$LoadLibraryA(LPCSTR lpLibFileName);
DECLSPEC_IMPORT HMODULE WINAPI KERNEL32$GetModuleHandleA(LPCSTR lpModuleName);
DECLSPEC_IMPORT HLOCAL WINAPI KERNEL32$LocalFree(HLOCAL);
DECLSPEC_IMPORT HLOCAL WINAPI KERNEL32$LocalFree(HLOCAL);
DECLSPEC_IMPORT HLOCAL WINAPI KERNEL32$LocalAlloc(UINT, SIZE_T);
DECLSPEC_IMPORT HLOCAL WINAPI KERNEL32$LocalAlloc(UINT, SIZE_T);
DECLSPEC_IMPORT HGLOBAL KERNEL32$GlobalFree(HGLOBAL hMem);
DECLSPEC_IMPORT HGLOBAL KERNEL32$GlobalAlloc(UINT uFlags, SIZE_T dwBytes);
DECLSPEC_IMPORT HANDLE WINAPI KERNEL32$OpenProcess(DWORD dwDesiredAccess, BOOL bInheritHandle, DWORD dwProcessId);
DECLSPEC_IMPORT HANDLE WINAPI KERNEL32$GetProcessHeap();
DECLSPEC_IMPORT HANDLE WINAPI KERNEL32$GetCurrentProcess(VOID);
DECLSPEC_IMPORT HANDLE WINAPI KERNEL32$FindFirstFileW(LPCWSTR lpFileName, LPWIN32_FIND_DATAW lpFindFileData);
DECLSPEC_IMPORT HANDLE WINAPI KERNEL32$CreateToolhelp32Snapshot(DWORD dwFlags, DWORD th32ProcessID);
DECLSPEC_IMPORT HANDLE WINAPI KERNEL32$CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId);
DECLSPEC_IMPORT HANDLE WINAPI KERNEL32$CreateFileW(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
DECLSPEC_IMPORT FARPROC WINAPI KERNEL32$GetProcAddress(HMODULE hModule, LPCSTR lpProcName);
DECLSPEC_IMPORT DWORD WINAPI KERNEL32$WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds);
DECLSPEC_IMPORT DWORD WINAPI KERNEL32$GetTickCount(VOID);
DECLSPEC_IMPORT DWORD WINAPI KERNEL32$GetModuleFileNameW(HMODULE hModule, LPWSTR lpFilename, DWORD nSize);
DECLSPEC_IMPORT DWORD WINAPI KERNEL32$GetLastError(VOID);
DECLSPEC_IMPORT DWORD WINAPI KERNEL32$GetFullPathNameW(LPCWSTR lpFileName, DWORD nBufferLength, LPWSTR lpBuffer, LPWSTR* lpFilePart);
DECLSPEC_IMPORT DWORD WINAPI KERNEL32$GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh);
DECLSPEC_IMPORT DWORD WINAPI KERNEL32$GetFileAttributesW(LPCWSTR lpFileName);
DECLSPEC_IMPORT DWORD WINAPI KERNEL32$GetCurrentThreadId(VOID);
DECLSPEC_IMPORT DWORD WINAPI KERNEL32$GetCurrentDirectoryW(DWORD nBufferLength, LPWSTR lpBuffer);
DECLSPEC_IMPORT DWORD WINAPI KERNEL32$FormatMessageA(DWORD dwFlags, LPCVOID lpSource, DWORD dwMessageId, DWORD dwLanguageId, LPSTR lpBuffer, DWORD nSize, va_list* Arguments);
DECLSPEC_IMPORT DWORD WINAPI KERNEL32$ExpandEnvironmentStringsW(LPCWSTR lpSrc, LPWSTR lpDst, DWORD nSize);
DECLSPEC_IMPORT DWORD KERNEL32$GetCurrentProcessId(VOID);
DECLSPEC_IMPORT DECLSPEC_IMPORT int WINAPI KERNEL32$lstrlenA(LPCSTR);
DECLSPEC_IMPORT DECLSPEC_IMPORT BOOL WINAPI KERNEL32$FreeEnvironmentStringsA(LPSTR);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$WriteProcessMemory(HANDLE hProcess, LPVOID lpBaseAddress, LPCVOID lpBuffer, SIZE_T nSize, SIZE_T* lpNumberOfBytesWritten);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$WriteFile(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$VirtualProtectEx(HANDLE hProcess, LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$SystemTimeToTzSpecificLocalTime(CONST TIME_ZONE_INFORMATION* lpTimeZoneInformation, CONST SYSTEMTIME* lpUniversalTime, LPSYSTEMTIME lpLocalTime);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$SystemTimeToFileTime(CONST SYSTEMTIME* lpSystemTime, LPFILETIME lpFileTime);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$ReadFile(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$Process32Next(HANDLE hSnapshot, LPPROCESSENTRY32 lppe);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$Process32First(HANDLE hSnapshot, LPPROCESSENTRY32 lppe);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$Module32Next(HANDLE hSnapshot, LPMODULEENTRY32 lpme);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$Module32First(HANDLE hSnapshot, LPMODULEENTRY32 lpme);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$HeapFree(HANDLE, DWORD, PVOID);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$GlobalMemoryStatusEx(LPMEMORYSTATUSEX lpBuffer);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$GetDiskFreeSpaceExA(LPCSTR lpDirectoryName, PULARGE_INTEGER lpFreeBytesAvailableToCaller, PULARGE_INTEGER lpTotalNumberOfBytes, PULARGE_INTEGER lpTotalNumberOfFreeBytes);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$GetComputerNameExW(COMPUTER_NAME_FORMAT NameType, LPWSTR lpBuffer, LPDWORD nSize);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$FreeLibrary(HMODULE hLibModule);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$FindNextFileW(HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$FindClose(HANDLE hFindFile);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$DeleteFileW(LPCWSTR lpFileName);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$ConvertFiberToThread(VOID);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$CloseHandle(HANDLE hObject);
#define intZeroMemory(addr,size) MSVCRT$memset((addr),0,size)
#define intRealloc(ptr, size) (ptr) ? KERNEL32$HeapReAlloc(KERNEL32$GetProcessHeap(), HEAP_ZERO_MEMORY, ptr, size) : KERNEL32$HeapAlloc(KERNEL32$GetProcessHeap(), HEAP_ZERO_MEMORY, size)
#define intFree(addr) KERNEL32$HeapFree(KERNEL32$GetProcessHeap(), 0, addr)
#define intAlloc(size) KERNEL32$HeapAlloc(KERNEL32$GetProcessHeap(), HEAP_ZERO_MEMORY, size)