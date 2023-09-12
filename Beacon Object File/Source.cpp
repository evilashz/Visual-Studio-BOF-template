#include "bofdefs.h"

extern "C" {

void go(char* buff, int len) {

#ifdef BOF

    DFR_LOCAL(NETAPI32, DsGetDcNameA);
    DFR_LOCAL(NETAPI32, NetApiBufferFree);
    DFR_LOCAL(KERNEL32, WinExec);
    //add ...

#endif

    PDOMAIN_CONTROLLER_INFOA pdcInfo;
    DWORD dwRet = DsGetDcNameA(NULL, NULL, NULL, NULL, 0, &pdcInfo);
    if (ERROR_SUCCESS == dwRet) {
        BeaconPrintf(CALLBACK_OUTPUT, "%s", pdcInfo->DomainName);
    }

    NetApiBufferFree(pdcInfo);
}

}
#ifndef BOF

void main(int argc, char* argv[]) {

    go(NULL, 0);
}

#endif