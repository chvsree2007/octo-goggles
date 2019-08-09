#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
	int fd = open("hello.txt", O_WRONLY|O_CREAT, 0444);
	if (fd < 0)
		perror("failed to create file");
	else {
		printf("File created successfully\n");
		write(fd, "hello", sizeof("hello"));
		perror("write");
		close(fd);
	}
	return 0;
}

