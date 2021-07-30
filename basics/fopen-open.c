#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	int fd = open("/tmp/test.txt", O_RDWR);
	if (fd < 0)
	{
		perror("open failed");
	}
	else
	{
		printf("Opening file successful\n");
		close(fd);
	}
	
	FILE *fp = fopen("/tmp/test.txt", "r");
	if (fp)
	{
		printf("opening file successful\n");
		fclose(fp);
	}
	else
	{
		perror("open failed");
	}
	return 0;
}
