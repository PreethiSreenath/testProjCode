#include "stdio.h"
#include "time.h"

int main()
{
	printf("Hello world from proc1\n");
	printf("Hello from newbranch1\n");
	printf("Data in seconds : %ld\n",time(NULL));
	return 1;
}
