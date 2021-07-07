#include <time.h>
#include <stdio.h>

void print_time();

int main()
{
	print_time();
	return 0;
}

void print_time()
{
	time_t nt = time(NULL);
	printf("%s", ctime(&nt));
}
