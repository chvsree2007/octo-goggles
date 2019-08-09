/*We cannot change the signal disposition of 
 * SIGKILL so the sighandler() is invalid here*/
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void sighandler(int signum)
{
	printf("Hello World\n");
}

int main()
{
  if (signal(SIGKILL, sighandler) == SIG_ERR) {
	  printf("Failed to register signal handler\n");
	  exit(1);
  }
  raise(SIGKILL);
  while(1);
}
