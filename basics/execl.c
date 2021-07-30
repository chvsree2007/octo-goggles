#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
	printf("Hello Linux\n");
	execl(argv[0], argv[0], NULL);
}
