#include <stdio.h>
#include <unistd.h>
int main()
{
	close(1);
	printf("hello world\n");
	return 0;
}
