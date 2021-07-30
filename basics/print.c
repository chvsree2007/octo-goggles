#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	pid_t pid;
	pid = fork();
	if (pid == 0)
	{
		close(1);
		_exit(0);
	}
	else if (pid > 0)
	{
		wait(NULL);
		printf("hello world\n");
	}
	return 0;
}
