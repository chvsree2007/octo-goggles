#include <stdio.h>
#include <fcntl.h>
int main()
{
	int fd = open("hello.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);
	write(fd, "hello", 5);
	lseek(fd, 1000, SEEK_END);
	write(fd, "bye", 3);
	close(fd);return 0;
}
