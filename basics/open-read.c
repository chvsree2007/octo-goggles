#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv)
{
	char buf[12];
	int fd = open("file.txt", O_RDONLY);
	unlink("file.txt");
	read(fd, buf, sizeof(buf));
	printf("buf:%s", buf);
	close(fd);
	return 0;
}
