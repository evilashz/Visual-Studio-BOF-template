#pragma once
#include <windows.h>
#include <stdio.h>
#include <dsgetdc.h>
#include <lm.h>

#ifndef BOF

#include "beacon-debug.h"
#pragma comment(lib, "netapi32.lib")

#endif


#ifdef BOF

extern "C" {

#include "beacon.h"

}

#pragma region error_handling
#define print_error(msg, hr) _print_error(__FUNCTION__, __LINE__, msg, hr)
BOOL _print_error(const char* func, int line, char* msg, HRESULT hr) {
#ifdef BOF
	BeaconPrintf(CALLBACK_ERROR, "(%s at %d): %s 0x%08lx", func, line, msg, hr);
#else
	printf("[-] (%s at %d): %s 0x%08lx", func, line, msg, hr);
#endif // BOF

	return FALSE;
}
#pragma endregion

#pragma region point_handling
#define print_point(msg, hr) _print_point(__FUNCTION__, __LINE__, msg, hr)
BOOL _print_point(const char* func, int line, char* msg, PVOID hr) {
#ifdef BOF
	BeaconPrintf(CALLBACK_OUTPUT, "(%s at %d): %s 0x%p", func, line, msg, hr);
#else
	printf("[-] (%s at %d): %s 0x%p", func, line, msg, hr);
#endif // BOF

	return FALSE;
}
#pragma endregion

#pragma region good_msg
#define print_msg(msg) _print_msg(__FUNCTION__, __LINE__, msg)
BOOL _print_msg(const char* func, int line, char* msg) {
#ifdef BOF
	BeaconPrintf(CALLBACK_OUTPUT, "(%s at %d): %s", func, line, msg);
#else
	printf("[+] (%s at %d): %s", func, line, msg);
#endif // BOF

	return FALSE;
}
#pragma endregion

#endif


//Method 1
#define DFR(module, function) \
DECLSPEC_IMPORT decltype(function) module##$##function;

//DFR(NETAPI32, DsGetDcNameA)
//#define DsGetDcNameA NETAPI32$DsGetDcNameA
//DFR(NETAPI32, NetApiBufferFree)
//#define NetApiBufferFree NETAPI32$NetApiBufferFree


//Method 2
#define DFR_LOCAL(module, function) \
DECLSPEC_IMPORT decltype(function) module##$##function; \
decltype(module##$##function) *##function = module##$##function;