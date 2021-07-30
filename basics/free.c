#include <stdio.h>
#include <stdlib.h>
int main()
{
	free(NULL);
	unsigned a;
	printf("size of a:%d\n", sizeof(a));
	return 0;
}
