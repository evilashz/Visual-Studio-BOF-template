#include "bofdefs.h"
#include <stdarg.h>

#ifndef BOF

void BeaconPrintf(int type, char* fmt, ...) {

    va_list args;
    va_start(args, fmt);

    vprintf(fmt, args);

    va_end(args);
}

#endif // !BOF

//and so on...