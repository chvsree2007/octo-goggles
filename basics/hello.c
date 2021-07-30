#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char **argv)
{
	printf("Hello, world.\n");
	printf("Hello, world.w/o new line");
	fork();
	printf("Hello world\n");
}
