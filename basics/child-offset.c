#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
int main()
{
	pid_t pid;
	int fd = open("hello.txt", O_WRONLY | O_CREAT, 0644);
	if (fd < 0)
	{
		perror("open failed");
		exit(EXIT_FAILURE);
	}
	pid = fork();
	if (pid == 0)
	{
		write(fd, "hello", sizeof("hello"));
		close(fd);
		exit(EXIT_SUCCESS);
	}
	else if (pid > 0)
	{
		wait(NULL);
		printf("file offset:%ld\n", lseek(fd, 0, SEEK_CUR));
		exit(EXIT_SUCCESS);
	}
	return 0;
}
