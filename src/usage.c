#include <stdio.h>
#include <stdlib.h>

#include "usage.h"

void usage(int exit_status) {
	printf("Usage: %s [cmd] [arguments]\n", PROGRAM_NAME);
	exit(exit_status);
}
