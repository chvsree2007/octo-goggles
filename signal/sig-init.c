#include<stdio.h>
#include<signal.h>
#include<string.h>
#include<unistd.h>
volatile int flag =0;
char buf[8] ="Hello!!";
void signal_handler(int num)
{
	flag =1;
	signal(SIGINT,signal_handler);
	//write(1,buf,10); /*Allowed to use - but printf() is not allowed*/
}
int main()
{
	/*
	int *ptr=NULL;
	signal(SIGSEGV,SIG_IGN);
	*ptr = 10;*/
	signal(SIGINT,signal_handler);
	while(1){
		if(flag == 1){
			printf("Hello! Received Signal\n");
			flag =0;
		}
	}
	return 0;
}
