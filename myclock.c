#include <time.h>
#include <stdio.h>
#include "myclock.h"


void print_time()
{
	time_t nt = time(NULL);
	printf("Current time from Debian with make util: %s", ctime(&nt));
}
