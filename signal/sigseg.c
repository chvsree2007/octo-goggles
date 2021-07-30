#include <stdio.h>
#include <signal.h>
int main()
{
	int *ptr = NULL;
	//signal(SIGSEGV, SIG_IGN);
	*ptr = 10; return 0;
}
