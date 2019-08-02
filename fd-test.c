#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int fd;
	close(1);
	fd=open("hello.txt",O_WRONLY|O_CREAT,0666);
	if(fd < 0){
		perror("open");
	}else{
		printf("Hello World!!\n");
	}
	return 0;
}
