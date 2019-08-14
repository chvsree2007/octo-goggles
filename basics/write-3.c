#include<stdio.h>
#include<unistd.h>
int main()
{
	char *buf ="Hello World!";
	printf("buf is - %s size - %lu\n",buf,sizeof(buf));
	write(0,buf,sizeof(buf));
	return 0;
}
