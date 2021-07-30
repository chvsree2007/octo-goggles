#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>
int main(void)
{
	int fd, flags, ret;
	char template[] = "/tmp/testXXXXXX";
	fd = mkstemp(template);
	if (fd == -1)
	{
		perror("mkstemp");
		exit(1);
	}
	switch (fork())
	{
		case -1: perror("fork");
			exit(1);

		case 0:
			flags = fcntl(fd, F_GETFL);
			if (flags == -1) {
				perror("fcntl – F_GETFL");
				exit(1);
			}
			flags |= O_APPEND;
			if (fcntl(fd, F_SETFL, flags) == -1) {
				perror("fcntl – F_SETFL");
				exit(1);
			}
			break;
		default:
			wait(NULL);
			flags = fcntl(fd, F_GETFL);
			printf("O_APPEND flag in parent is: %s\n", (flags & O_APPEND) ? "on" : "off"); break;
	}
	return 0;
}

