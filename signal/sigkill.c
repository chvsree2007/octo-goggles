#include <signal.h>
#include <stdio.h>
void sighandler(int signum)
{
	printf("Signal Handler of SIGKILL\n");
}
int main()
{
	signal(SIGKILL, sighandler);
	raise(SIGKILL);
	while (1);
}
