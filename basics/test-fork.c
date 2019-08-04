#include<stdio.h>
#include<unistd.h>
int main(int argc, char **argv)
{
	printf("Hello world...");
	//printf("Hello world...\n");
	//fflush(stdout);
	fork();
	fork();
	fork();
	return 0;
}
