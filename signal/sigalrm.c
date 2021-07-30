#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/signal.h>
void alarm_handler(int signum)
{
printf("%s:PID:%d\n", __func__, getpid());
}
int main()
{
	pid_t pid;
	printf("Process PID:%d\n", getpid());
	//set up alarm handler signal(SIGALRM, alarm_handler);
	//schedule alarm for 2 second alarm(2);
	pid = fork();
	if (pid == 0)
	{
		printf("Hi, I am Child with PID:%d\n", getpid());
	}
	//wait for signal pause();
	return 0;
}
