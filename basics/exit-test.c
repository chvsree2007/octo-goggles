#include<stdio.h>
#include<stdlib.h> /* for exit() */
#include<unistd.h>/* for _exit() */
int main()
{
	int exit_code =0;
	printf("Terminate\n");
	exit(exit_code); /* Prints above statement*/
	//_exit(exit_code); /*Doesn't print above statement*/
	return 0;
}
