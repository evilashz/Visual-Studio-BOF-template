#include "bofdefs.h"
#include <stdarg.h>

#ifndef BOF

/* data API */
typedef struct {
	char* original; /* the original buffer [so we can free it] */
	char* buffer;   /* current pointer into our buffer */
	int    length;   /* remaining length of data */
	int    size;     /* total size of this buffer */
} datap;

/* Output Functions */
#define CALLBACK_OUTPUT      0x0
#define CALLBACK_OUTPUT_OEM  0x1e
#define CALLBACK_ERROR       0x0d
#define CALLBACK_OUTPUT_UTF8 0x20

void BeaconPrintf(int type, char* fmt, ...) {

	va_list args;
	va_start(args, fmt);

	vprintf(fmt, args);

	va_end(args);
}

#endif // !BOF