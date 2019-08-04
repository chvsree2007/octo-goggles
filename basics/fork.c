#include<stdio.h>
#include<stdlib.h> /*for exit()*/
#include<unistd.h> /* fork(), close(), _exit()*/
#include<sys/wait.h> /* for wait()*/
int main()
{
	pid_t pid;
	pid = fork();
	if(pid ==0){
		close(1); /* closes stdout*/
		printf("From child-Hello world\n");
		exit(0); /*Terminates the program after this - like connection
		termination and buffer cleaning etc.*/
		//_exit(0);/* Performs no cleaning*/
	}else if(pid>0){
		wait(NULL); /*or wait(0) means wait until a state change in 
			      the child process*/
		printf("From Parent-hello world\n");
	}
	return 0;
}
