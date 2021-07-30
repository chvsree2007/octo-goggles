#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void sighandler(int signum)
{
	write(1, "sighandler", 10);
}

int main(int argc, char *argv[])
{
	signal(SIGUSR1, sighandler);
	sleep(20);
	printf("After Sleep\n");
	return 0;
}
