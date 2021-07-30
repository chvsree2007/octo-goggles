#include <stdio.h>
#include <fcntl.h> //For open()
#include <unistd.h> //For close()

int main(int argc, char *argv[])
{
	int fd;
	fd = open(".", O_RDWR | O_DIRECTORY);
	if (fd < 0)
	{
		perror("open -");
	}
	else
	{
		printf("Opening directory successful\n");
		close(fd);
	}
	return 0;
}
